// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugTool.h"
#include "RHDTW_Match.h"

#include "imgui.h"
#include "Engine/GameInstance.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_MatchSubsystem.h"
#include "RH_PlayerInfoSubsystem.h"

#include "RH_ImGuiUtilities.h"

FRHDTW_Match::FRHDTW_Match()
{
	SearchPageSize = 0;
	SearchInstanceId.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);
	SearchAllocationId.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);
	SearchSessionId.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);
	SearchHostPlayerUuid.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);
	SearchRegionId.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);
	SearchPlayerUuid.SetNumZeroed(RH_STRINGENTRY_GUIDSIZE);
	SearchCursor.SetNumZeroed(1024);	// cursor may have data packed in, so make it large
}

FRHDTW_Match::~FRHDTW_Match()
{
}

void FRHDTW_Match::Do()
{
	auto* GI = GetGameInstance();
	if (GI == nullptr)
	{
		ImGui::Text("%s", "Could not find owning game instance.");
		return;
	}

	auto* pGISS = GI->GetSubsystem<URH_GameInstanceSubsystem>();
	if (pGISS == nullptr)
	{
		ImGui::Text("%s", "URH_GameInstanceSubsystem not available.");
		return;
	}

	auto* pRH_MatchSubsystem = pGISS->GetMatchSubsystem();
	if (pRH_MatchSubsystem == nullptr)
	{
		ImGui::Text("%s", "pRH_MatchSubsystem not available.");
		return;
	}

	if (ImGui::BeginTabBar("Config"))
	{
		if (ImGui::BeginTabItem("Local Player"))
		{
			DoViewPlayerMatches();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Search"))
		{
			DoSearchMatches();
			ImGui::EndTabItem();
		}

		ImGui::EndTabBar();
	}
}

void FRHDTW_Match::DoSearchMatches()
{
	URallyHereDebugTool* pOwner = GetOwner();
	if (pOwner == nullptr)
	{
		ImGui::Text("URallyHereDebugTool not available.");
		return;
	}

	auto pGameInstance = GetGameInstance();
	if (pGameInstance == nullptr)
	{
		ImGui::Text("No Game Instance Found");
		return;
	}

	auto pGISubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
	auto pGIMatchSubsystem = pGISubsystem != nullptr ? pGISubsystem->GetMatchSubsystem() : nullptr;

	if (pGIMatchSubsystem == nullptr)
	{
		ImGui::Text("No Match Subsystem Found");
		return;
	}

	ImGui::Text("Search Matches (Blank/0 uses default behavior)");

	static int32 GuidFieldLength = 300;
	ImGui::SetNextItemWidth(GuidFieldLength);
	ImGui::InputText("SessionId", SearchSessionId.GetData(), SearchSessionId.Num());
	ImGui::SetNextItemWidth(GuidFieldLength);
	ImGui::InputText("InstanceId", SearchInstanceId.GetData(), SearchInstanceId.Num());
	ImGui::SetNextItemWidth(GuidFieldLength);
	ImGui::InputText("AllocationId", SearchAllocationId.GetData(), SearchAllocationId.Num());
	
	ImGui::SetNextItemWidth(GuidFieldLength);
	ImGui::InputText("PlayerUuid", SearchPlayerUuid.GetData(), SearchPlayerUuid.Num());
	ImGui::SetNextItemWidth(GuidFieldLength);
	ImGui::InputText("HostPlayerUuid", SearchHostPlayerUuid.GetData(), SearchHostPlayerUuid.Num());
	ImGui::SetNextItemWidth(GuidFieldLength);
	ImGui::InputText("RegionId", SearchRegionId.GetData(), SearchRegionId.Num());

	ImGui::SetNextItemWidth(GuidFieldLength);
	ImGui::InputInt("Page Size", &SearchPageSize, 5, 10);
	ImGui::SetNextItemWidth(GuidFieldLength);
	ImGui::InputText("Cursor", SearchCursor.GetData(), SearchCursor.Num());

	if (ImGui::Button("Search"))
	{
		FRH_MatchSearchParams SearchParams;
		SearchParams.PageSize = SearchPageSize;
		SearchParams.InstanceId = FString(ANSI_TO_TCHAR(SearchInstanceId.GetData()));
		SearchParams.AllocationId = FString(ANSI_TO_TCHAR(SearchAllocationId.GetData()));
		SearchParams.SessionId = FString(ANSI_TO_TCHAR(SearchSessionId.GetData()));
		SearchParams.HostPlayerUuid = FString(ANSI_TO_TCHAR(SearchHostPlayerUuid.GetData()));
		SearchParams.RegionId = FString(ANSI_TO_TCHAR(SearchRegionId.GetData()));
		SearchParams.PlayerUuid = FString(ANSI_TO_TCHAR(SearchPlayerUuid.GetData()));
		SearchParams.Cursor = FString(ANSI_TO_TCHAR(SearchCursor.GetData()));

		pGIMatchSubsystem->SearchMatches(SearchParams, FRH_OnMatchSearchCompleteDelegate::CreateSP(this, &FRHDTW_Match::OnSearchMatchesComplete));	
	}
	ImGui::SameLine();
	if (ImGui::Button("Clear Search"))
	{
		SearchPageSize = 0;
		SearchInstanceId.Empty();
		SearchAllocationId.Empty();
		SearchSessionId.Empty();
		SearchHostPlayerUuid.Empty();
		SearchRegionId.Empty();
		SearchPlayerUuid.Empty();
		SearchCursor.Empty();
	}

	ImGui::Separator();

	ImGui::Text("Results");
	ImGui::SameLine();
	if (ImGui::SmallButton("Clear Results"))
	{
		SearchResults.Empty();
	}

	for (const auto& SearchResult : SearchResults)
	{
		const FString SearchHeader = FString::Printf(TEXT("Search %s"), *SearchResult.Result.GetDescription());
		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*SearchHeader), RH_DefaultTreeFlags))
		{
			ImGuiDisplayCopyableValue(TEXT("Success"), SearchResult.bSuccess);
			if (SearchResult.bSuccess)
			{
				for (const auto& Match : SearchResult.Result.Matches)
				{
					const FString MatchHeader = FString::Printf(TEXT("Match [%s]"), *Match.GetMatchId());
					if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*MatchHeader), RH_DefaultTreeFlagsDefaultOpen))
					{
						ImGuiDisplayModelData(Match);
						ImGui::TreePop();
					}
				}

				if (!SearchResult.Result.NextPageCursor.IsEmpty())
				{
					if (ImGui::Button("Search Next Page"))
					{
						FRH_MatchSearchParams SearchParams = SearchResult.Result.SearchParams;
						SearchParams.Cursor = SearchResult.Result.NextPageCursor;
						pGIMatchSubsystem->SearchMatches(SearchParams, FRH_OnMatchSearchCompleteDelegate::CreateSP(this, &FRHDTW_Match::OnSearchMatchesComplete));
					}
				}
			}
			else
			{
				ImGuiDisplayCopyableValue(TEXT("Error"), SearchResult.ErrorInfo.ResponseContent);
			}
			
			ImGui::TreePop();
		}
	}

	ImGui::Separator();

	ImGui::Text("Match Cache");
	ImGui::SameLine();
	if (ImGui::SmallButton("Clear Match Cache"))
	{
		pGIMatchSubsystem->ClearMatchesCache();
	}

	for (const auto& MatchPair : pGIMatchSubsystem->GetAllMatches())
	{
		static const FString ActiveFlag = TEXT(" - <ACTIVE>");
		const FString MatchHeader = FString::Printf(TEXT("Match [%s]%s"), *MatchPair.Key, pGIMatchSubsystem->GetActiveMatchId() == MatchPair.Key ? *ActiveFlag : TEXT(""));
		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*MatchHeader), RH_DefaultTreeFlags))
		{
			const auto& Match = MatchPair.Value;
			ImGuiDisplayModelData(Match);
			ImGui::TreePop();
		}
	}
}

void FRHDTW_Match::OnSearchMatchesComplete(bool bSuccess, const FRH_MatchSearchResult& Result, const FRH_ErrorInfo& ErrorInfo)
{
	FFullSearchResult NewResult;
	NewResult.bSuccess = bSuccess;
	NewResult.Result = Result;
	NewResult.ErrorInfo = ErrorInfo;
	SearchResults.Add(NewResult);
}

void FRHDTW_Match::DoViewPlayerMatches()
{
	int NumSelectedPlayers = 0;
	if (URallyHereDebugTool* pOwner = GetOwner())
	{
		NumSelectedPlayers = pOwner->GetAllSelectedPlayerInfos().Num();
	}

	ImGui::Text("Actions towards [%d] selected players:", NumSelectedPlayers);
	bool bRequestHistory = false;
	bool bForceRequestHistory = false;
	if (ImGui::Button("Request History"))
	{
		bRequestHistory = true;
	}
	ImGui::SameLine();
	if (ImGui::Button("Request History (force)"))
	{
		bForceRequestHistory = true;
	}

	if (bRequestHistory || bForceRequestHistory)
	{
		ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this, bForceRequestHistory](URH_PlayerInfo* TargetedPlayer)
			{
				if (TargetedPlayer != nullptr && TargetedPlayer->GetMatches() != nullptr)
				{
					TargetedPlayer->GetMatches()->RequestUpdate(bForceRequestHistory);
				}
			}));
	}

	// loop through each player and display their matches
	ForEachSelectedRHPlayer(FRHDT_RHPAction::CreateLambda([this, bForceRequestHistory](URH_PlayerInfo* TargetedPlayer)
		{
			ImGui::Separator();

			check(TargetedPlayer != nullptr);

			const FString PlayerId = TargetedPlayer->GetRHPlayerUuid().ToString(EGuidFormats::DigitsWithHyphens);

			const FString PlayerHeader = FString::Printf(TEXT("Player [%s]"), *PlayerId);
			if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*PlayerHeader), RH_DefaultTreeFlagsDefaultOpen))
			{
				ImGuiDisplayCopyableValue(TEXT("PlayerId"), PlayerId);

				if (TargetedPlayer != nullptr && TargetedPlayer->GetMatches() != nullptr)
				{
					for (const auto& MatchPair : TargetedPlayer->GetMatches()->Matches)
					{
						const FString MatchHeader = FString::Printf(TEXT("Match [%s]"), *MatchPair.Key);
						if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*MatchHeader), RH_DefaultTreeFlagsDefaultOpen))
						{
							const auto& PlayerMatch = MatchPair.Value;
							const auto& Match = PlayerMatch.GetMatch();

							ImGuiDisplayCopyableValue(TEXT("MatchId"), MatchPair.Key);

							// if game instance subsystem exists, allow searching full match
							const auto pGameInstance = GetGameInstance();
							if (pGameInstance != nullptr)
							{
								const auto pGISubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
								if (pGISubsystem != nullptr && pGISubsystem->GetMatchSubsystem() != nullptr)
								{
									FRHAPI_MatchWithPlayers MatchWithPlayers;
									if (pGISubsystem->GetMatchSubsystem()->GetMatch(MatchPair.Key, MatchWithPlayers))
									{
										if (ImGui::TreeNodeEx("Full Details", RH_DefaultTreeFlags))
										{
											ImGuiDisplayModelData(MatchWithPlayers);
											ImGui::TreePop();
										}
									}
									else
									{
										if (ImGui::Button("Search Full Match"))
										{
											pGISubsystem->GetMatchSubsystem()->GetMatchAsync(MatchPair.Key);
										}
									}
								}
							}

							ImGuiDisplayModelData(PlayerMatch);

							ImGui::TreePop();
						}
					}
				}
				
				ImGui::TreePop();
			}
		}));
}