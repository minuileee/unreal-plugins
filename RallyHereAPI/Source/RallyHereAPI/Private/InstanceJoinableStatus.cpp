// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "InstanceJoinableStatus.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_InstanceJoinableStatus
FString EnumToString(const ERHAPI_InstanceJoinableStatus& Value)
{
    switch (Value)
    {
    case ERHAPI_InstanceJoinableStatus::Requested:
        return TEXT("requested");
    case ERHAPI_InstanceJoinableStatus::Allocated:
        return TEXT("allocated");
    case ERHAPI_InstanceJoinableStatus::Pending:
        return TEXT("pending");
    case ERHAPI_InstanceJoinableStatus::Joinable:
        return TEXT("joinable");
    case ERHAPI_InstanceJoinableStatus::Closed:
        return TEXT("closed");
    }

    UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_InstanceJoinableStatus::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_InstanceJoinableStatus& Value)
{
    static TMap<FString, ERHAPI_InstanceJoinableStatus> StringToEnum = {
        { TEXT("requested"), ERHAPI_InstanceJoinableStatus::Requested },
        { TEXT("allocated"), ERHAPI_InstanceJoinableStatus::Allocated },
        { TEXT("pending"), ERHAPI_InstanceJoinableStatus::Pending },
        { TEXT("joinable"), ERHAPI_InstanceJoinableStatus::Joinable },
        { TEXT("closed"), ERHAPI_InstanceJoinableStatus::Closed },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_InstanceJoinableStatus& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_InstanceJoinableStatus& Value)
{
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_InstanceJoinableStatus& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


