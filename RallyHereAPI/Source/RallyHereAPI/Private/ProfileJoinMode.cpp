// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "ProfileJoinMode.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_ProfileJoinMode
FString EnumToString(const ERHAPI_ProfileJoinMode& Value)
{
	switch (Value)
	{
	case ERHAPI_ProfileJoinMode::Normal:
		return TEXT("normal");
	case ERHAPI_ProfileJoinMode::Backfill:
		return TEXT("backfill");
	case ERHAPI_ProfileJoinMode::CreatedBefore:
		return TEXT("created_before");
	}

	UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_ProfileJoinMode::Values Value (%d)"), (int)Value);
	return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_ProfileJoinMode& Value)
{
	static TMap<FString, ERHAPI_ProfileJoinMode> StringToEnum = { 
		{ TEXT("normal"), ERHAPI_ProfileJoinMode::Normal },
		{ TEXT("backfill"), ERHAPI_ProfileJoinMode::Backfill },
		{ TEXT("created_before"), ERHAPI_ProfileJoinMode::CreatedBefore },	};

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;
	return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_ProfileJoinMode& Value)
{
	return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_ProfileJoinMode& Value)
{
	RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_ProfileJoinMode& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if (EnumFromString(TmpValue, Value))
			return true;
	}
	return false;
}


