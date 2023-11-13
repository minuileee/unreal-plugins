// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlayerOrderEntryResult.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_PlayerOrderEntryResult
FString EnumToString(const ERHAPI_PlayerOrderEntryResult& Value)
{
    switch (Value)
    {
    case ERHAPI_PlayerOrderEntryResult::Success:
        return TEXT("success");
    case ERHAPI_PlayerOrderEntryResult::InternalError:
        return TEXT("internal_error");
    case ERHAPI_PlayerOrderEntryResult::InvalidEntryType:
        return TEXT("invalid_entry_type");
    case ERHAPI_PlayerOrderEntryResult::NotAllowedOnCurrentPortal:
        return TEXT("not_allowed_on_current_portal");
    case ERHAPI_PlayerOrderEntryResult::LootNotFound:
        return TEXT("loot_not_found");
    case ERHAPI_PlayerOrderEntryResult::LootNotActive:
        return TEXT("loot_not_active");
    case ERHAPI_PlayerOrderEntryResult::PriceItemNotFound:
        return TEXT("price_item_not_found");
    case ERHAPI_PlayerOrderEntryResult::PriceNotAllowed:
        return TEXT("price_not_allowed");
    case ERHAPI_PlayerOrderEntryResult::DynamicBundleInvalid:
        return TEXT("dynamic_bundle_invalid");
    case ERHAPI_PlayerOrderEntryResult::TooManyRequests:
        return TEXT("too_many_requests");
    case ERHAPI_PlayerOrderEntryResult::PriceDoesNotMatch:
        return TEXT("price_does_not_match");
    case ERHAPI_PlayerOrderEntryResult::VendorVersionDoesNotMatch:
        return TEXT("vendor_version_does_not_match");
    case ERHAPI_PlayerOrderEntryResult::DynamicBundleLtisDoNotMatch:
        return TEXT("dynamic_bundle_ltis_do_not_match");
    case ERHAPI_PlayerOrderEntryResult::CannotAffordPrice:
        return TEXT("cannot_afford_price");
    case ERHAPI_PlayerOrderEntryResult::CannotAffordCoupon:
        return TEXT("cannot_afford_coupon");
    case ERHAPI_PlayerOrderEntryResult::FailedToSpendPrice:
        return TEXT("failed_to_spend_price");
    case ERHAPI_PlayerOrderEntryResult::FailedToSpendCoupon:
        return TEXT("failed_to_spend_coupon");
    case ERHAPI_PlayerOrderEntryResult::LootNotForSaleWithPriceItem:
        return TEXT("loot_not_for_sale_with_price_item");
    case ERHAPI_PlayerOrderEntryResult::CouponsDisabled:
        return TEXT("coupons_disabled");
    case ERHAPI_PlayerOrderEntryResult::CouponItemNotFound:
        return TEXT("coupon_item_not_found");
    case ERHAPI_PlayerOrderEntryResult::CouponItemNotActive:
        return TEXT("coupon_item_not_active");
    case ERHAPI_PlayerOrderEntryResult::CouponItemNotApplicableForQuantity:
        return TEXT("coupon_item_not_applicable_for_quantity");
    case ERHAPI_PlayerOrderEntryResult::CouponItemNotApplicableForPriceItem:
        return TEXT("coupon_item_not_applicable_for_price_item");
    case ERHAPI_PlayerOrderEntryResult::CouponItemNotApplicableForLoot:
        return TEXT("coupon_item_not_applicable_for_loot");
    case ERHAPI_PlayerOrderEntryResult::QuantityNotAllowed:
        return TEXT("quantity_not_allowed");
    case ERHAPI_PlayerOrderEntryResult::PromotionExpired:
        return TEXT("promotion_expired");
    case ERHAPI_PlayerOrderEntryResult::PromotionNotFound:
        return TEXT("promotion_not_found");
    case ERHAPI_PlayerOrderEntryResult::PromotionNoUsesLeft:
        return TEXT("promotion_no_uses_left");
    case ERHAPI_PlayerOrderEntryResult::PromotionNotAvailable:
        return TEXT("promotion_not_available");
    case ERHAPI_PlayerOrderEntryResult::PromotionClaimedAlready:
        return TEXT("promotion_claimed_already");
    case ERHAPI_PlayerOrderEntryResult::DynamicBundlesNotAvailable:
        return TEXT("dynamic_bundles_not_available");
    case ERHAPI_PlayerOrderEntryResult::TransientSingleLootAlreadyApplied:
        return TEXT("transient_single_loot_already_applied");
    case ERHAPI_PlayerOrderEntryResult::LootNotFillableFromClient:
        return TEXT("loot_not_fillable_from_client");
    case ERHAPI_PlayerOrderEntryResult::PermissionDenied:
        return TEXT("permission_denied");
    case ERHAPI_PlayerOrderEntryResult::FailedToFindAnySubLoot:
        return TEXT("failed_to_find_any_sub_loot");
    case ERHAPI_PlayerOrderEntryResult::FailedToFillAnySubLoot:
        return TEXT("failed_to_fill_any_sub_loot");
    case ERHAPI_PlayerOrderEntryResult::CannotMeetLootBlocker:
        return TEXT("cannot_meet_loot_blocker");
    case ERHAPI_PlayerOrderEntryResult::CannotMeetLootRequired:
        return TEXT("cannot_meet_loot_required");
    case ERHAPI_PlayerOrderEntryResult::FailedToConsumeLootRequired:
        return TEXT("failed_to_consume_loot_required");
    case ERHAPI_PlayerOrderEntryResult::FailedToSubmitNewOrder:
        return TEXT("failed_to_submit_new_order");
    case ERHAPI_PlayerOrderEntryResult::FailedToModifyInventory:
        return TEXT("failed_to_modify_inventory");
    case ERHAPI_PlayerOrderEntryResult::InventoryNotFound:
        return TEXT("inventory_not_found");
    case ERHAPI_PlayerOrderEntryResult::ItemNotFound:
        return TEXT("item_not_found");
    case ERHAPI_PlayerOrderEntryResult::ItemNotActive:
        return TEXT("item_not_active");
    case ERHAPI_PlayerOrderEntryResult::TooManyInvCustomAttributes:
        return TEXT("too_many_inv_custom_attributes");
    case ERHAPI_PlayerOrderEntryResult::AlwaysOwnedInventoryCannotBeModified:
        return TEXT("always_owned_inventory_cannot_be_modified");
    case ERHAPI_PlayerOrderEntryResult::AvailableUntilIsInPast:
        return TEXT("available_until_is_in_past");
    case ERHAPI_PlayerOrderEntryResult::Rollback:
        return TEXT("rollback");
    case ERHAPI_PlayerOrderEntryResult::NotStarted:
        return TEXT("not_started");
    }

    UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_PlayerOrderEntryResult::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_PlayerOrderEntryResult& Value)
{
    static TMap<FString, ERHAPI_PlayerOrderEntryResult> StringToEnum = { 
        { TEXT("success"), ERHAPI_PlayerOrderEntryResult::Success },
        { TEXT("internal_error"), ERHAPI_PlayerOrderEntryResult::InternalError },
        { TEXT("invalid_entry_type"), ERHAPI_PlayerOrderEntryResult::InvalidEntryType },
        { TEXT("not_allowed_on_current_portal"), ERHAPI_PlayerOrderEntryResult::NotAllowedOnCurrentPortal },
        { TEXT("loot_not_found"), ERHAPI_PlayerOrderEntryResult::LootNotFound },
        { TEXT("loot_not_active"), ERHAPI_PlayerOrderEntryResult::LootNotActive },
        { TEXT("price_item_not_found"), ERHAPI_PlayerOrderEntryResult::PriceItemNotFound },
        { TEXT("price_not_allowed"), ERHAPI_PlayerOrderEntryResult::PriceNotAllowed },
        { TEXT("dynamic_bundle_invalid"), ERHAPI_PlayerOrderEntryResult::DynamicBundleInvalid },
        { TEXT("too_many_requests"), ERHAPI_PlayerOrderEntryResult::TooManyRequests },
        { TEXT("price_does_not_match"), ERHAPI_PlayerOrderEntryResult::PriceDoesNotMatch },
        { TEXT("vendor_version_does_not_match"), ERHAPI_PlayerOrderEntryResult::VendorVersionDoesNotMatch },
        { TEXT("dynamic_bundle_ltis_do_not_match"), ERHAPI_PlayerOrderEntryResult::DynamicBundleLtisDoNotMatch },
        { TEXT("cannot_afford_price"), ERHAPI_PlayerOrderEntryResult::CannotAffordPrice },
        { TEXT("cannot_afford_coupon"), ERHAPI_PlayerOrderEntryResult::CannotAffordCoupon },
        { TEXT("failed_to_spend_price"), ERHAPI_PlayerOrderEntryResult::FailedToSpendPrice },
        { TEXT("failed_to_spend_coupon"), ERHAPI_PlayerOrderEntryResult::FailedToSpendCoupon },
        { TEXT("loot_not_for_sale_with_price_item"), ERHAPI_PlayerOrderEntryResult::LootNotForSaleWithPriceItem },
        { TEXT("coupons_disabled"), ERHAPI_PlayerOrderEntryResult::CouponsDisabled },
        { TEXT("coupon_item_not_found"), ERHAPI_PlayerOrderEntryResult::CouponItemNotFound },
        { TEXT("coupon_item_not_active"), ERHAPI_PlayerOrderEntryResult::CouponItemNotActive },
        { TEXT("coupon_item_not_applicable_for_quantity"), ERHAPI_PlayerOrderEntryResult::CouponItemNotApplicableForQuantity },
        { TEXT("coupon_item_not_applicable_for_price_item"), ERHAPI_PlayerOrderEntryResult::CouponItemNotApplicableForPriceItem },
        { TEXT("coupon_item_not_applicable_for_loot"), ERHAPI_PlayerOrderEntryResult::CouponItemNotApplicableForLoot },
        { TEXT("quantity_not_allowed"), ERHAPI_PlayerOrderEntryResult::QuantityNotAllowed },
        { TEXT("promotion_expired"), ERHAPI_PlayerOrderEntryResult::PromotionExpired },
        { TEXT("promotion_not_found"), ERHAPI_PlayerOrderEntryResult::PromotionNotFound },
        { TEXT("promotion_no_uses_left"), ERHAPI_PlayerOrderEntryResult::PromotionNoUsesLeft },
        { TEXT("promotion_not_available"), ERHAPI_PlayerOrderEntryResult::PromotionNotAvailable },
        { TEXT("promotion_claimed_already"), ERHAPI_PlayerOrderEntryResult::PromotionClaimedAlready },
        { TEXT("dynamic_bundles_not_available"), ERHAPI_PlayerOrderEntryResult::DynamicBundlesNotAvailable },
        { TEXT("transient_single_loot_already_applied"), ERHAPI_PlayerOrderEntryResult::TransientSingleLootAlreadyApplied },
        { TEXT("loot_not_fillable_from_client"), ERHAPI_PlayerOrderEntryResult::LootNotFillableFromClient },
        { TEXT("permission_denied"), ERHAPI_PlayerOrderEntryResult::PermissionDenied },
        { TEXT("failed_to_find_any_sub_loot"), ERHAPI_PlayerOrderEntryResult::FailedToFindAnySubLoot },
        { TEXT("failed_to_fill_any_sub_loot"), ERHAPI_PlayerOrderEntryResult::FailedToFillAnySubLoot },
        { TEXT("cannot_meet_loot_blocker"), ERHAPI_PlayerOrderEntryResult::CannotMeetLootBlocker },
        { TEXT("cannot_meet_loot_required"), ERHAPI_PlayerOrderEntryResult::CannotMeetLootRequired },
        { TEXT("failed_to_consume_loot_required"), ERHAPI_PlayerOrderEntryResult::FailedToConsumeLootRequired },
        { TEXT("failed_to_submit_new_order"), ERHAPI_PlayerOrderEntryResult::FailedToSubmitNewOrder },
        { TEXT("failed_to_modify_inventory"), ERHAPI_PlayerOrderEntryResult::FailedToModifyInventory },
        { TEXT("inventory_not_found"), ERHAPI_PlayerOrderEntryResult::InventoryNotFound },
        { TEXT("item_not_found"), ERHAPI_PlayerOrderEntryResult::ItemNotFound },
        { TEXT("item_not_active"), ERHAPI_PlayerOrderEntryResult::ItemNotActive },
        { TEXT("too_many_inv_custom_attributes"), ERHAPI_PlayerOrderEntryResult::TooManyInvCustomAttributes },
        { TEXT("always_owned_inventory_cannot_be_modified"), ERHAPI_PlayerOrderEntryResult::AlwaysOwnedInventoryCannotBeModified },
        { TEXT("available_until_is_in_past"), ERHAPI_PlayerOrderEntryResult::AvailableUntilIsInPast },
        { TEXT("rollback"), ERHAPI_PlayerOrderEntryResult::Rollback },
        { TEXT("not_started"), ERHAPI_PlayerOrderEntryResult::NotStarted },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_PlayerOrderEntryResult& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_PlayerOrderEntryResult& Value)
{
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_PlayerOrderEntryResult& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


