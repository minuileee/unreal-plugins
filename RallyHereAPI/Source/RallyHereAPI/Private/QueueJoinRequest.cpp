// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "QueueJoinRequest.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_QueueJoinRequest

void FRHAPI_QueueJoinRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("queue_id"));
	RallyHereAPI::WriteJsonValue(Writer, QueueId);
	if (AdditionalJoinParams_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("additional_join_params"));
		RallyHereAPI::WriteJsonValue(Writer, AdditionalJoinParams_Optional);
	}
	if (MapPreferences_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("map_preferences"));
		RallyHereAPI::WriteJsonValue(Writer, MapPreferences_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_QueueJoinRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonQueueIdField = (*Object)->TryGetField(TEXT("queue_id"));
	ParseSuccess &= JsonQueueIdField.IsValid() && !JsonQueueIdField->IsNull() && TryGetJsonValue(JsonQueueIdField, QueueId);
	const TSharedPtr<FJsonValue> JsonAdditionalJoinParamsField = (*Object)->TryGetField(TEXT("additional_join_params"));
	if (JsonAdditionalJoinParamsField.IsValid() && !JsonAdditionalJoinParamsField->IsNull())
	{
		AdditionalJoinParams_IsSet = TryGetJsonValue(JsonAdditionalJoinParamsField, AdditionalJoinParams_Optional);
		ParseSuccess &= AdditionalJoinParams_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonMapPreferencesField = (*Object)->TryGetField(TEXT("map_preferences"));
	if (JsonMapPreferencesField.IsValid() && !JsonMapPreferencesField->IsNull())
	{
		MapPreferences_IsSet = TryGetJsonValue(JsonMapPreferencesField, MapPreferences_Optional);
		ParseSuccess &= MapPreferences_IsSet;
	}

	return ParseSuccess;
}

