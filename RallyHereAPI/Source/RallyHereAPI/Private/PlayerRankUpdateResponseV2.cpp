// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlayerRankUpdateResponseV2.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlayerRankUpdateResponseV2

void FRHAPI_PlayerRankUpdateResponseV2::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("updated_players"));
	RallyHereAPI::WriteJsonValue(Writer, UpdatedPlayers);
	Writer->WriteObjectEnd();
}

bool FRHAPI_PlayerRankUpdateResponseV2::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonUpdatedPlayersField = (*Object)->TryGetField(TEXT("updated_players"));
	ParseSuccess &= JsonUpdatedPlayersField.IsValid() && !JsonUpdatedPlayersField->IsNull() && TryGetJsonValue(JsonUpdatedPlayersField, UpdatedPlayers);

	return ParseSuccess;
}

