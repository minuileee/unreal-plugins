// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "InstanceJoinableStatus.generated.h"

/**
 * @brief An enumeration.
 */
UENUM(BlueprintType)
enum class ERHAPI_InstanceJoinableStatus : uint8
{
    Requested UMETA(ToolTip="Searching for a host"),
    Allocated UMETA(ToolTip="Host has been found"),
    Pending UMETA(ToolTip="Host has arrived"),
    Joinable UMETA(ToolTip="Host is ready to accept players"),
    Closed UMETA(ToolTip="Host has left, been timed out, or could not be found"),
};
RALLYHEREAPI_API FString EnumToString(const ERHAPI_InstanceJoinableStatus& EnumValue);
RALLYHEREAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_InstanceJoinableStatus& EnumValue);
RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_InstanceJoinableStatus& Value);
RALLYHEREAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_InstanceJoinableStatus& Value);
RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_InstanceJoinableStatus& Value);
