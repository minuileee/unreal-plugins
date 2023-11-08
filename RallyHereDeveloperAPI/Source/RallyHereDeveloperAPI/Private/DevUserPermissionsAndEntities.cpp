// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevUserPermissionsAndEntities.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevUserPermissionsAndEntities

void FRHAPI_DevUserPermissionsAndEntities::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("permissions"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Permissions);
    Writer->WriteIdentifierPrefix(TEXT("menu_data"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, MenuData);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevUserPermissionsAndEntities::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonPermissionsField = (*Object)->TryGetField(TEXT("permissions"));
    ParseSuccess &= JsonPermissionsField.IsValid() && !JsonPermissionsField->IsNull() && TryGetJsonValue(JsonPermissionsField, Permissions);
    const TSharedPtr<FJsonValue> JsonMenuDataField = (*Object)->TryGetField(TEXT("menu_data"));
    ParseSuccess &= JsonMenuDataField.IsValid() && !JsonMenuDataField->IsNull() && TryGetJsonValue(JsonMenuDataField, MenuData);

    return ParseSuccess;
}

