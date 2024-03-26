// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "BlockedList.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_BlockedList

void FRHAPI_BlockedList::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("player_uuid"));
	RallyHereAPI::WriteJsonValue(Writer, PlayerUuid);
	Writer->WriteIdentifierPrefix(TEXT("blocked"));
	RallyHereAPI::WriteJsonValue(Writer, Blocked);
	Writer->WriteIdentifierPrefix(TEXT("page"));
	RallyHereAPI::WriteJsonValue(Writer, Page);
	Writer->WriteObjectEnd();
}

bool FRHAPI_BlockedList::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonPlayerUuidField = (*Object)->TryGetField(TEXT("player_uuid"));
	ParseSuccess &= JsonPlayerUuidField.IsValid() && !JsonPlayerUuidField->IsNull() && TryGetJsonValue(JsonPlayerUuidField, PlayerUuid);
	const TSharedPtr<FJsonValue> JsonBlockedField = (*Object)->TryGetField(TEXT("blocked"));
	ParseSuccess &= JsonBlockedField.IsValid() && !JsonBlockedField->IsNull() && TryGetJsonValue(JsonBlockedField, Blocked);
	const TSharedPtr<FJsonValue> JsonPageField = (*Object)->TryGetField(TEXT("page"));
	ParseSuccess &= JsonPageField.IsValid() && !JsonPageField->IsNull() && TryGetJsonValue(JsonPageField, Page);

	return ParseSuccess;
}

