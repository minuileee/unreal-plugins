// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "MatchMakingRuleset.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_MatchMakingRuleset

void FRHAPI_MatchMakingRuleset::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("rules"));
	RallyHereAPI::WriteJsonValue(Writer, Rules);
	Writer->WriteIdentifierPrefix(TEXT("determiner"));
	RallyHereAPI::WriteJsonValue(Writer, EnumToString(Determiner));
	Writer->WriteObjectEnd();
}

bool FRHAPI_MatchMakingRuleset::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonRulesField = (*Object)->TryGetField(TEXT("rules"));
	ParseSuccess &= JsonRulesField.IsValid() && !JsonRulesField->IsNull() && TryGetJsonValue(JsonRulesField, Rules);
	const TSharedPtr<FJsonValue> JsonDeterminerField = (*Object)->TryGetField(TEXT("determiner"));
	ParseSuccess &= JsonDeterminerField.IsValid() && !JsonDeterminerField->IsNull() && TryGetJsonValue(JsonDeterminerField, Determiner);

	return ParseSuccess;
}

