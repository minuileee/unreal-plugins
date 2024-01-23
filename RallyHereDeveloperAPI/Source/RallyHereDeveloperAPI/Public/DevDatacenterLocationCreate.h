// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevDatacenterLocationCreate.generated.h"

/** @defgroup RHAPI_DevDatacenterLocationCreate RallyHere API Model DevDatacenterLocationCreate
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevDatacenterLocationCreate : public FRHAPI_DevModel
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

    /** @brief Which datacenter region this is in using the language of the provider. Could be things like us-east-1, us-west-2, etc. */
    FString Description{  };
    /** @brief Gets the value of Description */
    FString& GetDescription() { return Description; }
    /** @brief Gets the value of Description */
    const FString& GetDescription() const { return Description; }
    /** @brief Sets the value of Description */
    void SetDescription(FString NewValue) { Description = NewValue;  }
};

/** @} */
