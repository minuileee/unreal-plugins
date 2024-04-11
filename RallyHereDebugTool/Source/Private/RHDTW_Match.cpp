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

	DownloadDirectory = FPaths::HasProjectPersistentDownloadDir() ? FPaths::ProjectPersistentDownloadDir() : TEXT("");
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

	if (ImGui::BeginTabBar("Matches"))
	{
		if (ImGui::BeginTabItem("Player History"))
		{
			DoViewPlayerMatches();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Active Match"))
		{
			DoViewActiveMatch();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("View Match"))
		{
			DoViewMatch();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Search Matches"))
		{
			DoSearchMatches();
			ImGui::EndTabItem();
		}

		ImGui::EndTabBar();
	}
}


void FRHDTW_Match::DoViewActiveMatch()
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


	auto MatchId = pGIMatchSubsystem->GetActiveMatchId();
	if (MatchId.IsEmpty())
	{
		ImGui::Text("No active match.");
		return;
	}

	FRHAPI_MatchWithPlayers Match;
	bool bInCache = pGIMatchSubsystem->GetMatch(MatchId, Match);

	if (bInCache)
	{
		if (ImGui::Button("Refresh from API"))
		{
			pGIMatchSubsystem->GetMatchAsync(SearchMatchId, true);
		}
	}
	else
	{
		if (ImGui::Button("Lookup from API"))
		{
			pGIMatchSubsystem->GetMatchAsync(SearchMatchId, true);
		}
	}

	ImGui::Separator();

	if (bInCache)
	{
		const FString MatchHeader = FString::Printf(TEXT("Match [%s]"), *MatchId);
		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*MatchHeader), RH_DefaultTreeFlagsDefaultOpen))
		{
			ImGuiDisplayModelData(Match);

			DoFilesBlock(URH_MatchSubsystem::GetMatchFileDirectory(MatchId), true, true);

			ImGui::TreePop();
		}
	}
	else
	{
		ImGui::Text("Match not found in cache.");
	}
}

void FRHDTW_Match::DoViewMatch()
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

	static int32 GuidFieldLength = 300;
	ImGui::SetNextItemWidth(GuidFieldLength);
	ImGui::InputText("Match Id", &SearchMatchId);

	const auto MatchId = SearchMatchId;

	FRHAPI_MatchWithPlayers Match;
	bool bInCache = pGIMatchSubsystem->GetMatch(MatchId, Match);

	if (bInCache)
	{
		if (ImGui::Button("Refresh from API"))
		{
			pGIMatchSubsystem->GetMatchAsync(MatchId, true);
		}
	}
	else
	{
		if (ImGui::Button("Lookup from API"))
		{
			pGIMatchSubsystem->GetMatchAsync(MatchId, true);
		}
	}

	ImGui::Separator();


	if (bInCache)
	{
		const FString MatchHeader = FString::Printf(TEXT("Match [%s]"), *MatchId);
		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*MatchHeader), RH_DefaultTreeFlagsDefaultOpen))
		{
			ImGuiDisplayModelData(Match);

			DoFilesBlock(URH_MatchSubsystem::GetMatchFileDirectory(MatchId));

			ImGui::TreePop();
		}
	}
	else
	{
		ImGui::Text("Match not found in cache.");
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
#define ResetStringField(Field) Field.Reset(); Field.AddZeroed(Field.GetSlack());
		ResetStringField(SearchInstanceId);
		ResetStringField(SearchAllocationId);
		ResetStringField(SearchSessionId);
		ResetStringField(SearchHostPlayerUuid);
		ResetStringField(SearchRegionId);
		ResetStringField(SearchPlayerUuid);
		ResetStringField(SearchCursor);
#undef ResetStringField
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
					const auto MatchId = Match.GetMatchId();
					const FString MatchHeader = FString::Printf(TEXT("Match [%s]"), *MatchId);
					if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*MatchHeader), RH_DefaultTreeFlagsDefaultOpen))
					{
						ImGuiDisplayModelData(Match);

						DoFilesBlock(URH_MatchSubsystem::GetMatchFileDirectory(MatchId));

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
		bool bIsActive = pGIMatchSubsystem->GetActiveMatchId() == MatchPair.Key;
		const FString MatchHeader = FString::Printf(TEXT("Match [%s]%s"), *MatchPair.Key, bIsActive ? *ActiveFlag : TEXT(""));
		if (ImGui::TreeNodeEx(TCHAR_TO_UTF8(*MatchHeader), RH_DefaultTreeFlags))
		{
			const auto& Match = MatchPair.Value;
			const auto MatchId = Match.GetMatchId();
			ImGuiDisplayModelData(Match);

			DoFilesBlock(URH_MatchSubsystem::GetMatchFileDirectory(MatchId), true, bIsActive);

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
											const auto MatchId = MatchPair.Key;
											ImGuiDisplayModelData(MatchWithPlayers);

											DoFilesBlock(URH_MatchSubsystem::GetMatchFileDirectory(MatchId));

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

void FRHDTW_Match::DoFilesBlock(const FRH_FileApiDirectory& Directory, bool bDownload, bool bUpload)
{
	auto* GI = GetGameInstance();
	if (GI == nullptr)
	{
		return;
	}

	auto* pGISS = GI->GetSubsystem<URH_GameInstanceSubsystem>();
	if (pGISS == nullptr)
	{
		return;
	}

	auto FileSubsystem = pGISS->GetFileSubsystem();

	if (FileSubsystem != nullptr)
	{
		ImGui::Separator();

		if (bDownload)
		{
			ImGui::InputText("Download Directory", &DownloadDirectory);

			ImGui::BeginDisabled(DownloadDirectory.IsEmpty());
			{
				if (ImGui::Button("Download Files"))
				{
					FileSubsystem->DownloadAllFiles(Directory, DownloadDirectory);
				}
				ImGui::SameLine();
				if (ImGui::Button("Download Developer Files"))
				{
					FileSubsystem->DownloadAllFiles(Directory, DownloadDirectory);
				}
			}
			ImGui::EndDisabled();
		}
		if (bUpload)
		{
			ImGui::InputText("Upload File Path", &UploadFilePath);
			ImGui::InputText("Remote File Name", &UploadRemoteFileName);

			ImGui::BeginDisabled(UploadFilePath.IsEmpty() || UploadRemoteFileName.IsEmpty());
			{
				if (ImGui::Button("Upload File"))
				{
					FileSubsystem->UploadFile(Directory, UploadRemoteFileName, UploadFilePath);
				}
			}
			ImGui::EndDisabled();
		}

	}
}