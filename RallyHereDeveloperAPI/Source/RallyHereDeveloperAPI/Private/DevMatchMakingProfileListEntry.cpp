// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevMatchMakingProfileListEntry.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevMatchMakingProfileListEntry

void FRHAPI_DevMatchMakingProfileListEntry::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("profile_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, ProfileId);
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
    Writer->WriteIdentifierPrefix(TEXT("profile_list_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, ProfileListId);
    Writer->WriteIdentifierPrefix(TEXT("profile_list_entry_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, ProfileListEntryId);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevMatchMakingProfileListEntry::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonProfileIdField = (*Object)->TryGetField(TEXT("profile_id"));
    ParseSuccess &= JsonProfileIdField.IsValid() && !JsonProfileIdField->IsNull() && TryGetJsonValue(JsonProfileIdField, ProfileId);
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
    const TSharedPtr<FJsonValue> JsonProfileListIdField = (*Object)->TryGetField(TEXT("profile_list_id"));
    ParseSuccess &= JsonProfileListIdField.IsValid() && !JsonProfileListIdField->IsNull() && TryGetJsonValue(JsonProfileListIdField, ProfileListId);
    const TSharedPtr<FJsonValue> JsonProfileListEntryIdField = (*Object)->TryGetField(TEXT("profile_list_entry_id"));
    ParseSuccess &= JsonProfileListEntryIdField.IsValid() && !JsonProfileListEntryIdField->IsNull() && TryGetJsonValue(JsonProfileListEntryIdField, ProfileListEntryId);

    return ParseSuccess;
}

