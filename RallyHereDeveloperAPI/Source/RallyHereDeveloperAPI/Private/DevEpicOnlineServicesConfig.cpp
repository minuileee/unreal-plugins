// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevEpicOnlineServicesConfig.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevEpicOnlineServicesConfig

void FRHAPI_DevEpicOnlineServicesConfig::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (EnableLogin_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("enable_login"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EnableLogin_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("client_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, ClientId);
    Writer->WriteIdentifierPrefix(TEXT("product_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, ProductId);
    Writer->WriteIdentifierPrefix(TEXT("sandbox_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, SandboxId);
    if (Scopes_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("scopes"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Scopes_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevEpicOnlineServicesConfig::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonEnableLoginField = (*Object)->TryGetField(TEXT("enable_login"));
    if (JsonEnableLoginField.IsValid() && !JsonEnableLoginField->IsNull())
    {
        EnableLogin_IsSet = TryGetJsonValue(JsonEnableLoginField, EnableLogin_Optional);
        ParseSuccess &= EnableLogin_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonClientIdField = (*Object)->TryGetField(TEXT("client_id"));
    ParseSuccess &= JsonClientIdField.IsValid() && !JsonClientIdField->IsNull() && TryGetJsonValue(JsonClientIdField, ClientId);
    const TSharedPtr<FJsonValue> JsonProductIdField = (*Object)->TryGetField(TEXT("product_id"));
    ParseSuccess &= JsonProductIdField.IsValid() && !JsonProductIdField->IsNull() && TryGetJsonValue(JsonProductIdField, ProductId);
    const TSharedPtr<FJsonValue> JsonSandboxIdField = (*Object)->TryGetField(TEXT("sandbox_id"));
    ParseSuccess &= JsonSandboxIdField.IsValid() && !JsonSandboxIdField->IsNull() && TryGetJsonValue(JsonSandboxIdField, SandboxId);
    const TSharedPtr<FJsonValue> JsonScopesField = (*Object)->TryGetField(TEXT("scopes"));
    if (JsonScopesField.IsValid() && !JsonScopesField->IsNull())
    {
        Scopes_IsSet = TryGetJsonValue(JsonScopesField, Scopes_Optional);
        ParseSuccess &= Scopes_IsSet;
    }

    return ParseSuccess;
}

