// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevInventoryBucketUseRuleSetSortOptions.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_DevInventoryBucketUseRuleSetSortOptions
FString EnumToString(const ERHAPI_DevInventoryBucketUseRuleSetSortOptions& Value)
{
    switch (Value)
    {
    case ERHAPI_DevInventoryBucketUseRuleSetSortOptions::InventoryBucketUseRuleSetId:
        return TEXT("rule_set_id");
    case ERHAPI_DevInventoryBucketUseRuleSetSortOptions::LegacyInventoryBucketUseRuleSetId:
        return TEXT("legacy_inventory_bucket_use_rule_set_id");
    case ERHAPI_DevInventoryBucketUseRuleSetSortOptions::Name:
        return TEXT("name");
    case ERHAPI_DevInventoryBucketUseRuleSetSortOptions::LastModifiedTimestamp:
        return TEXT("last_modified_timestamp");
    case ERHAPI_DevInventoryBucketUseRuleSetSortOptions::LastModifiedAccountId:
        return TEXT("last_modified_account_id");
    }

    UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("Invalid ERHAPI_DevInventoryBucketUseRuleSetSortOptions::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_DevInventoryBucketUseRuleSetSortOptions& Value)
{
    static TMap<FString, ERHAPI_DevInventoryBucketUseRuleSetSortOptions> StringToEnum = {
        { TEXT("rule_set_id"), ERHAPI_DevInventoryBucketUseRuleSetSortOptions::InventoryBucketUseRuleSetId },
        { TEXT("legacy_inventory_bucket_use_rule_set_id"), ERHAPI_DevInventoryBucketUseRuleSetSortOptions::LegacyInventoryBucketUseRuleSetId },
        { TEXT("name"), ERHAPI_DevInventoryBucketUseRuleSetSortOptions::Name },
        { TEXT("last_modified_timestamp"), ERHAPI_DevInventoryBucketUseRuleSetSortOptions::LastModifiedTimestamp },
        { TEXT("last_modified_account_id"), ERHAPI_DevInventoryBucketUseRuleSetSortOptions::LastModifiedAccountId },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_DevInventoryBucketUseRuleSetSortOptions& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DevInventoryBucketUseRuleSetSortOptions& Value)
{
    RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DevInventoryBucketUseRuleSetSortOptions& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


