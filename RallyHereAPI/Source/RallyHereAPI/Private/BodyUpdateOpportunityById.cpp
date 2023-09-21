// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "BodyUpdateOpportunityById.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_BodyUpdateOpportunityById

void FRHAPI_BodyUpdateOpportunityById::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("state"));
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(State));
    if (AbortReason_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("abort_reason"));
        RallyHereAPI::WriteJsonValue(Writer, EnumToString(AbortReason_Optional));
    }
    if (AbortSeconds_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("abort_seconds"));
        RallyHereAPI::WriteJsonValue(Writer, AbortSeconds_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_BodyUpdateOpportunityById::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonStateField = (*Object)->TryGetField(TEXT("state"));
    ParseSuccess &= JsonStateField.IsValid() && !JsonStateField->IsNull() && TryGetJsonValue(JsonStateField, State);
    const TSharedPtr<FJsonValue> JsonAbortReasonField = (*Object)->TryGetField(TEXT("abort_reason"));
    if (JsonAbortReasonField.IsValid() && !JsonAbortReasonField->IsNull())
    {
        AbortReason_IsSet = TryGetJsonValue(JsonAbortReasonField, AbortReason_Optional);
        ParseSuccess &= AbortReason_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonAbortSecondsField = (*Object)->TryGetField(TEXT("abort_seconds"));
    if (JsonAbortSecondsField.IsValid() && !JsonAbortSecondsField->IsNull())
    {
        AbortSeconds_IsSet = TryGetJsonValue(JsonAbortSecondsField, AbortSeconds_Optional);
        ParseSuccess &= AbortSeconds_IsSet;
    }

    return ParseSuccess;
}
