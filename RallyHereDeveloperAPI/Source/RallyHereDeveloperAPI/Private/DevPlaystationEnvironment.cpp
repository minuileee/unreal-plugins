// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevPlaystationEnvironment.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_DevPlaystationEnvironment
FString EnumToString(const ERHAPI_DevPlaystationEnvironment& Value)
{
    switch (Value)
    {
    case ERHAPI_DevPlaystationEnvironment::SpInt:
        return TEXT("sp-int");
    case ERHAPI_DevPlaystationEnvironment::ProdQa:
        return TEXT("prod-qa");
    case ERHAPI_DevPlaystationEnvironment::Np:
        return TEXT("np");
    }

    UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("Invalid ERHAPI_DevPlaystationEnvironment::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_DevPlaystationEnvironment& Value)
{
    static TMap<FString, ERHAPI_DevPlaystationEnvironment> StringToEnum = { 
        { TEXT("sp-int"), ERHAPI_DevPlaystationEnvironment::SpInt },
        { TEXT("prod-qa"), ERHAPI_DevPlaystationEnvironment::ProdQa },
        { TEXT("np"), ERHAPI_DevPlaystationEnvironment::Np },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_DevPlaystationEnvironment& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DevPlaystationEnvironment& Value)
{
    RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DevPlaystationEnvironment& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


