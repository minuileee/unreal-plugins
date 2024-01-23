// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevMatchMakingFunctionConfig.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevMatchMakingFunctionConfig

void FRHAPI_DevMatchMakingFunctionConfig::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Host_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("host"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Host_Optional);
    }
    if (Port_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("port"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Port_Optional);
    }
    if (Type_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("type"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(Type_Optional));
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevMatchMakingFunctionConfig::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonHostField = (*Object)->TryGetField(TEXT("host"));
    if (JsonHostField.IsValid() && !JsonHostField->IsNull())
    {
        Host_IsSet = TryGetJsonValue(JsonHostField, Host_Optional);
        ParseSuccess &= Host_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPortField = (*Object)->TryGetField(TEXT("port"));
    if (JsonPortField.IsValid() && !JsonPortField->IsNull())
    {
        Port_IsSet = TryGetJsonValue(JsonPortField, Port_Optional);
        ParseSuccess &= Port_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonTypeField = (*Object)->TryGetField(TEXT("type"));
    if (JsonTypeField.IsValid() && !JsonTypeField->IsNull())
    {
        Type_IsSet = TryGetJsonValue(JsonTypeField, Type_Optional);
        ParseSuccess &= Type_IsSet;
    }

    return ParseSuccess;
}

