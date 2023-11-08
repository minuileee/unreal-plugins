// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "InstanceFubar.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_InstanceFubar

void FRHAPI_InstanceFubar::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("instance_id"));
    RallyHereAPI::WriteJsonValue(Writer, InstanceId);
    Writer->WriteIdentifierPrefix(TEXT("error"));
    RallyHereAPI::WriteJsonValue(Writer, Error);
    Writer->WriteIdentifierPrefix(TEXT("region"));
    RallyHereAPI::WriteJsonValue(Writer, Region);
    if (MatchmakingProfileId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("matchmaking_profile_id"));
        RallyHereAPI::WriteJsonValue(Writer, MatchmakingProfileId_Optional);
    }
    if (InstanceSourceProvider_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("instance_source_provider"));
        RallyHereAPI::WriteJsonValue(Writer, EnumToString(InstanceSourceProvider_Optional));
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_InstanceFubar::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonInstanceIdField = (*Object)->TryGetField(TEXT("instance_id"));
    ParseSuccess &= JsonInstanceIdField.IsValid() && !JsonInstanceIdField->IsNull() && TryGetJsonValue(JsonInstanceIdField, InstanceId);
    const TSharedPtr<FJsonValue> JsonErrorField = (*Object)->TryGetField(TEXT("error"));
    ParseSuccess &= JsonErrorField.IsValid() && !JsonErrorField->IsNull() && TryGetJsonValue(JsonErrorField, Error);
    const TSharedPtr<FJsonValue> JsonRegionField = (*Object)->TryGetField(TEXT("region"));
    ParseSuccess &= JsonRegionField.IsValid() && !JsonRegionField->IsNull() && TryGetJsonValue(JsonRegionField, Region);
    const TSharedPtr<FJsonValue> JsonMatchmakingProfileIdField = (*Object)->TryGetField(TEXT("matchmaking_profile_id"));
    if (JsonMatchmakingProfileIdField.IsValid() && !JsonMatchmakingProfileIdField->IsNull())
    {
        MatchmakingProfileId_IsSet = TryGetJsonValue(JsonMatchmakingProfileIdField, MatchmakingProfileId_Optional);
        ParseSuccess &= MatchmakingProfileId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonInstanceSourceProviderField = (*Object)->TryGetField(TEXT("instance_source_provider"));
    if (JsonInstanceSourceProviderField.IsValid() && !JsonInstanceSourceProviderField->IsNull())
    {
        InstanceSourceProvider_IsSet = TryGetJsonValue(JsonInstanceSourceProviderField, InstanceSourceProvider_Optional);
        ParseSuccess &= InstanceSourceProvider_IsSet;
    }

    return ParseSuccess;
}

