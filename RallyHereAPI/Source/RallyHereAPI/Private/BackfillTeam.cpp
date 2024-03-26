// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "BackfillTeam.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_BackfillTeam

void FRHAPI_BackfillTeam::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("players_required"));
	RallyHereAPI::WriteJsonValue(Writer, PlayersRequired);
	Writer->WriteIdentifierPrefix(TEXT("team_id"));
	RallyHereAPI::WriteJsonValue(Writer, TeamId);
	Writer->WriteObjectEnd();
}

bool FRHAPI_BackfillTeam::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonPlayersRequiredField = (*Object)->TryGetField(TEXT("players_required"));
	ParseSuccess &= JsonPlayersRequiredField.IsValid() && !JsonPlayersRequiredField->IsNull() && TryGetJsonValue(JsonPlayersRequiredField, PlayersRequired);
	const TSharedPtr<FJsonValue> JsonTeamIdField = (*Object)->TryGetField(TEXT("team_id"));
	ParseSuccess &= JsonTeamIdField.IsValid() && !JsonTeamIdField->IsNull() && TryGetJsonValue(JsonTeamIdField, TeamId);

	return ParseSuccess;
}

