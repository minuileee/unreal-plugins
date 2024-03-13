// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlatformSKUs.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlatformSKUs

void FRHAPI_PlatformSKUs::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Skus_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("skus"));
        RallyHereAPI::WriteJsonValue(Writer, Skus_Optional);
    }
    if (CacheInfo_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("cache_info"));
        RallyHereAPI::WriteJsonValue(Writer, CacheInfo_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_PlatformSKUs::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonSkusField = (*Object)->TryGetField(TEXT("skus"));
    if (JsonSkusField.IsValid() && !JsonSkusField->IsNull())
    {
        Skus_IsSet = TryGetJsonValue(JsonSkusField, Skus_Optional);
        ParseSuccess &= Skus_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCacheInfoField = (*Object)->TryGetField(TEXT("cache_info"));
    if (JsonCacheInfoField.IsValid() && !JsonCacheInfoField->IsNull())
    {
        CacheInfo_IsSet = TryGetJsonValue(JsonCacheInfoField, CacheInfo_Optional);
        ParseSuccess &= CacheInfo_IsSet;
    }

    return ParseSuccess;
}

