// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "RallyHereEvent.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_RallyHereEvent

void FRHAPI_RallyHereEvent::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("event_uuid"));
    RallyHereAPI::WriteJsonValue(Writer, EventUuid);
    Writer->WriteIdentifierPrefix(TEXT("event_name"));
    RallyHereAPI::WriteJsonValue(Writer, EventName);
    Writer->WriteIdentifierPrefix(TEXT("event_timestamp"));
    RallyHereAPI::WriteJsonValue(Writer, EventTimestamp);
    Writer->WriteIdentifierPrefix(TEXT("event_params"));
    RallyHereAPI::WriteJsonValue(Writer, EventParams);
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    if (UserId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("user_id"));
        RallyHereAPI::WriteJsonValue(Writer, UserId_Optional);
    }
    if (SessionId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("session_id"));
        RallyHereAPI::WriteJsonValue(Writer, SessionId_Optional);
    }
    if (CorrelationId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("correlation_id"));
        RallyHereAPI::WriteJsonValue(Writer, CorrelationId_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_RallyHereEvent::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonEventUuidField = (*Object)->TryGetField(TEXT("event_uuid"));
    ParseSuccess &= JsonEventUuidField.IsValid() && !JsonEventUuidField->IsNull() && TryGetJsonValue(JsonEventUuidField, EventUuid);
    const TSharedPtr<FJsonValue> JsonEventNameField = (*Object)->TryGetField(TEXT("event_name"));
    ParseSuccess &= JsonEventNameField.IsValid() && !JsonEventNameField->IsNull() && TryGetJsonValue(JsonEventNameField, EventName);
    const TSharedPtr<FJsonValue> JsonEventTimestampField = (*Object)->TryGetField(TEXT("event_timestamp"));
    ParseSuccess &= JsonEventTimestampField.IsValid() && !JsonEventTimestampField->IsNull() && TryGetJsonValue(JsonEventTimestampField, EventTimestamp);
    const TSharedPtr<FJsonValue> JsonEventParamsField = (*Object)->TryGetField(TEXT("event_params"));
    ParseSuccess &= JsonEventParamsField.IsValid() && !JsonEventParamsField->IsNull() && TryGetJsonValue(JsonEventParamsField, EventParams);
    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonUserIdField = (*Object)->TryGetField(TEXT("user_id"));
    if (JsonUserIdField.IsValid() && !JsonUserIdField->IsNull())
    {
        UserId_IsSet = TryGetJsonValue(JsonUserIdField, UserId_Optional);
        ParseSuccess &= UserId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonSessionIdField = (*Object)->TryGetField(TEXT("session_id"));
    if (JsonSessionIdField.IsValid() && !JsonSessionIdField->IsNull())
    {
        SessionId_IsSet = TryGetJsonValue(JsonSessionIdField, SessionId_Optional);
        ParseSuccess &= SessionId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCorrelationIdField = (*Object)->TryGetField(TEXT("correlation_id"));
    if (JsonCorrelationIdField.IsValid() && !JsonCorrelationIdField->IsNull())
    {
        CorrelationId_IsSet = TryGetJsonValue(JsonCorrelationIdField, CorrelationId_Optional);
        ParseSuccess &= CorrelationId_IsSet;
    }

    return ParseSuccess;
}

