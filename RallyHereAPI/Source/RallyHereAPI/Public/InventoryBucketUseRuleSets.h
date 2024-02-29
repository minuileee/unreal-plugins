// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "CacheInfo.h"
#include "InventoryBucketUseRuleSet.h"
#include "InventoryBucketUseRuleSets.generated.h"

/** @defgroup RHAPI_InventoryBucketUseRuleSets RallyHere API Model InventoryBucketUseRuleSets
 *  @{
 */

/**
 * @brief A collection of Inventory Bucket Use Rule Sets. A rule set determine how item can be used across buckets.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_InventoryBucketUseRuleSets : public FRHAPI_Model
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

    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    TMap<FString, FRHAPI_InventoryBucketUseRuleSet> RuleSets_Optional{  };
    /** @brief true if RuleSets_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool RuleSets_IsSet{ false };
    /** @brief Gets the value of RuleSets_Optional, regardless of it having been set */
    TMap<FString, FRHAPI_InventoryBucketUseRuleSet>& GetRuleSets() { return RuleSets_Optional; }
    /** @brief Gets the value of RuleSets_Optional, regardless of it having been set */
    const TMap<FString, FRHAPI_InventoryBucketUseRuleSet>& GetRuleSets() const { return RuleSets_Optional; }
    /** @brief Gets the value of RuleSets_Optional, if it has been set, otherwise it returns DefaultValue */
    const TMap<FString, FRHAPI_InventoryBucketUseRuleSet>& GetRuleSets(const TMap<FString, FRHAPI_InventoryBucketUseRuleSet>& DefaultValue) const { if (RuleSets_IsSet) return RuleSets_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of RuleSets_Optional and returns true if it has been set, otherwise returns false */
    bool GetRuleSets(TMap<FString, FRHAPI_InventoryBucketUseRuleSet>& OutValue) const { if (RuleSets_IsSet) OutValue = RuleSets_Optional; return RuleSets_IsSet; }
    /** @brief Returns a pointer to RuleSets_Optional, if it has been set, otherwise returns nullptr */
    TMap<FString, FRHAPI_InventoryBucketUseRuleSet>* GetRuleSetsOrNull() { if (RuleSets_IsSet) return &RuleSets_Optional; return nullptr; }
    /** @brief Returns a pointer to RuleSets_Optional, if it has been set, otherwise returns nullptr */
    const TMap<FString, FRHAPI_InventoryBucketUseRuleSet>* GetRuleSetsOrNull() const { if (RuleSets_IsSet) return &RuleSets_Optional; return nullptr; }
    /** @brief Sets the value of RuleSets_Optional and also sets RuleSets_IsSet to true */
    void SetRuleSets(TMap<FString, FRHAPI_InventoryBucketUseRuleSet> NewValue) { RuleSets_Optional = NewValue; RuleSets_IsSet = true; }
     /** @brief Clears the value of RuleSets_Optional and sets RuleSets_IsSet to false */
    void ClearRuleSets() { RuleSets_IsSet = false; }

    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FRHAPI_CacheInfo CacheInfo_Optional{  };
    /** @brief true if CacheInfo_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
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

/** @} */
