// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "Source.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_Source
FString EnumToString(const ERHAPI_Source& Value)
{
    switch (Value)
    {
    case ERHAPI_Source::Unknown:
        return TEXT("UNKNOWN");
    case ERHAPI_Source::WebOrderRepair:
        return TEXT("WEB_ORDER_REPAIR");
    case ERHAPI_Source::InGame:
        return TEXT("IN_GAME");
    case ERHAPI_Source::WebSite:
        return TEXT("WEB_SITE");
    case ERHAPI_Source::NoSale:
        return TEXT("NO_SALE");
    case ERHAPI_Source::Support:
        return TEXT("SUPPORT");
    case ERHAPI_Source::Activity:
        return TEXT("ACTIVITY");
    case ERHAPI_Source::Refund:
        return TEXT("REFUND");
    case ERHAPI_Source::System:
        return TEXT("SYSTEM");
    case ERHAPI_Source::Rewards:
        return TEXT("REWARDS");
    case ERHAPI_Source::Esports:
        return TEXT("ESPORTS");
    case ERHAPI_Source::Treasure:
        return TEXT("TREASURE");
    case ERHAPI_Source::Console:
        return TEXT("CONSOLE");
    case ERHAPI_Source::Odyssey:
        return TEXT("ODYSSEY");
    case ERHAPI_Source::Steam:
        return TEXT("STEAM");
    case ERHAPI_Source::_Return:
        return TEXT("RETURN");
    case ERHAPI_Source::JsonGate:
        return TEXT("JSON_GATE");
    case ERHAPI_Source::SendGift:
        return TEXT("SEND_GIFT");
    case ERHAPI_Source::ReceiveGift:
        return TEXT("RECEIVE_GIFT");
    case ERHAPI_Source::SteamDlc:
        return TEXT("STEAM_DLC");
    case ERHAPI_Source::TwitchMilestone:
        return TEXT("TWITCH_MILESTONE");
    case ERHAPI_Source::TwitchPrime:
        return TEXT("TWITCH_PRIME");
    case ERHAPI_Source::Psn:
        return TEXT("PSN");
    case ERHAPI_Source::Xbox:
        return TEXT("XBOX");
    case ERHAPI_Source::PtsGrant:
        return TEXT("PTS_GRANT");
    case ERHAPI_Source::Instance:
        return TEXT("INSTANCE");
    case ERHAPI_Source::AccountTransfer:
        return TEXT("ACCOUNT_TRANSFER");
    case ERHAPI_Source::Promocode:
        return TEXT("PROMOCODE");
    case ERHAPI_Source::TriumphSystem:
        return TEXT("TRIUMPH_SYSTEM");
    case ERHAPI_Source::LoginGrant:
        return TEXT("LOGIN_GRANT");
    case ERHAPI_Source::EomUncapped:
        return TEXT("EOM_UNCAPPED");
    case ERHAPI_Source::EomCapped:
        return TEXT("EOM_CAPPED");
    case ERHAPI_Source::FacebookDrop:
        return TEXT("FACEBOOK_DROP");
    case ERHAPI_Source::DatabaseScript:
        return TEXT("DATABASE_SCRIPT");
    case ERHAPI_Source::AccountLinking:
        return TEXT("ACCOUNT_LINKING");
    case ERHAPI_Source::Clan:
        return TEXT("CLAN");
    case ERHAPI_Source::Conversion:
        return TEXT("CONVERSION");
    case ERHAPI_Source::Apple:
        return TEXT("APPLE");
    case ERHAPI_Source::Google:
        return TEXT("GOOGLE");
    case ERHAPI_Source::GooglePlay:
        return TEXT("GOOGLE_PLAY");
    case ERHAPI_Source::PortalDurable:
        return TEXT("PORTAL_DURABLE");
    case ERHAPI_Source::PartnerAchievement:
        return TEXT("PARTNER_ACHIEVEMENT");
    case ERHAPI_Source::MixerDrop:
        return TEXT("MIXER_DROP");
    case ERHAPI_Source::Nintendo:
        return TEXT("NINTENDO");
    case ERHAPI_Source::StreamViewingProgress:
        return TEXT("STREAM_VIEWING_PROGRESS");
    case ERHAPI_Source::Discord:
        return TEXT("DISCORD");
    case ERHAPI_Source::FirstLoginGrant:
        return TEXT("FIRST_LOGIN_GRANT");
    case ERHAPI_Source::TwitchFuel:
        return TEXT("TWITCH_FUEL");
    case ERHAPI_Source::DiscordDlc:
        return TEXT("DISCORD_DLC");
    case ERHAPI_Source::Netease:
        return TEXT("NETEASE");
    case ERHAPI_Source::EpicGames:
        return TEXT("EPIC_GAMES");
    case ERHAPI_Source::Forte:
        return TEXT("FORTE");
    case ERHAPI_Source::Facebook:
        return TEXT("FACEBOOK");
    case ERHAPI_Source::Hirez:
        return TEXT("HIREZ");
    case ERHAPI_Source::DailyReward:
        return TEXT("DAILY_REWARD");
    case ERHAPI_Source::AddAccountEmailReward:
        return TEXT("ADD_ACCOUNT_EMAIL_REWARD");
    case ERHAPI_Source::ClientClaim:
        return TEXT("CLIENT_CLAIM");
    case ERHAPI_Source::Client:
        return TEXT("CLIENT");
    case ERHAPI_Source::Entitlements:
        return TEXT("ENTITLEMENTS");
    case ERHAPI_Source::Amazon:
        return TEXT("AMAZON");
    case ERHAPI_Source::Simulmedia:
        return TEXT("SIMULMEDIA");
    case ERHAPI_Source::Luna:
        return TEXT("LUNA");
    }

    UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_Source::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_Source& Value)
{
    static TMap<FString, ERHAPI_Source> StringToEnum = {
        { TEXT("UNKNOWN"), ERHAPI_Source::Unknown },
        { TEXT("WEB_ORDER_REPAIR"), ERHAPI_Source::WebOrderRepair },
        { TEXT("IN_GAME"), ERHAPI_Source::InGame },
        { TEXT("WEB_SITE"), ERHAPI_Source::WebSite },
        { TEXT("NO_SALE"), ERHAPI_Source::NoSale },
        { TEXT("SUPPORT"), ERHAPI_Source::Support },
        { TEXT("ACTIVITY"), ERHAPI_Source::Activity },
        { TEXT("REFUND"), ERHAPI_Source::Refund },
        { TEXT("SYSTEM"), ERHAPI_Source::System },
        { TEXT("REWARDS"), ERHAPI_Source::Rewards },
        { TEXT("ESPORTS"), ERHAPI_Source::Esports },
        { TEXT("TREASURE"), ERHAPI_Source::Treasure },
        { TEXT("CONSOLE"), ERHAPI_Source::Console },
        { TEXT("ODYSSEY"), ERHAPI_Source::Odyssey },
        { TEXT("STEAM"), ERHAPI_Source::Steam },
        { TEXT("RETURN"), ERHAPI_Source::_Return },
        { TEXT("JSON_GATE"), ERHAPI_Source::JsonGate },
        { TEXT("SEND_GIFT"), ERHAPI_Source::SendGift },
        { TEXT("RECEIVE_GIFT"), ERHAPI_Source::ReceiveGift },
        { TEXT("STEAM_DLC"), ERHAPI_Source::SteamDlc },
        { TEXT("TWITCH_MILESTONE"), ERHAPI_Source::TwitchMilestone },
        { TEXT("TWITCH_PRIME"), ERHAPI_Source::TwitchPrime },
        { TEXT("PSN"), ERHAPI_Source::Psn },
        { TEXT("XBOX"), ERHAPI_Source::Xbox },
        { TEXT("PTS_GRANT"), ERHAPI_Source::PtsGrant },
        { TEXT("INSTANCE"), ERHAPI_Source::Instance },
        { TEXT("ACCOUNT_TRANSFER"), ERHAPI_Source::AccountTransfer },
        { TEXT("PROMOCODE"), ERHAPI_Source::Promocode },
        { TEXT("TRIUMPH_SYSTEM"), ERHAPI_Source::TriumphSystem },
        { TEXT("LOGIN_GRANT"), ERHAPI_Source::LoginGrant },
        { TEXT("EOM_UNCAPPED"), ERHAPI_Source::EomUncapped },
        { TEXT("EOM_CAPPED"), ERHAPI_Source::EomCapped },
        { TEXT("FACEBOOK_DROP"), ERHAPI_Source::FacebookDrop },
        { TEXT("DATABASE_SCRIPT"), ERHAPI_Source::DatabaseScript },
        { TEXT("ACCOUNT_LINKING"), ERHAPI_Source::AccountLinking },
        { TEXT("CLAN"), ERHAPI_Source::Clan },
        { TEXT("CONVERSION"), ERHAPI_Source::Conversion },
        { TEXT("APPLE"), ERHAPI_Source::Apple },
        { TEXT("GOOGLE"), ERHAPI_Source::Google },
        { TEXT("GOOGLE_PLAY"), ERHAPI_Source::GooglePlay },
        { TEXT("PORTAL_DURABLE"), ERHAPI_Source::PortalDurable },
        { TEXT("PARTNER_ACHIEVEMENT"), ERHAPI_Source::PartnerAchievement },
        { TEXT("MIXER_DROP"), ERHAPI_Source::MixerDrop },
        { TEXT("NINTENDO"), ERHAPI_Source::Nintendo },
        { TEXT("STREAM_VIEWING_PROGRESS"), ERHAPI_Source::StreamViewingProgress },
        { TEXT("DISCORD"), ERHAPI_Source::Discord },
        { TEXT("FIRST_LOGIN_GRANT"), ERHAPI_Source::FirstLoginGrant },
        { TEXT("TWITCH_FUEL"), ERHAPI_Source::TwitchFuel },
        { TEXT("DISCORD_DLC"), ERHAPI_Source::DiscordDlc },
        { TEXT("NETEASE"), ERHAPI_Source::Netease },
        { TEXT("EPIC_GAMES"), ERHAPI_Source::EpicGames },
        { TEXT("FORTE"), ERHAPI_Source::Forte },
        { TEXT("FACEBOOK"), ERHAPI_Source::Facebook },
        { TEXT("HIREZ"), ERHAPI_Source::Hirez },
        { TEXT("DAILY_REWARD"), ERHAPI_Source::DailyReward },
        { TEXT("ADD_ACCOUNT_EMAIL_REWARD"), ERHAPI_Source::AddAccountEmailReward },
        { TEXT("CLIENT_CLAIM"), ERHAPI_Source::ClientClaim },
        { TEXT("CLIENT"), ERHAPI_Source::Client },
        { TEXT("ENTITLEMENTS"), ERHAPI_Source::Entitlements },
        { TEXT("AMAZON"), ERHAPI_Source::Amazon },
        { TEXT("SIMULMEDIA"), ERHAPI_Source::Simulmedia },
        { TEXT("LUNA"), ERHAPI_Source::Luna },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_Source& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_Source& Value)
{
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_Source& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


