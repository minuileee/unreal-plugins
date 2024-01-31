// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "SessionPlayerUpdateRequest.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_SessionPlayerUpdateRequest

void FRHAPI_SessionPlayerUpdateRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Status_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("status"));
        RallyHereAPI::WriteJsonValue(Writer, EnumToString(Status_Optional));
    }
    Writer->WriteIdentifierPrefix(TEXT("team_id"));
    RallyHereAPI::WriteJsonValue(Writer, TeamId);
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    if (OverflowAction_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("overflow_action"));
        RallyHereAPI::WriteJsonValue(Writer, EnumToString(OverflowAction_Optional));
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_SessionPlayerUpdateRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonStatusField = (*Object)->TryGetField(TEXT("status"));
    if (JsonStatusField.IsValid() && !JsonStatusField->IsNull())
    {
        Status_IsSet = TryGetJsonValue(JsonStatusField, Status_Optional);
        ParseSuccess &= Status_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonTeamIdField = (*Object)->TryGetField(TEXT("team_id"));
    ParseSuccess &= JsonTeamIdField.IsValid() && !JsonTeamIdField->IsNull() && TryGetJsonValue(JsonTeamIdField, TeamId);
    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonOverflowActionField = (*Object)->TryGetField(TEXT("overflow_action"));
    if (JsonOverflowActionField.IsValid() && !JsonOverflowActionField->IsNull())
    {
        OverflowAction_IsSet = TryGetJsonValue(JsonOverflowActionField, OverflowAction_Optional);
        ParseSuccess &= OverflowAction_IsSet;
    }

    return ParseSuccess;
}

