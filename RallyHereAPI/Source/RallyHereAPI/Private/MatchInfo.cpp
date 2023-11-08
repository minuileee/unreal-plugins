// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "MatchInfo.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_MatchInfo

void FRHAPI_MatchInfo::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("match_id"));
    RallyHereAPI::WriteJsonValue(Writer, MatchId);
    Writer->WriteIdentifierPrefix(TEXT("created"));
    RallyHereAPI::WriteJsonValue(Writer, Created);
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    if (TicketIds_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("ticket_ids"));
        RallyHereAPI::WriteJsonValue(Writer, TicketIds_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_MatchInfo::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonMatchIdField = (*Object)->TryGetField(TEXT("match_id"));
    ParseSuccess &= JsonMatchIdField.IsValid() && !JsonMatchIdField->IsNull() && TryGetJsonValue(JsonMatchIdField, MatchId);
    const TSharedPtr<FJsonValue> JsonCreatedField = (*Object)->TryGetField(TEXT("created"));
    ParseSuccess &= JsonCreatedField.IsValid() && !JsonCreatedField->IsNull() && TryGetJsonValue(JsonCreatedField, Created);
    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonTicketIdsField = (*Object)->TryGetField(TEXT("ticket_ids"));
    if (JsonTicketIdsField.IsValid() && !JsonTicketIdsField->IsNull())
    {
        TicketIds_IsSet = TryGetJsonValue(JsonTicketIdsField, TicketIds_Optional);
        ParseSuccess &= TicketIds_IsSet;
    }

    return ParseSuccess;
}

