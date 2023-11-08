// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlatformSessionTemplate.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlatformSessionTemplate

void FRHAPI_PlatformSessionTemplate::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("platform_id"));
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(PlatformId));
    Writer->WriteIdentifierPrefix(TEXT("platform"));
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Platform));
    Writer->WriteIdentifierPrefix(TEXT("platform_session_type"));
    RallyHereAPI::WriteJsonValue(Writer, PlatformSessionType);
    if (MaxPlayers_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("max_players"));
        RallyHereAPI::WriteJsonValue(Writer, MaxPlayers_Optional);
    }
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_PlatformSessionTemplate::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonPlatformIdField = (*Object)->TryGetField(TEXT("platform_id"));
    ParseSuccess &= JsonPlatformIdField.IsValid() && !JsonPlatformIdField->IsNull() && TryGetJsonValue(JsonPlatformIdField, PlatformId);
    const TSharedPtr<FJsonValue> JsonPlatformField = (*Object)->TryGetField(TEXT("platform"));
    ParseSuccess &= JsonPlatformField.IsValid() && !JsonPlatformField->IsNull() && TryGetJsonValue(JsonPlatformField, Platform);
    const TSharedPtr<FJsonValue> JsonPlatformSessionTypeField = (*Object)->TryGetField(TEXT("platform_session_type"));
    ParseSuccess &= JsonPlatformSessionTypeField.IsValid() && !JsonPlatformSessionTypeField->IsNull() && TryGetJsonValue(JsonPlatformSessionTypeField, PlatformSessionType);
    const TSharedPtr<FJsonValue> JsonMaxPlayersField = (*Object)->TryGetField(TEXT("max_players"));
    if (JsonMaxPlayersField.IsValid() && !JsonMaxPlayersField->IsNull())
    {
        MaxPlayers_IsSet = TryGetJsonValue(JsonMaxPlayersField, MaxPlayers_Optional);
        ParseSuccess &= MaxPlayers_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }

    return ParseSuccess;
}

