// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "AdOpportunity.h"
#include "AdOpportunities.generated.h"

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_AdOpportunities : public FRHAPI_Model
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
    TArray<FRHAPI_AdOpportunity> Opportunities{  };
    /** @brief Gets the value of Opportunities */
    TArray<FRHAPI_AdOpportunity>& GetOpportunities() { return Opportunities; }
    /** @brief Gets the value of Opportunities */
    const TArray<FRHAPI_AdOpportunity>& GetOpportunities() const { return Opportunities; }
    /** @brief Sets the value of Opportunities */
    void SetOpportunities(TArray<FRHAPI_AdOpportunity> NewValue) { Opportunities = NewValue;  }
};
