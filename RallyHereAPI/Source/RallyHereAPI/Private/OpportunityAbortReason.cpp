// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "OpportunityAbortReason.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_OpportunityAbortReason
FString EnumToString(const ERHAPI_OpportunityAbortReason& Value)
{
    switch (Value)
    {
    case ERHAPI_OpportunityAbortReason::Cancel:
        return TEXT("cancel");
    case ERHAPI_OpportunityAbortReason::Other:
        return TEXT("other");
    }

    UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_OpportunityAbortReason::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_OpportunityAbortReason& Value)
{
    static TMap<FString, ERHAPI_OpportunityAbortReason> StringToEnum = { 
        { TEXT("cancel"), ERHAPI_OpportunityAbortReason::Cancel },
        { TEXT("other"), ERHAPI_OpportunityAbortReason::Other },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_OpportunityAbortReason& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_OpportunityAbortReason& Value)
{
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_OpportunityAbortReason& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


