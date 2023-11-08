// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DiscoveryResponse.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DiscoveryResponse

void FRHAPI_DiscoveryResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("addresses"));
    RallyHereAPI::WriteJsonValue(Writer, Addresses);
    if (ServerStatus_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("server_status"));
        RallyHereAPI::WriteJsonValue(Writer, ServerStatus_Optional);
    }
    if (CommandLineArgs_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("command_line_args"));
        RallyHereAPI::WriteJsonValue(Writer, CommandLineArgs_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DiscoveryResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonAddressesField = (*Object)->TryGetField(TEXT("addresses"));
    ParseSuccess &= JsonAddressesField.IsValid() && !JsonAddressesField->IsNull() && TryGetJsonValue(JsonAddressesField, Addresses);
    const TSharedPtr<FJsonValue> JsonServerStatusField = (*Object)->TryGetField(TEXT("server_status"));
    if (JsonServerStatusField.IsValid() && !JsonServerStatusField->IsNull())
    {
        ServerStatus_IsSet = TryGetJsonValue(JsonServerStatusField, ServerStatus_Optional);
        ParseSuccess &= ServerStatus_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCommandLineArgsField = (*Object)->TryGetField(TEXT("command_line_args"));
    if (JsonCommandLineArgsField.IsValid() && !JsonCommandLineArgsField->IsNull())
    {
        CommandLineArgs_IsSet = TryGetJsonValue(JsonCommandLineArgsField, CommandLineArgs_Optional);
        ParseSuccess &= CommandLineArgs_IsSet;
    }

    return ParseSuccess;
}

