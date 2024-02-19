// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "MatchHostType.generated.h"


/**
 * @brief Whether the host is another player, or a dedicated instance
 */
UENUM(BlueprintType)
enum class ERHAPI_MatchHostType : uint8
{
    Dedicated UMETA(ToolTip=""),
    Player UMETA(ToolTip=""),
};
RALLYHEREAPI_API FString EnumToString(const ERHAPI_MatchHostType& EnumValue);
RALLYHEREAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_MatchHostType& EnumValue);
RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_MatchHostType& Value);
RALLYHEREAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_MatchHostType& Value);
RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_MatchHostType& Value);
