// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevRoleUpdate.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevRoleUpdate

void FRHAPI_DevRoleUpdate::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Name_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("name"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Name_Optional);
    }
    if (Description_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("description"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Description_Optional);
    }
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    if (LoginLootRewards_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("login_loot_rewards"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LoginLootRewards_Optional);
    }
    if (AuthBypass_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("auth_bypass"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(AuthBypass_Optional));
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevRoleUpdate::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonNameField = (*Object)->TryGetField(TEXT("name"));
    if (JsonNameField.IsValid() && !JsonNameField->IsNull())
    {
        Name_IsSet = TryGetJsonValue(JsonNameField, Name_Optional);
        ParseSuccess &= Name_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonDescriptionField = (*Object)->TryGetField(TEXT("description"));
    if (JsonDescriptionField.IsValid() && !JsonDescriptionField->IsNull())
    {
        Description_IsSet = TryGetJsonValue(JsonDescriptionField, Description_Optional);
        ParseSuccess &= Description_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLoginLootRewardsField = (*Object)->TryGetField(TEXT("login_loot_rewards"));
    if (JsonLoginLootRewardsField.IsValid() && !JsonLoginLootRewardsField->IsNull())
    {
        LoginLootRewards_IsSet = TryGetJsonValue(JsonLoginLootRewardsField, LoginLootRewards_Optional);
        ParseSuccess &= LoginLootRewards_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonAuthBypassField = (*Object)->TryGetField(TEXT("auth_bypass"));
    if (JsonAuthBypassField.IsValid() && !JsonAuthBypassField->IsNull())
    {
        AuthBypass_IsSet = TryGetJsonValue(JsonAuthBypassField, AuthBypass_Optional);
        ParseSuccess &= AuthBypass_IsSet;
    }

    return ParseSuccess;
}

