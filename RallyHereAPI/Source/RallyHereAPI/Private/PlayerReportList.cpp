// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlayerReportList.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlayerReportList

void FRHAPI_PlayerReportList::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("reports"));
	RallyHereAPI::WriteJsonValue(Writer, Reports);
	if (NextCursor_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("next_cursor"));
		RallyHereAPI::WriteJsonValue(Writer, NextCursor_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_PlayerReportList::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonReportsField = (*Object)->TryGetField(TEXT("reports"));
	ParseSuccess &= JsonReportsField.IsValid() && !JsonReportsField->IsNull() && TryGetJsonValue(JsonReportsField, Reports);
	const TSharedPtr<FJsonValue> JsonNextCursorField = (*Object)->TryGetField(TEXT("next_cursor"));
	if (JsonNextCursorField.IsValid() && !JsonNextCursorField->IsNull())
	{
		NextCursor_IsSet = TryGetJsonValue(JsonNextCursorField, NextCursor_Optional);
		ParseSuccess &= NextCursor_IsSet;
	}

	return ParseSuccess;
}

