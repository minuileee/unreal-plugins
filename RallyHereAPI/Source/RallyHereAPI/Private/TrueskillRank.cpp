// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "TrueskillRank.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_TrueskillRank

void FRHAPI_TrueskillRank::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("player_uuid"));
    RallyHereAPI::WriteJsonValue(Writer, PlayerUuid);
    Writer->WriteIdentifierPrefix(TEXT("rank"));
    RallyHereAPI::WriteJsonValue(Writer, Rank);
    Writer->WriteIdentifierPrefix(TEXT("seconds_in_match"));
    RallyHereAPI::WriteJsonValue(Writer, SecondsInMatch);
    Writer->WriteObjectEnd();
}

bool FRHAPI_TrueskillRank::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonPlayerUuidField = (*Object)->TryGetField(TEXT("player_uuid"));
    ParseSuccess &= JsonPlayerUuidField.IsValid() && !JsonPlayerUuidField->IsNull() && TryGetJsonValue(JsonPlayerUuidField, PlayerUuid);
    const TSharedPtr<FJsonValue> JsonRankField = (*Object)->TryGetField(TEXT("rank"));
    ParseSuccess &= JsonRankField.IsValid() && !JsonRankField->IsNull() && TryGetJsonValue(JsonRankField, Rank);
    const TSharedPtr<FJsonValue> JsonSecondsInMatchField = (*Object)->TryGetField(TEXT("seconds_in_match"));
    ParseSuccess &= JsonSecondsInMatchField.IsValid() && !JsonSecondsInMatchField->IsNull() && TryGetJsonValue(JsonSecondsInMatchField, SecondsInMatch);

    return ParseSuccess;
}

