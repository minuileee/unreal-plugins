// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "EnvironmentConfig.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_EnvironmentConfig

void FRHAPI_EnvironmentConfig::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("org_id"));
    RallyHereAPI::WriteJsonValue(Writer, OrgId);
    Writer->WriteIdentifierPrefix(TEXT("product_id"));
    RallyHereAPI::WriteJsonValue(Writer, ProductId);
    Writer->WriteIdentifierPrefix(TEXT("environment_id"));
    RallyHereAPI::WriteJsonValue(Writer, EnvironmentId);
    Writer->WriteIdentifierPrefix(TEXT("sandbox_id"));
    RallyHereAPI::WriteJsonValue(Writer, SandboxId);
    Writer->WriteObjectEnd();
}

bool FRHAPI_EnvironmentConfig::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonOrgIdField = (*Object)->TryGetField(TEXT("org_id"));
    ParseSuccess &= JsonOrgIdField.IsValid() && !JsonOrgIdField->IsNull() && TryGetJsonValue(JsonOrgIdField, OrgId);
    const TSharedPtr<FJsonValue> JsonProductIdField = (*Object)->TryGetField(TEXT("product_id"));
    ParseSuccess &= JsonProductIdField.IsValid() && !JsonProductIdField->IsNull() && TryGetJsonValue(JsonProductIdField, ProductId);
    const TSharedPtr<FJsonValue> JsonEnvironmentIdField = (*Object)->TryGetField(TEXT("environment_id"));
    ParseSuccess &= JsonEnvironmentIdField.IsValid() && !JsonEnvironmentIdField->IsNull() && TryGetJsonValue(JsonEnvironmentIdField, EnvironmentId);
    const TSharedPtr<FJsonValue> JsonSandboxIdField = (*Object)->TryGetField(TEXT("sandbox_id"));
    ParseSuccess &= JsonSandboxIdField.IsValid() && !JsonSandboxIdField->IsNull() && TryGetJsonValue(JsonSandboxIdField, SandboxId);

    return ParseSuccess;
}
