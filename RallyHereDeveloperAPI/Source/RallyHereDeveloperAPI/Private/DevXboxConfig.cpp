// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevXboxConfig.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevXboxConfig

void FRHAPI_DevXboxConfig::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (EnableLogin_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("enable_login"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EnableLogin_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("web_client_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, WebClientId);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevXboxConfig::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
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
    const TSharedPtr<FJsonValue> JsonWebClientIdField = (*Object)->TryGetField(TEXT("web_client_id"));
    ParseSuccess &= JsonWebClientIdField.IsValid() && !JsonWebClientIdField->IsNull() && TryGetJsonValue(JsonWebClientIdField, WebClientId);

    return ParseSuccess;
}
