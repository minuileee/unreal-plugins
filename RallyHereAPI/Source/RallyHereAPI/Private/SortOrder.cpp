// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "SortOrder.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_SortOrder
FString EnumToString(const ERHAPI_SortOrder& Value)
{
    switch (Value)
    {
    case ERHAPI_SortOrder::Ascending:
        return TEXT("asc");
    case ERHAPI_SortOrder::Descending:
        return TEXT("desc");
    }

    UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_SortOrder::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_SortOrder& Value)
{
    static TMap<FString, ERHAPI_SortOrder> StringToEnum = { 
        { TEXT("asc"), ERHAPI_SortOrder::Ascending },
        { TEXT("desc"), ERHAPI_SortOrder::Descending },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_SortOrder& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_SortOrder& Value)
{
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_SortOrder& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}

