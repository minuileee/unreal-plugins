// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "IndividualCCUs.h"
#include "PlatformIndividualCCUs.generated.h"

/** @defgroup RHAPI_PlatformIndividualCCUs RallyHere API Model PlatformIndividualCCUs
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlatformIndividualCCUs : public FRHAPI_Model
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
    TMap<FString, FRHAPI_IndividualCCUs> PlatformCcus{  };
    /** @brief Gets the value of PlatformCcus */
    TMap<FString, FRHAPI_IndividualCCUs>& GetPlatformCcus() { return PlatformCcus; }
    /** @brief Gets the value of PlatformCcus */
    const TMap<FString, FRHAPI_IndividualCCUs>& GetPlatformCcus() const { return PlatformCcus; }
    /** @brief Sets the value of PlatformCcus */
    void SetPlatformCcus(TMap<FString, FRHAPI_IndividualCCUs> NewValue) { PlatformCcus = NewValue;  }
};

/** @} */
