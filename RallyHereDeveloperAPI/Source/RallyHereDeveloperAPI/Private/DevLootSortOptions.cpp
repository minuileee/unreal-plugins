// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevLootSortOptions.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_DevLootSortOptions
FString EnumToString(const ERHAPI_DevLootSortOptions& Value)
{
    switch (Value)
    {
    case ERHAPI_DevLootSortOptions::LootId:
        return TEXT("loot_id");
    case ERHAPI_DevLootSortOptions::LegacyLootId:
        return TEXT("legacy_loot_id");
    case ERHAPI_DevLootSortOptions::VendorId:
        return TEXT("vendor_id");
    case ERHAPI_DevLootSortOptions::SubVendorId:
        return TEXT("sub_vendor_id");
    case ERHAPI_DevLootSortOptions::ItemId:
        return TEXT("item_id");
    case ERHAPI_DevLootSortOptions::Name:
        return TEXT("name");
    case ERHAPI_DevLootSortOptions::Description:
        return TEXT("description");
    case ERHAPI_DevLootSortOptions::InventorySelector:
        return TEXT("inventory_selector");
    case ERHAPI_DevLootSortOptions::InventoryOperation:
        return TEXT("inventory_operation");
    case ERHAPI_DevLootSortOptions::Quantity:
        return TEXT("quantity");
    case ERHAPI_DevLootSortOptions::Active:
        return TEXT("active");
    case ERHAPI_DevLootSortOptions::SortOrder:
        return TEXT("sort_order");
    case ERHAPI_DevLootSortOptions::DropWeight:
        return TEXT("drop_weight");
    case ERHAPI_DevLootSortOptions::FillInNewOrder:
        return TEXT("fill_in_new_order");
    case ERHAPI_DevLootSortOptions::AllowPartialBundles:
        return TEXT("allow_partial_bundles");
    case ERHAPI_DevLootSortOptions::RequiredItemCount:
        return TEXT("required_item_count");
    case ERHAPI_DevLootSortOptions::StackLimit:
        return TEXT("stack_limit");
    case ERHAPI_DevLootSortOptions::QuantityType:
        return TEXT("quantity_type");
    case ERHAPI_DevLootSortOptions::IsClaimableByClient:
        return TEXT("is_claimable_by_client");
    case ERHAPI_DevLootSortOptions::XpQuantityTransformType:
        return TEXT("xp_quantity_transform_type");
    case ERHAPI_DevLootSortOptions::UseInventoryBucket:
        return TEXT("use_inventory_bucket");
    case ERHAPI_DevLootSortOptions::HardQuantityMaximum:
        return TEXT("hard_quantity_maximum");
    case ERHAPI_DevLootSortOptions::LastModifiedTimestamp:
        return TEXT("last_modified_timestamp");
    }

    UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("Invalid ERHAPI_DevLootSortOptions::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_DevLootSortOptions& Value)
{
    static TMap<FString, ERHAPI_DevLootSortOptions> StringToEnum = { 
        { TEXT("loot_id"), ERHAPI_DevLootSortOptions::LootId },
        { TEXT("legacy_loot_id"), ERHAPI_DevLootSortOptions::LegacyLootId },
        { TEXT("vendor_id"), ERHAPI_DevLootSortOptions::VendorId },
        { TEXT("sub_vendor_id"), ERHAPI_DevLootSortOptions::SubVendorId },
        { TEXT("item_id"), ERHAPI_DevLootSortOptions::ItemId },
        { TEXT("name"), ERHAPI_DevLootSortOptions::Name },
        { TEXT("description"), ERHAPI_DevLootSortOptions::Description },
        { TEXT("inventory_selector"), ERHAPI_DevLootSortOptions::InventorySelector },
        { TEXT("inventory_operation"), ERHAPI_DevLootSortOptions::InventoryOperation },
        { TEXT("quantity"), ERHAPI_DevLootSortOptions::Quantity },
        { TEXT("active"), ERHAPI_DevLootSortOptions::Active },
        { TEXT("sort_order"), ERHAPI_DevLootSortOptions::SortOrder },
        { TEXT("drop_weight"), ERHAPI_DevLootSortOptions::DropWeight },
        { TEXT("fill_in_new_order"), ERHAPI_DevLootSortOptions::FillInNewOrder },
        { TEXT("allow_partial_bundles"), ERHAPI_DevLootSortOptions::AllowPartialBundles },
        { TEXT("required_item_count"), ERHAPI_DevLootSortOptions::RequiredItemCount },
        { TEXT("stack_limit"), ERHAPI_DevLootSortOptions::StackLimit },
        { TEXT("quantity_type"), ERHAPI_DevLootSortOptions::QuantityType },
        { TEXT("is_claimable_by_client"), ERHAPI_DevLootSortOptions::IsClaimableByClient },
        { TEXT("xp_quantity_transform_type"), ERHAPI_DevLootSortOptions::XpQuantityTransformType },
        { TEXT("use_inventory_bucket"), ERHAPI_DevLootSortOptions::UseInventoryBucket },
        { TEXT("hard_quantity_maximum"), ERHAPI_DevLootSortOptions::HardQuantityMaximum },
        { TEXT("last_modified_timestamp"), ERHAPI_DevLootSortOptions::LastModifiedTimestamp },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_DevLootSortOptions& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DevLootSortOptions& Value)
{
    RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DevLootSortOptions& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}

