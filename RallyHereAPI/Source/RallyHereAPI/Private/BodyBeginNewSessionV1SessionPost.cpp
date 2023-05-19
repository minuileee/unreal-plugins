// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "BodyBeginNewSessionV1SessionPost.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_BodyBeginNewSessionV1SessionPost

void FRHAPI_BodyBeginNewSessionV1SessionPost::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("country_code"));
    RallyHereAPI::WriteJsonValue(Writer, CountryCode);
    if (DeviceId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("device_id"));
        RallyHereAPI::WriteJsonValue(Writer, DeviceId_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_BodyBeginNewSessionV1SessionPost::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("country_code"), CountryCode);
    if ((*Object)->HasField(TEXT("device_id")))
    {
        DeviceId_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("device_id"), DeviceId_Optional);
        ParseSuccess &= DeviceId_IsSet;
    }

    return ParseSuccess;
}

