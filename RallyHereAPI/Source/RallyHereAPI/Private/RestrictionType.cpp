// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "RestrictionType.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_RestrictionType
FString EnumToString(const ERHAPI_RestrictionType& Value)
{
    switch (Value)
    {
    case ERHAPI_RestrictionType::AccountBan:
        return TEXT("account_ban");
    case ERHAPI_RestrictionType::AccountLockout:
        return TEXT("account_lockout");
    case ERHAPI_RestrictionType::AccountPendingDeletion:
        return TEXT("account_pending_deletion");
    case ERHAPI_RestrictionType::AccountDenyAuth:
        return TEXT("account_deny_auth");
    }

    UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_RestrictionType::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_RestrictionType& Value)
{
    static TMap<FString, ERHAPI_RestrictionType> StringToEnum = { 
        { TEXT("account_ban"), ERHAPI_RestrictionType::AccountBan },
        { TEXT("account_lockout"), ERHAPI_RestrictionType::AccountLockout },
        { TEXT("account_pending_deletion"), ERHAPI_RestrictionType::AccountPendingDeletion },
        { TEXT("account_deny_auth"), ERHAPI_RestrictionType::AccountDenyAuth },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_RestrictionType& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_RestrictionType& Value)
{
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_RestrictionType& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}

