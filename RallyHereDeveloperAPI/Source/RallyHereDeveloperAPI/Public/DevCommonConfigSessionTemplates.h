// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevSessionTemplateRequest.h"
#include "DevCommonConfigSessionTemplates.generated.h"

/** @defgroup RHAPI_DevCommonConfigSessionTemplates RallyHere API Model DevCommonConfigSessionTemplates
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevCommonConfigSessionTemplates : public FRHAPI_DevModel
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

    TArray<FRHAPI_DevSessionTemplateRequest> Templates{  };
    /** @brief Gets the value of Templates */
    TArray<FRHAPI_DevSessionTemplateRequest>& GetTemplates() { return Templates; }
    /** @brief Gets the value of Templates */
    const TArray<FRHAPI_DevSessionTemplateRequest>& GetTemplates() const { return Templates; }
    /** @brief Sets the value of Templates */
    void SetTemplates(TArray<FRHAPI_DevSessionTemplateRequest> NewValue) { Templates = NewValue;  }
};

/** @} */
