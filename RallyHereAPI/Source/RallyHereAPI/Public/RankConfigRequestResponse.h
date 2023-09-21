// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "RankConfig.h"
#include "RankConfigRequestResponse.generated.h"

/** @defgroup RHAPI_RankConfigRequestResponse RallyHere API Model RankConfigRequestResponse
 *  @{
 */

/**
 * @brief Response to successfully requesting all rank config
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_RankConfigRequestResponse : public FRHAPI_Model
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

    /** @brief List of rank configurations */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<FRHAPI_RankConfig> RankConfigs{  };
    /** @brief Gets the value of RankConfigs */
    TArray<FRHAPI_RankConfig>& GetRankConfigs() { return RankConfigs; }
    /** @brief Gets the value of RankConfigs */
    const TArray<FRHAPI_RankConfig>& GetRankConfigs() const { return RankConfigs; }
    /** @brief Sets the value of RankConfigs */
    void SetRankConfigs(TArray<FRHAPI_RankConfig> NewValue) { RankConfigs = NewValue;  }
};

/** @} */