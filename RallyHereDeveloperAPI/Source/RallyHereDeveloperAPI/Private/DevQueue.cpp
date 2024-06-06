// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevQueue.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevQueue

void FRHAPI_DevQueue::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("active"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Active);
    Writer->WriteIdentifierPrefix(TEXT("max_queue_group_size"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, MaxQueueGroupSize);
    Writer->WriteIdentifierPrefix(TEXT("match_making_template_group_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, MatchMakingTemplateGroupId);
    if (LegacyConfig_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("legacy_config"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LegacyConfig_Optional);
    }
    if (SandboxId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("sandbox_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, SandboxId_Optional);
    }
    if (LastModifiedAccountId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("last_modified_account_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LastModifiedAccountId_Optional);
    }
    if (LastModifiedTimestamp_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("last_modified_timestamp"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LastModifiedTimestamp_Optional);
    }
    if (CreatedTimestamp_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("created_timestamp"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CreatedTimestamp_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("queue_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, QueueId);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevQueue::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

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
    const TSharedPtr<FJsonValue> JsonSandboxIdField = (*Object)->TryGetField(TEXT("sandbox_id"));
    if (JsonSandboxIdField.IsValid() && !JsonSandboxIdField->IsNull())
    {
        SandboxId_IsSet = TryGetJsonValue(JsonSandboxIdField, SandboxId_Optional);
        ParseSuccess &= SandboxId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLastModifiedAccountIdField = (*Object)->TryGetField(TEXT("last_modified_account_id"));
    if (JsonLastModifiedAccountIdField.IsValid() && !JsonLastModifiedAccountIdField->IsNull())
    {
        LastModifiedAccountId_IsSet = TryGetJsonValue(JsonLastModifiedAccountIdField, LastModifiedAccountId_Optional);
        ParseSuccess &= LastModifiedAccountId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLastModifiedTimestampField = (*Object)->TryGetField(TEXT("last_modified_timestamp"));
    if (JsonLastModifiedTimestampField.IsValid() && !JsonLastModifiedTimestampField->IsNull())
    {
        LastModifiedTimestamp_IsSet = TryGetJsonValue(JsonLastModifiedTimestampField, LastModifiedTimestamp_Optional);
        ParseSuccess &= LastModifiedTimestamp_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCreatedTimestampField = (*Object)->TryGetField(TEXT("created_timestamp"));
    if (JsonCreatedTimestampField.IsValid() && !JsonCreatedTimestampField->IsNull())
    {
        CreatedTimestamp_IsSet = TryGetJsonValue(JsonCreatedTimestampField, CreatedTimestamp_Optional);
        ParseSuccess &= CreatedTimestamp_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonQueueIdField = (*Object)->TryGetField(TEXT("queue_id"));
    ParseSuccess &= JsonQueueIdField.IsValid() && !JsonQueueIdField->IsNull() && TryGetJsonValue(JsonQueueIdField, QueueId);

    return ParseSuccess;
}
