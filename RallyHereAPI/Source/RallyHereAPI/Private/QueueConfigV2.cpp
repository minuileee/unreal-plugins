// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "QueueConfigV2.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_QueueConfigV2

void FRHAPI_QueueConfigV2::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("queue_id"));
    RallyHereAPI::WriteJsonValue(Writer, QueueId);
    Writer->WriteIdentifierPrefix(TEXT("active"));
    RallyHereAPI::WriteJsonValue(Writer, Active);
    Writer->WriteIdentifierPrefix(TEXT("max_queue_group_size"));
    RallyHereAPI::WriteJsonValue(Writer, MaxQueueGroupSize);
    Writer->WriteIdentifierPrefix(TEXT("match_making_template_group_id"));
    RallyHereAPI::WriteJsonValue(Writer, MatchMakingTemplateGroupId);
    if (LegacyConfig_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("legacy_config"));
        RallyHereAPI::WriteJsonValue(Writer, LegacyConfig_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_QueueConfigV2::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonQueueIdField = (*Object)->TryGetField(TEXT("queue_id"));
    ParseSuccess &= JsonQueueIdField.IsValid() && !JsonQueueIdField->IsNull() && TryGetJsonValue(JsonQueueIdField, QueueId);
    const TSharedPtr<FJsonValue> JsonActiveField = (*Object)->TryGetField(TEXT("active"));
    ParseSuccess &= JsonActiveField.IsValid() && !JsonActiveField->IsNull() && TryGetJsonValue(JsonActiveField, Active);
    const TSharedPtr<FJsonValue> JsonMaxQueueGroupSizeField = (*Object)->TryGetField(TEXT("max_queue_group_size"));
    ParseSuccess &= JsonMaxQueueGroupSizeField.IsValid() && !JsonMaxQueueGroupSizeField->IsNull() && TryGetJsonValue(JsonMaxQueueGroupSizeField, MaxQueueGroupSize);
    const TSharedPtr<FJsonValue> JsonMatchMakingTemplateGroupIdField = (*Object)->TryGetField(TEXT("match_making_template_group_id"));
    ParseSuccess &= JsonMatchMakingTemplateGroupIdField.IsValid() && !JsonMatchMakingTemplateGroupIdField->IsNull() && TryGetJsonValue(JsonMatchMakingTemplateGroupIdField, MatchMakingTemplateGroupId);
    const TSharedPtr<FJsonValue> JsonLegacyConfigField = (*Object)->TryGetField(TEXT("legacy_config"));
    if (JsonLegacyConfigField.IsValid() && !JsonLegacyConfigField->IsNull())
    {
        LegacyConfig_IsSet = TryGetJsonValue(JsonLegacyConfigField, LegacyConfig_Optional);
        ParseSuccess &= LegacyConfig_IsSet;
    }

    return ParseSuccess;
}
