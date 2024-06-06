// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevAccount.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevAccount

void FRHAPI_DevAccount::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("account_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, AccountId);
    Writer->WriteIdentifierPrefix(TEXT("Auth0_account_Id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Auth0AccountId);
    Writer->WriteIdentifierPrefix(TEXT("account_email"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, AccountEmail);
    if (GlobalAdmin_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("global_admin"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, GlobalAdmin_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevAccount::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonAccountIdField = (*Object)->TryGetField(TEXT("account_id"));
    ParseSuccess &= JsonAccountIdField.IsValid() && !JsonAccountIdField->IsNull() && TryGetJsonValue(JsonAccountIdField, AccountId);
    const TSharedPtr<FJsonValue> JsonAuth0AccountIdField = (*Object)->TryGetField(TEXT("Auth0_account_Id"));
    ParseSuccess &= JsonAuth0AccountIdField.IsValid() && !JsonAuth0AccountIdField->IsNull() && TryGetJsonValue(JsonAuth0AccountIdField, Auth0AccountId);
    const TSharedPtr<FJsonValue> JsonAccountEmailField = (*Object)->TryGetField(TEXT("account_email"));
    ParseSuccess &= JsonAccountEmailField.IsValid() && !JsonAccountEmailField->IsNull() && TryGetJsonValue(JsonAccountEmailField, AccountEmail);
    const TSharedPtr<FJsonValue> JsonGlobalAdminField = (*Object)->TryGetField(TEXT("global_admin"));
    if (JsonGlobalAdminField.IsValid() && !JsonGlobalAdminField->IsNull())
    {
        GlobalAdmin_IsSet = TryGetJsonValue(JsonGlobalAdminField, GlobalAdmin_Optional);
        ParseSuccess &= GlobalAdmin_IsSet;
    }

    return ParseSuccess;
}
