// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "OAuthPortal.generated.h"

/**
 * @brief An enumeration.
 */
UENUM(BlueprintType)
enum class ERHAPI_OAuthPortal : uint8
{
    Google UMETA(ToolTip="An enumeration."),
    Apple UMETA(ToolTip="An enumeration."),
    Epic UMETA(ToolTip="An enumeration."),
    Xbox UMETA(ToolTip="An enumeration."),
    Psn UMETA(ToolTip="An enumeration."),
    Nintendo UMETA(ToolTip="An enumeration."),
    Steam UMETA(ToolTip="An enumeration."),
    Amazon UMETA(ToolTip="An enumeration."),
    Twitch UMETA(ToolTip="An enumeration."),
};
RALLYHEREAPI_API FString EnumToString(const ERHAPI_OAuthPortal& EnumValue);
RALLYHEREAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_OAuthPortal& EnumValue);
RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_OAuthPortal& Value);
RALLYHEREAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_OAuthPortal& Value);
RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_OAuthPortal& Value);
