// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlayerReportCreate.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlayerReportCreate

void FRHAPI_PlayerReportCreate::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (SourcePlayerUuid_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("source_player_uuid"));
        RallyHereAPI::WriteJsonValue(Writer, SourcePlayerUuid_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("reason"));
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Reason));
    if (Description_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("description"));
        RallyHereAPI::WriteJsonValue(Writer, Description_Optional);
    }
    if (SessionId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("session_id"));
        RallyHereAPI::WriteJsonValue(Writer, SessionId_Optional);
    }
    if (InstanceId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("instance_id"));
        RallyHereAPI::WriteJsonValue(Writer, InstanceId_Optional);
    }
    if (MatchId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("match_id"));
        RallyHereAPI::WriteJsonValue(Writer, MatchId_Optional);
    }
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_PlayerReportCreate::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonSourcePlayerUuidField = (*Object)->TryGetField(TEXT("source_player_uuid"));
    if (JsonSourcePlayerUuidField.IsValid() && !JsonSourcePlayerUuidField->IsNull())
    {
        SourcePlayerUuid_IsSet = TryGetJsonValue(JsonSourcePlayerUuidField, SourcePlayerUuid_Optional);
        ParseSuccess &= SourcePlayerUuid_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonReasonField = (*Object)->TryGetField(TEXT("reason"));
    ParseSuccess &= JsonReasonField.IsValid() && !JsonReasonField->IsNull() && TryGetJsonValue(JsonReasonField, Reason);
    const TSharedPtr<FJsonValue> JsonDescriptionField = (*Object)->TryGetField(TEXT("description"));
    if (JsonDescriptionField.IsValid() && !JsonDescriptionField->IsNull())
    {
        Description_IsSet = TryGetJsonValue(JsonDescriptionField, Description_Optional);
        ParseSuccess &= Description_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonSessionIdField = (*Object)->TryGetField(TEXT("session_id"));
    if (JsonSessionIdField.IsValid() && !JsonSessionIdField->IsNull())
    {
        SessionId_IsSet = TryGetJsonValue(JsonSessionIdField, SessionId_Optional);
        ParseSuccess &= SessionId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonInstanceIdField = (*Object)->TryGetField(TEXT("instance_id"));
    if (JsonInstanceIdField.IsValid() && !JsonInstanceIdField->IsNull())
    {
        InstanceId_IsSet = TryGetJsonValue(JsonInstanceIdField, InstanceId_Optional);
        ParseSuccess &= InstanceId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonMatchIdField = (*Object)->TryGetField(TEXT("match_id"));
    if (JsonMatchIdField.IsValid() && !JsonMatchIdField->IsNull())
    {
        MatchId_IsSet = TryGetJsonValue(JsonMatchIdField, MatchId_Optional);
        ParseSuccess &= MatchId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }

    return ParseSuccess;
}
