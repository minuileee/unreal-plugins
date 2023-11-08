// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "SessionPlayerUpdateResponse.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_SessionPlayerUpdateResponse

void FRHAPI_SessionPlayerUpdateResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("status"));
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Status));
    Writer->WriteIdentifierPrefix(TEXT("team_id"));
    RallyHereAPI::WriteJsonValue(Writer, TeamId);
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_SessionPlayerUpdateResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonStatusField = (*Object)->TryGetField(TEXT("status"));
    ParseSuccess &= JsonStatusField.IsValid() && !JsonStatusField->IsNull() && TryGetJsonValue(JsonStatusField, Status);
    const TSharedPtr<FJsonValue> JsonTeamIdField = (*Object)->TryGetField(TEXT("team_id"));
    ParseSuccess &= JsonTeamIdField.IsValid() && !JsonTeamIdField->IsNull() && TryGetJsonValue(JsonTeamIdField, TeamId);
    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }

    return ParseSuccess;
}

