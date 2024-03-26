// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "MatchPlayerResponse.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_MatchPlayerResponse

void FRHAPI_MatchPlayerResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	if (LastModifiedTimestamp_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("last_modified_timestamp"));
		RallyHereAPI::WriteJsonValue(Writer, LastModifiedTimestamp_Optional);
	}
	if (CreatedTimestamp_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("created_timestamp"));
		RallyHereAPI::WriteJsonValue(Writer, CreatedTimestamp_Optional);
	}
	if (PlayerUuid_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("player_uuid"));
		RallyHereAPI::WriteJsonValue(Writer, PlayerUuid_Optional);
	}
	if (TeamId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("team_id"));
		RallyHereAPI::WriteJsonValue(Writer, TeamId_Optional);
	}
	if (PartySessionId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("party_session_id"));
		RallyHereAPI::WriteJsonValue(Writer, PartySessionId_Optional);
	}
	if (Placement_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("placement"));
		RallyHereAPI::WriteJsonValue(Writer, Placement_Optional);
	}
	if (JoinedMatchTimestamp_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("joined_match_timestamp"));
		RallyHereAPI::WriteJsonValue(Writer, JoinedMatchTimestamp_Optional);
	}
	if (LeftMatchTimestamp_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("left_match_timestamp"));
		RallyHereAPI::WriteJsonValue(Writer, LeftMatchTimestamp_Optional);
	}
	if (DurationSeconds_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("duration_seconds"));
		RallyHereAPI::WriteJsonValue(Writer, DurationSeconds_Optional);
	}
	if (StartingRank_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("starting_rank"));
		RallyHereAPI::WriteJsonValue(Writer, StartingRank_Optional);
	}
	if (FinishingRank_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("finishing_rank"));
		RallyHereAPI::WriteJsonValue(Writer, FinishingRank_Optional);
	}
	if (CustomData_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("custom_data"));
		RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_MatchPlayerResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonLastModifiedTimestampField = (*Object)->TryGetField(TEXT("last_modified_timestamp"));
	if (JsonLastModifiedTimestampField.IsValid() && !JsonLastModifiedTimestampField->IsNull())
	{
		LastModifiedTimestamp_IsSet = TryGetJsonValue(JsonLastModifiedTimestampField, LastModifiedTimestamp_Optional);
		ParseSuccess &= LastModifiedTimestamp_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonCreatedTimestampField = (*Object)->TryGetField(TEXT("created_timestamp"));
	if (JsonCreatedTimestampField.IsValid() && !JsonCreatedTimestampField->IsNull())
	{
		CreatedTimestamp_IsSet = TryGetJsonValue(JsonCreatedTimestampField, CreatedTimestamp_Optional);
		ParseSuccess &= CreatedTimestamp_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPlayerUuidField = (*Object)->TryGetField(TEXT("player_uuid"));
	if (JsonPlayerUuidField.IsValid() && !JsonPlayerUuidField->IsNull())
	{
		PlayerUuid_IsSet = TryGetJsonValue(JsonPlayerUuidField, PlayerUuid_Optional);
		ParseSuccess &= PlayerUuid_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonTeamIdField = (*Object)->TryGetField(TEXT("team_id"));
	if (JsonTeamIdField.IsValid() && !JsonTeamIdField->IsNull())
	{
		TeamId_IsSet = TryGetJsonValue(JsonTeamIdField, TeamId_Optional);
		ParseSuccess &= TeamId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPartySessionIdField = (*Object)->TryGetField(TEXT("party_session_id"));
	if (JsonPartySessionIdField.IsValid() && !JsonPartySessionIdField->IsNull())
	{
		PartySessionId_IsSet = TryGetJsonValue(JsonPartySessionIdField, PartySessionId_Optional);
		ParseSuccess &= PartySessionId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonPlacementField = (*Object)->TryGetField(TEXT("placement"));
	if (JsonPlacementField.IsValid() && !JsonPlacementField->IsNull())
	{
		Placement_IsSet = TryGetJsonValue(JsonPlacementField, Placement_Optional);
		ParseSuccess &= Placement_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonJoinedMatchTimestampField = (*Object)->TryGetField(TEXT("joined_match_timestamp"));
	if (JsonJoinedMatchTimestampField.IsValid() && !JsonJoinedMatchTimestampField->IsNull())
	{
		JoinedMatchTimestamp_IsSet = TryGetJsonValue(JsonJoinedMatchTimestampField, JoinedMatchTimestamp_Optional);
		ParseSuccess &= JoinedMatchTimestamp_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonLeftMatchTimestampField = (*Object)->TryGetField(TEXT("left_match_timestamp"));
	if (JsonLeftMatchTimestampField.IsValid() && !JsonLeftMatchTimestampField->IsNull())
	{
		LeftMatchTimestamp_IsSet = TryGetJsonValue(JsonLeftMatchTimestampField, LeftMatchTimestamp_Optional);
		ParseSuccess &= LeftMatchTimestamp_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonDurationSecondsField = (*Object)->TryGetField(TEXT("duration_seconds"));
	if (JsonDurationSecondsField.IsValid() && !JsonDurationSecondsField->IsNull())
	{
		DurationSeconds_IsSet = TryGetJsonValue(JsonDurationSecondsField, DurationSeconds_Optional);
		ParseSuccess &= DurationSeconds_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonStartingRankField = (*Object)->TryGetField(TEXT("starting_rank"));
	if (JsonStartingRankField.IsValid() && !JsonStartingRankField->IsNull())
	{
		StartingRank_IsSet = TryGetJsonValue(JsonStartingRankField, StartingRank_Optional);
		ParseSuccess &= StartingRank_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonFinishingRankField = (*Object)->TryGetField(TEXT("finishing_rank"));
	if (JsonFinishingRankField.IsValid() && !JsonFinishingRankField->IsNull())
	{
		FinishingRank_IsSet = TryGetJsonValue(JsonFinishingRankField, FinishingRank_Optional);
		ParseSuccess &= FinishingRank_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
	if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
	{
		CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
		ParseSuccess &= CustomData_IsSet;
	}

	return ParseSuccess;
}

