// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlayerData.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlayerData

void FRHAPI_PlayerData::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("player_uuid"));
    RallyHereAPI::WriteJsonValue(Writer, PlayerUuid);
    Writer->WriteIdentifierPrefix(TEXT("rating"));
    RallyHereAPI::WriteJsonValue(Writer, Rating);
    Writer->WriteIdentifierPrefix(TEXT("ranking_type"));
    RallyHereAPI::WriteJsonValue(Writer, RankingType);
    Writer->WriteObjectEnd();
}

bool FRHAPI_PlayerData::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("player_uuid"), PlayerUuid);
    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("rating"), Rating);
    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("ranking_type"), RankingType);

    return ParseSuccess;
}

