// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevPermissionAssignmentLevel.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_DevPermissionAssignmentLevel
FString EnumToString(const ERHAPI_DevPermissionAssignmentLevel& Value)
{
    switch (Value)
    {
    case ERHAPI_DevPermissionAssignmentLevel::Glb:
        return TEXT("glb");
    case ERHAPI_DevPermissionAssignmentLevel::Org:
        return TEXT("org");
    case ERHAPI_DevPermissionAssignmentLevel::Product:
        return TEXT("product");
    case ERHAPI_DevPermissionAssignmentLevel::Sandbox:
        return TEXT("sandbox");
    case ERHAPI_DevPermissionAssignmentLevel::Environment:
        return TEXT("environment");
    case ERHAPI_DevPermissionAssignmentLevel::ProductUp:
        return TEXT("product_up");
    case ERHAPI_DevPermissionAssignmentLevel::SandboxUp:
        return TEXT("sandbox_up");
    case ERHAPI_DevPermissionAssignmentLevel::EnvironmentUp:
        return TEXT("environment_up");
    }

    UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("Invalid ERHAPI_DevPermissionAssignmentLevel::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_DevPermissionAssignmentLevel& Value)
{
    static TMap<FString, ERHAPI_DevPermissionAssignmentLevel> StringToEnum = { 
        { TEXT("glb"), ERHAPI_DevPermissionAssignmentLevel::Glb },
        { TEXT("org"), ERHAPI_DevPermissionAssignmentLevel::Org },
        { TEXT("product"), ERHAPI_DevPermissionAssignmentLevel::Product },
        { TEXT("sandbox"), ERHAPI_DevPermissionAssignmentLevel::Sandbox },
        { TEXT("environment"), ERHAPI_DevPermissionAssignmentLevel::Environment },
        { TEXT("product_up"), ERHAPI_DevPermissionAssignmentLevel::ProductUp },
        { TEXT("sandbox_up"), ERHAPI_DevPermissionAssignmentLevel::SandboxUp },
        { TEXT("environment_up"), ERHAPI_DevPermissionAssignmentLevel::EnvironmentUp },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_DevPermissionAssignmentLevel& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DevPermissionAssignmentLevel& Value)
{
    RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DevPermissionAssignmentLevel& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


