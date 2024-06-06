// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevLegacyIdGenerationConfig.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevLegacyIdGenerationConfig

void FRHAPI_DevLegacyIdGenerationConfig::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Vendor_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("vendor"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(Vendor_Optional));
    }
    if (Loot_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("loot"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(Loot_Optional));
    }
    if (Item_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("item"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(Item_Optional));
    }
    if (InventoryBucketUseRuleSet_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("inventory_bucket_use_rule_set"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(InventoryBucketUseRuleSet_Optional));
    }
    if (Xp_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("xp"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(Xp_Optional));
    }
    if (Role_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("role"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(Role_Optional));
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevLegacyIdGenerationConfig::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonVendorField = (*Object)->TryGetField(TEXT("vendor"));
    if (JsonVendorField.IsValid() && !JsonVendorField->IsNull())
    {
        Vendor_IsSet = TryGetJsonValue(JsonVendorField, Vendor_Optional);
        ParseSuccess &= Vendor_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLootField = (*Object)->TryGetField(TEXT("loot"));
    if (JsonLootField.IsValid() && !JsonLootField->IsNull())
    {
        Loot_IsSet = TryGetJsonValue(JsonLootField, Loot_Optional);
        ParseSuccess &= Loot_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonItemField = (*Object)->TryGetField(TEXT("item"));
    if (JsonItemField.IsValid() && !JsonItemField->IsNull())
    {
        Item_IsSet = TryGetJsonValue(JsonItemField, Item_Optional);
        ParseSuccess &= Item_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonInventoryBucketUseRuleSetField = (*Object)->TryGetField(TEXT("inventory_bucket_use_rule_set"));
    if (JsonInventoryBucketUseRuleSetField.IsValid() && !JsonInventoryBucketUseRuleSetField->IsNull())
    {
        InventoryBucketUseRuleSet_IsSet = TryGetJsonValue(JsonInventoryBucketUseRuleSetField, InventoryBucketUseRuleSet_Optional);
        ParseSuccess &= InventoryBucketUseRuleSet_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonXpField = (*Object)->TryGetField(TEXT("xp"));
    if (JsonXpField.IsValid() && !JsonXpField->IsNull())
    {
        Xp_IsSet = TryGetJsonValue(JsonXpField, Xp_Optional);
        ParseSuccess &= Xp_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonRoleField = (*Object)->TryGetField(TEXT("role"));
    if (JsonRoleField.IsValid() && !JsonRoleField->IsNull())
    {
        Role_IsSet = TryGetJsonValue(JsonRoleField, Role_Optional);
        ParseSuccess &= Role_IsSet;
    }

    return ParseSuccess;
}
