// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevExpandProperty.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_DevExpandProperty
FString EnumToString(const ERHAPI_DevExpandProperty& Value)
{
    switch (Value)
    {
    case ERHAPI_DevExpandProperty::All:
        return TEXT("*");
    case ERHAPI_DevExpandProperty::LegacyId:
        return TEXT("legacy_id");
    }

    UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("Invalid ERHAPI_DevExpandProperty::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_DevExpandProperty& Value)
{
    static TMap<FString, ERHAPI_DevExpandProperty> StringToEnum = { 
        { TEXT("*"), ERHAPI_DevExpandProperty::All },
        { TEXT("legacy_id"), ERHAPI_DevExpandProperty::LegacyId },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_DevExpandProperty& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DevExpandProperty& Value)
{
    RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DevExpandProperty& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


