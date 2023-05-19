// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "InventoryBucket.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_InventoryBucket
FString EnumToString(const ERHAPI_InventoryBucket& Value)
{
    switch (Value)
    {
    case ERHAPI_InventoryBucket::Free:
        return TEXT("free");
    case ERHAPI_InventoryBucket::Sweat:
        return TEXT("sweat");
    case ERHAPI_InventoryBucket::None:
        return TEXT("none");
    case ERHAPI_InventoryBucket::Anon:
        return TEXT("anon");
    case ERHAPI_InventoryBucket::Amazon:
        return TEXT("amazon");
    case ERHAPI_InventoryBucket::Steam:
        return TEXT("steam");
    case ERHAPI_InventoryBucket::Psn:
        return TEXT("psn");
    case ERHAPI_InventoryBucket::XboxLive:
        return TEXT("xbox_live");
    case ERHAPI_InventoryBucket::Google:
        return TEXT("google");
    case ERHAPI_InventoryBucket::Twitch:
        return TEXT("twitch");
    case ERHAPI_InventoryBucket::NintendoSwitch:
        return TEXT("nintendo_switch");
    case ERHAPI_InventoryBucket::Apple:
        return TEXT("apple");
    case ERHAPI_InventoryBucket::Nintendo:
        return TEXT("nintendo");
    case ERHAPI_InventoryBucket::Epic:
        return TEXT("epic");
    case ERHAPI_InventoryBucket::GooglePlay:
        return TEXT("google_play");
    case ERHAPI_InventoryBucket::NintendoPpid:
        return TEXT("nintendo_ppid");
    }

    UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_InventoryBucket::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_InventoryBucket& Value)
{
    static TMap<FString, ERHAPI_InventoryBucket> StringToEnum = { 
        { TEXT("free"), ERHAPI_InventoryBucket::Free },
        { TEXT("sweat"), ERHAPI_InventoryBucket::Sweat },
        { TEXT("none"), ERHAPI_InventoryBucket::None },
        { TEXT("anon"), ERHAPI_InventoryBucket::Anon },
        { TEXT("amazon"), ERHAPI_InventoryBucket::Amazon },
        { TEXT("steam"), ERHAPI_InventoryBucket::Steam },
        { TEXT("psn"), ERHAPI_InventoryBucket::Psn },
        { TEXT("xbox_live"), ERHAPI_InventoryBucket::XboxLive },
        { TEXT("google"), ERHAPI_InventoryBucket::Google },
        { TEXT("twitch"), ERHAPI_InventoryBucket::Twitch },
        { TEXT("nintendo_switch"), ERHAPI_InventoryBucket::NintendoSwitch },
        { TEXT("apple"), ERHAPI_InventoryBucket::Apple },
        { TEXT("nintendo"), ERHAPI_InventoryBucket::Nintendo },
        { TEXT("epic"), ERHAPI_InventoryBucket::Epic },
        { TEXT("google_play"), ERHAPI_InventoryBucket::GooglePlay },
        { TEXT("nintendo_ppid"), ERHAPI_InventoryBucket::NintendoPpid },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_InventoryBucket& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_InventoryBucket& Value)
{
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_InventoryBucket& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


