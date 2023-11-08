// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevSettingType.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevSettingType

void FRHAPI_DevSettingType::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
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
    Writer->WriteIdentifierPrefix(TEXT("setting_type_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, SettingTypeId);
    Writer->WriteIdentifierPrefix(TEXT("type"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Type);
    if (Version_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("version"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Version_Optional);
    }
    if (ValueJsonschema_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("value_jsonschema"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, ValueJsonschema_Optional);
    }
    if (AllowUpdate_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("allow_update"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, AllowUpdate_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevSettingType::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

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
    const TSharedPtr<FJsonValue> JsonSettingTypeIdField = (*Object)->TryGetField(TEXT("setting_type_id"));
    ParseSuccess &= JsonSettingTypeIdField.IsValid() && !JsonSettingTypeIdField->IsNull() && TryGetJsonValue(JsonSettingTypeIdField, SettingTypeId);
    const TSharedPtr<FJsonValue> JsonTypeField = (*Object)->TryGetField(TEXT("type"));
    ParseSuccess &= JsonTypeField.IsValid() && !JsonTypeField->IsNull() && TryGetJsonValue(JsonTypeField, Type);
    const TSharedPtr<FJsonValue> JsonVersionField = (*Object)->TryGetField(TEXT("version"));
    if (JsonVersionField.IsValid() && !JsonVersionField->IsNull())
    {
        Version_IsSet = TryGetJsonValue(JsonVersionField, Version_Optional);
        ParseSuccess &= Version_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonValueJsonschemaField = (*Object)->TryGetField(TEXT("value_jsonschema"));
    if (JsonValueJsonschemaField.IsValid() && !JsonValueJsonschemaField->IsNull())
    {
        ValueJsonschema_IsSet = TryGetJsonValue(JsonValueJsonschemaField, ValueJsonschema_Optional);
        ParseSuccess &= ValueJsonschema_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonAllowUpdateField = (*Object)->TryGetField(TEXT("allow_update"));
    if (JsonAllowUpdateField.IsValid() && !JsonAllowUpdateField->IsNull())
    {
        AllowUpdate_IsSet = TryGetJsonValue(JsonAllowUpdateField, AllowUpdate_Optional);
        ParseSuccess &= AllowUpdate_IsSet;
    }

    return ParseSuccess;
}

