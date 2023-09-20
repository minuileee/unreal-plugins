// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevMenuDataSelectedEntities.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevMenuDataSelectedEntities

void FRHAPI_DevMenuDataSelectedEntities::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("level"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Level);
    Writer->WriteIdentifierPrefix(TEXT("org"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Org);
    Writer->WriteIdentifierPrefix(TEXT("sandbox"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Sandbox);
    Writer->WriteIdentifierPrefix(TEXT("product"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Product);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevMenuDataSelectedEntities::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonLevelField = (*Object)->TryGetField(TEXT("level"));
    ParseSuccess &= JsonLevelField.IsValid() && !JsonLevelField->IsNull() && TryGetJsonValue(JsonLevelField, Level);
    const TSharedPtr<FJsonValue> JsonOrgField = (*Object)->TryGetField(TEXT("org"));
    ParseSuccess &= JsonOrgField.IsValid() && !JsonOrgField->IsNull() && TryGetJsonValue(JsonOrgField, Org);
    const TSharedPtr<FJsonValue> JsonSandboxField = (*Object)->TryGetField(TEXT("sandbox"));
    ParseSuccess &= JsonSandboxField.IsValid() && !JsonSandboxField->IsNull() && TryGetJsonValue(JsonSandboxField, Sandbox);
    const TSharedPtr<FJsonValue> JsonProductField = (*Object)->TryGetField(TEXT("product"));
    ParseSuccess &= JsonProductField.IsValid() && !JsonProductField->IsNull() && TryGetJsonValue(JsonProductField, Product);

    return ParseSuccess;
}

