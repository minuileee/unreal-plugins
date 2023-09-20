// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevGeneralConfigCreateUpdate.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevGeneralConfigCreateUpdate

void FRHAPI_DevGeneralConfigCreateUpdate::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Social_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("social"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Social_Optional);
    }
    if (Basic_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("basic"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Basic_Optional);
    }
    if (Anon_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("anon"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Anon_Optional);
    }
    if (Epic_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("epic"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Epic_Optional);
    }
    if (Steam_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("steam"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Steam_Optional);
    }
    if (Playstation_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("playstation"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Playstation_Optional);
    }
    if (Nintendo_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("nintendo"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Nintendo_Optional);
    }
    if (Twitch_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("twitch"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Twitch_Optional);
    }
    if (Amazon_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("amazon"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Amazon_Optional);
    }
    if (Google_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("google"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Google_Optional);
    }
    if (Apple_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("apple"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Apple_Optional);
    }
    if (Xbox_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("xbox"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Xbox_Optional);
    }
    if (Vivox_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("vivox"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Vivox_Optional);
    }
    if (Legacy_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("legacy"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Legacy_Optional);
    }
    if (DefaultRoleId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("default_role_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, DefaultRoleId_Optional);
    }
    if (InventorySessionLoot_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("inventory_session_loot"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, InventorySessionLoot_Optional);
    }
    if (AllowClientToUpdateInventory_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("allow_client_to_update_inventory"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, AllowClientToUpdateInventory_Optional);
    }
    if (EmailRewardLoot_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("email_reward_loot"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EmailRewardLoot_Optional);
    }
    if (CouponEnable_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("coupon_enable"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CouponEnable_Optional);
    }
    if (CouponVendorId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("coupon_vendor_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CouponVendorId_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevGeneralConfigCreateUpdate::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonSocialField = (*Object)->TryGetField(TEXT("social"));
    if (JsonSocialField.IsValid() && !JsonSocialField->IsNull())
    {
        Social_IsSet = TryGetJsonValue(JsonSocialField, Social_Optional);
        ParseSuccess &= Social_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonBasicField = (*Object)->TryGetField(TEXT("basic"));
    if (JsonBasicField.IsValid() && !JsonBasicField->IsNull())
    {
        Basic_IsSet = TryGetJsonValue(JsonBasicField, Basic_Optional);
        ParseSuccess &= Basic_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonAnonField = (*Object)->TryGetField(TEXT("anon"));
    if (JsonAnonField.IsValid() && !JsonAnonField->IsNull())
    {
        Anon_IsSet = TryGetJsonValue(JsonAnonField, Anon_Optional);
        ParseSuccess &= Anon_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonEpicField = (*Object)->TryGetField(TEXT("epic"));
    if (JsonEpicField.IsValid() && !JsonEpicField->IsNull())
    {
        Epic_IsSet = TryGetJsonValue(JsonEpicField, Epic_Optional);
        ParseSuccess &= Epic_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonSteamField = (*Object)->TryGetField(TEXT("steam"));
    if (JsonSteamField.IsValid() && !JsonSteamField->IsNull())
    {
        Steam_IsSet = TryGetJsonValue(JsonSteamField, Steam_Optional);
        ParseSuccess &= Steam_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPlaystationField = (*Object)->TryGetField(TEXT("playstation"));
    if (JsonPlaystationField.IsValid() && !JsonPlaystationField->IsNull())
    {
        Playstation_IsSet = TryGetJsonValue(JsonPlaystationField, Playstation_Optional);
        ParseSuccess &= Playstation_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonNintendoField = (*Object)->TryGetField(TEXT("nintendo"));
    if (JsonNintendoField.IsValid() && !JsonNintendoField->IsNull())
    {
        Nintendo_IsSet = TryGetJsonValue(JsonNintendoField, Nintendo_Optional);
        ParseSuccess &= Nintendo_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonTwitchField = (*Object)->TryGetField(TEXT("twitch"));
    if (JsonTwitchField.IsValid() && !JsonTwitchField->IsNull())
    {
        Twitch_IsSet = TryGetJsonValue(JsonTwitchField, Twitch_Optional);
        ParseSuccess &= Twitch_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonAmazonField = (*Object)->TryGetField(TEXT("amazon"));
    if (JsonAmazonField.IsValid() && !JsonAmazonField->IsNull())
    {
        Amazon_IsSet = TryGetJsonValue(JsonAmazonField, Amazon_Optional);
        ParseSuccess &= Amazon_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonGoogleField = (*Object)->TryGetField(TEXT("google"));
    if (JsonGoogleField.IsValid() && !JsonGoogleField->IsNull())
    {
        Google_IsSet = TryGetJsonValue(JsonGoogleField, Google_Optional);
        ParseSuccess &= Google_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonAppleField = (*Object)->TryGetField(TEXT("apple"));
    if (JsonAppleField.IsValid() && !JsonAppleField->IsNull())
    {
        Apple_IsSet = TryGetJsonValue(JsonAppleField, Apple_Optional);
        ParseSuccess &= Apple_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonXboxField = (*Object)->TryGetField(TEXT("xbox"));
    if (JsonXboxField.IsValid() && !JsonXboxField->IsNull())
    {
        Xbox_IsSet = TryGetJsonValue(JsonXboxField, Xbox_Optional);
        ParseSuccess &= Xbox_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonVivoxField = (*Object)->TryGetField(TEXT("vivox"));
    if (JsonVivoxField.IsValid() && !JsonVivoxField->IsNull())
    {
        Vivox_IsSet = TryGetJsonValue(JsonVivoxField, Vivox_Optional);
        ParseSuccess &= Vivox_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLegacyField = (*Object)->TryGetField(TEXT("legacy"));
    if (JsonLegacyField.IsValid() && !JsonLegacyField->IsNull())
    {
        Legacy_IsSet = TryGetJsonValue(JsonLegacyField, Legacy_Optional);
        ParseSuccess &= Legacy_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonDefaultRoleIdField = (*Object)->TryGetField(TEXT("default_role_id"));
    if (JsonDefaultRoleIdField.IsValid() && !JsonDefaultRoleIdField->IsNull())
    {
        DefaultRoleId_IsSet = TryGetJsonValue(JsonDefaultRoleIdField, DefaultRoleId_Optional);
        ParseSuccess &= DefaultRoleId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonInventorySessionLootField = (*Object)->TryGetField(TEXT("inventory_session_loot"));
    if (JsonInventorySessionLootField.IsValid() && !JsonInventorySessionLootField->IsNull())
    {
        InventorySessionLoot_IsSet = TryGetJsonValue(JsonInventorySessionLootField, InventorySessionLoot_Optional);
        ParseSuccess &= InventorySessionLoot_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonAllowClientToUpdateInventoryField = (*Object)->TryGetField(TEXT("allow_client_to_update_inventory"));
    if (JsonAllowClientToUpdateInventoryField.IsValid() && !JsonAllowClientToUpdateInventoryField->IsNull())
    {
        AllowClientToUpdateInventory_IsSet = TryGetJsonValue(JsonAllowClientToUpdateInventoryField, AllowClientToUpdateInventory_Optional);
        ParseSuccess &= AllowClientToUpdateInventory_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonEmailRewardLootField = (*Object)->TryGetField(TEXT("email_reward_loot"));
    if (JsonEmailRewardLootField.IsValid() && !JsonEmailRewardLootField->IsNull())
    {
        EmailRewardLoot_IsSet = TryGetJsonValue(JsonEmailRewardLootField, EmailRewardLoot_Optional);
        ParseSuccess &= EmailRewardLoot_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCouponEnableField = (*Object)->TryGetField(TEXT("coupon_enable"));
    if (JsonCouponEnableField.IsValid() && !JsonCouponEnableField->IsNull())
    {
        CouponEnable_IsSet = TryGetJsonValue(JsonCouponEnableField, CouponEnable_Optional);
        ParseSuccess &= CouponEnable_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCouponVendorIdField = (*Object)->TryGetField(TEXT("coupon_vendor_id"));
    if (JsonCouponVendorIdField.IsValid() && !JsonCouponVendorIdField->IsNull())
    {
        CouponVendorId_IsSet = TryGetJsonValue(JsonCouponVendorIdField, CouponVendorId_Optional);
        ParseSuccess &= CouponVendorId_IsSet;
    }

    return ParseSuccess;
}

