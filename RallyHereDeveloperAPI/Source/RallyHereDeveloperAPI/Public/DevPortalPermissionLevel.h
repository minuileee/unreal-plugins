// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevPortalPermissionLevel.generated.h"


/**
 * @brief An enumeration.
 */
UENUM(BlueprintType)
enum class ERHAPI_DevPortalPermissionLevel : uint8
{
    Org UMETA(ToolTip="An enumeration."),
    Product UMETA(ToolTip="An enumeration."),
    Sandbox UMETA(ToolTip="An enumeration."),
    Environment UMETA(ToolTip="An enumeration."),
};
RALLYHEREDEVELOPERAPI_API FString EnumToString(const ERHAPI_DevPortalPermissionLevel& EnumValue);
RALLYHEREDEVELOPERAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_DevPortalPermissionLevel& EnumValue);
RALLYHEREDEVELOPERAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_DevPortalPermissionLevel& Value);
RALLYHEREDEVELOPERAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DevPortalPermissionLevel& Value);
RALLYHEREDEVELOPERAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DevPortalPermissionLevel& Value);
