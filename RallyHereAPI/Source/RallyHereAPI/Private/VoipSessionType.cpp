// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "VoipSessionType.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_VoipSessionType
FString EnumToString(const ERHAPI_VoipSessionType& Value)
{
	switch (Value)
	{
	case ERHAPI_VoipSessionType::Session:
		return TEXT("session");
	case ERHAPI_VoipSessionType::Team:
		return TEXT("team");
	}

	UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_VoipSessionType::Values Value (%d)"), (int)Value);
	return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_VoipSessionType& Value)
{
	static TMap<FString, ERHAPI_VoipSessionType> StringToEnum = { 
		{ TEXT("session"), ERHAPI_VoipSessionType::Session },
		{ TEXT("team"), ERHAPI_VoipSessionType::Team },	};

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;
	return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_VoipSessionType& Value)
{
	return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_VoipSessionType& Value)
{
	RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_VoipSessionType& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if (EnumFromString(TmpValue, Value))
			return true;
	}
	return false;
}


