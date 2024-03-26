// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "EntitlementEventStatus.generated.h"


/**
 * @brief An enumeration.
 */
UENUM(BlueprintType)
enum class ERHAPI_EntitlementEventStatus : uint8
{
	Success UMETA(ToolTip="The event was successful"),
	SkuNotFound UMETA(ToolTip="The SKU was not found"),
	NotImplemented UMETA(ToolTip="The requested operation is not implemented yet"),
	PlayerNotFound UMETA(ToolTip="The player was not found"),
};
RALLYHEREAPI_API FString EnumToString(const ERHAPI_EntitlementEventStatus& EnumValue);
RALLYHEREAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_EntitlementEventStatus& EnumValue);
RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_EntitlementEventStatus& Value);
RALLYHEREAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_EntitlementEventStatus& Value);
RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_EntitlementEventStatus& Value);
