// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "RoleAuthBypass.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_RoleAuthBypass
FString EnumToString(const ERHAPI_RoleAuthBypass& Value)
{
	switch (Value)
	{
	case ERHAPI_RoleAuthBypass::None:
		return TEXT("none");
	case ERHAPI_RoleAuthBypass::Limited:
		return TEXT("limited");
	case ERHAPI_RoleAuthBypass::Locked:
		return TEXT("locked");
	}

	UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_RoleAuthBypass::Values Value (%d)"), (int)Value);
	return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_RoleAuthBypass& Value)
{
	static TMap<FString, ERHAPI_RoleAuthBypass> StringToEnum = { 
		{ TEXT("none"), ERHAPI_RoleAuthBypass::None },
		{ TEXT("limited"), ERHAPI_RoleAuthBypass::Limited },
		{ TEXT("locked"), ERHAPI_RoleAuthBypass::Locked },	};

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;
	return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_RoleAuthBypass& Value)
{
	return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_RoleAuthBypass& Value)
{
	RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_RoleAuthBypass& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if (EnumFromString(TmpValue, Value))
			return true;
	}
	return false;
}


