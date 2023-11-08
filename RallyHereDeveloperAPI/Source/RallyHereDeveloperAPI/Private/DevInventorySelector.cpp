// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevInventorySelector.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_DevInventorySelector
FString EnumToString(const ERHAPI_DevInventorySelector& Value)
{
    switch (Value)
    {
    case ERHAPI_DevInventorySelector::Own:
        return TEXT("own");
    case ERHAPI_DevInventorySelector::Rent:
        return TEXT("rent");
    case ERHAPI_DevInventorySelector::RentTimeframeLocked:
        return TEXT("rent_timeframe_locked");
    case ERHAPI_DevInventorySelector::OwnTransient:
        return TEXT("own_transient");
    case ERHAPI_DevInventorySelector::InheritEntitlementInventory:
        return TEXT("inherit_entitlement_inventory");
    }

    UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("Invalid ERHAPI_DevInventorySelector::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_DevInventorySelector& Value)
{
    static TMap<FString, ERHAPI_DevInventorySelector> StringToEnum = {
        { TEXT("own"), ERHAPI_DevInventorySelector::Own },
        { TEXT("rent"), ERHAPI_DevInventorySelector::Rent },
        { TEXT("rent_timeframe_locked"), ERHAPI_DevInventorySelector::RentTimeframeLocked },
        { TEXT("own_transient"), ERHAPI_DevInventorySelector::OwnTransient },
        { TEXT("inherit_entitlement_inventory"), ERHAPI_DevInventorySelector::InheritEntitlementInventory },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_DevInventorySelector& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DevInventorySelector& Value)
{
    RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DevInventorySelector& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


