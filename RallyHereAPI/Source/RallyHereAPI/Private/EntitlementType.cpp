// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "EntitlementType.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_EntitlementType
FString EnumToString(const ERHAPI_EntitlementType& Value)
{
    switch (Value)
    {
    case ERHAPI_EntitlementType::Consumable:
        return TEXT("consumable");
    case ERHAPI_EntitlementType::Durable:
        return TEXT("durable");
    case ERHAPI_EntitlementType::DurableSingleUse:
        return TEXT("durable_single_use");
    }

    UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_EntitlementType::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_EntitlementType& Value)
{
    static TMap<FString, ERHAPI_EntitlementType> StringToEnum = { 
        { TEXT("consumable"), ERHAPI_EntitlementType::Consumable },
        { TEXT("durable"), ERHAPI_EntitlementType::Durable },
        { TEXT("durable_single_use"), ERHAPI_EntitlementType::DurableSingleUse },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_EntitlementType& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_EntitlementType& Value)
{
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_EntitlementType& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}

