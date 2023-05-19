// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "Platform.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_Platform
FString EnumToString(const ERHAPI_Platform& Value)
{
    switch (Value)
    {
    case ERHAPI_Platform::Anon:
        return TEXT("Anon");
    case ERHAPI_Platform::Basic:
        return TEXT("Basic");
    case ERHAPI_Platform::XboxLive:
        return TEXT("XboxLive");
    case ERHAPI_Platform::Psn:
        return TEXT("PSN");
    case ERHAPI_Platform::NintendoNaid:
        return TEXT("NintendoNAID");
    case ERHAPI_Platform::NintendoSwitch:
        return TEXT("NintendoSwitch");
    case ERHAPI_Platform::NintendoPpid:
        return TEXT("NintendoPPID");
    case ERHAPI_Platform::Google:
        return TEXT("Google");
    case ERHAPI_Platform::GooglePlay:
        return TEXT("GooglePlay");
    case ERHAPI_Platform::Apple:
        return TEXT("Apple");
    case ERHAPI_Platform::Epic:
        return TEXT("Epic");
    case ERHAPI_Platform::Steam:
        return TEXT("Steam");
    case ERHAPI_Platform::Amazon:
        return TEXT("Amazon");
    case ERHAPI_Platform::Twitch:
        return TEXT("Twitch");
    }

    UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_Platform::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_Platform& Value)
{
    static TMap<FString, ERHAPI_Platform> StringToEnum = { 
        { TEXT("Anon"), ERHAPI_Platform::Anon },
        { TEXT("Basic"), ERHAPI_Platform::Basic },
        { TEXT("XboxLive"), ERHAPI_Platform::XboxLive },
        { TEXT("PSN"), ERHAPI_Platform::Psn },
        { TEXT("NintendoNAID"), ERHAPI_Platform::NintendoNaid },
        { TEXT("NintendoSwitch"), ERHAPI_Platform::NintendoSwitch },
        { TEXT("NintendoPPID"), ERHAPI_Platform::NintendoPpid },
        { TEXT("Google"), ERHAPI_Platform::Google },
        { TEXT("GooglePlay"), ERHAPI_Platform::GooglePlay },
        { TEXT("Apple"), ERHAPI_Platform::Apple },
        { TEXT("Epic"), ERHAPI_Platform::Epic },
        { TEXT("Steam"), ERHAPI_Platform::Steam },
        { TEXT("Amazon"), ERHAPI_Platform::Amazon },
        { TEXT("Twitch"), ERHAPI_Platform::Twitch },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_Platform& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_Platform& Value)
{
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_Platform& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


