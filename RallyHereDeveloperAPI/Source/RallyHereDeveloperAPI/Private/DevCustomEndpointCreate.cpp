// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevCustomEndpointCreate.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevCustomEndpointCreate

void FRHAPI_DevCustomEndpointCreate::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Name_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("name"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Name_Optional);
    }
    if (Description_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("description"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Description_Optional);
    }
    if (CustomEndpointUniqueId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_endpoint_unique_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CustomEndpointUniqueId_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("endpoint_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, EndpointId);
    Writer->WriteIdentifierPrefix(TEXT("url"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Url);
    if (HttpVerb_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("http_verb"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(HttpVerb_Optional));
    }
    if (CustomHeaders_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_headers"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CustomHeaders_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevCustomEndpointCreate::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonNameField = (*Object)->TryGetField(TEXT("name"));
    if (JsonNameField.IsValid() && !JsonNameField->IsNull())
    {
        Name_IsSet = TryGetJsonValue(JsonNameField, Name_Optional);
        ParseSuccess &= Name_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonDescriptionField = (*Object)->TryGetField(TEXT("description"));
    if (JsonDescriptionField.IsValid() && !JsonDescriptionField->IsNull())
    {
        Description_IsSet = TryGetJsonValue(JsonDescriptionField, Description_Optional);
        ParseSuccess &= Description_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCustomEndpointUniqueIdField = (*Object)->TryGetField(TEXT("custom_endpoint_unique_id"));
    if (JsonCustomEndpointUniqueIdField.IsValid() && !JsonCustomEndpointUniqueIdField->IsNull())
    {
        CustomEndpointUniqueId_IsSet = TryGetJsonValue(JsonCustomEndpointUniqueIdField, CustomEndpointUniqueId_Optional);
        ParseSuccess &= CustomEndpointUniqueId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonEndpointIdField = (*Object)->TryGetField(TEXT("endpoint_id"));
    ParseSuccess &= JsonEndpointIdField.IsValid() && !JsonEndpointIdField->IsNull() && TryGetJsonValue(JsonEndpointIdField, EndpointId);
    const TSharedPtr<FJsonValue> JsonUrlField = (*Object)->TryGetField(TEXT("url"));
    ParseSuccess &= JsonUrlField.IsValid() && !JsonUrlField->IsNull() && TryGetJsonValue(JsonUrlField, Url);
    const TSharedPtr<FJsonValue> JsonHttpVerbField = (*Object)->TryGetField(TEXT("http_verb"));
    if (JsonHttpVerbField.IsValid() && !JsonHttpVerbField->IsNull())
    {
        HttpVerb_IsSet = TryGetJsonValue(JsonHttpVerbField, HttpVerb_Optional);
        ParseSuccess &= HttpVerb_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCustomHeadersField = (*Object)->TryGetField(TEXT("custom_headers"));
    if (JsonCustomHeadersField.IsValid() && !JsonCustomHeadersField->IsNull())
    {
        CustomHeaders_IsSet = TryGetJsonValue(JsonCustomHeadersField, CustomHeaders_Optional);
        ParseSuccess &= CustomHeaders_IsSet;
    }

    return ParseSuccess;
}
