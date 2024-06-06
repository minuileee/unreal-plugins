// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevMatchMakingStrideEntry.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevMatchMakingStrideEntry

void FRHAPI_DevMatchMakingStrideEntry::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("step"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Step);
    Writer->WriteIdentifierPrefix(TEXT("overlap"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Overlap);
    Writer->WriteIdentifierPrefix(TEXT("min_population"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, MinPopulation);
    if (SandboxId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("sandbox_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, SandboxId_Optional);
    }
    if (LastModifiedAccountId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("last_modified_account_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LastModifiedAccountId_Optional);
    }
    if (LastModifiedTimestamp_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("last_modified_timestamp"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LastModifiedTimestamp_Optional);
    }
    if (CreatedTimestamp_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("created_timestamp"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CreatedTimestamp_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("match_making_stride_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, MatchMakingStrideId);
    Writer->WriteIdentifierPrefix(TEXT("match_making_stride_entry_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, MatchMakingStrideEntryId);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevMatchMakingStrideEntry::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonStepField = (*Object)->TryGetField(TEXT("step"));
    ParseSuccess &= JsonStepField.IsValid() && !JsonStepField->IsNull() && TryGetJsonValue(JsonStepField, Step);
    const TSharedPtr<FJsonValue> JsonOverlapField = (*Object)->TryGetField(TEXT("overlap"));
    ParseSuccess &= JsonOverlapField.IsValid() && !JsonOverlapField->IsNull() && TryGetJsonValue(JsonOverlapField, Overlap);
    const TSharedPtr<FJsonValue> JsonMinPopulationField = (*Object)->TryGetField(TEXT("min_population"));
    ParseSuccess &= JsonMinPopulationField.IsValid() && !JsonMinPopulationField->IsNull() && TryGetJsonValue(JsonMinPopulationField, MinPopulation);
    const TSharedPtr<FJsonValue> JsonSandboxIdField = (*Object)->TryGetField(TEXT("sandbox_id"));
    if (JsonSandboxIdField.IsValid() && !JsonSandboxIdField->IsNull())
    {
        SandboxId_IsSet = TryGetJsonValue(JsonSandboxIdField, SandboxId_Optional);
        ParseSuccess &= SandboxId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLastModifiedAccountIdField = (*Object)->TryGetField(TEXT("last_modified_account_id"));
    if (JsonLastModifiedAccountIdField.IsValid() && !JsonLastModifiedAccountIdField->IsNull())
    {
        LastModifiedAccountId_IsSet = TryGetJsonValue(JsonLastModifiedAccountIdField, LastModifiedAccountId_Optional);
        ParseSuccess &= LastModifiedAccountId_IsSet;
    }
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
    const TSharedPtr<FJsonValue> JsonMatchMakingStrideIdField = (*Object)->TryGetField(TEXT("match_making_stride_id"));
    ParseSuccess &= JsonMatchMakingStrideIdField.IsValid() && !JsonMatchMakingStrideIdField->IsNull() && TryGetJsonValue(JsonMatchMakingStrideIdField, MatchMakingStrideId);
    const TSharedPtr<FJsonValue> JsonMatchMakingStrideEntryIdField = (*Object)->TryGetField(TEXT("match_making_stride_entry_id"));
    ParseSuccess &= JsonMatchMakingStrideEntryIdField.IsValid() && !JsonMatchMakingStrideEntryIdField->IsNull() && TryGetJsonValue(JsonMatchMakingStrideEntryIdField, MatchMakingStrideEntryId);

    return ParseSuccess;
}
