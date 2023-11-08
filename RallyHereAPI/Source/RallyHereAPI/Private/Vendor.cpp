// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "Vendor.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_Vendor

void FRHAPI_Vendor::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    if (Type_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("type"));
        RallyHereAPI::WriteJsonValue(Writer, EnumToString(Type_Optional));
    }
    if (LegacyType_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("legacy_type"));
        RallyHereAPI::WriteJsonValue(Writer, LegacyType_Optional);
    }
    if (LegacyConfigVersion_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("legacy_config_version"));
        RallyHereAPI::WriteJsonValue(Writer, LegacyConfigVersion_Optional);
    }
    if (Loot_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("loot"));
        RallyHereAPI::WriteJsonValue(Writer, Loot_Optional);
    }
    if (CacheInfo_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("cache_info"));
        RallyHereAPI::WriteJsonValue(Writer, CacheInfo_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_Vendor::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonTypeField = (*Object)->TryGetField(TEXT("type"));
    if (JsonTypeField.IsValid() && !JsonTypeField->IsNull())
    {
        Type_IsSet = TryGetJsonValue(JsonTypeField, Type_Optional);
        ParseSuccess &= Type_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLegacyTypeField = (*Object)->TryGetField(TEXT("legacy_type"));
    if (JsonLegacyTypeField.IsValid() && !JsonLegacyTypeField->IsNull())
    {
        LegacyType_IsSet = TryGetJsonValue(JsonLegacyTypeField, LegacyType_Optional);
        ParseSuccess &= LegacyType_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLegacyConfigVersionField = (*Object)->TryGetField(TEXT("legacy_config_version"));
    if (JsonLegacyConfigVersionField.IsValid() && !JsonLegacyConfigVersionField->IsNull())
    {
        LegacyConfigVersion_IsSet = TryGetJsonValue(JsonLegacyConfigVersionField, LegacyConfigVersion_Optional);
        ParseSuccess &= LegacyConfigVersion_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLootField = (*Object)->TryGetField(TEXT("loot"));
    if (JsonLootField.IsValid() && !JsonLootField->IsNull())
    {
        Loot_IsSet = TryGetJsonValue(JsonLootField, Loot_Optional);
        ParseSuccess &= Loot_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCacheInfoField = (*Object)->TryGetField(TEXT("cache_info"));
    if (JsonCacheInfoField.IsValid() && !JsonCacheInfoField->IsNull())
    {
        CacheInfo_IsSet = TryGetJsonValue(JsonCacheInfoField, CacheInfo_Optional);
        ParseSuccess &= CacheInfo_IsSet;
    }

    return ParseSuccess;
}

