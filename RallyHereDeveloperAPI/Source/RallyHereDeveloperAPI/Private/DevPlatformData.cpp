// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevPlatformData.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevPlatformData

void FRHAPI_DevPlatformData::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("counts"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Counts);
    Writer->WriteIdentifierPrefix(TEXT("date_range"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, DateRange);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevPlatformData::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonCountsField = (*Object)->TryGetField(TEXT("counts"));
    ParseSuccess &= JsonCountsField.IsValid() && !JsonCountsField->IsNull() && TryGetJsonValue(JsonCountsField, Counts);
    const TSharedPtr<FJsonValue> JsonDateRangeField = (*Object)->TryGetField(TEXT("date_range"));
    ParseSuccess &= JsonDateRangeField.IsValid() && !JsonDateRangeField->IsNull() && TryGetJsonValue(JsonDateRangeField, DateRange);

    return ParseSuccess;
}

