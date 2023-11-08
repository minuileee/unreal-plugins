// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PersonInfoResponse.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PersonInfoResponse

void FRHAPI_PersonInfoResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (PersonId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("person_id"));
        RallyHereAPI::WriteJsonValue(Writer, PersonId_Optional);
    }
    if (ActivePlayerId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("active_player_id"));
        RallyHereAPI::WriteJsonValue(Writer, ActivePlayerId_Optional);
    }
    if (Email_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("email"));
        RallyHereAPI::WriteJsonValue(Writer, Email_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_PersonInfoResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonPersonIdField = (*Object)->TryGetField(TEXT("person_id"));
    if (JsonPersonIdField.IsValid() && !JsonPersonIdField->IsNull())
    {
        PersonId_IsSet = TryGetJsonValue(JsonPersonIdField, PersonId_Optional);
        ParseSuccess &= PersonId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonActivePlayerIdField = (*Object)->TryGetField(TEXT("active_player_id"));
    if (JsonActivePlayerIdField.IsValid() && !JsonActivePlayerIdField->IsNull())
    {
        ActivePlayerId_IsSet = TryGetJsonValue(JsonActivePlayerIdField, ActivePlayerId_Optional);
        ParseSuccess &= ActivePlayerId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonEmailField = (*Object)->TryGetField(TEXT("email"));
    if (JsonEmailField.IsValid() && !JsonEmailField->IsNull())
    {
        Email_IsSet = TryGetJsonValue(JsonEmailField, Email_Optional);
        ParseSuccess &= Email_IsSet;
    }

    return ParseSuccess;
}

