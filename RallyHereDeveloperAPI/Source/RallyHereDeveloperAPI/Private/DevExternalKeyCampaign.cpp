// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevExternalKeyCampaign.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevExternalKeyCampaign

void FRHAPI_DevExternalKeyCampaign::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
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
    if (KeyTypes_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("key_types"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, KeyTypes_Optional);
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
    Writer->WriteIdentifierPrefix(TEXT("external_key_campaign_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, ExternalKeyCampaignId);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevExternalKeyCampaign::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }
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
    const TSharedPtr<FJsonValue> JsonKeyTypesField = (*Object)->TryGetField(TEXT("key_types"));
    if (JsonKeyTypesField.IsValid() && !JsonKeyTypesField->IsNull())
    {
        KeyTypes_IsSet = TryGetJsonValue(JsonKeyTypesField, KeyTypes_Optional);
        ParseSuccess &= KeyTypes_IsSet;
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
    const TSharedPtr<FJsonValue> JsonExternalKeyCampaignIdField = (*Object)->TryGetField(TEXT("external_key_campaign_id"));
    ParseSuccess &= JsonExternalKeyCampaignIdField.IsValid() && !JsonExternalKeyCampaignIdField->IsNull() && TryGetJsonValue(JsonExternalKeyCampaignIdField, ExternalKeyCampaignId);

    return ParseSuccess;
}
