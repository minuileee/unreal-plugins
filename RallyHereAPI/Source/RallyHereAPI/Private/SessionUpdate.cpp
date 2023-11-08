// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "SessionUpdate.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_SessionUpdate

void FRHAPI_SessionUpdate::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (RegionId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("region_id"));
        RallyHereAPI::WriteJsonValue(Writer, RegionId_Optional);
    }
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    if (Joinable_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("joinable"));
        RallyHereAPI::WriteJsonValue(Writer, Joinable_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_SessionUpdate::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonRegionIdField = (*Object)->TryGetField(TEXT("region_id"));
    if (JsonRegionIdField.IsValid() && !JsonRegionIdField->IsNull())
    {
        RegionId_IsSet = TryGetJsonValue(JsonRegionIdField, RegionId_Optional);
        ParseSuccess &= RegionId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonJoinableField = (*Object)->TryGetField(TEXT("joinable"));
    if (JsonJoinableField.IsValid() && !JsonJoinableField->IsNull())
    {
        Joinable_IsSet = TryGetJsonValue(JsonJoinableField, Joinable_Optional);
        ParseSuccess &= Joinable_IsSet;
    }

    return ParseSuccess;
}

