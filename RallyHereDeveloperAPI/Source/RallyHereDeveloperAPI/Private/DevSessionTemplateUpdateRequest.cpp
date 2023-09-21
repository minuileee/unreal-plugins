// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevSessionTemplateUpdateRequest.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevSessionTemplateUpdateRequest

void FRHAPI_DevSessionTemplateUpdateRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (SessionType_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("session_type"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, SessionType_Optional);
    }
    if (EngineSessionType_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("engine_session_type"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EngineSessionType_Optional);
    }
    if (CanJoinMatchmaking_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("can_join_matchmaking"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CanJoinMatchmaking_Optional);
    }
    if (CanBeCreatedByPlayers_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("can_be_created_by_players"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CanBeCreatedByPlayers_Optional);
    }
    if (PubliclyJoinable_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("publicly_joinable"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, PubliclyJoinable_Optional);
    }
    if (AutoAddToBrowser_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("auto_add_to_browser"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, AutoAddToBrowser_Optional);
    }
    if (AutoBrowserParams_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("auto_browser_params"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, AutoBrowserParams_Optional);
    }
    if (CanBeAddedToBrowser_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("can_be_added_to_browser"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CanBeAddedToBrowser_Optional);
    }
    if (KeepAliveOnEmpty_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("keep_alive_on_empty"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, KeepAliveOnEmpty_Optional);
    }
    if (AutoStartupParams_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("auto_startup_params"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, AutoStartupParams_Optional);
    }
    if (MinSessionCount_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("min_session_count"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, MinSessionCount_Optional);
    }
    if (DefaultNumTeams_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("default_num_teams"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, DefaultNumTeams_Optional);
    }
    if (DefaultPlayersPerTeam_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("default_players_per_team"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, DefaultPlayersPerTeam_Optional);
    }
    if (CanPlayerChangeTeam_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("can_player_change_team"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CanPlayerChangeTeam_Optional);
    }
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevSessionTemplateUpdateRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonSessionTypeField = (*Object)->TryGetField(TEXT("session_type"));
    if (JsonSessionTypeField.IsValid() && !JsonSessionTypeField->IsNull())
    {
        SessionType_IsSet = TryGetJsonValue(JsonSessionTypeField, SessionType_Optional);
        ParseSuccess &= SessionType_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonEngineSessionTypeField = (*Object)->TryGetField(TEXT("engine_session_type"));
    if (JsonEngineSessionTypeField.IsValid() && !JsonEngineSessionTypeField->IsNull())
    {
        EngineSessionType_IsSet = TryGetJsonValue(JsonEngineSessionTypeField, EngineSessionType_Optional);
        ParseSuccess &= EngineSessionType_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCanJoinMatchmakingField = (*Object)->TryGetField(TEXT("can_join_matchmaking"));
    if (JsonCanJoinMatchmakingField.IsValid() && !JsonCanJoinMatchmakingField->IsNull())
    {
        CanJoinMatchmaking_IsSet = TryGetJsonValue(JsonCanJoinMatchmakingField, CanJoinMatchmaking_Optional);
        ParseSuccess &= CanJoinMatchmaking_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCanBeCreatedByPlayersField = (*Object)->TryGetField(TEXT("can_be_created_by_players"));
    if (JsonCanBeCreatedByPlayersField.IsValid() && !JsonCanBeCreatedByPlayersField->IsNull())
    {
        CanBeCreatedByPlayers_IsSet = TryGetJsonValue(JsonCanBeCreatedByPlayersField, CanBeCreatedByPlayers_Optional);
        ParseSuccess &= CanBeCreatedByPlayers_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPubliclyJoinableField = (*Object)->TryGetField(TEXT("publicly_joinable"));
    if (JsonPubliclyJoinableField.IsValid() && !JsonPubliclyJoinableField->IsNull())
    {
        PubliclyJoinable_IsSet = TryGetJsonValue(JsonPubliclyJoinableField, PubliclyJoinable_Optional);
        ParseSuccess &= PubliclyJoinable_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonAutoAddToBrowserField = (*Object)->TryGetField(TEXT("auto_add_to_browser"));
    if (JsonAutoAddToBrowserField.IsValid() && !JsonAutoAddToBrowserField->IsNull())
    {
        AutoAddToBrowser_IsSet = TryGetJsonValue(JsonAutoAddToBrowserField, AutoAddToBrowser_Optional);
        ParseSuccess &= AutoAddToBrowser_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonAutoBrowserParamsField = (*Object)->TryGetField(TEXT("auto_browser_params"));
    if (JsonAutoBrowserParamsField.IsValid() && !JsonAutoBrowserParamsField->IsNull())
    {
        AutoBrowserParams_IsSet = TryGetJsonValue(JsonAutoBrowserParamsField, AutoBrowserParams_Optional);
        ParseSuccess &= AutoBrowserParams_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCanBeAddedToBrowserField = (*Object)->TryGetField(TEXT("can_be_added_to_browser"));
    if (JsonCanBeAddedToBrowserField.IsValid() && !JsonCanBeAddedToBrowserField->IsNull())
    {
        CanBeAddedToBrowser_IsSet = TryGetJsonValue(JsonCanBeAddedToBrowserField, CanBeAddedToBrowser_Optional);
        ParseSuccess &= CanBeAddedToBrowser_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonKeepAliveOnEmptyField = (*Object)->TryGetField(TEXT("keep_alive_on_empty"));
    if (JsonKeepAliveOnEmptyField.IsValid() && !JsonKeepAliveOnEmptyField->IsNull())
    {
        KeepAliveOnEmpty_IsSet = TryGetJsonValue(JsonKeepAliveOnEmptyField, KeepAliveOnEmpty_Optional);
        ParseSuccess &= KeepAliveOnEmpty_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonAutoStartupParamsField = (*Object)->TryGetField(TEXT("auto_startup_params"));
    if (JsonAutoStartupParamsField.IsValid() && !JsonAutoStartupParamsField->IsNull())
    {
        AutoStartupParams_IsSet = TryGetJsonValue(JsonAutoStartupParamsField, AutoStartupParams_Optional);
        ParseSuccess &= AutoStartupParams_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonMinSessionCountField = (*Object)->TryGetField(TEXT("min_session_count"));
    if (JsonMinSessionCountField.IsValid() && !JsonMinSessionCountField->IsNull())
    {
        MinSessionCount_IsSet = TryGetJsonValue(JsonMinSessionCountField, MinSessionCount_Optional);
        ParseSuccess &= MinSessionCount_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonDefaultNumTeamsField = (*Object)->TryGetField(TEXT("default_num_teams"));
    if (JsonDefaultNumTeamsField.IsValid() && !JsonDefaultNumTeamsField->IsNull())
    {
        DefaultNumTeams_IsSet = TryGetJsonValue(JsonDefaultNumTeamsField, DefaultNumTeams_Optional);
        ParseSuccess &= DefaultNumTeams_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonDefaultPlayersPerTeamField = (*Object)->TryGetField(TEXT("default_players_per_team"));
    if (JsonDefaultPlayersPerTeamField.IsValid() && !JsonDefaultPlayersPerTeamField->IsNull())
    {
        DefaultPlayersPerTeam_IsSet = TryGetJsonValue(JsonDefaultPlayersPerTeamField, DefaultPlayersPerTeam_Optional);
        ParseSuccess &= DefaultPlayersPerTeam_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCanPlayerChangeTeamField = (*Object)->TryGetField(TEXT("can_player_change_team"));
    if (JsonCanPlayerChangeTeamField.IsValid() && !JsonCanPlayerChangeTeamField->IsNull())
    {
        CanPlayerChangeTeam_IsSet = TryGetJsonValue(JsonCanPlayerChangeTeamField, CanPlayerChangeTeam_Optional);
        ParseSuccess &= CanPlayerChangeTeam_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }

    return ParseSuccess;
}
