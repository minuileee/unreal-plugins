// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "PlatformRegion.generated.h"


/**
 * @brief Region for Entitlements
 */
UENUM(BlueprintType)
enum class ERHAPI_PlatformRegion : uint8
{
    Unknown UMETA(ToolTip="Unknown region"),
    Na UMETA(ToolTip="North America region"),
    Eu UMETA(ToolTip="Europe Union region"),
};
RALLYHEREAPI_API FString EnumToString(const ERHAPI_PlatformRegion& EnumValue);
RALLYHEREAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_PlatformRegion& EnumValue);
RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_PlatformRegion& Value);
RALLYHEREAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_PlatformRegion& Value);
RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_PlatformRegion& Value);