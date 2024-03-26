// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "EntitlementStatus.generated.h"


/**
 * @brief Status of an Entitlement
 */
UENUM(BlueprintType)
enum class ERHAPI_EntitlementStatus : uint8
{
	Unknown UMETA(ToolTip="Entitlement status is unknown"),
	Submitted UMETA(ToolTip="Entitlement has been submitted to the backend"),
	Fulfilled UMETA(ToolTip="Entitlement has been fulfilled"),
	Failed UMETA(ToolTip="Entitlement has failed, check error_code for more information"),
	PreviouslyApplied UMETA(ToolTip="Entitlement was previously applied"),
};
RALLYHEREAPI_API FString EnumToString(const ERHAPI_EntitlementStatus& EnumValue);
RALLYHEREAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_EntitlementStatus& EnumValue);
RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_EntitlementStatus& Value);
RALLYHEREAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_EntitlementStatus& Value);
RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_EntitlementStatus& Value);
