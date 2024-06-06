// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevCreateInventoryBucketUseRuleSet.h"
#include "DevCreateInventoryBucketUseRuleSetCollection.generated.h"

/** @defgroup RHAPI_DevCreateInventoryBucketUseRuleSetCollection RallyHere API Model DevCreateInventoryBucketUseRuleSetCollection
 *  @{
 */

/**
 * @brief A collection of Inventory Bucket Use Rule Sets to create.
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevCreateInventoryBucketUseRuleSetCollection : public FRHAPI_DevModel
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
    TArray<FRHAPI_DevCreateInventoryBucketUseRuleSet> Data{  };
    /** @brief Gets the value of Data */
    TArray<FRHAPI_DevCreateInventoryBucketUseRuleSet>& GetData() { return Data; }
    /** @brief Gets the value of Data */
    const TArray<FRHAPI_DevCreateInventoryBucketUseRuleSet>& GetData() const { return Data; }
    /** @brief Sets the value of Data */
    void SetData(TArray<FRHAPI_DevCreateInventoryBucketUseRuleSet> NewValue) { Data = NewValue;  }
};

/** @} */