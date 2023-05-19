// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "ItemType.generated.h"

/**
 * @brief An enumeration.
 */
UENUM(BlueprintType)
enum class ERHAPI_ItemType : uint8
{
    Unit UMETA(ToolTip="An enumeration."),
    Recipe UMETA(ToolTip="An enumeration."),
    RecipeWithPriceReduction UMETA(ToolTip="An enumeration."),
    Entitlement UMETA(ToolTip="An enumeration."),
    DynamicBundle UMETA(ToolTip="An enumeration."),
};
RALLYHEREAPI_API FString EnumToString(const ERHAPI_ItemType& EnumValue);
RALLYHEREAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_ItemType& EnumValue);
RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_ItemType& Value);
RALLYHEREAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_ItemType& Value);
RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_ItemType& Value);
