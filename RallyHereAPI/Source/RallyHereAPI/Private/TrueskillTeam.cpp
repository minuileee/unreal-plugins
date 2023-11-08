// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "TrueskillTeam.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_TrueskillTeam

void FRHAPI_TrueskillTeam::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("players"));
    RallyHereAPI::WriteJsonValue(Writer, Players);
    Writer->WriteIdentifierPrefix(TEXT("team_rank"));
    RallyHereAPI::WriteJsonValue(Writer, TeamRank);
    Writer->WriteObjectEnd();
}

bool FRHAPI_TrueskillTeam::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonPlayersField = (*Object)->TryGetField(TEXT("players"));
    ParseSuccess &= JsonPlayersField.IsValid() && !JsonPlayersField->IsNull() && TryGetJsonValue(JsonPlayersField, Players);
    const TSharedPtr<FJsonValue> JsonTeamRankField = (*Object)->TryGetField(TEXT("team_rank"));
    ParseSuccess &= JsonTeamRankField.IsValid() && !JsonTeamRankField->IsNull() && TryGetJsonValue(JsonTeamRankField, TeamRank);

    return ParseSuccess;
}

