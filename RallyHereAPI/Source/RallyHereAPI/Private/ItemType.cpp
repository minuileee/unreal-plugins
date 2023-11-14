// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "ItemType.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_ItemType
FString EnumToString(const ERHAPI_ItemType& Value)
{
    switch (Value)
    {
    case ERHAPI_ItemType::Unit:
        return TEXT("unit");
    case ERHAPI_ItemType::Recipe:
        return TEXT("recipe");
    case ERHAPI_ItemType::RecipeWithPriceReduction:
        return TEXT("recipe_with_price_reduction");
    case ERHAPI_ItemType::Entitlement:
        return TEXT("entitlement");
    case ERHAPI_ItemType::DynamicBundle:
        return TEXT("dynamic_bundle");
    }

    UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_ItemType::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_ItemType& Value)
{
    static TMap<FString, ERHAPI_ItemType> StringToEnum = { 
        { TEXT("unit"), ERHAPI_ItemType::Unit },
        { TEXT("recipe"), ERHAPI_ItemType::Recipe },
        { TEXT("recipe_with_price_reduction"), ERHAPI_ItemType::RecipeWithPriceReduction },
        { TEXT("entitlement"), ERHAPI_ItemType::Entitlement },
        { TEXT("dynamic_bundle"), ERHAPI_ItemType::DynamicBundle },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_ItemType& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_ItemType& Value)
{
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_ItemType& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


