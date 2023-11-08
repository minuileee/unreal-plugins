// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlatformSessionPlayer.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlatformSessionPlayer

void FRHAPI_PlatformSessionPlayer::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (PlayerId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("player_id"));
        RallyHereAPI::WriteJsonValue(Writer, PlayerId_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("player_uuid"));
    RallyHereAPI::WriteJsonValue(Writer, PlayerUuid);
    if (Leader_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("leader"));
        RallyHereAPI::WriteJsonValue(Writer, Leader_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_PlatformSessionPlayer::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonPlayerIdField = (*Object)->TryGetField(TEXT("player_id"));
    if (JsonPlayerIdField.IsValid() && !JsonPlayerIdField->IsNull())
    {
        PlayerId_IsSet = TryGetJsonValue(JsonPlayerIdField, PlayerId_Optional);
        ParseSuccess &= PlayerId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPlayerUuidField = (*Object)->TryGetField(TEXT("player_uuid"));
    ParseSuccess &= JsonPlayerUuidField.IsValid() && !JsonPlayerUuidField->IsNull() && TryGetJsonValue(JsonPlayerUuidField, PlayerUuid);
    const TSharedPtr<FJsonValue> JsonLeaderField = (*Object)->TryGetField(TEXT("leader"));
    if (JsonLeaderField.IsValid() && !JsonLeaderField->IsNull())
    {
        Leader_IsSet = TryGetJsonValue(JsonLeaderField, Leader_Optional);
        ParseSuccess &= Leader_IsSet;
    }

    return ParseSuccess;
}

