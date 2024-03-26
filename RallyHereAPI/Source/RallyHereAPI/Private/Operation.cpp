// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "Operation.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_Operation
FString EnumToString(const ERHAPI_Operation& Value)
{
	switch (Value)
	{
	case ERHAPI_Operation::Equal:
		return TEXT("eq");
	case ERHAPI_Operation::NotEqual:
		return TEXT("ne");
	case ERHAPI_Operation::LessThan:
		return TEXT("lt");
	case ERHAPI_Operation::LessThanEqual:
		return TEXT("le");
	case ERHAPI_Operation::GreaterThan:
		return TEXT("gt");
	case ERHAPI_Operation::GreaterThanEqual:
		return TEXT("ge");
	}

	UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_Operation::Values Value (%d)"), (int)Value);
	return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_Operation& Value)
{
	static TMap<FString, ERHAPI_Operation> StringToEnum = { 
		{ TEXT("eq"), ERHAPI_Operation::Equal },
		{ TEXT("ne"), ERHAPI_Operation::NotEqual },
		{ TEXT("lt"), ERHAPI_Operation::LessThan },
		{ TEXT("le"), ERHAPI_Operation::LessThanEqual },
		{ TEXT("gt"), ERHAPI_Operation::GreaterThan },
		{ TEXT("ge"), ERHAPI_Operation::GreaterThanEqual },	};

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;
	return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_Operation& Value)
{
	return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_Operation& Value)
{
	RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_Operation& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if (EnumFromString(TmpValue, Value))
			return true;
	}
	return false;
}


