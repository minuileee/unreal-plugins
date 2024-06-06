// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "InstanceSourceProvider.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_InstanceSourceProvider
FString EnumToString(const ERHAPI_InstanceSourceProvider& Value)
{
    switch (Value)
    {
    case ERHAPI_InstanceSourceProvider::Player:
        return TEXT("player");
    case ERHAPI_InstanceSourceProvider::Sic:
        return TEXT("sic");
    case ERHAPI_InstanceSourceProvider::Multiplay:
        return TEXT("multiplay");
    }

    UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_InstanceSourceProvider::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_InstanceSourceProvider& Value)
{
    static TMap<FString, ERHAPI_InstanceSourceProvider> StringToEnum = { 
        { TEXT("player"), ERHAPI_InstanceSourceProvider::Player },
        { TEXT("sic"), ERHAPI_InstanceSourceProvider::Sic },
        { TEXT("multiplay"), ERHAPI_InstanceSourceProvider::Multiplay },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_InstanceSourceProvider& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_InstanceSourceProvider& Value)
{
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_InstanceSourceProvider& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}

