// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevUpdateLootWithVendorRequest.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevUpdateLootWithVendorRequest

void FRHAPI_DevUpdateLootWithVendorRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
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
    if (ItemId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("item_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, ItemId_Optional);
    }
    if (SubVendorId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("sub_vendor_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, SubVendorId_Optional);
    }
    if (Quantity_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("quantity"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Quantity_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("inventory_selector_type"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(InventorySelectorType));
    Writer->WriteIdentifierPrefix(TEXT("inventory_operation"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(InventoryOperation));
    if (Active_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("active"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Active_Optional);
    }
    if (SortOrder_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("sort_order"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, SortOrder_Optional);
    }
    if (DropWeight_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("drop_weight"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, DropWeight_Optional);
    }
    if (FillInNewOrder_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("fill_in_new_order"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, FillInNewOrder_Optional);
    }
    if (AllowPartialBundles_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("allow_partial_bundles"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, AllowPartialBundles_Optional);
    }
    if (RequiredItemId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("required_item_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, RequiredItemId_Optional);
    }
    if (RequiredItemCount_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("required_item_count"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, RequiredItemCount_Optional);
    }
    if (StackLimit_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("stack_limit"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, StackLimit_Optional);
    }
    if (QuantityType_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("quantity_type"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(QuantityType_Optional));
    }
    if (QuantityMultiInventoryItemId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("quantity_multi_inventory_item_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, QuantityMultiInventoryItemId_Optional);
    }
    if (IsClaimableByClient_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("is_claimable_by_client"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, IsClaimableByClient_Optional);
    }
    if (TimeFrameId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("time_frame_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, TimeFrameId_Optional);
    }
    if (UseInventoryBucket_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("use_inventory_bucket"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(UseInventoryBucket_Optional));
    }
    if (XpQuantityTransformType_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("xp_quantity_transform_type"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(XpQuantityTransformType_Optional));
    }
    if (CurrentPricePointId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("current_price_point_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CurrentPricePointId_Optional);
    }
    if (PreSalePricePointId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("pre_sale_price_point_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, PreSalePricePointId_Optional);
    }
    if (HardQuantityMaximum_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("hard_quantity_maximum"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, HardQuantityMaximum_Optional);
    }
    if (LegacyLootId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("legacy_loot_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LegacyLootId_Optional);
    }
    if (LootId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("loot_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LootId_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevUpdateLootWithVendorRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
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
    const TSharedPtr<FJsonValue> JsonItemIdField = (*Object)->TryGetField(TEXT("item_id"));
    if (JsonItemIdField.IsValid() && !JsonItemIdField->IsNull())
    {
        ItemId_IsSet = TryGetJsonValue(JsonItemIdField, ItemId_Optional);
        ParseSuccess &= ItemId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonSubVendorIdField = (*Object)->TryGetField(TEXT("sub_vendor_id"));
    if (JsonSubVendorIdField.IsValid() && !JsonSubVendorIdField->IsNull())
    {
        SubVendorId_IsSet = TryGetJsonValue(JsonSubVendorIdField, SubVendorId_Optional);
        ParseSuccess &= SubVendorId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonQuantityField = (*Object)->TryGetField(TEXT("quantity"));
    if (JsonQuantityField.IsValid() && !JsonQuantityField->IsNull())
    {
        Quantity_IsSet = TryGetJsonValue(JsonQuantityField, Quantity_Optional);
        ParseSuccess &= Quantity_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonInventorySelectorTypeField = (*Object)->TryGetField(TEXT("inventory_selector_type"));
    ParseSuccess &= JsonInventorySelectorTypeField.IsValid() && !JsonInventorySelectorTypeField->IsNull() && TryGetJsonValue(JsonInventorySelectorTypeField, InventorySelectorType);
    const TSharedPtr<FJsonValue> JsonInventoryOperationField = (*Object)->TryGetField(TEXT("inventory_operation"));
    ParseSuccess &= JsonInventoryOperationField.IsValid() && !JsonInventoryOperationField->IsNull() && TryGetJsonValue(JsonInventoryOperationField, InventoryOperation);
    const TSharedPtr<FJsonValue> JsonActiveField = (*Object)->TryGetField(TEXT("active"));
    if (JsonActiveField.IsValid() && !JsonActiveField->IsNull())
    {
        Active_IsSet = TryGetJsonValue(JsonActiveField, Active_Optional);
        ParseSuccess &= Active_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonSortOrderField = (*Object)->TryGetField(TEXT("sort_order"));
    if (JsonSortOrderField.IsValid() && !JsonSortOrderField->IsNull())
    {
        SortOrder_IsSet = TryGetJsonValue(JsonSortOrderField, SortOrder_Optional);
        ParseSuccess &= SortOrder_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonDropWeightField = (*Object)->TryGetField(TEXT("drop_weight"));
    if (JsonDropWeightField.IsValid() && !JsonDropWeightField->IsNull())
    {
        DropWeight_IsSet = TryGetJsonValue(JsonDropWeightField, DropWeight_Optional);
        ParseSuccess &= DropWeight_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonFillInNewOrderField = (*Object)->TryGetField(TEXT("fill_in_new_order"));
    if (JsonFillInNewOrderField.IsValid() && !JsonFillInNewOrderField->IsNull())
    {
        FillInNewOrder_IsSet = TryGetJsonValue(JsonFillInNewOrderField, FillInNewOrder_Optional);
        ParseSuccess &= FillInNewOrder_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonAllowPartialBundlesField = (*Object)->TryGetField(TEXT("allow_partial_bundles"));
    if (JsonAllowPartialBundlesField.IsValid() && !JsonAllowPartialBundlesField->IsNull())
    {
        AllowPartialBundles_IsSet = TryGetJsonValue(JsonAllowPartialBundlesField, AllowPartialBundles_Optional);
        ParseSuccess &= AllowPartialBundles_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonRequiredItemIdField = (*Object)->TryGetField(TEXT("required_item_id"));
    if (JsonRequiredItemIdField.IsValid() && !JsonRequiredItemIdField->IsNull())
    {
        RequiredItemId_IsSet = TryGetJsonValue(JsonRequiredItemIdField, RequiredItemId_Optional);
        ParseSuccess &= RequiredItemId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonRequiredItemCountField = (*Object)->TryGetField(TEXT("required_item_count"));
    if (JsonRequiredItemCountField.IsValid() && !JsonRequiredItemCountField->IsNull())
    {
        RequiredItemCount_IsSet = TryGetJsonValue(JsonRequiredItemCountField, RequiredItemCount_Optional);
        ParseSuccess &= RequiredItemCount_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonStackLimitField = (*Object)->TryGetField(TEXT("stack_limit"));
    if (JsonStackLimitField.IsValid() && !JsonStackLimitField->IsNull())
    {
        StackLimit_IsSet = TryGetJsonValue(JsonStackLimitField, StackLimit_Optional);
        ParseSuccess &= StackLimit_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonQuantityTypeField = (*Object)->TryGetField(TEXT("quantity_type"));
    if (JsonQuantityTypeField.IsValid() && !JsonQuantityTypeField->IsNull())
    {
        QuantityType_IsSet = TryGetJsonValue(JsonQuantityTypeField, QuantityType_Optional);
        ParseSuccess &= QuantityType_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonQuantityMultiInventoryItemIdField = (*Object)->TryGetField(TEXT("quantity_multi_inventory_item_id"));
    if (JsonQuantityMultiInventoryItemIdField.IsValid() && !JsonQuantityMultiInventoryItemIdField->IsNull())
    {
        QuantityMultiInventoryItemId_IsSet = TryGetJsonValue(JsonQuantityMultiInventoryItemIdField, QuantityMultiInventoryItemId_Optional);
        ParseSuccess &= QuantityMultiInventoryItemId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonIsClaimableByClientField = (*Object)->TryGetField(TEXT("is_claimable_by_client"));
    if (JsonIsClaimableByClientField.IsValid() && !JsonIsClaimableByClientField->IsNull())
    {
        IsClaimableByClient_IsSet = TryGetJsonValue(JsonIsClaimableByClientField, IsClaimableByClient_Optional);
        ParseSuccess &= IsClaimableByClient_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonTimeFrameIdField = (*Object)->TryGetField(TEXT("time_frame_id"));
    if (JsonTimeFrameIdField.IsValid() && !JsonTimeFrameIdField->IsNull())
    {
        TimeFrameId_IsSet = TryGetJsonValue(JsonTimeFrameIdField, TimeFrameId_Optional);
        ParseSuccess &= TimeFrameId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonUseInventoryBucketField = (*Object)->TryGetField(TEXT("use_inventory_bucket"));
    if (JsonUseInventoryBucketField.IsValid() && !JsonUseInventoryBucketField->IsNull())
    {
        UseInventoryBucket_IsSet = TryGetJsonValue(JsonUseInventoryBucketField, UseInventoryBucket_Optional);
        ParseSuccess &= UseInventoryBucket_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonXpQuantityTransformTypeField = (*Object)->TryGetField(TEXT("xp_quantity_transform_type"));
    if (JsonXpQuantityTransformTypeField.IsValid() && !JsonXpQuantityTransformTypeField->IsNull())
    {
        XpQuantityTransformType_IsSet = TryGetJsonValue(JsonXpQuantityTransformTypeField, XpQuantityTransformType_Optional);
        ParseSuccess &= XpQuantityTransformType_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCurrentPricePointIdField = (*Object)->TryGetField(TEXT("current_price_point_id"));
    if (JsonCurrentPricePointIdField.IsValid() && !JsonCurrentPricePointIdField->IsNull())
    {
        CurrentPricePointId_IsSet = TryGetJsonValue(JsonCurrentPricePointIdField, CurrentPricePointId_Optional);
        ParseSuccess &= CurrentPricePointId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPreSalePricePointIdField = (*Object)->TryGetField(TEXT("pre_sale_price_point_id"));
    if (JsonPreSalePricePointIdField.IsValid() && !JsonPreSalePricePointIdField->IsNull())
    {
        PreSalePricePointId_IsSet = TryGetJsonValue(JsonPreSalePricePointIdField, PreSalePricePointId_Optional);
        ParseSuccess &= PreSalePricePointId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonHardQuantityMaximumField = (*Object)->TryGetField(TEXT("hard_quantity_maximum"));
    if (JsonHardQuantityMaximumField.IsValid() && !JsonHardQuantityMaximumField->IsNull())
    {
        HardQuantityMaximum_IsSet = TryGetJsonValue(JsonHardQuantityMaximumField, HardQuantityMaximum_Optional);
        ParseSuccess &= HardQuantityMaximum_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLegacyLootIdField = (*Object)->TryGetField(TEXT("legacy_loot_id"));
    if (JsonLegacyLootIdField.IsValid() && !JsonLegacyLootIdField->IsNull())
    {
        LegacyLootId_IsSet = TryGetJsonValue(JsonLegacyLootIdField, LegacyLootId_Optional);
        ParseSuccess &= LegacyLootId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLootIdField = (*Object)->TryGetField(TEXT("loot_id"));
    if (JsonLootIdField.IsValid() && !JsonLootIdField->IsNull())
    {
        LootId_IsSet = TryGetJsonValue(JsonLootIdField, LootId_Optional);
        ParseSuccess &= LootId_IsSet;
    }

    return ParseSuccess;
}

