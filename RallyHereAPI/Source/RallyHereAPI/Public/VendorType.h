// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "VendorType.generated.h"


/**
 * @brief Determines how the Vendor fulfills the loot.
 */
UENUM(BlueprintType)
enum class ERHAPI_VendorType : uint8
{
	Recipe UMETA(ToolTip="A Vendor that will always drop all of the Loot in the Loot table."),
	RandomlySampled UMETA(ToolTip="A Vendor that will only fulfill one of the Loot in the Loot table based on the drop weights of the Loot."),
};
RALLYHEREAPI_API FString EnumToString(const ERHAPI_VendorType& EnumValue);
RALLYHEREAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_VendorType& EnumValue);
RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_VendorType& Value);
RALLYHEREAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_VendorType& Value);
RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_VendorType& Value);
