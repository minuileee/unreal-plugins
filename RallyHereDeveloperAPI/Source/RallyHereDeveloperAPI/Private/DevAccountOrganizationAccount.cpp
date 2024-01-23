// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevAccountOrganizationAccount.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevAccountOrganizationAccount

void FRHAPI_DevAccountOrganizationAccount::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("org_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, OrgId);
    Writer->WriteIdentifierPrefix(TEXT("account_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, AccountId);
    Writer->WriteIdentifierPrefix(TEXT("account_email"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, AccountEmail);
    if (LastIp_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("last_ip"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LastIp_Optional);
    }
    if (LastLogin_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("last_login"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LastLogin_Optional);
    }
    if (Name_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("name"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Name_Optional);
    }
    if (Nickname_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("nickname"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Nickname_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevAccountOrganizationAccount::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonOrgIdField = (*Object)->TryGetField(TEXT("org_id"));
    ParseSuccess &= JsonOrgIdField.IsValid() && !JsonOrgIdField->IsNull() && TryGetJsonValue(JsonOrgIdField, OrgId);
    const TSharedPtr<FJsonValue> JsonAccountIdField = (*Object)->TryGetField(TEXT("account_id"));
    ParseSuccess &= JsonAccountIdField.IsValid() && !JsonAccountIdField->IsNull() && TryGetJsonValue(JsonAccountIdField, AccountId);
    const TSharedPtr<FJsonValue> JsonAccountEmailField = (*Object)->TryGetField(TEXT("account_email"));
    ParseSuccess &= JsonAccountEmailField.IsValid() && !JsonAccountEmailField->IsNull() && TryGetJsonValue(JsonAccountEmailField, AccountEmail);
    const TSharedPtr<FJsonValue> JsonLastIpField = (*Object)->TryGetField(TEXT("last_ip"));
    if (JsonLastIpField.IsValid() && !JsonLastIpField->IsNull())
    {
        LastIp_IsSet = TryGetJsonValue(JsonLastIpField, LastIp_Optional);
        ParseSuccess &= LastIp_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLastLoginField = (*Object)->TryGetField(TEXT("last_login"));
    if (JsonLastLoginField.IsValid() && !JsonLastLoginField->IsNull())
    {
        LastLogin_IsSet = TryGetJsonValue(JsonLastLoginField, LastLogin_Optional);
        ParseSuccess &= LastLogin_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonNameField = (*Object)->TryGetField(TEXT("name"));
    if (JsonNameField.IsValid() && !JsonNameField->IsNull())
    {
        Name_IsSet = TryGetJsonValue(JsonNameField, Name_Optional);
        ParseSuccess &= Name_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonNicknameField = (*Object)->TryGetField(TEXT("nickname"));
    if (JsonNicknameField.IsValid() && !JsonNicknameField->IsNull())
    {
        Nickname_IsSet = TryGetJsonValue(JsonNicknameField, Nickname_Optional);
        ParseSuccess &= Nickname_IsSet;
    }

    return ParseSuccess;
}

