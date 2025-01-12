// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RH_DebugToolWindow.h"
#include "SessionsAPI.h"

#include "RH_SessionData.h"
#include "RH_SessionBrowser.h"

#include "RH_ImGuiUtilities.h"

class URH_SessionView;
class URH_GameInstanceSessionSubsystem;

class URH_LocalPlayerSessionSubsystem;
class URH_GameInstanceSubsystem;
class URH_GameInstanceSessionSubsystem;

struct FRHDTW_Session : public FRH_DebugToolWindow
{
public:
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Session();
	virtual ~FRHDTW_Session();

	virtual void Do() override;

	int32 JoinByIdTeam;
	TArray<ANSICHAR> JoinByIdString;
	TArray<ANSICHAR> CreateByTypeSessionTypeString;
	TArray<ANSICHAR> CreateByTypeRegionIdString;
	FString SessionActionResult;

	int32 InvitePlayerTeam;
	TArray<ANSICHAR> InviteSessionString;
	TArray<ANSICHAR> JoinQueueByIdString;

	TArray<ANSICHAR> MapName;
	TArray<ANSICHAR> GameModeName;
	TArray<ANSICHAR> GameMiscParams;
	bool bMakeBeaconInstance;

	TArray<ANSICHAR> UpdateSessionRegionIdString;

	TArray<ANSICHAR> SearchByTypeString;
	TArray<ANSICHAR> SearchByRegionIdString;
	bool SearchCacheSessions;
	int32 SearchCursor;
	int32 SearchPageSize;

	TArray<FRH_SessionBrowserSearchResult> ResultCache;

	TArray<ANSICHAR> QueueSessionSelector;
	int32 QueueSearchCursor;
	int32 QueueSearchPageSize;
	bool bFilterInactiveQueues;

	TArray<ANSICHAR> MatchmakingProfileSearchString;
	TArray<ANSICHAR> InstanceRequestSearchString;

protected:
	// helpers used for multiple tabs
	void ImGuiDisplayInstance(const FRHAPI_InstanceInfo& Info, URH_SessionView* RHSession, URH_GameInstanceSessionSubsystem* pGISessionSubsystem);
	void ImGuiDisplayMatch(const FRHAPI_MatchInfo& Info);
	void ImGuiDisplaySessionPlayer(URH_SessionView* RHSession, const FRHAPI_SessionPlayer& Player, int32 TeamId, URH_GameInstanceSessionSubsystem* pGISessionSubsystem);
	void ImGuiDisplayPlatformSession(const FRHAPI_PlatformSession& Info);
	void ImGuiDisplaySession(const FRH_APISessionWithETag& Session, URH_SessionView* RHSession, URH_LocalPlayerSessionSubsystem* pLPSessionSubsystem, URH_GameInstanceSessionSubsystem* pGISessionSubsystem);

	// session state tabs
	void ImGuiDisplayLocalPlayerSessions(URH_GameInstanceSubsystem* pGISubsystem);
	void ImGuiDisplayDedicatedServerSessions(URH_GameInstanceSubsystem* pGISubsystem);
	void ImGuiDisplayPlayerSessions(URH_GameInstanceSubsystem* pGISubsystem);
	void ImGuiDisplaySessionBrowser(URH_GameInstanceSubsystem* pGISubsystem);
	
	// helpers used for multiple session config tabs
	void ImGuiDisplayQueue(const FRHAPI_QueueConfigV2& Queue, URH_LocalPlayerSessionSubsystem* pLPSessionSubsystem, class URH_OnlineSession* pSelectedSession, class URH_MatchmakingBrowserCache* pBrowerCache);
	void ImGuiDisplayMatchmakingTemplate(const FRHAPI_MatchMakingTemplateV2& Template, class URH_MatchmakingBrowserCache* pBrowerCache);
	void ImGuiDisplayMatchmakingProfile(const FRHAPI_MatchMakingProfileV2& Profile, class URH_MatchmakingBrowserCache* pBrowerCache);
	void ImGuiDisplayInstanceRequestTemplate(const FRHAPI_InstanceRequestTemplate& RequestTemplate, class URH_MatchmakingBrowserCache* pBrowerCache);

	// session config sub tabs
	void ImGuiDisplaySessionTypes(URH_GameInstanceSubsystem* pGISubsystem);
	void ImGuiDisplayRegionsBrowser(URH_GameInstanceSubsystem* pGISubsystem);
	void ImGuiDisplayQueuesBrowser(URH_GameInstanceSubsystem* pGISubsystem);
	void ImGuiDisplayMatchmakingProfiles(URH_GameInstanceSubsystem* pGISubsystem);
	void ImGuiDisplayInstanceRequestTemplates(URH_GameInstanceSubsystem* pGISubsystem);
	void HandleBrowserSearchResult(bool bSuccess, const FRH_SessionBrowserSearchResult& Result);
	void HandleSessionUpdatedResult(bool bSuccess, URH_SessionView* SessionData, const FRH_ErrorInfo& ErrorInfo, FGuid PlayerUuid);

	void HandleGetPlayerSessions(bool bSuccess, class URH_PlayerInfoSubobject* SessionsData, FGuid PlayerUuid);
	FString GetPlayerSessionsResult;
	void HandleGetPlayerSessionsDetails(bool bSuccess, const FRH_SessionBrowserSearchResult& Result);
	FString GetPlayerSessionsDetailsResult;

	FImGuiCustomDataStager InstanceStartupCustomDataStager;
	FImGuiCustomDataStager InstanceCustomDataStager;
	FImGuiCustomDataStager InvitePlayerCustomDataStager;
	FImGuiCustomDataStager BrowserCustomDataStager;
	FImGuiCustomDataStager SessionCustomDataStager;
	TMap<FGuid, FImGuiCustomDataStager*> UpdatePlayerCustomDataStagers;
};
