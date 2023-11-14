// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "Session.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_Session

void FRHAPI_Session::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("type"));
    RallyHereAPI::WriteJsonValue(Writer, Type);
    Writer->WriteIdentifierPrefix(TEXT("session_id"));
    RallyHereAPI::WriteJsonValue(Writer, SessionId);
    if (Instance_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("instance"));
        RallyHereAPI::WriteJsonValue(Writer, Instance_Optional);
    }
    if (Match_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("match"));
        RallyHereAPI::WriteJsonValue(Writer, Match_Optional);
    }
    if (Matchmaking_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("matchmaking"));
        RallyHereAPI::WriteJsonValue(Writer, Matchmaking_Optional);
    }
    if (Backfill_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("backfill"));
        RallyHereAPI::WriteJsonValue(Writer, Backfill_Optional);
    }
    if (Browser_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("browser"));
        RallyHereAPI::WriteJsonValue(Writer, Browser_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("joinable"));
    RallyHereAPI::WriteJsonValue(Writer, Joinable);
    Writer->WriteIdentifierPrefix(TEXT("teams"));
    RallyHereAPI::WriteJsonValue(Writer, Teams);
    if (PlatformSession_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("platform_session"));
        RallyHereAPI::WriteJsonValue(Writer, PlatformSession_Optional);
    }
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("created"));
    RallyHereAPI::WriteJsonValue(Writer, Created);
    if (RegionId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("region_id"));
        RallyHereAPI::WriteJsonValue(Writer, RegionId_Optional);
    }
    if (CreatedByMatchmaking_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("created_by_matchmaking"));
        RallyHereAPI::WriteJsonValue(Writer, CreatedByMatchmaking_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_Session::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonTypeField = (*Object)->TryGetField(TEXT("type"));
    ParseSuccess &= JsonTypeField.IsValid() && !JsonTypeField->IsNull() && TryGetJsonValue(JsonTypeField, Type);
    const TSharedPtr<FJsonValue> JsonSessionIdField = (*Object)->TryGetField(TEXT("session_id"));
    ParseSuccess &= JsonSessionIdField.IsValid() && !JsonSessionIdField->IsNull() && TryGetJsonValue(JsonSessionIdField, SessionId);
    const TSharedPtr<FJsonValue> JsonInstanceField = (*Object)->TryGetField(TEXT("instance"));
    if (JsonInstanceField.IsValid() && !JsonInstanceField->IsNull())
    {
        Instance_IsSet = TryGetJsonValue(JsonInstanceField, Instance_Optional);
        ParseSuccess &= Instance_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonMatchField = (*Object)->TryGetField(TEXT("match"));
    if (JsonMatchField.IsValid() && !JsonMatchField->IsNull())
    {
        Match_IsSet = TryGetJsonValue(JsonMatchField, Match_Optional);
        ParseSuccess &= Match_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonMatchmakingField = (*Object)->TryGetField(TEXT("matchmaking"));
    if (JsonMatchmakingField.IsValid() && !JsonMatchmakingField->IsNull())
    {
        Matchmaking_IsSet = TryGetJsonValue(JsonMatchmakingField, Matchmaking_Optional);
        ParseSuccess &= Matchmaking_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonBackfillField = (*Object)->TryGetField(TEXT("backfill"));
    if (JsonBackfillField.IsValid() && !JsonBackfillField->IsNull())
    {
        Backfill_IsSet = TryGetJsonValue(JsonBackfillField, Backfill_Optional);
        ParseSuccess &= Backfill_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonBrowserField = (*Object)->TryGetField(TEXT("browser"));
    if (JsonBrowserField.IsValid() && !JsonBrowserField->IsNull())
    {
        Browser_IsSet = TryGetJsonValue(JsonBrowserField, Browser_Optional);
        ParseSuccess &= Browser_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonJoinableField = (*Object)->TryGetField(TEXT("joinable"));
    ParseSuccess &= JsonJoinableField.IsValid() && !JsonJoinableField->IsNull() && TryGetJsonValue(JsonJoinableField, Joinable);
    const TSharedPtr<FJsonValue> JsonTeamsField = (*Object)->TryGetField(TEXT("teams"));
    ParseSuccess &= JsonTeamsField.IsValid() && !JsonTeamsField->IsNull() && TryGetJsonValue(JsonTeamsField, Teams);
    const TSharedPtr<FJsonValue> JsonPlatformSessionField = (*Object)->TryGetField(TEXT("platform_session"));
    if (JsonPlatformSessionField.IsValid() && !JsonPlatformSessionField->IsNull())
    {
        PlatformSession_IsSet = TryGetJsonValue(JsonPlatformSessionField, PlatformSession_Optional);
        ParseSuccess &= PlatformSession_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCreatedField = (*Object)->TryGetField(TEXT("created"));
    ParseSuccess &= JsonCreatedField.IsValid() && !JsonCreatedField->IsNull() && TryGetJsonValue(JsonCreatedField, Created);
    const TSharedPtr<FJsonValue> JsonRegionIdField = (*Object)->TryGetField(TEXT("region_id"));
    if (JsonRegionIdField.IsValid() && !JsonRegionIdField->IsNull())
    {
        RegionId_IsSet = TryGetJsonValue(JsonRegionIdField, RegionId_Optional);
        ParseSuccess &= RegionId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCreatedByMatchmakingField = (*Object)->TryGetField(TEXT("created_by_matchmaking"));
    if (JsonCreatedByMatchmakingField.IsValid() && !JsonCreatedByMatchmakingField->IsNull())
    {
        CreatedByMatchmaking_IsSet = TryGetJsonValue(JsonCreatedByMatchmakingField, CreatedByMatchmaking_Optional);
        ParseSuccess &= CreatedByMatchmaking_IsSet;
    }

    return ParseSuccess;
}

