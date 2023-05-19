// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PricePoint.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PricePoint

void FRHAPI_PricePoint::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Name_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("name"));
        RallyHereAPI::WriteJsonValue(Writer, Name_Optional);
    }
    if (StrictFlag_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("strict_flag"));
        RallyHereAPI::WriteJsonValue(Writer, StrictFlag_Optional);
    }
    if (CapFlag_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("cap_flag"));
        RallyHereAPI::WriteJsonValue(Writer, CapFlag_Optional);
    }
    if (CurrentBreakpoints_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("current_breakpoints"));
        RallyHereAPI::WriteJsonValue(Writer, CurrentBreakpoints_Optional);
    }
    if (PreSaleBreakpoints_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("pre_sale_breakpoints"));
        RallyHereAPI::WriteJsonValue(Writer, PreSaleBreakpoints_Optional);
    }
    if (CacheInfo_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("cache_info"));
        RallyHereAPI::WriteJsonValue(Writer, CacheInfo_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_PricePoint::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    if ((*Object)->HasField(TEXT("name")))
    {
        Name_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("name"), Name_Optional);
        ParseSuccess &= Name_IsSet;
    }
    if ((*Object)->HasField(TEXT("strict_flag")))
    {
        StrictFlag_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("strict_flag"), StrictFlag_Optional);
        ParseSuccess &= StrictFlag_IsSet;
    }
    if ((*Object)->HasField(TEXT("cap_flag")))
    {
        CapFlag_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("cap_flag"), CapFlag_Optional);
        ParseSuccess &= CapFlag_IsSet;
    }
    if ((*Object)->HasField(TEXT("current_breakpoints")))
    {
        CurrentBreakpoints_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("current_breakpoints"), CurrentBreakpoints_Optional);
        ParseSuccess &= CurrentBreakpoints_IsSet;
    }
    if ((*Object)->HasField(TEXT("pre_sale_breakpoints")))
    {
        PreSaleBreakpoints_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("pre_sale_breakpoints"), PreSaleBreakpoints_Optional);
        ParseSuccess &= PreSaleBreakpoints_IsSet;
    }
    if ((*Object)->HasField(TEXT("cache_info")))
    {
        CacheInfo_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("cache_info"), CacheInfo_Optional);
        ParseSuccess &= CacheInfo_IsSet;
    }

    return ParseSuccess;
}

