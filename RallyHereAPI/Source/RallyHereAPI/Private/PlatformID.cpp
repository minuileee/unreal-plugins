// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlatformID.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_PlatformID
FString EnumToString(const ERHAPI_PlatformID& Value)
{
    switch (Value)
    {
    case ERHAPI_PlatformID::Anon:
        return TEXT("2");
    case ERHAPI_PlatformID::Amazon:
        return TEXT("4");
    case ERHAPI_PlatformID::Steam:
        return TEXT("5");
    case ERHAPI_PlatformID::Psn:
        return TEXT("9");
    case ERHAPI_PlatformID::XboxLive:
        return TEXT("10");
    case ERHAPI_PlatformID::Basic:
        return TEXT("11");
    case ERHAPI_PlatformID::Google:
        return TEXT("13");
    case ERHAPI_PlatformID::Twitch:
        return TEXT("16");
    case ERHAPI_PlatformID::NintendoSwitch:
        return TEXT("22");
    case ERHAPI_PlatformID::Apple:
        return TEXT("24");
    case ERHAPI_PlatformID::Nintendo:
        return TEXT("26");
    case ERHAPI_PlatformID::Epic:
        return TEXT("28");
    }

    UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_PlatformID::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_PlatformID& Value)
{
    static TMap<FString, ERHAPI_PlatformID> StringToEnum = { 
        { TEXT("2"), ERHAPI_PlatformID::Anon },
        { TEXT("4"), ERHAPI_PlatformID::Amazon },
        { TEXT("5"), ERHAPI_PlatformID::Steam },
        { TEXT("9"), ERHAPI_PlatformID::Psn },
        { TEXT("10"), ERHAPI_PlatformID::XboxLive },
        { TEXT("11"), ERHAPI_PlatformID::Basic },
        { TEXT("13"), ERHAPI_PlatformID::Google },
        { TEXT("16"), ERHAPI_PlatformID::Twitch },
        { TEXT("22"), ERHAPI_PlatformID::NintendoSwitch },
        { TEXT("24"), ERHAPI_PlatformID::Apple },
        { TEXT("26"), ERHAPI_PlatformID::Nintendo },
        { TEXT("28"), ERHAPI_PlatformID::Epic },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_PlatformID& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_PlatformID& Value)
{
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_PlatformID& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


