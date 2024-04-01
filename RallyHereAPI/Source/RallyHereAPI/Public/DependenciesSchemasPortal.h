// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "DependenciesSchemasPortal.generated.h"


/**
 * @brief Portals a.k.a platforms that a player can be linked/authenticated with
 */
UENUM(BlueprintType)
enum class ERHAPI_DependenciesSchemasPortal : uint8
{
	Anon UMETA(ToolTip="Anonymous portal used for testing. This is not intended to be used by real players."),
	Amazon UMETA(ToolTip="Amazon portal"),
	Steam UMETA(ToolTip="Steam portal"),
	Psn UMETA(ToolTip="Playstation Network portal"),
	Xboxlive UMETA(ToolTip="Xbox Live portal"),
	Basic UMETA(ToolTip="Basic portal"),
	Google UMETA(ToolTip="Google portal"),
	Rallyhere UMETA(ToolTip="RallyHere Developer portal"),
	Twitch UMETA(ToolTip="Twitch portal"),
	NintendoSwitch UMETA(ToolTip="Nintendo Switch portal"),
	Apple UMETA(ToolTip="Apple portal"),
	Nintendo UMETA(ToolTip="Nintendo portal"),
	Legacyname UMETA(ToolTip="Legacy name portal"),
	Epic UMETA(ToolTip="Epic portal"),
	NintendoPpid UMETA(ToolTip="Nintendo PPID portal"),
};
RALLYHEREAPI_API FString EnumToString(const ERHAPI_DependenciesSchemasPortal& EnumValue);
RALLYHEREAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_DependenciesSchemasPortal& EnumValue);
RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_DependenciesSchemasPortal& Value);
RALLYHEREAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DependenciesSchemasPortal& Value);
RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DependenciesSchemasPortal& Value);
