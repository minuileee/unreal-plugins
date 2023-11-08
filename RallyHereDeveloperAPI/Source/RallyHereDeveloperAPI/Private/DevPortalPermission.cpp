// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevPortalPermission.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevPortalPermission

void FRHAPI_DevPortalPermission::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("permission_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, PermissionId);
    if (Type_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("type"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Type_Optional);
    }
    if (Scope_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("scope"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Scope_Optional);
    }
    if (Access_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("access"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Access_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevPortalPermission::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonPermissionIdField = (*Object)->TryGetField(TEXT("permission_id"));
    ParseSuccess &= JsonPermissionIdField.IsValid() && !JsonPermissionIdField->IsNull() && TryGetJsonValue(JsonPermissionIdField, PermissionId);
    const TSharedPtr<FJsonValue> JsonTypeField = (*Object)->TryGetField(TEXT("type"));
    if (JsonTypeField.IsValid() && !JsonTypeField->IsNull())
    {
        Type_IsSet = TryGetJsonValue(JsonTypeField, Type_Optional);
        ParseSuccess &= Type_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonScopeField = (*Object)->TryGetField(TEXT("scope"));
    if (JsonScopeField.IsValid() && !JsonScopeField->IsNull())
    {
        Scope_IsSet = TryGetJsonValue(JsonScopeField, Scope_Optional);
        ParseSuccess &= Scope_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonAccessField = (*Object)->TryGetField(TEXT("access"));
    if (JsonAccessField.IsValid() && !JsonAccessField->IsNull())
    {
        Access_IsSet = TryGetJsonValue(JsonAccessField, Access_Optional);
        ParseSuccess &= Access_IsSet;
    }

    return ParseSuccess;
}

