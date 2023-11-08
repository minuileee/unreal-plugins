// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "BackfillInfo.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_BackfillInfo

void FRHAPI_BackfillInfo::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("backfill_id"));
    RallyHereAPI::WriteJsonValue(Writer, BackfillId);
    if (Extensions_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("extensions"));
        RallyHereAPI::WriteJsonValue(Writer, Extensions_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_BackfillInfo::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonBackfillIdField = (*Object)->TryGetField(TEXT("backfill_id"));
    ParseSuccess &= JsonBackfillIdField.IsValid() && !JsonBackfillIdField->IsNull() && TryGetJsonValue(JsonBackfillIdField, BackfillId);
    const TSharedPtr<FJsonValue> JsonExtensionsField = (*Object)->TryGetField(TEXT("extensions"));
    if (JsonExtensionsField.IsValid() && !JsonExtensionsField->IsNull())
    {
        Extensions_IsSet = TryGetJsonValue(JsonExtensionsField, Extensions_Optional);
        ParseSuccess &= Extensions_IsSet;
    }

    return ParseSuccess;
}

