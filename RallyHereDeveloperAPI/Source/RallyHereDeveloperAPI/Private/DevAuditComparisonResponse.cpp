// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevAuditComparisonResponse.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevAuditComparisonResponse

void FRHAPI_DevAuditComparisonResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("audit_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, AuditId);
    Writer->WriteIdentifierPrefix(TEXT("audit_ref_type"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, AuditRefType);
    Writer->WriteIdentifierPrefix(TEXT("audit_ref_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, AuditRefId);
    Writer->WriteIdentifierPrefix(TEXT("audit_path"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, AuditPath);
    Writer->WriteIdentifierPrefix(TEXT("before"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Before);
    Writer->WriteIdentifierPrefix(TEXT("after"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, After);
    Writer->WriteIdentifierPrefix(TEXT("account_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, AccountId);
    Writer->WriteIdentifierPrefix(TEXT("modified_timestamp"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, ModifiedTimestamp);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevAuditComparisonResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonAuditIdField = (*Object)->TryGetField(TEXT("audit_id"));
    ParseSuccess &= JsonAuditIdField.IsValid() && !JsonAuditIdField->IsNull() && TryGetJsonValue(JsonAuditIdField, AuditId);
    const TSharedPtr<FJsonValue> JsonAuditRefTypeField = (*Object)->TryGetField(TEXT("audit_ref_type"));
    ParseSuccess &= JsonAuditRefTypeField.IsValid() && !JsonAuditRefTypeField->IsNull() && TryGetJsonValue(JsonAuditRefTypeField, AuditRefType);
    const TSharedPtr<FJsonValue> JsonAuditRefIdField = (*Object)->TryGetField(TEXT("audit_ref_id"));
    ParseSuccess &= JsonAuditRefIdField.IsValid() && !JsonAuditRefIdField->IsNull() && TryGetJsonValue(JsonAuditRefIdField, AuditRefId);
    const TSharedPtr<FJsonValue> JsonAuditPathField = (*Object)->TryGetField(TEXT("audit_path"));
    ParseSuccess &= JsonAuditPathField.IsValid() && !JsonAuditPathField->IsNull() && TryGetJsonValue(JsonAuditPathField, AuditPath);
    const TSharedPtr<FJsonValue> JsonBeforeField = (*Object)->TryGetField(TEXT("before"));
    ParseSuccess &= JsonBeforeField.IsValid() && !JsonBeforeField->IsNull() && TryGetJsonValue(JsonBeforeField, Before);
    const TSharedPtr<FJsonValue> JsonAfterField = (*Object)->TryGetField(TEXT("after"));
    ParseSuccess &= JsonAfterField.IsValid() && !JsonAfterField->IsNull() && TryGetJsonValue(JsonAfterField, After);
    const TSharedPtr<FJsonValue> JsonAccountIdField = (*Object)->TryGetField(TEXT("account_id"));
    ParseSuccess &= JsonAccountIdField.IsValid() && !JsonAccountIdField->IsNull() && TryGetJsonValue(JsonAccountIdField, AccountId);
    const TSharedPtr<FJsonValue> JsonModifiedTimestampField = (*Object)->TryGetField(TEXT("modified_timestamp"));
    ParseSuccess &= JsonModifiedTimestampField.IsValid() && !JsonModifiedTimestampField->IsNull() && TryGetJsonValue(JsonModifiedTimestampField, ModifiedTimestamp);

    return ParseSuccess;
}

