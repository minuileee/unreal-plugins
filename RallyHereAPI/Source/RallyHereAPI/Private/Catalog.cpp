// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "Catalog.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_Catalog

void FRHAPI_Catalog::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (XpTables_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("xp_tables"));
        RallyHereAPI::WriteJsonValue(Writer, XpTables_Optional);
    }
    if (PortalUseRulesets_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("portal_use_rulesets"));
        RallyHereAPI::WriteJsonValue(Writer, PortalUseRulesets_Optional);
    }
    if (InventoryBucketUseRuleSets_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("inventory_bucket_use_rule_sets"));
        RallyHereAPI::WriteJsonValue(Writer, InventoryBucketUseRuleSets_Optional);
    }
    if (Vendors_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("vendors"));
        RallyHereAPI::WriteJsonValue(Writer, Vendors_Optional);
    }
    if (Loot_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("loot"));
        RallyHereAPI::WriteJsonValue(Writer, Loot_Optional);
    }
    if (Items_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("items"));
        RallyHereAPI::WriteJsonValue(Writer, Items_Optional);
    }
    if (PricePoints_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("price_points"));
        RallyHereAPI::WriteJsonValue(Writer, PricePoints_Optional);
    }
    if (TimeFrames_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("time_frames"));
        RallyHereAPI::WriteJsonValue(Writer, TimeFrames_Optional);
    }
    if (CacheInfo_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("cache_info"));
        RallyHereAPI::WriteJsonValue(Writer, CacheInfo_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_Catalog::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonXpTablesField = (*Object)->TryGetField(TEXT("xp_tables"));
    if (JsonXpTablesField.IsValid() && !JsonXpTablesField->IsNull())
    {
        XpTables_IsSet = TryGetJsonValue(JsonXpTablesField, XpTables_Optional);
        ParseSuccess &= XpTables_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPortalUseRulesetsField = (*Object)->TryGetField(TEXT("portal_use_rulesets"));
    if (JsonPortalUseRulesetsField.IsValid() && !JsonPortalUseRulesetsField->IsNull())
    {
        PortalUseRulesets_IsSet = TryGetJsonValue(JsonPortalUseRulesetsField, PortalUseRulesets_Optional);
        ParseSuccess &= PortalUseRulesets_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonInventoryBucketUseRuleSetsField = (*Object)->TryGetField(TEXT("inventory_bucket_use_rule_sets"));
    if (JsonInventoryBucketUseRuleSetsField.IsValid() && !JsonInventoryBucketUseRuleSetsField->IsNull())
    {
        InventoryBucketUseRuleSets_IsSet = TryGetJsonValue(JsonInventoryBucketUseRuleSetsField, InventoryBucketUseRuleSets_Optional);
        ParseSuccess &= InventoryBucketUseRuleSets_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonVendorsField = (*Object)->TryGetField(TEXT("vendors"));
    if (JsonVendorsField.IsValid() && !JsonVendorsField->IsNull())
    {
        Vendors_IsSet = TryGetJsonValue(JsonVendorsField, Vendors_Optional);
        ParseSuccess &= Vendors_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLootField = (*Object)->TryGetField(TEXT("loot"));
    if (JsonLootField.IsValid() && !JsonLootField->IsNull())
    {
        Loot_IsSet = TryGetJsonValue(JsonLootField, Loot_Optional);
        ParseSuccess &= Loot_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonItemsField = (*Object)->TryGetField(TEXT("items"));
    if (JsonItemsField.IsValid() && !JsonItemsField->IsNull())
    {
        Items_IsSet = TryGetJsonValue(JsonItemsField, Items_Optional);
        ParseSuccess &= Items_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPricePointsField = (*Object)->TryGetField(TEXT("price_points"));
    if (JsonPricePointsField.IsValid() && !JsonPricePointsField->IsNull())
    {
        PricePoints_IsSet = TryGetJsonValue(JsonPricePointsField, PricePoints_Optional);
        ParseSuccess &= PricePoints_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonTimeFramesField = (*Object)->TryGetField(TEXT("time_frames"));
    if (JsonTimeFramesField.IsValid() && !JsonTimeFramesField->IsNull())
    {
        TimeFrames_IsSet = TryGetJsonValue(JsonTimeFramesField, TimeFrames_Optional);
        ParseSuccess &= TimeFrames_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCacheInfoField = (*Object)->TryGetField(TEXT("cache_info"));
    if (JsonCacheInfoField.IsValid() && !JsonCacheInfoField->IsNull())
    {
        CacheInfo_IsSet = TryGetJsonValue(JsonCacheInfoField, CacheInfo_Optional);
        ParseSuccess &= CacheInfo_IsSet;
    }

    return ParseSuccess;
}
