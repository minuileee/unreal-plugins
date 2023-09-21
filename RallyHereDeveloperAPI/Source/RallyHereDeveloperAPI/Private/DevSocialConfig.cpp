// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevSocialConfig.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevSocialConfig

void FRHAPI_DevSocialConfig::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (FriendLimit_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("friend_limit"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, FriendLimit_Optional);
    }
    if (BlockLimit_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("block_limit"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, BlockLimit_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevSocialConfig::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonFriendLimitField = (*Object)->TryGetField(TEXT("friend_limit"));
    if (JsonFriendLimitField.IsValid() && !JsonFriendLimitField->IsNull())
    {
        FriendLimit_IsSet = TryGetJsonValue(JsonFriendLimitField, FriendLimit_Optional);
        ParseSuccess &= FriendLimit_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonBlockLimitField = (*Object)->TryGetField(TEXT("block_limit"));
    if (JsonBlockLimitField.IsValid() && !JsonBlockLimitField->IsNull())
    {
        BlockLimit_IsSet = TryGetJsonValue(JsonBlockLimitField, BlockLimit_Optional);
        ParseSuccess &= BlockLimit_IsSet;
    }

    return ParseSuccess;
}
