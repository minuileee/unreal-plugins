// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevVendor.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevVendor

void FRHAPI_DevVendor::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
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
    if (SandboxId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("sandbox_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, SandboxId_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("vendor_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, VendorId);
    if (LegacyVendorId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("legacy_vendor_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LegacyVendorId_Optional);
    }
    if (VendorType_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("vendor_type"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(VendorType_Optional));
    }
    if (Loot_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("loot"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Loot_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevVendor::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
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
    const TSharedPtr<FJsonValue> JsonSandboxIdField = (*Object)->TryGetField(TEXT("sandbox_id"));
    if (JsonSandboxIdField.IsValid() && !JsonSandboxIdField->IsNull())
    {
        SandboxId_IsSet = TryGetJsonValue(JsonSandboxIdField, SandboxId_Optional);
        ParseSuccess &= SandboxId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonVendorIdField = (*Object)->TryGetField(TEXT("vendor_id"));
    ParseSuccess &= JsonVendorIdField.IsValid() && !JsonVendorIdField->IsNull() && TryGetJsonValue(JsonVendorIdField, VendorId);
    const TSharedPtr<FJsonValue> JsonLegacyVendorIdField = (*Object)->TryGetField(TEXT("legacy_vendor_id"));
    if (JsonLegacyVendorIdField.IsValid() && !JsonLegacyVendorIdField->IsNull())
    {
        LegacyVendorId_IsSet = TryGetJsonValue(JsonLegacyVendorIdField, LegacyVendorId_Optional);
        ParseSuccess &= LegacyVendorId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonVendorTypeField = (*Object)->TryGetField(TEXT("vendor_type"));
    if (JsonVendorTypeField.IsValid() && !JsonVendorTypeField->IsNull())
    {
        VendorType_IsSet = TryGetJsonValue(JsonVendorTypeField, VendorType_Optional);
        ParseSuccess &= VendorType_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLootField = (*Object)->TryGetField(TEXT("loot"));
    if (JsonLootField.IsValid() && !JsonLootField->IsNull())
    {
        Loot_IsSet = TryGetJsonValue(JsonLootField, Loot_Optional);
        ParseSuccess &= Loot_IsSet;
    }

    return ParseSuccess;
}

