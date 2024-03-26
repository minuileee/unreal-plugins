// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "ReportReason.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_ReportReason
FString EnumToString(const ERHAPI_ReportReason& Value)
{
	switch (Value)
	{
	case ERHAPI_ReportReason::Cheating:
		return TEXT("cheating");
	case ERHAPI_ReportReason::HateSpeech:
		return TEXT("hate_speech");
	case ERHAPI_ReportReason::Harassment:
		return TEXT("harassment");
	case ERHAPI_ReportReason::RealLifeThreat:
		return TEXT("real_life_threat");
	case ERHAPI_ReportReason::Teaming:
		return TEXT("teaming");
	case ERHAPI_ReportReason::IntentionalFeeding:
		return TEXT("intentional_feeding");
	case ERHAPI_ReportReason::StreamSniping:
		return TEXT("stream_sniping");
	case ERHAPI_ReportReason::Afk:
		return TEXT("afk");
	case ERHAPI_ReportReason::DidntPlayAssignedRole:
		return TEXT("didnt_play_assigned_role");
	case ERHAPI_ReportReason::Other:
		return TEXT("other");
	}

	UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_ReportReason::Values Value (%d)"), (int)Value);
	return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_ReportReason& Value)
{
	static TMap<FString, ERHAPI_ReportReason> StringToEnum = { 
		{ TEXT("cheating"), ERHAPI_ReportReason::Cheating },
		{ TEXT("hate_speech"), ERHAPI_ReportReason::HateSpeech },
		{ TEXT("harassment"), ERHAPI_ReportReason::Harassment },
		{ TEXT("real_life_threat"), ERHAPI_ReportReason::RealLifeThreat },
		{ TEXT("teaming"), ERHAPI_ReportReason::Teaming },
		{ TEXT("intentional_feeding"), ERHAPI_ReportReason::IntentionalFeeding },
		{ TEXT("stream_sniping"), ERHAPI_ReportReason::StreamSniping },
		{ TEXT("afk"), ERHAPI_ReportReason::Afk },
		{ TEXT("didnt_play_assigned_role"), ERHAPI_ReportReason::DidntPlayAssignedRole },
		{ TEXT("other"), ERHAPI_ReportReason::Other },	};

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;
	return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_ReportReason& Value)
{
	return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_ReportReason& Value)
{
	RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_ReportReason& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if (EnumFromString(TmpValue, Value))
			return true;
	}
	return false;
}


