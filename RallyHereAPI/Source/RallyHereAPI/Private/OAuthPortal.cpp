// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "OAuthPortal.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_OAuthPortal
FString EnumToString(const ERHAPI_OAuthPortal& Value)
{
    switch (Value)
    {
    case ERHAPI_OAuthPortal::Google:
        return TEXT("google");
    case ERHAPI_OAuthPortal::Apple:
        return TEXT("apple");
    case ERHAPI_OAuthPortal::Epic:
        return TEXT("epic");
    case ERHAPI_OAuthPortal::Xbox:
        return TEXT("xbox");
    case ERHAPI_OAuthPortal::Psn:
        return TEXT("psn");
    case ERHAPI_OAuthPortal::Nintendo:
        return TEXT("nintendo");
    case ERHAPI_OAuthPortal::Steam:
        return TEXT("steam");
    case ERHAPI_OAuthPortal::Amazon:
        return TEXT("amazon");
    case ERHAPI_OAuthPortal::Twitch:
        return TEXT("twitch");
    }

    UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_OAuthPortal::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_OAuthPortal& Value)
{
    static TMap<FString, ERHAPI_OAuthPortal> StringToEnum = { 
        { TEXT("google"), ERHAPI_OAuthPortal::Google },
        { TEXT("apple"), ERHAPI_OAuthPortal::Apple },
        { TEXT("epic"), ERHAPI_OAuthPortal::Epic },
        { TEXT("xbox"), ERHAPI_OAuthPortal::Xbox },
        { TEXT("psn"), ERHAPI_OAuthPortal::Psn },
        { TEXT("nintendo"), ERHAPI_OAuthPortal::Nintendo },
        { TEXT("steam"), ERHAPI_OAuthPortal::Steam },
        { TEXT("amazon"), ERHAPI_OAuthPortal::Amazon },
        { TEXT("twitch"), ERHAPI_OAuthPortal::Twitch },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_OAuthPortal& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_OAuthPortal& Value)
{
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_OAuthPortal& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


