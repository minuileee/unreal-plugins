// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "InstanceInfo.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_InstanceInfo

void FRHAPI_InstanceInfo::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (AllocationId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("allocation_id"));
        RallyHereAPI::WriteJsonValue(Writer, AllocationId_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("instance_id"));
    RallyHereAPI::WriteJsonValue(Writer, InstanceId);
    Writer->WriteIdentifierPrefix(TEXT("host_type"));
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(HostType));
    if (HostPlayerId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("host_player_id"));
        RallyHereAPI::WriteJsonValue(Writer, HostPlayerId_Optional);
    }
    if (HostPlayerUuid_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("host_player_uuid"));
        RallyHereAPI::WriteJsonValue(Writer, HostPlayerUuid_Optional);
    }
    if (HostDedicatedProcessId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("host_dedicated_process_id"));
        RallyHereAPI::WriteJsonValue(Writer, HostDedicatedProcessId_Optional);
    }
    if (HostDedicatedServerId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("host_dedicated_server_id"));
        RallyHereAPI::WriteJsonValue(Writer, HostDedicatedServerId_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("join_status"));
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(JoinStatus));
    if (JoinParams_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("join_params"));
        RallyHereAPI::WriteJsonValue(Writer, JoinParams_Optional);
    }
    if (InstanceStartupParams_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("instance_startup_params"));
        RallyHereAPI::WriteJsonValue(Writer, InstanceStartupParams_Optional);
    }
    if (Version_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("version"));
        RallyHereAPI::WriteJsonValue(Writer, Version_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("created"));
    RallyHereAPI::WriteJsonValue(Writer, Created);
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    if (InstanceHealth_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("instance_health"));
        RallyHereAPI::WriteJsonValue(Writer, EnumToString(InstanceHealth_Optional));
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_InstanceInfo::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonAllocationIdField = (*Object)->TryGetField(TEXT("allocation_id"));
    if (JsonAllocationIdField.IsValid() && !JsonAllocationIdField->IsNull())
    {
        AllocationId_IsSet = TryGetJsonValue(JsonAllocationIdField, AllocationId_Optional);
        ParseSuccess &= AllocationId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonInstanceIdField = (*Object)->TryGetField(TEXT("instance_id"));
    ParseSuccess &= JsonInstanceIdField.IsValid() && !JsonInstanceIdField->IsNull() && TryGetJsonValue(JsonInstanceIdField, InstanceId);
    const TSharedPtr<FJsonValue> JsonHostTypeField = (*Object)->TryGetField(TEXT("host_type"));
    ParseSuccess &= JsonHostTypeField.IsValid() && !JsonHostTypeField->IsNull() && TryGetJsonValue(JsonHostTypeField, HostType);
    const TSharedPtr<FJsonValue> JsonHostPlayerIdField = (*Object)->TryGetField(TEXT("host_player_id"));
    if (JsonHostPlayerIdField.IsValid() && !JsonHostPlayerIdField->IsNull())
    {
        HostPlayerId_IsSet = TryGetJsonValue(JsonHostPlayerIdField, HostPlayerId_Optional);
        ParseSuccess &= HostPlayerId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonHostPlayerUuidField = (*Object)->TryGetField(TEXT("host_player_uuid"));
    if (JsonHostPlayerUuidField.IsValid() && !JsonHostPlayerUuidField->IsNull())
    {
        HostPlayerUuid_IsSet = TryGetJsonValue(JsonHostPlayerUuidField, HostPlayerUuid_Optional);
        ParseSuccess &= HostPlayerUuid_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonHostDedicatedProcessIdField = (*Object)->TryGetField(TEXT("host_dedicated_process_id"));
    if (JsonHostDedicatedProcessIdField.IsValid() && !JsonHostDedicatedProcessIdField->IsNull())
    {
        HostDedicatedProcessId_IsSet = TryGetJsonValue(JsonHostDedicatedProcessIdField, HostDedicatedProcessId_Optional);
        ParseSuccess &= HostDedicatedProcessId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonHostDedicatedServerIdField = (*Object)->TryGetField(TEXT("host_dedicated_server_id"));
    if (JsonHostDedicatedServerIdField.IsValid() && !JsonHostDedicatedServerIdField->IsNull())
    {
        HostDedicatedServerId_IsSet = TryGetJsonValue(JsonHostDedicatedServerIdField, HostDedicatedServerId_Optional);
        ParseSuccess &= HostDedicatedServerId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonJoinStatusField = (*Object)->TryGetField(TEXT("join_status"));
    ParseSuccess &= JsonJoinStatusField.IsValid() && !JsonJoinStatusField->IsNull() && TryGetJsonValue(JsonJoinStatusField, JoinStatus);
    const TSharedPtr<FJsonValue> JsonJoinParamsField = (*Object)->TryGetField(TEXT("join_params"));
    if (JsonJoinParamsField.IsValid() && !JsonJoinParamsField->IsNull())
    {
        JoinParams_IsSet = TryGetJsonValue(JsonJoinParamsField, JoinParams_Optional);
        ParseSuccess &= JoinParams_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonInstanceStartupParamsField = (*Object)->TryGetField(TEXT("instance_startup_params"));
    if (JsonInstanceStartupParamsField.IsValid() && !JsonInstanceStartupParamsField->IsNull())
    {
        InstanceStartupParams_IsSet = TryGetJsonValue(JsonInstanceStartupParamsField, InstanceStartupParams_Optional);
        ParseSuccess &= InstanceStartupParams_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonVersionField = (*Object)->TryGetField(TEXT("version"));
    if (JsonVersionField.IsValid() && !JsonVersionField->IsNull())
    {
        Version_IsSet = TryGetJsonValue(JsonVersionField, Version_Optional);
        ParseSuccess &= Version_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCreatedField = (*Object)->TryGetField(TEXT("created"));
    ParseSuccess &= JsonCreatedField.IsValid() && !JsonCreatedField->IsNull() && TryGetJsonValue(JsonCreatedField, Created);
    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonInstanceHealthField = (*Object)->TryGetField(TEXT("instance_health"));
    if (JsonInstanceHealthField.IsValid() && !JsonInstanceHealthField->IsNull())
    {
        InstanceHealth_IsSet = TryGetJsonValue(JsonInstanceHealthField, InstanceHealth_Optional);
        ParseSuccess &= InstanceHealth_IsSet;
    }

    return ParseSuccess;
}

