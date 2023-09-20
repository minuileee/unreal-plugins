// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevQuantityType.generated.h"


/**
 * @brief Determines how the quantity is to be modified.  Relative looks at the context in which is fulfilled; e.g. If Loot A has a quantity of 2 and 5 is being fulfill, the resulting quantity modification will be 10.  Absolute ignores the context in which it is fulfilled; e.g. If Loot B has a quantity of 3 and 5 is being fulfill 5, the resulting quantity modification will be 3.
 */
UENUM(BlueprintType)
enum class ERHAPI_DevQuantityType : uint8
{
    Relative UMETA(ToolTip="The quantity will be modified relative to the context in which it is fulfilled."),
    Absolute UMETA(ToolTip="The quantity will be modified regardless of the context in which it is fulfilled."),
};
RALLYHEREDEVELOPERAPI_API FString EnumToString(const ERHAPI_DevQuantityType& EnumValue);
RALLYHEREDEVELOPERAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_DevQuantityType& EnumValue);
RALLYHEREDEVELOPERAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_DevQuantityType& Value);
RALLYHEREDEVELOPERAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DevQuantityType& Value);
RALLYHEREDEVELOPERAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DevQuantityType& Value);
