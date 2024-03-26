// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "InstanceHealthSettingsResponse.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_InstanceHealthSettingsResponse

void FRHAPI_InstanceHealthSettingsResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("cadence_seconds"));
	RallyHereAPI::WriteJsonValue(Writer, CadenceSeconds);
	Writer->WriteIdentifierPrefix(TEXT("unhealthy_health_check_percentage"));
	RallyHereAPI::WriteJsonValue(Writer, UnhealthyHealthCheckPercentage);
	Writer->WriteIdentifierPrefix(TEXT("missed_checks_before_unknown"));
	RallyHereAPI::WriteJsonValue(Writer, MissedChecksBeforeUnknown);
	Writer->WriteObjectEnd();
}

bool FRHAPI_InstanceHealthSettingsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonCadenceSecondsField = (*Object)->TryGetField(TEXT("cadence_seconds"));
	ParseSuccess &= JsonCadenceSecondsField.IsValid() && !JsonCadenceSecondsField->IsNull() && TryGetJsonValue(JsonCadenceSecondsField, CadenceSeconds);
	const TSharedPtr<FJsonValue> JsonUnhealthyHealthCheckPercentageField = (*Object)->TryGetField(TEXT("unhealthy_health_check_percentage"));
	ParseSuccess &= JsonUnhealthyHealthCheckPercentageField.IsValid() && !JsonUnhealthyHealthCheckPercentageField->IsNull() && TryGetJsonValue(JsonUnhealthyHealthCheckPercentageField, UnhealthyHealthCheckPercentage);
	const TSharedPtr<FJsonValue> JsonMissedChecksBeforeUnknownField = (*Object)->TryGetField(TEXT("missed_checks_before_unknown"));
	ParseSuccess &= JsonMissedChecksBeforeUnknownField.IsValid() && !JsonMissedChecksBeforeUnknownField->IsNull() && TryGetJsonValue(JsonMissedChecksBeforeUnknownField, MissedChecksBeforeUnknown);

	return ParseSuccess;
}

