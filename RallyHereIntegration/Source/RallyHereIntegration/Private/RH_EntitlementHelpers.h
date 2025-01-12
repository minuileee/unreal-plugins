// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include <optional>

#include "EntitlementsAPI.h"
#include "InventoryAPI.h"
#include "OnlineError.h"
#include "OnlineSubsystem.h"
#include "TimerManager.h"
#include "RallyHereIntegrationModule.h"
#include "RH_Common.h"
#include "Interfaces/OnlineIdentityInterface.h"
#include "Interfaces/OnlinePurchaseInterface.h"
#include "RH_OnlineSubsystemNames.h"
#include "RH_EntitlementSubsystem.h"
#include "RH_Events.h"

class URH_LocalPlayerSubsystem;

/** @ingroup
 *  @{
 */

/**
 * @brief Processor class used to make entitlment process calls.
 */
class FRH_EntitlementProcessor : public FRH_AsyncTaskHelper
{
public:
	/**
	 * @brief Main Constructor for Entitlement Processor, used internally by the entitlement process calls.
	 */
	FRH_EntitlementProcessor(URH_EntitlementSubsystem* InEntitlementSubsystem,
		IOnlineSubsystem* InOSS,
		const IOnlinePurchasePtr& InPurchaseSubsystem,
		int32 InLocalUserNum,
		FUniqueNetIdWrapper InPlatformUserId,
		FTimerManager& InTimerManager,
		const FRH_ProcessEntitlementCompletedDelegate& InProcessorCompleteDelegate,
		TOptional<ERHAPI_PlatformRegion> InRegion,
		TOptional<ERHAPI_Platform> InOverridePlatform,
		TSharedPtr<IAnalyticsProvider> InAnalyticsProvider)
		: EntitlementSubsystem(InEntitlementSubsystem)
		, OSS(InOSS)
		, PurchaseSubsystem(InPurchaseSubsystem)
		, LocalUserNum(InLocalUserNum)
		, PlatformUserId(InPlatformUserId)
		, TimerManager(InTimerManager)
		, EntitlementProcessorCompleteDelegate(InProcessorCompleteDelegate)
		, Region(InRegion)
		, AnalyticsProvider(InAnalyticsProvider)
	{
		if (InOverridePlatform.IsSet())
		{
			bIsOverride = true;
			Platform = InOverridePlatform;
		}
		else
		{
			bIsOverride = false;
			Platform = RH_GetPlatformFromOSSName(OSS->GetSubsystemName());
		}
		AuthContext = EntitlementSubsystem->GetAuthContext();
	}
	/**
	 * @brief Start the Entitlement processing.
	 */
	virtual void Start()
	{
		Started();
		if (!AuthContext.IsValid())
		{
			Failed(TEXT("No AuthContext provided"));
			return;
		}
		if (!AuthContext->IsLoggedIn())
		{
			Failed(TEXT("Not Logged In"));
			return;
		}
		if (!Platform.IsSet())
		{
			Failed(TEXT("No valid platform"));
			return;
		}
		if (!bIsOverride && PurchaseSubsystem == nullptr)
		{
			Failed(TEXT("No Purchase Subsystem"));
			return;
		}
		QueryEntitlements();
	}

protected:
	/**
	 * @brief Queries entitlements from the online subsystem.
	 */
	void QueryEntitlements()
	{
		if(PurchaseSubsystem != nullptr && !bIsOverride)
		{
			PurchaseSubsystem->QueryReceipts(*OSS->GetIdentityInterface()->GetUniquePlayerId(LocalUserNum), false,
			FOnQueryReceiptsComplete::CreateSP(this, &FRH_EntitlementProcessor::QueryEntitlementsComplete, OSS));
		}
		else
		{
			RetrieveOSSAuthToken();
		}
	}
	/**
	 * @brief Response from the online subsystem query entitlements call.
	 * @param [in] Result The result of the query.
	 * @param [in] ProvidedOSS The OSS that provided the result.
	 */
	void QueryEntitlementsComplete(const FOnlineError& Result, IOnlineSubsystem* ProvidedOSS)
	{
		if (!Result.bSucceeded)
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Error Processing Platform Entitlements - Error Code: [%s] - Error Message: [%s]"), ANSI_TO_TCHAR(__FUNCTION__), *Result.GetErrorCode(), *Result.GetErrorMessage().ToString());
			Failed("Failed to query entitlements.");
			return;
		}

		PurchaseSubsystem->GetReceipts(*PlatformUserId, Receipts);

		ValidateEntitlementReceipts();
	}
	/**
	 * @brief Validates the entitlement receipts if needed by the platform.
	 */
	void ValidateEntitlementReceipts()
	{
		TArray<FString> ValidationInfos;

		for (FPurchaseReceipt receipt: Receipts)
		{
			for (FPurchaseReceipt::FReceiptOfferEntry offerEntry: receipt.ReceiptOffers)
			{
				for (FPurchaseReceipt::FLineItemInfo lineItem: offerEntry.LineItems)
				{
					ValidationInfos.Add(lineItem.ValidationInfo);
				}
			}
		}

		ReceiptsToValidateCount = ValidationInfos.Num();

		bool bShouldFinalize = ValidationInfos.Num() > 0;

		// EOS subsystems redeem purchases inside of the FinalizeReceiptValidationInfo, which does not conform to the other subsystems.
		// Skip that step for Epic, and proceed directly to processing the inventory so it can be redeemed on the RHAPI side
		if (OSS != nullptr && (OSS->GetSubsystemName() == EOS_SUBSYSTEM || OSS->GetSubsystemName() == EOSPLUS_SUBSYSTEM))
		{
			bShouldFinalize = false;
		}

		if(bShouldFinalize)
		{
			for (FString validationInfo: ValidationInfos)
			{
				PurchaseSubsystem->FinalizeReceiptValidationInfo(*OSS->GetIdentityInterface()->GetUniquePlayerId(LocalUserNum),
					validationInfo,
					FOnFinalizeReceiptValidationInfoComplete::CreateSP(this, &FRH_EntitlementProcessor::OnReceiptValidationComplete));
			}
		}
		else
		{
			RetrieveOSSAuthToken();
		}
	}
	/**
	 * @brief Response from the online subsystem validate entitlements call.
	 * @param [in] Result The result of the query.
	 * @param [in] ValidationInfo The validation info of the receipt.
	 */
	void OnReceiptValidationComplete(const FOnlineError& Result, const FString& ValidationInfo)
	{
		if (!Result.bSucceeded)
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Error Validating Entitlement Receipts - Error Code: [%s] - Error Message: [%s]"), ANSI_TO_TCHAR(__FUNCTION__), *Result.GetErrorCode(), *Result.GetErrorMessage().ToString());
			Failed("Failed validate receipts.");
			return;
		}

		ReceiptsToValidateCount--;

		if(ReceiptsToValidateCount == 0)
		{
			// PS4 and PS5 pass through auth token as the first token in a colon delimited string in the validation token.  Parse it out and use it as the auth token.
			// this cannot be retrieved later, so we need to do it here
			if (OSS != nullptr && (OSS->GetSubsystemName() == PS4_SUBSYSTEM || OSS->GetSubsystemName() == PS5_SUBSYSTEM))
			{
				TArray<FString> ValidationTokens;
				ValidationInfo.ParseIntoArray(ValidationTokens, TEXT(":"), false);
				check(ValidationTokens.Num() > 0);
				FString AuthTokenString = ValidationTokens[0];
				FExternalAuthToken AuthToken;
				AuthToken.TokenString = AuthTokenString;

				// additionally, automatically determine region if not specified
				if (!Region.IsSet())
				{
					auto SonyContentId = OSS->GetAppId();
					if (SonyContentId.StartsWith(TEXT("EP")))
					{
						Region = ERHAPI_PlatformRegion::Eu;
					}
					else if (SonyContentId.StartsWith(TEXT("UP")))
					{
						Region = ERHAPI_PlatformRegion::Na;
					}
				}

				RetrieveOSSAuthTokenComplete(LocalUserNum, AuthToken.IsValid(), AuthToken);
			}
			else
			{
				RetrieveOSSAuthToken();
			}
		}
	}

	void RetrieveOSSAuthToken()
	{
		if (OSS != nullptr && OSS->GetIdentityInterface() != nullptr)
		{
			auto IdentityInterface = OSS->GetIdentityInterface();

			if (RH_UseGetAuthTokenFallbackFromOSSName(OSS->GetSubsystemName()))
			{
				FExternalAuthToken AuthToken;
				AuthToken.TokenString = IdentityInterface->GetAuthToken(LocalUserNum);
				RetrieveOSSAuthTokenComplete(LocalUserNum, AuthToken.IsValid(), AuthToken);
			}
			else
			{
#if RH_FROM_ENGINE_VERSION(5,2)
				IdentityInterface->GetLinkedAccountAuthToken(LocalUserNum, FString(), IOnlineIdentity::FOnGetLinkedAccountAuthTokenCompleteDelegate::CreateSP(this, &FRH_EntitlementProcessor::RetrieveOSSAuthTokenComplete));
#else
				IdentityInterface->GetLinkedAccountAuthToken(LocalUserNum, IOnlineIdentity::FOnGetLinkedAccountAuthTokenCompleteDelegate::CreateSP(this, &FRH_EntitlementProcessor::RetrieveOSSAuthTokenComplete));
#endif
			}
		}
		else
		{
			RetrieveOSSAuthTokenComplete(LocalUserNum, false, FExternalAuthToken());
		}
	}

	void RetrieveOSSAuthTokenComplete(int32 InLocalUserNum, bool bWasSuccessful, const FExternalAuthToken& AuthToken)
	{
		if (bWasSuccessful)
		{
			ProcessPlatformInventory(AuthToken.TokenString);
		}
		else
		{
			ProcessPlatformInventory(TEXT(""));
		}
	}

	/**
	 * @brief Processes the platform inventory and stores as cached responses.
	 */
	void ProcessPlatformInventory(FString PlatformAuthToken)
	{
		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] Submitting Process Platform Entitlements to RallyHere"), *GetName());

		for (FPurchaseReceipt receipt: Receipts)
		{
			ProcessEntitlementResult.TransactionId = receipt.TransactionId;

			for (FPurchaseReceipt::FReceiptOfferEntry offerEntry: receipt.ReceiptOffers)
			{
				if (offerEntry.Quantity > 0)
				{
					for (FPurchaseReceipt::FLineItemInfo lineItem: offerEntry.LineItems)
					{
						FRHAPI_PlatformEntitlement Entitlement;
						Entitlement.SetQuantity(offerEntry.Quantity);
						Entitlement.SetPlatformEntitlementId(lineItem.UniqueId);
						Entitlement.SetPlatformSku(lineItem.ItemName);

						UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] Ading Client Entitlement to Request - SKU: %s - Entitlement ID: %s - Quantity: %i"), *GetName(), *Entitlement.PlatformSku, *Entitlement.PlatformEntitlementId, Entitlement.GetQuantity(0));

						ProcessEntitlementResult.GetClientEntitlements().Emplace(Entitlement);
					}
				}
			}
		}

		ProcessEntitlementResult.SetStatus("SUBMITTED");
		EntitlementSubsystem->GetEntitlementResults()->Emplace(TaskId, ProcessEntitlementResult);

		FRHAPI_PlatformEntitlementProcessRequest entitlementRequest;
		entitlementRequest.SetEntitlements(ProcessEntitlementResult.GetClientEntitlements());
		entitlementRequest.SetPlatformId(EnumToString(Platform.GetValue()));

		entitlementRequest.SetPlatformToken(PlatformAuthToken);
		if (OSS != nullptr && !bIsOverride)
		{
			entitlementRequest.SetClientType(RH_GetClientTypeFromOSSName(OSS->GetSubsystemName()));
		}
		else if (bIsOverride && Platform.IsSet())
		{
			entitlementRequest.SetClientType(RH_GetClientTypeFromOSSName(EntitlementSubsystem->GetEntitlementOSSName())); // note - use entitlement OSS, as platform overrides are not OSS based
		}
		else
		{
			Failed(TEXT("No OSS, and not using a platform override"));
			return;
		}

		entitlementRequest.PlatformRegion = Region.Get(ERHAPI_PlatformRegion::Unknown);
		entitlementRequest.TransactionId = ProcessEntitlementResult.TransactionId;

		FGuid PlayerUuid;
		if (AuthContext->GetLoginResult().IsSet())
		{
			PlayerUuid = AuthContext->GetLoginResult()->GetActivePlayerUuid();
		}
		if (!PlayerUuid.IsValid())
		{
			Failed(TEXT("No valid player uuid"));
			return;
		}

		auto Request = RallyHereAPI::FRequest_ProcessPlatformEntitlementsByPlayerUuid();
		Request.AuthContext = AuthContext;
		Request.PlayerUuid = PlayerUuid;
		Request.PlatformEntitlementProcessRequest = entitlementRequest;

		const auto HttpPtr = RH_APIs::GetAPIs().GetEntitlements()->ProcessPlatformEntitlementsByPlayerUuid(Request,
			RallyHereAPI::FDelegate_ProcessPlatformEntitlementsByPlayerUuid::CreateSP(this, &FRH_EntitlementProcessor::ProcessPlatformInventoryComplete), GetDefault<URH_IntegrationSettings>()->ProcessPlatformEntitlementsPriority);

		if (!HttpPtr)
		{
			Failed(TEXT("Failed to create entitlements processing request"));
		}
	}
	/**
	 * @brief Returns if there are pending entitlement checks being processed in the online subsystem.
	 */
	bool CheckIfWeNeedToPoll()
	{
		for (FRHAPI_PlatformEntitlement client_entitlement : ProcessEntitlementResult.GetClientEntitlements())
		{
			ERHAPI_EntitlementStatus status = client_entitlement.GetStatus();
			if (status == ERHAPI_EntitlementStatus::Submitted || status == ERHAPI_EntitlementStatus::Unknown)
			{
				return true;
			}
		}

		for (FRHAPI_PlatformEntitlement server_entitlement : ProcessEntitlementResult.GetServerEntitlements())
		{
			ERHAPI_EntitlementStatus status = server_entitlement.GetStatus();
			if (status == ERHAPI_EntitlementStatus::Submitted || status == ERHAPI_EntitlementStatus::Unknown)
			{
				return true;
			}
		}

		return false;
	}
	/**
	 * @brief Callback when the processing of platform inventory complets on the core.
	 * @param [in] Resp The repsonse from the core.
	 */
	void ProcessPlatformInventoryComplete(const RallyHereAPI::FResponse_ProcessPlatformEntitlementsByPlayerUuid& Resp)
	{
		if (Resp.IsSuccessful())
		{
			UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] Successfully Submitted Process Platform Entitlements to RallyHere with returned RequestId: %s"), *GetName(), *Resp.Content.GetRequestId());

			ProcessEntitlementResult = Resp.Content;
			EntitlementSubsystem->GetEntitlementResults()->Emplace(TaskId, ProcessEntitlementResult);

			if(CheckIfWeNeedToPoll())
			{
				StartPoll();
			}
			else
			{
				FinalizePurchase();
			}
		}
		else
		{
			ProcessEntitlementResult.SetStatus("FAILED");
			EntitlementSubsystem->GetEntitlementResults()->Emplace(TaskId, ProcessEntitlementResult);
			FRH_ErrorInfo ErrorInfo(Resp);
			Failed(FString::Printf(TEXT("RallyHere Process Platform Entitlement Request failed with %s"), *ErrorInfo.ResponseContent));
		}
	}
	/**
	 * @brief Polls for new entitlements.
	 * @param [in] Delegate Delegate to callback when poll completes.
	 */
	void PollEntitlements(const FRH_PollCompleteFunc& Delegate)
	{
		if (!AuthContext.IsValid() || !AuthContext->IsLoggedIn())
		{
			Delegate.ExecuteIfBound(false, false); // do not continue polling if we are not logged in
			return;
		}

		ProcessEntitlementResult.SetStatus("POLLING");

		auto Request = RallyHereAPI::FRequest_RetrieveEntitlementRequestByPlayerUuid();
		Request.AuthContext = AuthContext;
		Request.PlayerUuid = AuthContext->GetLoginResult()->GetActivePlayerUuid();
		Request.RequestId = ProcessEntitlementResult.RequestId;

		const auto HttpPtr = RH_APIs::GetAPIs().GetEntitlements()->RetrieveEntitlementRequestByPlayerUuid(Request,
			RallyHereAPI::FDelegate_RetrieveEntitlementRequestByPlayerUuid::CreateSP(this,
				&FRH_EntitlementProcessor::PollEntitlementComplete, Delegate), GetDefault<URH_IntegrationSettings>()->RetrievePlatformEntitlementsPriority);

		if (!HttpPtr)
		{
			Failed(TEXT("Failed to create entitlements processing request via poll"));
		}
	}
	/**
	* @brief Handles the response to a Poll Entitlements call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
	void PollEntitlementComplete(const RallyHereAPI::FResponse_RetrieveEntitlementRequestByPlayerUuid& Resp, FRH_PollCompleteFunc Delegate)
	{
		ProcessEntitlementResult = Resp.Content;

		if(!CheckIfWeNeedToPoll())
		{
			Delegate.ExecuteIfBound(true, false);
			StopPoll();
			FinalizePurchase();
		}
		else
		{
			ProcessEntitlementResult.SetStatus("POLLING");
			Delegate.ExecuteIfBound(true, true);
		}
		EntitlementSubsystem->GetEntitlementResults()->Emplace(TaskId, ProcessEntitlementResult);
	}

	/**
	 * @brief Starts polling of entitlements.
	 */
	void StartPoll()
	{
		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
		static FName PollTimerName(TEXT("Entitlements"));

		EntitlementsPoller = FRH_PollControl::CreateAutoPoller();

		if (EntitlementsPoller.IsValid())
		{
			// poll immediately, as we have have entitlements pending
			EntitlementsPoller->StartPoll(FRH_PollFunc::CreateSP(this, &FRH_EntitlementProcessor::PollEntitlements), PollTimerName, true, false);
		}
	}
	/**
	 * @brief Stops polling of entitlements.
	 */
	void StopPoll()
	{
		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
		if (EntitlementsPoller.IsValid())
		{
			EntitlementsPoller->StopPoll();
			EntitlementsPoller.Reset();
		}
	}

	/**
	 * @brief Finalizes a purchase from an online subsystem.
	 */
	void FinalizePurchase()
	{
		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] - Process Platform Entitlements was success, calling finalize purchase on Transaction Id: %s"), ANSI_TO_TCHAR(__FUNCTION__), *ProcessEntitlementResult.TransactionId);
		if (PurchaseSubsystem != nullptr)
		{
			PurchaseSubsystem->FinalizePurchase(*OSS->GetIdentityInterface()->GetUniquePlayerId(LocalUserNum), *ProcessEntitlementResult.GetTransactionId());
		}

		Completed(true);
	}

	/**
	 * @brief Gets the name of the entitlement processor.
	 */
	virtual FString GetName() const override
	{
		static const FString Name(TEXT("FRH_EntitlementProcessor"));
		return Name;
	}
	/**
	 * @brief Triggers the callback of the Entitlements Processor.
	 * @param [in] bSuccess If true, the entitlement process was successful.
	 */
	virtual void ExecuteCallback(bool bSuccess) const override
	{
		if(bSuccess)
		{
			UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] - Process Entitlements completed successfully"), ANSI_TO_TCHAR(__FUNCTION__));
		}
		else
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Failed to Process Entitlements"), ANSI_TO_TCHAR(__FUNCTION__));
		}

		EntitlementProcessorCompleteDelegate.ExecuteIfBound(bSuccess, ProcessEntitlementResult);
	}
	/** @brief Auth Context used by the entitlement subsystem. */
	FAuthContextPtr AuthContext;
	/** @brief Pointer back to the entitlement subsystem that owns this processor. */
	TWeakObjectPtr<URH_EntitlementSubsystem> EntitlementSubsystem;
	/** @brief Online Subsystem this processor is for. */
	IOnlineSubsystem* OSS;
	/** @brief Online Purchase Subsystem this processor is for. */
	IOnlinePurchasePtr PurchaseSubsystem;
	/** @brief Contorller Id of the user. */
	int32 LocalUserNum;
	/** @brief Platform User Id of the user. */
	FUniqueNetIdWrapper PlatformUserId;
	/** @brief The engines Timer Manager. */
	FTimerManager& TimerManager;
	/** @brief Delegate to fire when completed. */
	FRH_ProcessEntitlementCompletedDelegate EntitlementProcessorCompleteDelegate;
	/** @brief The platforms region to use */
	TOptional<ERHAPI_PlatformRegion> Region;
	/** @brief Platform the entitlements are for. */
	TOptional<ERHAPI_Platform> Platform;
	/** @brief If set, the platform is an override of the main connection platform. */
	bool bIsOverride = false;
	/** @brief Unique Id for the process task. */
	const FString TaskId = FGuid::NewGuid().ToString();
	/** @brief Result of the entitlement process. */
	FRHAPI_PlatformEntitlementProcessResult ProcessEntitlementResult;
	/** @brief Tracks how many reciepts are still needed to be validated. */
	int32 ReceiptsToValidateCount = 0;
	/** @brief Polling interval for entitlments. */
	float fEntitlementCheckPollInterval;
	/** @brief Handler for the polling timer. */
	FTimerHandle EntitlementCheckPollTimerHandle;
	/** @brief Auto poller for the entitlements. */
	FRH_AutoPollerPtr EntitlementsPoller;
	/** @brief Array of reciepts from the online subsystem entitlment check. */
	TArray<FPurchaseReceipt> Receipts = TArray<FPurchaseReceipt>();
	/** @brief Http Request for processing entitlements with the core. */
	FHttpRequestPtr HttpRequest;
	/** @brief Analytics provider to use for logging. */
	TSharedPtr<IAnalyticsProvider> AnalyticsProvider;
};

/** @} */