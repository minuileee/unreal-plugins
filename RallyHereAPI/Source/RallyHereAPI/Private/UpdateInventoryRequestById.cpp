// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "UpdateInventoryRequestById.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_UpdateInventoryRequestById

void FRHAPI_UpdateInventoryRequestById::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Bucket_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("bucket"));
        RallyHereAPI::WriteJsonValue(Writer, EnumToString(Bucket_Optional));
    }
    if (Count_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("count"));
        RallyHereAPI::WriteJsonValue(Writer, Count_Optional);
    }
    if (Expires_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("expires"));
        RallyHereAPI::WriteJsonValue(Writer, Expires_Optional);
    }
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    if (ItemId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("item_id"));
        RallyHereAPI::WriteJsonValue(Writer, ItemId_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("inventory_id"));
    RallyHereAPI::WriteJsonValue(Writer, InventoryId);
    Writer->WriteObjectEnd();
}

bool FRHAPI_UpdateInventoryRequestById::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonBucketField = (*Object)->TryGetField(TEXT("bucket"));
    if (JsonBucketField.IsValid() && !JsonBucketField->IsNull())
    {
        Bucket_IsSet = TryGetJsonValue(JsonBucketField, Bucket_Optional);
        ParseSuccess &= Bucket_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCountField = (*Object)->TryGetField(TEXT("count"));
    if (JsonCountField.IsValid() && !JsonCountField->IsNull())
    {
        Count_IsSet = TryGetJsonValue(JsonCountField, Count_Optional);
        ParseSuccess &= Count_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonExpiresField = (*Object)->TryGetField(TEXT("expires"));
    if (JsonExpiresField.IsValid() && !JsonExpiresField->IsNull())
    {
        Expires_IsSet = TryGetJsonValue(JsonExpiresField, Expires_Optional);
        ParseSuccess &= Expires_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonItemIdField = (*Object)->TryGetField(TEXT("item_id"));
    if (JsonItemIdField.IsValid() && !JsonItemIdField->IsNull())
    {
        ItemId_IsSet = TryGetJsonValue(JsonItemIdField, ItemId_Optional);
        ParseSuccess &= ItemId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonInventoryIdField = (*Object)->TryGetField(TEXT("inventory_id"));
    ParseSuccess &= JsonInventoryIdField.IsValid() && !JsonInventoryIdField->IsNull() && TryGetJsonValue(JsonInventoryIdField, InventoryId);

    return ParseSuccess;
}

