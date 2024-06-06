// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevSettingTypeRequest.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevSettingTypeRequest

void FRHAPI_DevSettingTypeRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Name_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("name"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Name_Optional);
    }
    if (Description_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("description"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Description_Optional);
    }
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    if (SettingTypeUniqueId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("setting_type_unique_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, SettingTypeUniqueId_Optional);
    }
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
    if (KeyRegex_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("key_regex"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, KeyRegex_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("type"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Type);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevSettingTypeRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonNameField = (*Object)->TryGetField(TEXT("name"));
    if (JsonNameField.IsValid() && !JsonNameField->IsNull())
    {
        Name_IsSet = TryGetJsonValue(JsonNameField, Name_Optional);
        ParseSuccess &= Name_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonDescriptionField = (*Object)->TryGetField(TEXT("description"));
    if (JsonDescriptionField.IsValid() && !JsonDescriptionField->IsNull())
    {
        Description_IsSet = TryGetJsonValue(JsonDescriptionField, Description_Optional);
        ParseSuccess &= Description_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonSettingTypeUniqueIdField = (*Object)->TryGetField(TEXT("setting_type_unique_id"));
    if (JsonSettingTypeUniqueIdField.IsValid() && !JsonSettingTypeUniqueIdField->IsNull())
    {
        SettingTypeUniqueId_IsSet = TryGetJsonValue(JsonSettingTypeUniqueIdField, SettingTypeUniqueId_Optional);
        ParseSuccess &= SettingTypeUniqueId_IsSet;
    }
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
    const TSharedPtr<FJsonValue> JsonKeyRegexField = (*Object)->TryGetField(TEXT("key_regex"));
    if (JsonKeyRegexField.IsValid() && !JsonKeyRegexField->IsNull())
    {
        KeyRegex_IsSet = TryGetJsonValue(JsonKeyRegexField, KeyRegex_Optional);
        ParseSuccess &= KeyRegex_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonTypeField = (*Object)->TryGetField(TEXT("type"));
    ParseSuccess &= JsonTypeField.IsValid() && !JsonTypeField->IsNull() && TryGetJsonValue(JsonTypeField, Type);

    return ParseSuccess;
}
