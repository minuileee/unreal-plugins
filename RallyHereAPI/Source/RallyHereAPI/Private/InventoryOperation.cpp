// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "InventoryOperation.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_InventoryOperation
FString EnumToString(const ERHAPI_InventoryOperation& Value)
{
	switch (Value)
	{
	case ERHAPI_InventoryOperation::Invalid:
		return TEXT("invalid");
	case ERHAPI_InventoryOperation::Add:
		return TEXT("add");
	case ERHAPI_InventoryOperation::Subtract:
		return TEXT("subtract");
	case ERHAPI_InventoryOperation::Set:
		return TEXT("set");
	case ERHAPI_InventoryOperation::CheckGreaterThanOrEqual:
		return TEXT("check_greater_than_or_equal");
	case ERHAPI_InventoryOperation::CheckLessThan:
		return TEXT("check_less_than");
	case ERHAPI_InventoryOperation::CheckGreaterThanOrEqualAndSubtract:
		return TEXT("check_greater_than_or_equal_and_subtract");
	}

	UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_InventoryOperation::Values Value (%d)"), (int)Value);
	return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_InventoryOperation& Value)
{
	static TMap<FString, ERHAPI_InventoryOperation> StringToEnum = { 
		{ TEXT("invalid"), ERHAPI_InventoryOperation::Invalid },
		{ TEXT("add"), ERHAPI_InventoryOperation::Add },
		{ TEXT("subtract"), ERHAPI_InventoryOperation::Subtract },
		{ TEXT("set"), ERHAPI_InventoryOperation::Set },
		{ TEXT("check_greater_than_or_equal"), ERHAPI_InventoryOperation::CheckGreaterThanOrEqual },
		{ TEXT("check_less_than"), ERHAPI_InventoryOperation::CheckLessThan },
		{ TEXT("check_greater_than_or_equal_and_subtract"), ERHAPI_InventoryOperation::CheckGreaterThanOrEqualAndSubtract },	};

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;
	return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_InventoryOperation& Value)
{
	return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_InventoryOperation& Value)
{
	RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_InventoryOperation& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if (EnumFromString(TmpValue, Value))
			return true;
	}
	return false;
}


