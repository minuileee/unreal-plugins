// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "JoinParams.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_JoinParams

void FRHAPI_JoinParams::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("public_conn_str"));
	RallyHereAPI::WriteJsonValue(Writer, PublicConnStr);
	Writer->WriteIdentifierPrefix(TEXT("private_conn_str"));
	RallyHereAPI::WriteJsonValue(Writer, PrivateConnStr);
	if (CustomData_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("custom_data"));
		RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_JoinParams::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonPublicConnStrField = (*Object)->TryGetField(TEXT("public_conn_str"));
	ParseSuccess &= JsonPublicConnStrField.IsValid() && !JsonPublicConnStrField->IsNull() && TryGetJsonValue(JsonPublicConnStrField, PublicConnStr);
	const TSharedPtr<FJsonValue> JsonPrivateConnStrField = (*Object)->TryGetField(TEXT("private_conn_str"));
	ParseSuccess &= JsonPrivateConnStrField.IsValid() && !JsonPrivateConnStrField->IsNull() && TryGetJsonValue(JsonPrivateConnStrField, PrivateConnStr);
	const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
	if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
	{
		CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
		ParseSuccess &= CustomData_IsSet;
	}

	return ParseSuccess;
}

