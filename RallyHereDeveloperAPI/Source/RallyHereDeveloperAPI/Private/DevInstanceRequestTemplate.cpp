// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevInstanceRequestTemplate.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevInstanceRequestTemplate

void FRHAPI_DevInstanceRequestTemplate::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("map_selection_list_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, MapSelectionListId);
    Writer->WriteIdentifierPrefix(TEXT("instance_request_template_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, InstanceRequestTemplateId);
    Writer->WriteIdentifierPrefix(TEXT("default_host_type"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(DefaultHostType));
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
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevInstanceRequestTemplate::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonMapSelectionListIdField = (*Object)->TryGetField(TEXT("map_selection_list_id"));
    ParseSuccess &= JsonMapSelectionListIdField.IsValid() && !JsonMapSelectionListIdField->IsNull() && TryGetJsonValue(JsonMapSelectionListIdField, MapSelectionListId);
    const TSharedPtr<FJsonValue> JsonInstanceRequestTemplateIdField = (*Object)->TryGetField(TEXT("instance_request_template_id"));
    ParseSuccess &= JsonInstanceRequestTemplateIdField.IsValid() && !JsonInstanceRequestTemplateIdField->IsNull() && TryGetJsonValue(JsonInstanceRequestTemplateIdField, InstanceRequestTemplateId);
    const TSharedPtr<FJsonValue> JsonDefaultHostTypeField = (*Object)->TryGetField(TEXT("default_host_type"));
    ParseSuccess &= JsonDefaultHostTypeField.IsValid() && !JsonDefaultHostTypeField->IsNull() && TryGetJsonValue(JsonDefaultHostTypeField, DefaultHostType);
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

    return ParseSuccess;
}

