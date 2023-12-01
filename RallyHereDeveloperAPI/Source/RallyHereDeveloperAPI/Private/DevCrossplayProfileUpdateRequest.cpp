// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevCrossplayProfileUpdateRequest.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevCrossplayProfileUpdateRequest

void FRHAPI_DevCrossplayProfileUpdateRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Name_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("name"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Name_Optional);
    }
    if (CrossplayPartitionId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("crossplay_partition_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CrossplayPartitionId_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevCrossplayProfileUpdateRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
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
    const TSharedPtr<FJsonValue> JsonCrossplayPartitionIdField = (*Object)->TryGetField(TEXT("crossplay_partition_id"));
    if (JsonCrossplayPartitionIdField.IsValid() && !JsonCrossplayPartitionIdField->IsNull())
    {
        CrossplayPartitionId_IsSet = TryGetJsonValue(JsonCrossplayPartitionIdField, CrossplayPartitionId_Optional);
        ParseSuccess &= CrossplayPartitionId_IsSet;
    }

    return ParseSuccess;
}

