// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlatformSessionTemplate.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlatformSessionTemplate

void FRHAPI_PlatformSessionTemplate::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("platform_id"));
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(PlatformId));
    Writer->WriteIdentifierPrefix(TEXT("platform_session_type"));
    RallyHereAPI::WriteJsonValue(Writer, PlatformSessionType);
    if (Metadata_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("metadata"));
        RallyHereAPI::WriteJsonValue(Writer, Metadata_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_PlatformSessionTemplate::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("platform_id"), PlatformId);
    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("platform_session_type"), PlatformSessionType);
    if ((*Object)->HasField(TEXT("metadata")))
    {
        Metadata_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("metadata"), Metadata_Optional);
        ParseSuccess &= Metadata_IsSet;
    }

    return ParseSuccess;
}

