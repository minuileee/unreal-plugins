// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_LocalPlayerSubsystem.h"
#include "RH_IntegrationSettings.h"
#include "RallyHereIntegrationModule.h"
#include "OnlineSubsystemUtils.h"
#include "RH_GameInstanceSubsystem.h"
#include "Engine/LocalPlayer.h"
#include "Engine/GameInstance.h"
#include "Misc/EngineVersion.h"
#include "Net/OnlineEngineInterface.h"
#include "Analytics.h"
#include "Interfaces/IAnalyticsProvider.h"
#include "Interfaces/IPluginManager.h"
#include "Engine/GameViewportClient.h"
#include "HAL/PlatformMemoryHelpers.h"

#include "RH_LocalPlayerLoginSubsystem.h"
#include "RH_LocalPlayerPresenceSubsystem.h"
#include "RH_LocalPlayerSessionSubsystem.h"
#include "RH_AdSubsystem.h"
#include "RH_FriendSubsystem.h"
#include "RH_ConfigSubsystem.h"
#include "RH_EntitlementSubsystem.h"
#include "RH_PurgeSubsystem.h"
#include "RH_PlayerNotifications.h"
#include "RH_Events.h"


void URH_LocalPlayerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

    AuthContext = MakeShared<RallyHereAPI::FAuthContext>(RH_APIs::GetAPIs().GetAuth());
	AuthContext->OnLoginComplete().AddUObject(this, &URH_LocalPlayerSubsystem::OnUserLoggedIn);
	AuthContext->OnLogout().AddUObject(this, &URH_LocalPlayerSubsystem::OnUserLoggedOut);
	AuthContext->OnLoginUserChanged().AddUObject(this, &URH_LocalPlayerSubsystem::OnUserChanged);

	const auto* Settings = GetDefault<URH_IntegrationSettings>();

    // Create Subsystems
	// Create all the subsystem objects first, so they can refer to each other during initialization
    LoginSubsystem = AddSubsystemPlugin<URH_LocalPlayerLoginSubsystem>(Settings->LocalPlayerLoginSubsystemClass);
	AdSubsystem = AddSubsystemPlugin<URH_AdSubsystem>(Settings->AdSubsystemClass);
    FriendSubsystem = AddSubsystemPlugin<URH_FriendSubsystem>(Settings->FriendSubsystemClass);
	SessionSubsystem = AddSubsystemPlugin<URH_LocalPlayerSessionSubsystem>(Settings->LocalPlayerSessionSubsystemClass);
	PresenceSubsystem = AddSubsystemPlugin<URH_LocalPlayerPresenceSubsystem>(Settings->LocalPlayerPresenceSubsystemClass);
	PurgeSubsystem = AddSubsystemPlugin<URH_PurgeSubsystem>(Settings->PurgeSubsystemClass);
	EntitlementSubsystem = AddSubsystemPlugin<URH_EntitlementSubsystem>(Settings->EntitlementSubsystemClass);

	if (Settings->bLocalPlayerSubsystemSandboxing)
	{
		SandboxedPlayerInfoSubsystem = AddSandboxedSubsystemPlugin<URH_PlayerInfoSubsystem>(Settings->PlayerInfoSubsystemClass);
	}

	// Initialize Subsystems
	for (auto Plugin : SubsystemPlugins)
	{
		Plugin->Initialize();
	}
	for (auto Plugin : SandboxedSubsystemPlugins)
	{
		Plugin->Initialize();
	}

	// get the default configured provider
	CreateAnalyticsProvider();

	if (AnalyticsProvider.IsValid())
	{
		AnalyticsStartTime = FDateTime::UtcNow();
		AnalyticsProvider->StartSession();

		// emit the correlation start event
		{
			RHStandardEvents::FCorrelationStartEvent CorrelationStartEvent;

			CorrelationStartEvent.PlatformName = FPlatformProperties::IniPlatformName();
			CorrelationStartEvent.ClientBuildVersion = FApp::GetBuildVersion();
			CorrelationStartEvent.EngineVersion = FEngineVersion::Current().ToString(EVersionComponent::Patch);

			auto RHIntegrationPlugin = IPluginManager::Get().FindPlugin(TEXT("RallyHereIntegration"));
			if (RHIntegrationPlugin != nullptr)
			{
				const auto& Descriptor = RHIntegrationPlugin->GetDescriptor();
				CorrelationStartEvent.IntegrationPluginVersion = Descriptor.VersionName;
			}

			auto pGameInstance = GetLocalPlayer()->GetGameInstance();
			if (pGameInstance != nullptr)
			{
				auto pGISubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
				if (pGISubsystem != nullptr)
				{
					const auto& TimeCache = pGISubsystem->GetConfigSubsystem()->GetServerTimeCache();
					FDateTime ServerTime;
					if (TimeCache.GetServerTime(ServerTime))
					{
						CorrelationStartEvent.ServerTimestamp = ServerTime.ToIso8601();;
					}
				}
			}
			CorrelationStartEvent.ClientTimestamp = FRH_ServerTimeCache::GetLocalTime().ToIso8601();
			CorrelationStartEvent.CommandLineArg = FCommandLine::Get();
			CorrelationStartEvent.IsEditor = GEngine != nullptr ? GEngine->IsEditor() : GIsEditor;
			CorrelationStartEvent.Mode = FGenericPlatformMisc::GetEngineMode();


			CorrelationStartEvent.EmitTo(AnalyticsProvider.Get());
		}

		// emit a client device event
		{
			RHStandardEvents::FClientDeviceEvent ClientDeviceEvent;

			ClientDeviceEvent.CpuType = FPlatformMisc::GetCPUBrand();
			ClientDeviceEvent.CpuCores = FPlatformMisc::NumberOfCores();
			ClientDeviceEvent.GpuType = FPlatformMisc::GetPrimaryGPUBrand();

			auto pGameInstance = GetLocalPlayer()->GetGameInstance();
			if (pGameInstance != nullptr)
			{
				const auto GameViewportClient = pGameInstance->GetGameViewportClient();
				if (GameViewportClient != nullptr)
				{
					FVector2D ViewportSize;
					GameViewportClient->GetViewportSize(ViewportSize);
					ClientDeviceEvent.ScreenHeight = ViewportSize.Y;
					ClientDeviceEvent.ScreenWidth = ViewportSize.X;
				}
			}

			{
				FPlatformMemoryStats MemoryStats = PlatformMemoryHelpers::GetFrameMemoryStats();
				ClientDeviceEvent.RamTotal = MemoryStats.TotalPhysicalGB;
				ClientDeviceEvent.RamAvailable = ((float)MemoryStats.AvailablePhysical) / (1024.f * 1024.f * 1024.f);
			}

			//ClientDeviceEvent.Ip;
			ClientDeviceEvent.DeviceType = FPlatformProperties::PlatformName();

			ClientDeviceEvent.EmitTo(AnalyticsProvider.Get());

		}
	}
}

void URH_LocalPlayerSubsystem::Deinitialize()
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	if (AnalyticsProvider.IsValid())
	{
		// emit a correlation end event
		{
			RHStandardEvents::FCorrelationEndEvent CorrelationEndEvent;

			CorrelationEndEvent.Reason = TEXT("Shutdown");

			if (AnalyticsStartTime.IsSet())
			{
				CorrelationEndEvent.DurationSeconds = (FDateTime::UtcNow() - AnalyticsStartTime.GetValue()).GetTotalSeconds();
			}
			AnalyticsStartTime.Reset();

			CorrelationEndEvent.EmitTo(AnalyticsProvider.Get());
		}

		AnalyticsProvider->EndSession();
	}

	// Deinitialize Subsystems
	for (auto Plugin : SandboxedSubsystemPlugins)
	{
		if (Plugin != nullptr)
		{
			Plugin->Deinitialize();
		}
	}
	SandboxedSubsystemPlugins.Reset();
	for (auto Plugin : SubsystemPlugins)
	{
		if (Plugin != nullptr)
		{
			Plugin->Deinitialize();
		}
	}
	SubsystemPlugins.Reset();

	// Abandon references so that the subsystems can be GC'd
	LoginSubsystem = nullptr;
	AdSubsystem = nullptr;
	FriendSubsystem = nullptr;
	SessionSubsystem = nullptr;
	PresenceSubsystem = nullptr;
	PurgeSubsystem = nullptr;
	EntitlementSubsystem = nullptr;

	if (AuthContext.IsValid())
	{
		AuthContext->OnLoginUserChanged().RemoveAll(this);
	}
    AuthContext.Reset();
}

bool URH_LocalPlayerSubsystem::IsLoggedIn() const
{
	return AuthContext.IsValid() && AuthContext->IsLoggedIn();
}

void URH_LocalPlayerSubsystem::OnUserLoggedIn(bool bSuccess)
{
	// handle initial push of successful login to game instance here, as many things bind to OnUserChanged and we are not assured to be first in the order
	auto pGameInstance = GetLocalPlayer()->GetGameInstance();
	if (pGameInstance != nullptr)
	{
		auto pGISubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
		if (pGISubsystem != nullptr)
		{
			if (bSuccess)
			{
				// if we are now logged in, update game instance to use our auth context
				pGISubsystem->SetAuthContext(GetAuthContext());
			}
			else
			{
				// if we are no longer logged in, see if there is someone logged in to use for the game instance level auth context
				for (const auto* Player : pGameInstance->GetLocalPlayers())
				{
					auto* pPlayerSubsystem = Player->GetSubsystem<URH_LocalPlayerSubsystem>();
					if (pPlayerSubsystem != nullptr && pPlayerSubsystem->IsLoggedIn())
					{
						pGISubsystem->SetAuthContext(pPlayerSubsystem->GetAuthContext());
						break;
					}
				}
			}
		}
	}

}

void URH_LocalPlayerSubsystem::OnUserLoggedOut()
{
	// trigger login as failure, to push logout to game instance
	OnUserLoggedIn(false);

	// trigger use change, to handle user delta resposne
	OnUserChanged();
}

void URH_LocalPlayerSubsystem::OnUserChanged()
{
	FGuid OldUuid;
	URH_PlayerInfo* OldPlayerInfo = PlayerInfoCache.Get();
	// clear notification watch on last player info
	if (PlayerInfoCache.IsValid())
	{
		OldUuid = PlayerInfoCache->GetRHPlayerUuid();
		if (PlayerInfoCache->GetPlayerNotifications() != nullptr)
		{
			// stop streaming and clear out history as we may not be able to conveniently resume from here
			PlayerInfoCache->StopStreamingNotifications(true);
			PlayerInfoCache.Reset();
		}
	}

	for (auto Plugin : SubsystemPlugins)
	{
		Plugin->OnUserChanged();
		Plugin->OnUserChanged(OldUuid, OldPlayerInfo);
	}

	if (AnalyticsProvider.IsValid())
	{
		auto PlayerUuid = GetPlayerUuid();
		AnalyticsProvider->SetUserID(PlayerUuid.IsValid() ? PlayerUuid.ToString(EGuidFormats::DigitsWithHyphens) : TEXT(""));
	}

	PlayerInfoCache = GetLocalPlayerInfo();
	if (PlayerInfoCache.IsValid())
	{
		if (PlayerInfoCache->GetPlayerNotifications() != nullptr)
		{
			// start streaming notifications for this context
			PlayerInfoCache->StartStreamingNotifications();
		}
	}
}

FGuid URH_LocalPlayerSubsystem::GetPlayerUuid() const
{
	if (AuthContext.IsValid() && AuthContext->IsLoggedIn())
	{
		auto LoginResult = AuthContext->GetLoginResult();
		if (LoginResult.IsSet())
		{
			return LoginResult->GetActivePlayerUuid(FGuid());
		}
	}

	return FGuid();
}

ERHAPI_PlatformTypes_DEPRECATED URH_LocalPlayerSubsystem::GetLoggedInPlatformType() const
{
	if (IsLoggedIn() && AuthContext->GetLoginResult().IsSet())
	{
		return ERHAPI_PlatformTypes_DEPRECATED(AuthContext->GetLoginResult()->GetPortalId());
	}
	return ERHAPI_PlatformTypes_DEPRECATED::PT_UNKNOWN;
}

ERHAPI_Platform URH_LocalPlayerSubsystem::GetLoggedInPlatform() const
{
	if (IsLoggedIn() && AuthContext->GetLoginResult().IsSet())
	{
		return AuthContext->GetLoginResult()->GetPlatform();
	}
	return ERHAPI_Platform::Anon;
}


FUniqueNetIdWrapper URH_LocalPlayerSubsystem::GetOSSUniqueId() const
{
#if RH_FROM_ENGINE_VERSION(5,0)
	return GetLocalPlayer()->GetUniqueNetIdForPlatformUser();
#else
	return GetLocalPlayer()->GetUniqueNetIdFromCachedControllerId();
#endif
}

#if RH_FROM_ENGINE_VERSION(5,0)
FPlatformUserId URH_LocalPlayerSubsystem::GetPlatformUserId() const
{
	return GetLocalPlayer()->GetPlatformUserId();
}
#else
int32 URH_LocalPlayerSubsystem::GetPlatformUserId() const
{
	return GetLocalPlayer()->GetControllerId();
}
#endif

TSharedPtr<class IAnalyticsProvider> URH_LocalPlayerSubsystem::CreateAnalyticsProvider()
{
	// todo - use environment configuration to change URL
	if (!AnalyticsProvider.IsValid())
	{
		// override analytics config processor to pass in the configured per-sandbox endpoint
		FAnalytics::ConfigFromIni AnalyticsConfig;                     // configure using the default INI sections.
		FAnalyticsProviderConfigurationDelegate AnalyticsConfigDelegate = FAnalyticsProviderConfigurationDelegate::CreateLambda([&](const FString& ConfigName, bool bIsRequired)
			{
				if (ConfigName == TEXT("APIServerET"))
				{
					// grab event API, then compute the endpoint from a test event
					auto& EventAPI = RH_APIs::GetEventsAPI();
					RallyHereAPI::FRequest_ReceiveEventsV1 Request;

					FString EndPoint = EventAPI.GetURL() + Request.ComputePath();
					return EndPoint;
				}
				return AnalyticsConfig.GetValue(ConfigName, bIsRequired);
			});

		AnalyticsProvider = FAnalytics::Get().CreateAnalyticsProvider(              // call the factory function
			FAnalytics::ConfigFromIni::GetDefaultProviderModuleName(), // use the default config to find the provider name
			AnalyticsConfigDelegate);
	}

	return AnalyticsProvider;
}

URH_PlayerInfoSubsystem* URH_LocalPlayerSubsystem::GetPlayerInfoSubsystem() const
{
	if (SandboxedPlayerInfoSubsystem != nullptr)
	{
		return SandboxedPlayerInfoSubsystem;
	}

	auto pGameInstance = GetLocalPlayer()->GetGameInstance();
	if (pGameInstance == nullptr)
	{
		return nullptr;
	}

	auto pGISubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
	if (pGISubsystem == nullptr)
	{
		return nullptr;
	}

	return pGISubsystem->GetPlayerInfoSubsystem();
}

URH_PlayerInfo* URH_LocalPlayerSubsystem::GetLocalPlayerInfo() const
{
	auto pRH_PlayerInfoSubsystem = GetPlayerInfoSubsystem();
	if (pRH_PlayerInfoSubsystem == nullptr)
	{
		return nullptr;
	}

	return pRH_PlayerInfoSubsystem->GetOrCreatePlayerInfo(GetPlayerUuid());
}

FRH_PlayerPlatformId URH_LocalPlayerSubsystem::GetPlayerPlatformId() const
{
	// #RHTODO: Consider making this use the PlayerInfo for the local player instead,
	//          though we will need to make sure the platform id is setup upon login.
	if (IsLoggedIn() && AuthContext->GetLoginResult().IsSet())
	{
		FRH_PlayerPlatformId PlayerPlatformId;

		PlayerPlatformId.UserId = AuthContext->GetLoginResult()->GetPortalUserId();
		PlayerPlatformId.PlatformType = AuthContext->GetLoginResult()->GetPlatform();
		return PlayerPlatformId;
	}

	return FRH_PlayerPlatformId();
}

IOnlineSubsystem* URH_LocalPlayerSubsystem::GetOSS(const FName& SubsystemName) const
{
    if (!SubsystemName.IsNone())
    {
        const FName Name = Online::GetUtils()->GetOnlineIdentifier(GetLocalPlayer()->GetWorld(), SubsystemName);
        if (Name != NAME_None)
        {
            if (IOnlineSubsystem* FoundOSS = IOnlineSubsystem::Get(Name))
            {
                return FoundOSS;
            }
        }
    }

    if (IOnlineSubsystem* DefaultOSS = IOnlineSubsystem::Get(NAME_None))
    {
    	// For PiE, we need to get at the specific instance of the subsystem for this particular player
    	const FName Name = Online::GetUtils()->GetOnlineIdentifier(GetLocalPlayer()->GetWorld(), DefaultOSS->GetSubsystemName());
    	if (Name != DefaultOSS->GetInstanceName())
    	{
            if (IOnlineSubsystem* FoundOSS = IOnlineSubsystem::Get(Name))
            {
                return FoundOSS;
            }
        }

        return DefaultOSS;
    }

    return nullptr;
}

URH_PlayerNotifications* URH_LocalPlayerSubsystem::GetPlayerNotifications() const
{
	auto* LocalPlayerInfo = GetLocalPlayerInfo();
	if (LocalPlayerInfo != nullptr)
	{
		return LocalPlayerInfo->GetPlayerNotifications();
	}
	return nullptr;
}

void URH_LocalPlayerSubsystem::CustomEndpoint(const FRH_CustomEndpointRequestWrapper& RequestWrapper, const RallyHereAPI::FDelegate_CustomEndpointSend& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	typedef RallyHereAPI::Traits_CustomEndpointSend BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.EndpointId = RequestWrapper.EndpointId;
	if (RequestWrapper.ContentType.Len() > 0)
	{
		Request.ContentType = RequestWrapper.ContentType;
	}
	if (RequestWrapper.Body.GetValue().IsValid())
	{
		Request.Body = RequestWrapper.Body;
	}

	BaseType::DoCall(RH_APIs::GetAPIs().GetCustom(), Request, Delegate, RequestWrapper.Priority);

}

void URH_LocalPlayerSubsystem::CustomEndpoint(const FRH_CustomEndpointRequestWrapper& Request, const FRH_CustomEndpointDelegateBlock& Delegate)
{
	auto InternalDelegate = RallyHereAPI::FDelegate_CustomEndpointSend::CreateLambda([Delegate](const RallyHereAPI::FResponse_CustomEndpointSend& Resp)
		{
			FRH_CustomEndpointResponseWrapper ResponseWrapper(Resp);
			Delegate.ExecuteIfBound(ResponseWrapper);
		});
	CustomEndpoint(Request, InternalDelegate);
}