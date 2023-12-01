// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevCustomEndpoint.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevCustomEndpoint

void FRHAPI_DevCustomEndpoint::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (LastModifiedAccountId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("last_modified_account_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LastModifiedAccountId_Optional);
    }
    if (LastModifiedTimestamp_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("last_modified_timestamp"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LastModifiedTimestamp_Optional);
    }
    if (CreatedTimestamp_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("created_timestamp"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CreatedTimestamp_Optional);
    }
    if (SandboxId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("sandbox_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, SandboxId_Optional);
    }
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

bool FRHAPI_DevCustomEndpoint::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonLastModifiedAccountIdField = (*Object)->TryGetField(TEXT("last_modified_account_id"));
    if (JsonLastModifiedAccountIdField.IsValid() && !JsonLastModifiedAccountIdField->IsNull())
    {
        LastModifiedAccountId_IsSet = TryGetJsonValue(JsonLastModifiedAccountIdField, LastModifiedAccountId_Optional);
        ParseSuccess &= LastModifiedAccountId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLastModifiedTimestampField = (*Object)->TryGetField(TEXT("last_modified_timestamp"));
    if (JsonLastModifiedTimestampField.IsValid() && !JsonLastModifiedTimestampField->IsNull())
    {
        LastModifiedTimestamp_IsSet = TryGetJsonValue(JsonLastModifiedTimestampField, LastModifiedTimestamp_Optional);
        ParseSuccess &= LastModifiedTimestamp_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCreatedTimestampField = (*Object)->TryGetField(TEXT("created_timestamp"));
    if (JsonCreatedTimestampField.IsValid() && !JsonCreatedTimestampField->IsNull())
    {
        CreatedTimestamp_IsSet = TryGetJsonValue(JsonCreatedTimestampField, CreatedTimestamp_Optional);
        ParseSuccess &= CreatedTimestamp_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonSandboxIdField = (*Object)->TryGetField(TEXT("sandbox_id"));
    if (JsonSandboxIdField.IsValid() && !JsonSandboxIdField->IsNull())
    {
        SandboxId_IsSet = TryGetJsonValue(JsonSandboxIdField, SandboxId_Optional);
        ParseSuccess &= SandboxId_IsSet;
    }
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

