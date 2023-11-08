// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "QueueConfig.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_QueueConfig

void FRHAPI_QueueConfig::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("queue_id"));
    RallyHereAPI::WriteJsonValue(Writer, QueueId);
    Writer->WriteIdentifierPrefix(TEXT("active"));
    RallyHereAPI::WriteJsonValue(Writer, Active);
    Writer->WriteIdentifierPrefix(TEXT("ranking_type"));
    RallyHereAPI::WriteJsonValue(Writer, RankingType);
    Writer->WriteIdentifierPrefix(TEXT("num_sides"));
    RallyHereAPI::WriteJsonValue(Writer, NumSides);
    Writer->WriteIdentifierPrefix(TEXT("max_players_per_side"));
    RallyHereAPI::WriteJsonValue(Writer, MaxPlayersPerSide);
    Writer->WriteIdentifierPrefix(TEXT("min_players_per_side"));
    RallyHereAPI::WriteJsonValue(Writer, MinPlayersPerSide);
    Writer->WriteIdentifierPrefix(TEXT("max_queue_group_size"));
    RallyHereAPI::WriteJsonValue(Writer, MaxQueueGroupSize);
    Writer->WriteIdentifierPrefix(TEXT("match_making_template_group_id"));
    RallyHereAPI::WriteJsonValue(Writer, MatchMakingTemplateGroupId);
    Writer->WriteObjectEnd();
}

bool FRHAPI_QueueConfig::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonQueueIdField = (*Object)->TryGetField(TEXT("queue_id"));
    ParseSuccess &= JsonQueueIdField.IsValid() && !JsonQueueIdField->IsNull() && TryGetJsonValue(JsonQueueIdField, QueueId);
    const TSharedPtr<FJsonValue> JsonActiveField = (*Object)->TryGetField(TEXT("active"));
    ParseSuccess &= JsonActiveField.IsValid() && !JsonActiveField->IsNull() && TryGetJsonValue(JsonActiveField, Active);
    const TSharedPtr<FJsonValue> JsonRankingTypeField = (*Object)->TryGetField(TEXT("ranking_type"));
    ParseSuccess &= JsonRankingTypeField.IsValid() && !JsonRankingTypeField->IsNull() && TryGetJsonValue(JsonRankingTypeField, RankingType);
    const TSharedPtr<FJsonValue> JsonNumSidesField = (*Object)->TryGetField(TEXT("num_sides"));
    ParseSuccess &= JsonNumSidesField.IsValid() && !JsonNumSidesField->IsNull() && TryGetJsonValue(JsonNumSidesField, NumSides);
    const TSharedPtr<FJsonValue> JsonMaxPlayersPerSideField = (*Object)->TryGetField(TEXT("max_players_per_side"));
    ParseSuccess &= JsonMaxPlayersPerSideField.IsValid() && !JsonMaxPlayersPerSideField->IsNull() && TryGetJsonValue(JsonMaxPlayersPerSideField, MaxPlayersPerSide);
    const TSharedPtr<FJsonValue> JsonMinPlayersPerSideField = (*Object)->TryGetField(TEXT("min_players_per_side"));
    ParseSuccess &= JsonMinPlayersPerSideField.IsValid() && !JsonMinPlayersPerSideField->IsNull() && TryGetJsonValue(JsonMinPlayersPerSideField, MinPlayersPerSide);
    const TSharedPtr<FJsonValue> JsonMaxQueueGroupSizeField = (*Object)->TryGetField(TEXT("max_queue_group_size"));
    ParseSuccess &= JsonMaxQueueGroupSizeField.IsValid() && !JsonMaxQueueGroupSizeField->IsNull() && TryGetJsonValue(JsonMaxQueueGroupSizeField, MaxQueueGroupSize);
    const TSharedPtr<FJsonValue> JsonMatchMakingTemplateGroupIdField = (*Object)->TryGetField(TEXT("match_making_template_group_id"));
    ParseSuccess &= JsonMatchMakingTemplateGroupIdField.IsValid() && !JsonMatchMakingTemplateGroupIdField->IsNull() && TryGetJsonValue(JsonMatchMakingTemplateGroupIdField, MatchMakingTemplateGroupId);

    return ParseSuccess;
}

