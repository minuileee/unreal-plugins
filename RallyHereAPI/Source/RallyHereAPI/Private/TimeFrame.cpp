// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "TimeFrame.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_TimeFrame

void FRHAPI_TimeFrame::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Name_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("name"));
        RallyHereAPI::WriteJsonValue(Writer, Name_Optional);
    }
    if (Active_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("active"));
        RallyHereAPI::WriteJsonValue(Writer, Active_Optional);
    }
    if (Episode_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("episode"));
        RallyHereAPI::WriteJsonValue(Writer, Episode_Optional);
    }
    if (EpisodeType_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("episode_type"));
        RallyHereAPI::WriteJsonValue(Writer, EpisodeType_Optional);
    }
    if (HourInterval_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("hour_interval"));
        RallyHereAPI::WriteJsonValue(Writer, HourInterval_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("start"));
    RallyHereAPI::WriteJsonValue(Writer, Start);
    Writer->WriteIdentifierPrefix(TEXT("end"));
    RallyHereAPI::WriteJsonValue(Writer, End);
    if (CacheInfo_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("cache_info"));
        RallyHereAPI::WriteJsonValue(Writer, CacheInfo_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_TimeFrame::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
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
    if ((*Object)->HasField(TEXT("active")))
    {
        Active_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("active"), Active_Optional);
        ParseSuccess &= Active_IsSet;
    }
    if ((*Object)->HasField(TEXT("episode")))
    {
        Episode_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("episode"), Episode_Optional);
        ParseSuccess &= Episode_IsSet;
    }
    if ((*Object)->HasField(TEXT("episode_type")))
    {
        EpisodeType_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("episode_type"), EpisodeType_Optional);
        ParseSuccess &= EpisodeType_IsSet;
    }
    if ((*Object)->HasField(TEXT("hour_interval")))
    {
        HourInterval_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("hour_interval"), HourInterval_Optional);
        ParseSuccess &= HourInterval_IsSet;
    }
    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("start"), Start);
    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("end"), End);
    if ((*Object)->HasField(TEXT("cache_info")))
    {
        CacheInfo_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("cache_info"), CacheInfo_Optional);
        ParseSuccess &= CacheInfo_IsSet;
    }

    return ParseSuccess;
}

