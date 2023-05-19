// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "GrantType.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_GrantType
FString EnumToString(const ERHAPI_GrantType& Value)
{
    switch (Value)
    {
    case ERHAPI_GrantType::Google:
        return TEXT("google");
    case ERHAPI_GrantType::Apple:
        return TEXT("apple");
    case ERHAPI_GrantType::Refresh:
        return TEXT("refresh");
    case ERHAPI_GrantType::Epic:
        return TEXT("epic");
    case ERHAPI_GrantType::Xboxlive:
        return TEXT("xboxlive");
    case ERHAPI_GrantType::PS4V1:
        return TEXT("ps4_v1");
    case ERHAPI_GrantType::PS4V3:
        return TEXT("ps4_v3");
    case ERHAPI_GrantType::PS5V3:
        return TEXT("ps5_v3");
    case ERHAPI_GrantType::Nintendo:
        return TEXT("nintendo");
    case ERHAPI_GrantType::NintendoSwitch:
        return TEXT("nintendo_switch");
    case ERHAPI_GrantType::Steam:
        return TEXT("steam");
    case ERHAPI_GrantType::Basic:
        return TEXT("basic");
    case ERHAPI_GrantType::Anon:
        return TEXT("anon");
    }

    UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_GrantType::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_GrantType& Value)
{
    static TMap<FString, ERHAPI_GrantType> StringToEnum = { 
        { TEXT("google"), ERHAPI_GrantType::Google },
        { TEXT("apple"), ERHAPI_GrantType::Apple },
        { TEXT("refresh"), ERHAPI_GrantType::Refresh },
        { TEXT("epic"), ERHAPI_GrantType::Epic },
        { TEXT("xboxlive"), ERHAPI_GrantType::Xboxlive },
        { TEXT("ps4_v1"), ERHAPI_GrantType::PS4V1 },
        { TEXT("ps4_v3"), ERHAPI_GrantType::PS4V3 },
        { TEXT("ps5_v3"), ERHAPI_GrantType::PS5V3 },
        { TEXT("nintendo"), ERHAPI_GrantType::Nintendo },
        { TEXT("nintendo_switch"), ERHAPI_GrantType::NintendoSwitch },
        { TEXT("steam"), ERHAPI_GrantType::Steam },
        { TEXT("basic"), ERHAPI_GrantType::Basic },
        { TEXT("anon"), ERHAPI_GrantType::Anon },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_GrantType& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_GrantType& Value)
{
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_GrantType& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


