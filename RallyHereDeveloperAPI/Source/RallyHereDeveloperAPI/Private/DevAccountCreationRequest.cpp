// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevAccountCreationRequest.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevAccountCreationRequest

void FRHAPI_DevAccountCreationRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("account_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, AccountId);
    Writer->WriteIdentifierPrefix(TEXT("first_name"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, FirstName);
    Writer->WriteIdentifierPrefix(TEXT("last_name"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, LastName);
    Writer->WriteIdentifierPrefix(TEXT("nickname"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Nickname);
    Writer->WriteIdentifierPrefix(TEXT("account_email"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, AccountEmail);
    Writer->WriteIdentifierPrefix(TEXT("password"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Password);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevAccountCreationRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonAccountIdField = (*Object)->TryGetField(TEXT("account_id"));
    ParseSuccess &= JsonAccountIdField.IsValid() && !JsonAccountIdField->IsNull() && TryGetJsonValue(JsonAccountIdField, AccountId);
    const TSharedPtr<FJsonValue> JsonFirstNameField = (*Object)->TryGetField(TEXT("first_name"));
    ParseSuccess &= JsonFirstNameField.IsValid() && !JsonFirstNameField->IsNull() && TryGetJsonValue(JsonFirstNameField, FirstName);
    const TSharedPtr<FJsonValue> JsonLastNameField = (*Object)->TryGetField(TEXT("last_name"));
    ParseSuccess &= JsonLastNameField.IsValid() && !JsonLastNameField->IsNull() && TryGetJsonValue(JsonLastNameField, LastName);
    const TSharedPtr<FJsonValue> JsonNicknameField = (*Object)->TryGetField(TEXT("nickname"));
    ParseSuccess &= JsonNicknameField.IsValid() && !JsonNicknameField->IsNull() && TryGetJsonValue(JsonNicknameField, Nickname);
    const TSharedPtr<FJsonValue> JsonAccountEmailField = (*Object)->TryGetField(TEXT("account_email"));
    ParseSuccess &= JsonAccountEmailField.IsValid() && !JsonAccountEmailField->IsNull() && TryGetJsonValue(JsonAccountEmailField, AccountEmail);
    const TSharedPtr<FJsonValue> JsonPasswordField = (*Object)->TryGetField(TEXT("password"));
    ParseSuccess &= JsonPasswordField.IsValid() && !JsonPasswordField->IsNull() && TryGetJsonValue(JsonPasswordField, Password);

    return ParseSuccess;
}

