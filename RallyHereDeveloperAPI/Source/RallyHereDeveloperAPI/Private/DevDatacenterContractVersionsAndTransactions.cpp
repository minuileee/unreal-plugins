// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevDatacenterContractVersionsAndTransactions.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevDatacenterContractVersionsAndTransactions

void FRHAPI_DevDatacenterContractVersionsAndTransactions::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("versions"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Versions);
    Writer->WriteIdentifierPrefix(TEXT("transactions"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Transactions);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevDatacenterContractVersionsAndTransactions::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonVersionsField = (*Object)->TryGetField(TEXT("versions"));
    ParseSuccess &= JsonVersionsField.IsValid() && !JsonVersionsField->IsNull() && TryGetJsonValue(JsonVersionsField, Versions);
    const TSharedPtr<FJsonValue> JsonTransactionsField = (*Object)->TryGetField(TEXT("transactions"));
    ParseSuccess &= JsonTransactionsField.IsValid() && !JsonTransactionsField->IsNull() && TryGetJsonValue(JsonTransactionsField, Transactions);

    return ParseSuccess;
}

