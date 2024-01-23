// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevKv.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevKv

void FRHAPI_DevKv::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (SandboxId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("sandbox_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, SandboxId_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("key"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Key);
    if (Value_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("value"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Value_Optional);
    }
    if (Notes_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("notes"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Notes_Optional);
    }
    if (CreatedTimestamp_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("created_timestamp"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CreatedTimestamp_Optional);
    }
    if (LastModifiedTimestamp_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("last_modified_timestamp"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LastModifiedTimestamp_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevKv::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonSandboxIdField = (*Object)->TryGetField(TEXT("sandbox_id"));
    if (JsonSandboxIdField.IsValid() && !JsonSandboxIdField->IsNull())
    {
        SandboxId_IsSet = TryGetJsonValue(JsonSandboxIdField, SandboxId_Optional);
        ParseSuccess &= SandboxId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonKeyField = (*Object)->TryGetField(TEXT("key"));
    ParseSuccess &= JsonKeyField.IsValid() && !JsonKeyField->IsNull() && TryGetJsonValue(JsonKeyField, Key);
    const TSharedPtr<FJsonValue> JsonValueField = (*Object)->TryGetField(TEXT("value"));
    if (JsonValueField.IsValid() && !JsonValueField->IsNull())
    {
        Value_IsSet = TryGetJsonValue(JsonValueField, Value_Optional);
        ParseSuccess &= Value_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonNotesField = (*Object)->TryGetField(TEXT("notes"));
    if (JsonNotesField.IsValid() && !JsonNotesField->IsNull())
    {
        Notes_IsSet = TryGetJsonValue(JsonNotesField, Notes_Optional);
        ParseSuccess &= Notes_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCreatedTimestampField = (*Object)->TryGetField(TEXT("created_timestamp"));
    if (JsonCreatedTimestampField.IsValid() && !JsonCreatedTimestampField->IsNull())
    {
        CreatedTimestamp_IsSet = TryGetJsonValue(JsonCreatedTimestampField, CreatedTimestamp_Optional);
        ParseSuccess &= CreatedTimestamp_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLastModifiedTimestampField = (*Object)->TryGetField(TEXT("last_modified_timestamp"));
    if (JsonLastModifiedTimestampField.IsValid() && !JsonLastModifiedTimestampField->IsNull())
    {
        LastModifiedTimestamp_IsSet = TryGetJsonValue(JsonLastModifiedTimestampField, LastModifiedTimestamp_Optional);
        ParseSuccess &= LastModifiedTimestamp_IsSet;
    }

    return ParseSuccess;
}

