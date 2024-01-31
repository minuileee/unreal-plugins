// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "Portal.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_Portal
FString EnumToString(const ERHAPI_Portal& Value)
{
    switch (Value)
    {
    case ERHAPI_Portal::Free:
        return TEXT("-2");
    case ERHAPI_Portal::Sweat:
        return TEXT("-1");
    case ERHAPI_Portal::Unknown:
        return TEXT("0");
    case ERHAPI_Portal::Standard:
        return TEXT("1");
    case ERHAPI_Portal::Anon:
        return TEXT("2");
    case ERHAPI_Portal::Kongregate:
        return TEXT("3");
    case ERHAPI_Portal::Amazon:
        return TEXT("4");
    case ERHAPI_Portal::Steam:
        return TEXT("5");
    case ERHAPI_Portal::Tcls:
        return TEXT("6");
    case ERHAPI_Portal::LevelupLatam:
        return TEXT("7");
    case ERHAPI_Portal::LevelupBra:
        return TEXT("8");
    case ERHAPI_Portal::Psn:
        return TEXT("9");
    case ERHAPI_Portal::XboxLive:
        return TEXT("10");
    case ERHAPI_Portal::Basic:
        return TEXT("11");
    case ERHAPI_Portal::Facebook:
        return TEXT("12");
    case ERHAPI_Portal::Google:
        return TEXT("13");
    case ERHAPI_Portal::UNUSED14:
        return TEXT("14");
    case ERHAPI_Portal::RivalsMobile:
        return TEXT("15");
    case ERHAPI_Portal::Twitch:
        return TEXT("16");
    case ERHAPI_Portal::PaladinsStrike:
        return TEXT("17");
    case ERHAPI_Portal::SmiteBlitz:
        return TEXT("18");
    case ERHAPI_Portal::FacebookSmite:
        return TEXT("19");
    case ERHAPI_Portal::FacebookPaladins:
        return TEXT("20");
    case ERHAPI_Portal::FacebookHotg:
        return TEXT("21");
    case ERHAPI_Portal::NintendoSwitch:
        return TEXT("22");
    case ERHAPI_Portal::Tune:
        return TEXT("23");
    case ERHAPI_Portal::Apple:
        return TEXT("24");
    case ERHAPI_Portal::Discord:
        return TEXT("25");
    case ERHAPI_Portal::Nintendo:
        return TEXT("26");
    case ERHAPI_Portal::UNUSED27:
        return TEXT("27");
    case ERHAPI_Portal::Epic:
        return TEXT("28");
    case ERHAPI_Portal::Forte:
        return TEXT("29");
    case ERHAPI_Portal::Simulmedia:
        return TEXT("30");
    case ERHAPI_Portal::Luna:
        return TEXT("31");
    case ERHAPI_Portal::GooglePlay:
        return TEXT("32");
    case ERHAPI_Portal::NintendoPpid:
        return TEXT("33");
    }

    UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_Portal::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_Portal& Value)
{
    static TMap<FString, ERHAPI_Portal> StringToEnum = { 
        { TEXT("-2"), ERHAPI_Portal::Free },
        { TEXT("-1"), ERHAPI_Portal::Sweat },
        { TEXT("0"), ERHAPI_Portal::Unknown },
        { TEXT("1"), ERHAPI_Portal::Standard },
        { TEXT("2"), ERHAPI_Portal::Anon },
        { TEXT("3"), ERHAPI_Portal::Kongregate },
        { TEXT("4"), ERHAPI_Portal::Amazon },
        { TEXT("5"), ERHAPI_Portal::Steam },
        { TEXT("6"), ERHAPI_Portal::Tcls },
        { TEXT("7"), ERHAPI_Portal::LevelupLatam },
        { TEXT("8"), ERHAPI_Portal::LevelupBra },
        { TEXT("9"), ERHAPI_Portal::Psn },
        { TEXT("10"), ERHAPI_Portal::XboxLive },
        { TEXT("11"), ERHAPI_Portal::Basic },
        { TEXT("12"), ERHAPI_Portal::Facebook },
        { TEXT("13"), ERHAPI_Portal::Google },
        { TEXT("14"), ERHAPI_Portal::UNUSED14 },
        { TEXT("15"), ERHAPI_Portal::RivalsMobile },
        { TEXT("16"), ERHAPI_Portal::Twitch },
        { TEXT("17"), ERHAPI_Portal::PaladinsStrike },
        { TEXT("18"), ERHAPI_Portal::SmiteBlitz },
        { TEXT("19"), ERHAPI_Portal::FacebookSmite },
        { TEXT("20"), ERHAPI_Portal::FacebookPaladins },
        { TEXT("21"), ERHAPI_Portal::FacebookHotg },
        { TEXT("22"), ERHAPI_Portal::NintendoSwitch },
        { TEXT("23"), ERHAPI_Portal::Tune },
        { TEXT("24"), ERHAPI_Portal::Apple },
        { TEXT("25"), ERHAPI_Portal::Discord },
        { TEXT("26"), ERHAPI_Portal::Nintendo },
        { TEXT("27"), ERHAPI_Portal::UNUSED27 },
        { TEXT("28"), ERHAPI_Portal::Epic },
        { TEXT("29"), ERHAPI_Portal::Forte },
        { TEXT("30"), ERHAPI_Portal::Simulmedia },
        { TEXT("31"), ERHAPI_Portal::Luna },
        { TEXT("32"), ERHAPI_Portal::GooglePlay },
        { TEXT("33"), ERHAPI_Portal::NintendoPpid },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_Portal& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_Portal& Value)
{
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_Portal& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


