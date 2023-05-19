// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlayerLastSeenUpdate.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlayerLastSeenUpdate

void FRHAPI_PlayerLastSeenUpdate::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("time"));
    RallyHereAPI::WriteJsonValue(Writer, Time);
    if (Platform_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("platform"));
        RallyHereAPI::WriteJsonValue(Writer, Platform_Optional);
    }
    if (DisplayName_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("display_name"));
        RallyHereAPI::WriteJsonValue(Writer, DisplayName_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_PlayerLastSeenUpdate::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("time"), Time);
    if ((*Object)->HasField(TEXT("platform")))
    {
        Platform_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("platform"), Platform_Optional);
        ParseSuccess &= Platform_IsSet;
    }
    if ((*Object)->HasField(TEXT("display_name")))
    {
        DisplayName_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("display_name"), DisplayName_Optional);
        ParseSuccess &= DisplayName_IsSet;
    }

    return ParseSuccess;
}

