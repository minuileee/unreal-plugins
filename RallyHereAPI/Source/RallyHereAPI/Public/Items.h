// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "CacheInfo.h"
#include "Item.h"
#include "Items.generated.h"

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_Items : public FRHAPI_Model
{
    GENERATED_BODY()

    /**
    * @brief Fills this object with data from the passed in JSON
    *
    * @param [in] JsonValue Data from the API call.
    *
    * @return true if parsing of the JSON data was successful.
    */
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;

    /**
    * @brief Writes the data from this object into the specified JSON Writer stream
    *
    * @param [in] Writer JSON Writer stream to push .
    */
    void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TMap<FString, FRHAPI_Item> Items_Optional{  };
    /** @brief true if Items_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Items_IsSet{ false };
    /** @brief Gets the value of Items_Optional, regardless of it having been set */
    TMap<FString, FRHAPI_Item>& GetItems() { return Items_Optional; }
    /** @brief Gets the value of Items_Optional, regardless of it having been set */
    const TMap<FString, FRHAPI_Item>& GetItems() const { return Items_Optional; }
    /** @brief Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue */
    const TMap<FString, FRHAPI_Item>& GetItems(const TMap<FString, FRHAPI_Item>& DefaultValue) const { if (Items_IsSet) return Items_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false */
    bool GetItems(TMap<FString, FRHAPI_Item>& OutValue) const { if (Items_IsSet) OutValue = Items_Optional; return Items_IsSet; }
    /** @brief Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr */
    TMap<FString, FRHAPI_Item>* GetItemsOrNull() { if (Items_IsSet) return &Items_Optional; return nullptr; }
    /** @brief Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr */
    const TMap<FString, FRHAPI_Item>* GetItemsOrNull() const { if (Items_IsSet) return &Items_Optional; return nullptr; }
    /** @brief Sets the value of Items_Optional and also sets Items_IsSet to true */
    void SetItems(TMap<FString, FRHAPI_Item> NewValue) { Items_Optional = NewValue; Items_IsSet = true; }
     /** @brief Clears the value of Items_Optional and sets Items_IsSet to false */
    void ClearItems() { Items_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_CacheInfo CacheInfo_Optional{  };
    /** @brief true if CacheInfo_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool CacheInfo_IsSet{ false };
    /** @brief Gets the value of CacheInfo_Optional, regardless of it having been set */
    FRHAPI_CacheInfo& GetCacheInfo() { return CacheInfo_Optional; }
    /** @brief Gets the value of CacheInfo_Optional, regardless of it having been set */
    const FRHAPI_CacheInfo& GetCacheInfo() const { return CacheInfo_Optional; }
    /** @brief Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_CacheInfo& GetCacheInfo(const FRHAPI_CacheInfo& DefaultValue) const { if (CacheInfo_IsSet) return CacheInfo_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false */
    bool GetCacheInfo(FRHAPI_CacheInfo& OutValue) const { if (CacheInfo_IsSet) OutValue = CacheInfo_Optional; return CacheInfo_IsSet; }
    /** @brief Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_CacheInfo* GetCacheInfoOrNull() { if (CacheInfo_IsSet) return &CacheInfo_Optional; return nullptr; }
    /** @brief Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_CacheInfo* GetCacheInfoOrNull() const { if (CacheInfo_IsSet) return &CacheInfo_Optional; return nullptr; }
    /** @brief Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true */
    void SetCacheInfo(FRHAPI_CacheInfo NewValue) { CacheInfo_Optional = NewValue; CacheInfo_IsSet = true; }
     /** @brief Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false */
    void ClearCacheInfo() { CacheInfo_IsSet = false; }
};
