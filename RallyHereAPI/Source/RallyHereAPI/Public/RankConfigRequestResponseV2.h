// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "RankConfigV2.h"
#include "RankConfigRequestResponseV2.generated.h"

/** @defgroup RHAPI_RankConfigRequestResponseV2 RallyHere API Model RankConfigRequestResponseV2
 *  @{
 */

/**
 * @brief Response to successfully requesting all rank config
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_RankConfigRequestResponseV2 : public FRHAPI_Model
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
    TArray<FRHAPI_RankConfigV2> RankConfigs{  };
    /** @brief Gets the value of RankConfigs */
    TArray<FRHAPI_RankConfigV2>& GetRankConfigs() { return RankConfigs; }
    /** @brief Gets the value of RankConfigs */
    const TArray<FRHAPI_RankConfigV2>& GetRankConfigs() const { return RankConfigs; }
    /** @brief Sets the value of RankConfigs */
    void SetRankConfigs(TArray<FRHAPI_RankConfigV2> NewValue) { RankConfigs = NewValue;  }
};

/** @} */