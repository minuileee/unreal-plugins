// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevPlaystationEnvironment.generated.h"


/**
 * @brief An enumeration.
 */
UENUM(BlueprintType)
enum class ERHAPI_DevPlaystationEnvironment : uint8
{
    SpInt UMETA(ToolTip="Sony Development environment.  This is the common environment for development"),
    ProdQa UMETA(ToolTip="Sony Internal Test environment.  This is used when a game is handed to Sony Certification for testing"),
    Np UMETA(ToolTip="Sony Production environment.  This is the environment that is used when a game goes live"),
};
RALLYHEREDEVELOPERAPI_API FString EnumToString(const ERHAPI_DevPlaystationEnvironment& EnumValue);
RALLYHEREDEVELOPERAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_DevPlaystationEnvironment& EnumValue);
RALLYHEREDEVELOPERAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_DevPlaystationEnvironment& Value);
RALLYHEREDEVELOPERAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DevPlaystationEnvironment& Value);
RALLYHEREDEVELOPERAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DevPlaystationEnvironment& Value);
