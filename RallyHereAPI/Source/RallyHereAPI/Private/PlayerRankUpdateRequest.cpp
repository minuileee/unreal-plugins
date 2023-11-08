// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlayerRankUpdateRequest.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlayerRankUpdateRequest

void FRHAPI_PlayerRankUpdateRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (InstanceId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("instance_id"));
        RallyHereAPI::WriteJsonValue(Writer, InstanceId_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("rank"));
    RallyHereAPI::WriteJsonValue(Writer, Rank);
    Writer->WriteObjectEnd();
}

bool FRHAPI_PlayerRankUpdateRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonInstanceIdField = (*Object)->TryGetField(TEXT("instance_id"));
    if (JsonInstanceIdField.IsValid() && !JsonInstanceIdField->IsNull())
    {
        InstanceId_IsSet = TryGetJsonValue(JsonInstanceIdField, InstanceId_Optional);
        ParseSuccess &= InstanceId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonRankField = (*Object)->TryGetField(TEXT("rank"));
    ParseSuccess &= JsonRankField.IsValid() && !JsonRankField->IsNull() && TryGetJsonValue(JsonRankField, Rank);

    return ParseSuccess;
}

