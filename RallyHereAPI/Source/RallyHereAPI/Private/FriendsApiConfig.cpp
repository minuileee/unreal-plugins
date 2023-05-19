// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "FriendsApiConfig.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_FriendsApiConfig

void FRHAPI_FriendsApiConfig::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (FriendLimit_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("friend_limit"));
        RallyHereAPI::WriteJsonValue(Writer, FriendLimit_Optional);
    }
    if (BlockLimit_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("block_limit"));
        RallyHereAPI::WriteJsonValue(Writer, BlockLimit_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_FriendsApiConfig::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    if ((*Object)->HasField(TEXT("friend_limit")))
    {
        FriendLimit_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("friend_limit"), FriendLimit_Optional);
        ParseSuccess &= FriendLimit_IsSet;
    }
    if ((*Object)->HasField(TEXT("block_limit")))
    {
        BlockLimit_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("block_limit"), BlockLimit_Optional);
        ParseSuccess &= BlockLimit_IsSet;
    }

    return ParseSuccess;
}

