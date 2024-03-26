// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "Role.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_Role

void FRHAPI_Role::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("role_id"));
	RallyHereAPI::WriteJsonValue(Writer, RoleId);
	if (LegacyRoleId_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("legacy_role_id"));
		RallyHereAPI::WriteJsonValue(Writer, LegacyRoleId_Optional);
	}
	if (CustomData_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("custom_data"));
		RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
	}
	if (AuthBypass_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("auth_bypass"));
		RallyHereAPI::WriteJsonValue(Writer, EnumToString(AuthBypass_Optional));
	}
	if (LoginLootRewards_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("login_loot_rewards"));
		RallyHereAPI::WriteJsonValue(Writer, LoginLootRewards_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_Role::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonRoleIdField = (*Object)->TryGetField(TEXT("role_id"));
	ParseSuccess &= JsonRoleIdField.IsValid() && !JsonRoleIdField->IsNull() && TryGetJsonValue(JsonRoleIdField, RoleId);
	const TSharedPtr<FJsonValue> JsonLegacyRoleIdField = (*Object)->TryGetField(TEXT("legacy_role_id"));
	if (JsonLegacyRoleIdField.IsValid() && !JsonLegacyRoleIdField->IsNull())
	{
		LegacyRoleId_IsSet = TryGetJsonValue(JsonLegacyRoleIdField, LegacyRoleId_Optional);
		ParseSuccess &= LegacyRoleId_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
	if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
	{
		CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
		ParseSuccess &= CustomData_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonAuthBypassField = (*Object)->TryGetField(TEXT("auth_bypass"));
	if (JsonAuthBypassField.IsValid() && !JsonAuthBypassField->IsNull())
	{
		AuthBypass_IsSet = TryGetJsonValue(JsonAuthBypassField, AuthBypass_Optional);
		ParseSuccess &= AuthBypass_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonLoginLootRewardsField = (*Object)->TryGetField(TEXT("login_loot_rewards"));
	if (JsonLoginLootRewardsField.IsValid() && !JsonLoginLootRewardsField->IsNull())
	{
		LoginLootRewards_IsSet = TryGetJsonValue(JsonLoginLootRewardsField, LoginLootRewards_Optional);
		ParseSuccess &= LoginLootRewards_IsSet;
	}

	return ParseSuccess;
}

