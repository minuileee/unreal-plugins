// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevVendorType.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_DevVendorType
FString EnumToString(const ERHAPI_DevVendorType& Value)
{
    switch (Value)
    {
    case ERHAPI_DevVendorType::Recipe:
        return TEXT("recipe");
    case ERHAPI_DevVendorType::RandomlySampled:
        return TEXT("randomly_sampled");
    }

    UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("Invalid ERHAPI_DevVendorType::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_DevVendorType& Value)
{
    static TMap<FString, ERHAPI_DevVendorType> StringToEnum = { 
        { TEXT("recipe"), ERHAPI_DevVendorType::Recipe },
        { TEXT("randomly_sampled"), ERHAPI_DevVendorType::RandomlySampled },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_DevVendorType& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DevVendorType& Value)
{
    RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DevVendorType& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


