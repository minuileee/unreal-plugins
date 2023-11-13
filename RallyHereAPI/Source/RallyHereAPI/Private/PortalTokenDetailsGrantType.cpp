// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PortalTokenDetailsGrantType.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_PortalTokenDetailsGrantType
FString EnumToString(const ERHAPI_PortalTokenDetailsGrantType& Value)
{
    switch (Value)
    {
    case ERHAPI_PortalTokenDetailsGrantType::PS4V1:
        return TEXT("ps4_v1");
    case ERHAPI_PortalTokenDetailsGrantType::PS4V3:
        return TEXT("ps4_v3");
    case ERHAPI_PortalTokenDetailsGrantType::PS5V3:
        return TEXT("ps5_v3");
    }

    UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_PortalTokenDetailsGrantType::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_PortalTokenDetailsGrantType& Value)
{
    static TMap<FString, ERHAPI_PortalTokenDetailsGrantType> StringToEnum = { 
        { TEXT("ps4_v1"), ERHAPI_PortalTokenDetailsGrantType::PS4V1 },
        { TEXT("ps4_v3"), ERHAPI_PortalTokenDetailsGrantType::PS4V3 },
        { TEXT("ps5_v3"), ERHAPI_PortalTokenDetailsGrantType::PS5V3 },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_PortalTokenDetailsGrantType& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_PortalTokenDetailsGrantType& Value)
{
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_PortalTokenDetailsGrantType& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


