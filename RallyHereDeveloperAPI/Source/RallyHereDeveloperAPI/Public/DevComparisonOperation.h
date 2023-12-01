// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevComparisonOperation.generated.h"


/**
 * @brief What comparison operation should be used when evaluating a rule
 */
UENUM(BlueprintType)
enum class ERHAPI_DevComparisonOperation : uint8
{
    Equal UMETA(ToolTip="What comparison operation should be used when evaluating a rule"),
    NotEqual UMETA(ToolTip="What comparison operation should be used when evaluating a rule"),
    LessThan UMETA(ToolTip="What comparison operation should be used when evaluating a rule"),
    LessThanEqual UMETA(ToolTip="What comparison operation should be used when evaluating a rule"),
    GreaterThan UMETA(ToolTip="What comparison operation should be used when evaluating a rule"),
    GreaterThanEqual UMETA(ToolTip="What comparison operation should be used when evaluating a rule"),
};
RALLYHEREDEVELOPERAPI_API FString EnumToString(const ERHAPI_DevComparisonOperation& EnumValue);
RALLYHEREDEVELOPERAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_DevComparisonOperation& EnumValue);
RALLYHEREDEVELOPERAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_DevComparisonOperation& Value);
RALLYHEREDEVELOPERAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DevComparisonOperation& Value);
RALLYHEREDEVELOPERAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DevComparisonOperation& Value);
