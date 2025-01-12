// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "DeleteTicketReason.generated.h"


/**
 * @brief An enumeration.
 */
UENUM(BlueprintType)
enum class ERHAPI_DeleteTicketReason : uint8
{
	Assigned UMETA(ToolTip="An enumeration."),
	LeftQueue UMETA(ToolTip="An enumeration."),
	Timeout UMETA(ToolTip="An enumeration."),
	PartyChanged UMETA(ToolTip="An enumeration."),
};
RALLYHEREAPI_API FString EnumToString(const ERHAPI_DeleteTicketReason& EnumValue);
RALLYHEREAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_DeleteTicketReason& EnumValue);
RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_DeleteTicketReason& Value);
RALLYHEREAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DeleteTicketReason& Value);
RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DeleteTicketReason& Value);
