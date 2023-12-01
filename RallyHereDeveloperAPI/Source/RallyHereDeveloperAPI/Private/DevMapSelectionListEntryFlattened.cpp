// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevMapSelectionListEntryFlattened.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevMapSelectionListEntryFlattened

void FRHAPI_DevMapSelectionListEntryFlattened::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("map_weight"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, MapWeight);
    Writer->WriteIdentifierPrefix(TEXT("map_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, MapId);
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
    Writer->WriteIdentifierPrefix(TEXT("map_selection_list_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, MapSelectionListId);
    Writer->WriteIdentifierPrefix(TEXT("map_selection_list_entry_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, MapSelectionListEntryId);
    if (Map_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("map"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Map_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevMapSelectionListEntryFlattened::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonMapWeightField = (*Object)->TryGetField(TEXT("map_weight"));
    ParseSuccess &= JsonMapWeightField.IsValid() && !JsonMapWeightField->IsNull() && TryGetJsonValue(JsonMapWeightField, MapWeight);
    const TSharedPtr<FJsonValue> JsonMapIdField = (*Object)->TryGetField(TEXT("map_id"));
    ParseSuccess &= JsonMapIdField.IsValid() && !JsonMapIdField->IsNull() && TryGetJsonValue(JsonMapIdField, MapId);
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
    const TSharedPtr<FJsonValue> JsonMapSelectionListIdField = (*Object)->TryGetField(TEXT("map_selection_list_id"));
    ParseSuccess &= JsonMapSelectionListIdField.IsValid() && !JsonMapSelectionListIdField->IsNull() && TryGetJsonValue(JsonMapSelectionListIdField, MapSelectionListId);
    const TSharedPtr<FJsonValue> JsonMapSelectionListEntryIdField = (*Object)->TryGetField(TEXT("map_selection_list_entry_id"));
    ParseSuccess &= JsonMapSelectionListEntryIdField.IsValid() && !JsonMapSelectionListEntryIdField->IsNull() && TryGetJsonValue(JsonMapSelectionListEntryIdField, MapSelectionListEntryId);
    const TSharedPtr<FJsonValue> JsonMapField = (*Object)->TryGetField(TEXT("map"));
    if (JsonMapField.IsValid() && !JsonMapField->IsNull())
    {
        Map_IsSet = TryGetJsonValue(JsonMapField, Map_Optional);
        ParseSuccess &= Map_IsSet;
    }

    return ParseSuccess;
}

