// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "MatchInstance.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_MatchInstance

void FRHAPI_MatchInstance::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (InstanceId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("instance_id"));
        RallyHereAPI::WriteJsonValue(Writer, InstanceId_Optional);
    }
    if (HostPlayerUuid_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("host_player_uuid"));
        RallyHereAPI::WriteJsonValue(Writer, HostPlayerUuid_Optional);
    }
    if (RegionId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("region_id"));
        RallyHereAPI::WriteJsonValue(Writer, RegionId_Optional);
    }
    if (LaunchRequestTemplateId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("launch_request_template_id"));
        RallyHereAPI::WriteJsonValue(Writer, LaunchRequestTemplateId_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_MatchInstance::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonInstanceIdField = (*Object)->TryGetField(TEXT("instance_id"));
    if (JsonInstanceIdField.IsValid() && !JsonInstanceIdField->IsNull())
    {
        InstanceId_IsSet = TryGetJsonValue(JsonInstanceIdField, InstanceId_Optional);
        ParseSuccess &= InstanceId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonHostPlayerUuidField = (*Object)->TryGetField(TEXT("host_player_uuid"));
    if (JsonHostPlayerUuidField.IsValid() && !JsonHostPlayerUuidField->IsNull())
    {
        HostPlayerUuid_IsSet = TryGetJsonValue(JsonHostPlayerUuidField, HostPlayerUuid_Optional);
        ParseSuccess &= HostPlayerUuid_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonRegionIdField = (*Object)->TryGetField(TEXT("region_id"));
    if (JsonRegionIdField.IsValid() && !JsonRegionIdField->IsNull())
    {
        RegionId_IsSet = TryGetJsonValue(JsonRegionIdField, RegionId_Optional);
        ParseSuccess &= RegionId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLaunchRequestTemplateIdField = (*Object)->TryGetField(TEXT("launch_request_template_id"));
    if (JsonLaunchRequestTemplateIdField.IsValid() && !JsonLaunchRequestTemplateIdField->IsNull())
    {
        LaunchRequestTemplateId_IsSet = TryGetJsonValue(JsonLaunchRequestTemplateIdField, LaunchRequestTemplateId_Optional);
        ParseSuccess &= LaunchRequestTemplateId_IsSet;
    }

    return ParseSuccess;
}

