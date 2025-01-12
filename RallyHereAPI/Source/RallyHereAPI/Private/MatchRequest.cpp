// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "MatchRequest.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_MatchRequest

void FRHAPI_MatchRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	if (Type_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("type"));
		RallyHereAPI::WriteJsonValue(Writer, Type_Optional);
	}
	if (State_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("state"));
		RallyHereAPI::WriteJsonValue(Writer, EnumToString(State_Optional));
	}
	if (StartTimestamp_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("start_timestamp"));
		RallyHereAPI::WriteJsonValue(Writer, StartTimestamp_Optional);
	}
	if (EndTimestamp_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("end_timestamp"));
		RallyHereAPI::WriteJsonValue(Writer, EndTimestamp_Optional);
	}
	if (DurationSeconds_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("duration_seconds"));
		RallyHereAPI::WriteJsonValue(Writer, DurationSeconds_Optional);
	}
	if (CustomData_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("custom_data"));
		RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
	}
	if (CorrelationId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("correlation_id"));
		RallyHereAPI::WriteJsonValue(Writer, CorrelationId_Optional);
	}
	if (Sessions_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("sessions"));
		RallyHereAPI::WriteJsonValue(Writer, Sessions_Optional);
	}
	if (Instances_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("instances"));
		RallyHereAPI::WriteJsonValue(Writer, Instances_Optional);
	}
	if (Allocations_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("allocations"));
		RallyHereAPI::WriteJsonValue(Writer, Allocations_Optional);
	}
	if (Players_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("players"));
		RallyHereAPI::WriteJsonValue(Writer, Players_Optional);
	}
	if (Segments_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("segments"));
		RallyHereAPI::WriteJsonValue(Writer, Segments_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_MatchRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonTypeField = (*Object)->TryGetField(TEXT("type"));
	if (JsonTypeField.IsValid() && !JsonTypeField->IsNull())
	{
		Type_IsSet = TryGetJsonValue(JsonTypeField, Type_Optional);
		ParseSuccess &= Type_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonStateField = (*Object)->TryGetField(TEXT("state"));
	if (JsonStateField.IsValid() && !JsonStateField->IsNull())
	{
		State_IsSet = TryGetJsonValue(JsonStateField, State_Optional);
		ParseSuccess &= State_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonStartTimestampField = (*Object)->TryGetField(TEXT("start_timestamp"));
	if (JsonStartTimestampField.IsValid() && !JsonStartTimestampField->IsNull())
	{
		StartTimestamp_IsSet = TryGetJsonValue(JsonStartTimestampField, StartTimestamp_Optional);
		ParseSuccess &= StartTimestamp_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonEndTimestampField = (*Object)->TryGetField(TEXT("end_timestamp"));
	if (JsonEndTimestampField.IsValid() && !JsonEndTimestampField->IsNull())
	{
		EndTimestamp_IsSet = TryGetJsonValue(JsonEndTimestampField, EndTimestamp_Optional);
		ParseSuccess &= EndTimestamp_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonDurationSecondsField = (*Object)->TryGetField(TEXT("duration_seconds"));
	if (JsonDurationSecondsField.IsValid() && !JsonDurationSecondsField->IsNull())
	{
		DurationSeconds_IsSet = TryGetJsonValue(JsonDurationSecondsField, DurationSeconds_Optional);
		ParseSuccess &= DurationSeconds_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
	if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
	{
		CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
		ParseSuccess &= CustomData_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonCorrelationIdField = (*Object)->TryGetField(TEXT("correlation_id"));
	if (JsonCorrelationIdField.IsValid() && !JsonCorrelationIdField->IsNull())
	{
		CorrelationId_IsSet = TryGetJsonValue(JsonCorrelationIdField, CorrelationId_Optional);
		ParseSuccess &= CorrelationId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonSessionsField = (*Object)->TryGetField(TEXT("sessions"));
	if (JsonSessionsField.IsValid() && !JsonSessionsField->IsNull())
	{
		Sessions_IsSet = TryGetJsonValue(JsonSessionsField, Sessions_Optional);
		ParseSuccess &= Sessions_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonInstancesField = (*Object)->TryGetField(TEXT("instances"));
	if (JsonInstancesField.IsValid() && !JsonInstancesField->IsNull())
	{
		Instances_IsSet = TryGetJsonValue(JsonInstancesField, Instances_Optional);
		ParseSuccess &= Instances_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonAllocationsField = (*Object)->TryGetField(TEXT("allocations"));
	if (JsonAllocationsField.IsValid() && !JsonAllocationsField->IsNull())
	{
		Allocations_IsSet = TryGetJsonValue(JsonAllocationsField, Allocations_Optional);
		ParseSuccess &= Allocations_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPlayersField = (*Object)->TryGetField(TEXT("players"));
	if (JsonPlayersField.IsValid() && !JsonPlayersField->IsNull())
	{
		Players_IsSet = TryGetJsonValue(JsonPlayersField, Players_Optional);
		ParseSuccess &= Players_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonSegmentsField = (*Object)->TryGetField(TEXT("segments"));
	if (JsonSegmentsField.IsValid() && !JsonSegmentsField->IsNull())
	{
		Segments_IsSet = TryGetJsonValue(JsonSegmentsField, Segments_Optional);
		ParseSuccess &= Segments_IsSet;
	}

	return ParseSuccess;
}

