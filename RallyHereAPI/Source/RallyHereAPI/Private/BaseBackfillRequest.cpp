// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "BaseBackfillRequest.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_BaseBackfillRequest

void FRHAPI_BaseBackfillRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("instance_id"));
	RallyHereAPI::WriteJsonValue(Writer, InstanceId);
	Writer->WriteObjectEnd();
}

bool FRHAPI_BaseBackfillRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonInstanceIdField = (*Object)->TryGetField(TEXT("instance_id"));
	ParseSuccess &= JsonInstanceIdField.IsValid() && !JsonInstanceIdField->IsNull() && TryGetJsonValue(JsonInstanceIdField, InstanceId);

	return ParseSuccess;
}

