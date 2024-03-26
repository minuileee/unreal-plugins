// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "RestrictionType.generated.h"


/**
 * @brief Restrictions that can be applied to a player. Resitrictions are applied to a player by an admin and often types indicates that the player is banned.
 */
UENUM(BlueprintType)
enum class ERHAPI_RestrictionType : uint8
{
	AccountBan UMETA(ToolTip="Account is banned"),
	AccountLockout UMETA(ToolTip="Account is locked out"),
	AccountPendingDeletion UMETA(ToolTip="Account is pending deletion and will be deleted in the future"),
	AccountDenyAuth UMETA(ToolTip="Account has been banned from authentication"),
};
RALLYHEREAPI_API FString EnumToString(const ERHAPI_RestrictionType& EnumValue);
RALLYHEREAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_RestrictionType& EnumValue);
RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_RestrictionType& Value);
RALLYHEREAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_RestrictionType& Value);
RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_RestrictionType& Value);
