// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlayerSessions.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlayerSessions

void FRHAPI_PlayerSessions::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Sessions_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("sessions"));
        RallyHereAPI::WriteJsonValue(Writer, Sessions_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_PlayerSessions::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    if ((*Object)->HasField(TEXT("sessions")))
    {
        Sessions_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("sessions"), Sessions_Optional);
        ParseSuccess &= Sessions_IsSet;
    }

    return ParseSuccess;
}

