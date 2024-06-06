// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevInventoryBucketUseRuleSet.h"
#include "DevPageMeta.h"
#include "DevInventoryBucketUseRuleSetCollection.generated.h"

/** @defgroup RHAPI_DevInventoryBucketUseRuleSetCollection RallyHere API Model DevInventoryBucketUseRuleSetCollection
 *  @{
 */

/**
 * @brief A collection of Inventory Bucket Use Rule Sets. A rule set determine how item can be used across buckets.
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevInventoryBucketUseRuleSetCollection : public FRHAPI_DevModel
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

    /** @brief The Inventory Bucket Use Rule Sets. */
    TArray<FRHAPI_DevInventoryBucketUseRuleSet> Data_Optional{  };
    /** @brief true if Data_Optional has been set to a value */
    bool Data_IsSet{ false };
    /** @brief Gets the value of Data_Optional, regardless of it having been set */
    TArray<FRHAPI_DevInventoryBucketUseRuleSet>& GetData() { return Data_Optional; }
    /** @brief Gets the value of Data_Optional, regardless of it having been set */
    const TArray<FRHAPI_DevInventoryBucketUseRuleSet>& GetData() const { return Data_Optional; }
    /** @brief Gets the value of Data_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FRHAPI_DevInventoryBucketUseRuleSet>& GetData(const TArray<FRHAPI_DevInventoryBucketUseRuleSet>& DefaultValue) const { if (Data_IsSet) return Data_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Data_Optional and returns true if it has been set, otherwise returns false */
    bool GetData(TArray<FRHAPI_DevInventoryBucketUseRuleSet>& OutValue) const { if (Data_IsSet) OutValue = Data_Optional; return Data_IsSet; }
    /** @brief Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr */
    TArray<FRHAPI_DevInventoryBucketUseRuleSet>* GetDataOrNull() { if (Data_IsSet) return &Data_Optional; return nullptr; }
    /** @brief Returns a pointer to Data_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FRHAPI_DevInventoryBucketUseRuleSet>* GetDataOrNull() const { if (Data_IsSet) return &Data_Optional; return nullptr; }
    /** @brief Sets the value of Data_Optional and also sets Data_IsSet to true */
    void SetData(TArray<FRHAPI_DevInventoryBucketUseRuleSet> NewValue) { Data_Optional = NewValue; Data_IsSet = true; }
     /** @brief Clears the value of Data_Optional and sets Data_IsSet to false */
    void ClearData() { Data_IsSet = false; }

    FRHAPI_DevPageMeta PageMeta{  };
    /** @brief Gets the value of PageMeta */
    FRHAPI_DevPageMeta& GetPageMeta() { return PageMeta; }
    /** @brief Gets the value of PageMeta */
    const FRHAPI_DevPageMeta& GetPageMeta() const { return PageMeta; }
    /** @brief Sets the value of PageMeta */
    void SetPageMeta(FRHAPI_DevPageMeta NewValue) { PageMeta = NewValue;  }
};

/** @} */