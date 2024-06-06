// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevAccountOrganizationAccountInfo.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevAccountOrganizationAccountInfo

void FRHAPI_DevAccountOrganizationAccountInfo::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("account_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, AccountId);
    Writer->WriteIdentifierPrefix(TEXT("org_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, OrgId);
    Writer->WriteIdentifierPrefix(TEXT("account_email"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, AccountEmail);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevAccountOrganizationAccountInfo::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonAccountIdField = (*Object)->TryGetField(TEXT("account_id"));
    ParseSuccess &= JsonAccountIdField.IsValid() && !JsonAccountIdField->IsNull() && TryGetJsonValue(JsonAccountIdField, AccountId);
    const TSharedPtr<FJsonValue> JsonOrgIdField = (*Object)->TryGetField(TEXT("org_id"));
    ParseSuccess &= JsonOrgIdField.IsValid() && !JsonOrgIdField->IsNull() && TryGetJsonValue(JsonOrgIdField, OrgId);
    const TSharedPtr<FJsonValue> JsonAccountEmailField = (*Object)->TryGetField(TEXT("account_email"));
    ParseSuccess &= JsonAccountEmailField.IsValid() && !JsonAccountEmailField->IsNull() && TryGetJsonValue(JsonAccountEmailField, AccountEmail);

    return ParseSuccess;
}
