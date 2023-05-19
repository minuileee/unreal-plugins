// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PortalUseRuleset.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PortalUseRuleset

void FRHAPI_PortalUseRuleset::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Rules_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("rules"));
        RallyHereAPI::WriteJsonValue(Writer, Rules_Optional);
    }
    if (CacheInfo_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("cache_info"));
        RallyHereAPI::WriteJsonValue(Writer, CacheInfo_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_PortalUseRuleset::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    if ((*Object)->HasField(TEXT("rules")))
    {
        Rules_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("rules"), Rules_Optional);
        ParseSuccess &= Rules_IsSet;
    }
    if ((*Object)->HasField(TEXT("cache_info")))
    {
        CacheInfo_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("cache_info"), CacheInfo_Optional);
        ParseSuccess &= CacheInfo_IsSet;
    }

    return ParseSuccess;
}

