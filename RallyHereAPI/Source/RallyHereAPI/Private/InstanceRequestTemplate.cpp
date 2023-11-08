// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "InstanceRequestTemplate.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_InstanceRequestTemplate

void FRHAPI_InstanceRequestTemplate::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("instance_request_template_id"));
    RallyHereAPI::WriteJsonValue(Writer, InstanceRequestTemplateId);
    Writer->WriteIdentifierPrefix(TEXT("map_selection_list"));
    RallyHereAPI::WriteJsonValue(Writer, MapSelectionList);
    Writer->WriteIdentifierPrefix(TEXT("default_host_type"));
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(DefaultHostType));
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_InstanceRequestTemplate::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonInstanceRequestTemplateIdField = (*Object)->TryGetField(TEXT("instance_request_template_id"));
    ParseSuccess &= JsonInstanceRequestTemplateIdField.IsValid() && !JsonInstanceRequestTemplateIdField->IsNull() && TryGetJsonValue(JsonInstanceRequestTemplateIdField, InstanceRequestTemplateId);
    const TSharedPtr<FJsonValue> JsonMapSelectionListField = (*Object)->TryGetField(TEXT("map_selection_list"));
    ParseSuccess &= JsonMapSelectionListField.IsValid() && !JsonMapSelectionListField->IsNull() && TryGetJsonValue(JsonMapSelectionListField, MapSelectionList);
    const TSharedPtr<FJsonValue> JsonDefaultHostTypeField = (*Object)->TryGetField(TEXT("default_host_type"));
    ParseSuccess &= JsonDefaultHostTypeField.IsValid() && !JsonDefaultHostTypeField->IsNull() && TryGetJsonValue(JsonDefaultHostTypeField, DefaultHostType);
    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }

    return ParseSuccess;
}

