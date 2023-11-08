// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlayerOrderEntryType.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_PlayerOrderEntryType
FString EnumToString(const ERHAPI_PlayerOrderEntryType& Value)
{
    switch (Value)
    {
    case ERHAPI_PlayerOrderEntryType::FillLoot:
        return TEXT("fill_loot");
    case ERHAPI_PlayerOrderEntryType::PurchaseLoot:
        return TEXT("purchase_loot");
    case ERHAPI_PlayerOrderEntryType::PurchaseDynamicBundle:
        return TEXT("purchase_dynamic_bundle");
    case ERHAPI_PlayerOrderEntryType::PromotionCode:
        return TEXT("promotion_code");
    case ERHAPI_PlayerOrderEntryType::FillLootSingleTransient:
        return TEXT("fill_loot_single_transient");
    case ERHAPI_PlayerOrderEntryType::FillEntitledLoot:
        return TEXT("fill_entitled_loot");
    case ERHAPI_PlayerOrderEntryType::CreateNewPersistentInventory:
        return TEXT("create_new_persistent_inventory");
    case ERHAPI_PlayerOrderEntryType::UpdateExistingPersistentInventory:
        return TEXT("update_existing_persistent_inventory");
    case ERHAPI_PlayerOrderEntryType::CreateNewTransientInventory:
        return TEXT("create_new_transient_inventory");
    case ERHAPI_PlayerOrderEntryType::UpdateExistingTransientInventory:
        return TEXT("update_existing_transient_inventory");
    case ERHAPI_PlayerOrderEntryType::UpdateInventory:
        return TEXT("update_inventory");
    }

    UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_PlayerOrderEntryType::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_PlayerOrderEntryType& Value)
{
    static TMap<FString, ERHAPI_PlayerOrderEntryType> StringToEnum = { 
        { TEXT("fill_loot"), ERHAPI_PlayerOrderEntryType::FillLoot },
        { TEXT("purchase_loot"), ERHAPI_PlayerOrderEntryType::PurchaseLoot },
        { TEXT("purchase_dynamic_bundle"), ERHAPI_PlayerOrderEntryType::PurchaseDynamicBundle },
        { TEXT("promotion_code"), ERHAPI_PlayerOrderEntryType::PromotionCode },
        { TEXT("fill_loot_single_transient"), ERHAPI_PlayerOrderEntryType::FillLootSingleTransient },
        { TEXT("fill_entitled_loot"), ERHAPI_PlayerOrderEntryType::FillEntitledLoot },
        { TEXT("create_new_persistent_inventory"), ERHAPI_PlayerOrderEntryType::CreateNewPersistentInventory },
        { TEXT("update_existing_persistent_inventory"), ERHAPI_PlayerOrderEntryType::UpdateExistingPersistentInventory },
        { TEXT("create_new_transient_inventory"), ERHAPI_PlayerOrderEntryType::CreateNewTransientInventory },
        { TEXT("update_existing_transient_inventory"), ERHAPI_PlayerOrderEntryType::UpdateExistingTransientInventory },
        { TEXT("update_inventory"), ERHAPI_PlayerOrderEntryType::UpdateInventory },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_PlayerOrderEntryType& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_PlayerOrderEntryType& Value)
{
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_PlayerOrderEntryType& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


