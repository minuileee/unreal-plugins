// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevHostType.generated.h"


/**
 * @brief Whether the host is another player, or a dedicated instance
 */
UENUM(BlueprintType)
enum class ERHAPI_DevHostType : uint8
{
    Dedicated UMETA(ToolTip="Whether the host is another player, or a dedicated instance"),
    Player UMETA(ToolTip="Whether the host is another player, or a dedicated instance"),
};
RALLYHEREDEVELOPERAPI_API FString EnumToString(const ERHAPI_DevHostType& EnumValue);
RALLYHEREDEVELOPERAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_DevHostType& EnumValue);
RALLYHEREDEVELOPERAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_DevHostType& Value);
RALLYHEREDEVELOPERAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DevHostType& Value);
RALLYHEREDEVELOPERAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DevHostType& Value);
