// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevPlatform.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_DevPlatform
FString EnumToString(const ERHAPI_DevPlatform& Value)
{
    switch (Value)
    {
    case ERHAPI_DevPlatform::Anon:
        return TEXT("Anon");
    case ERHAPI_DevPlatform::Basic:
        return TEXT("Basic");
    case ERHAPI_DevPlatform::XboxLive:
        return TEXT("XboxLive");
    case ERHAPI_DevPlatform::Psn:
        return TEXT("PSN");
    case ERHAPI_DevPlatform::NintendoNaid:
        return TEXT("NintendoNAID");
    case ERHAPI_DevPlatform::NintendoSwitch:
        return TEXT("NintendoSwitch");
    case ERHAPI_DevPlatform::NintendoPpid:
        return TEXT("NintendoPPID");
    case ERHAPI_DevPlatform::Google:
        return TEXT("Google");
    case ERHAPI_DevPlatform::GooglePlay:
        return TEXT("GooglePlay");
    case ERHAPI_DevPlatform::Apple:
        return TEXT("Apple");
    case ERHAPI_DevPlatform::Epic:
        return TEXT("Epic");
    case ERHAPI_DevPlatform::Steam:
        return TEXT("Steam");
    case ERHAPI_DevPlatform::Amazon:
        return TEXT("Amazon");
    case ERHAPI_DevPlatform::Twitch:
        return TEXT("Twitch");
    }

    UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("Invalid ERHAPI_DevPlatform::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_DevPlatform& Value)
{
    static TMap<FString, ERHAPI_DevPlatform> StringToEnum = { 
        { TEXT("Anon"), ERHAPI_DevPlatform::Anon },
        { TEXT("Basic"), ERHAPI_DevPlatform::Basic },
        { TEXT("XboxLive"), ERHAPI_DevPlatform::XboxLive },
        { TEXT("PSN"), ERHAPI_DevPlatform::Psn },
        { TEXT("NintendoNAID"), ERHAPI_DevPlatform::NintendoNaid },
        { TEXT("NintendoSwitch"), ERHAPI_DevPlatform::NintendoSwitch },
        { TEXT("NintendoPPID"), ERHAPI_DevPlatform::NintendoPpid },
        { TEXT("Google"), ERHAPI_DevPlatform::Google },
        { TEXT("GooglePlay"), ERHAPI_DevPlatform::GooglePlay },
        { TEXT("Apple"), ERHAPI_DevPlatform::Apple },
        { TEXT("Epic"), ERHAPI_DevPlatform::Epic },
        { TEXT("Steam"), ERHAPI_DevPlatform::Steam },
        { TEXT("Amazon"), ERHAPI_DevPlatform::Amazon },
        { TEXT("Twitch"), ERHAPI_DevPlatform::Twitch },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_DevPlatform& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DevPlatform& Value)
{
    RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DevPlatform& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


