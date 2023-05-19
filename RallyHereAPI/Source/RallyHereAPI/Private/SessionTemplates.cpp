// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "SessionTemplates.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_SessionTemplates

void FRHAPI_SessionTemplates::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Templates_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("templates"));
        RallyHereAPI::WriteJsonValue(Writer, Templates_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_SessionTemplates::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    if ((*Object)->HasField(TEXT("templates")))
    {
        Templates_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("templates"), Templates_Optional);
        ParseSuccess &= Templates_IsSet;
    }

    return ParseSuccess;
}

