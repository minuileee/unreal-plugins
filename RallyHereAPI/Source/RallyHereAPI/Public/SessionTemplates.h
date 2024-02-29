// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "SessionTemplate.h"
#include "SessionTemplates.generated.h"

/** @defgroup RHAPI_SessionTemplates RallyHere API Model SessionTemplates
 *  @{
 */

/**
 * @brief A mapping of RallyHere session template types to the templates
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_SessionTemplates : public FRHAPI_Model
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

    /** @brief Dictionary of SessionTemplates keyed on their template type */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    TMap<FString, FRHAPI_SessionTemplate> Templates_Optional{  };
    /** @brief true if Templates_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool Templates_IsSet{ false };
    /** @brief Gets the value of Templates_Optional, regardless of it having been set */
    TMap<FString, FRHAPI_SessionTemplate>& GetTemplates() { return Templates_Optional; }
    /** @brief Gets the value of Templates_Optional, regardless of it having been set */
    const TMap<FString, FRHAPI_SessionTemplate>& GetTemplates() const { return Templates_Optional; }
    /** @brief Gets the value of Templates_Optional, if it has been set, otherwise it returns DefaultValue */
    const TMap<FString, FRHAPI_SessionTemplate>& GetTemplates(const TMap<FString, FRHAPI_SessionTemplate>& DefaultValue) const { if (Templates_IsSet) return Templates_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Templates_Optional and returns true if it has been set, otherwise returns false */
    bool GetTemplates(TMap<FString, FRHAPI_SessionTemplate>& OutValue) const { if (Templates_IsSet) OutValue = Templates_Optional; return Templates_IsSet; }
    /** @brief Returns a pointer to Templates_Optional, if it has been set, otherwise returns nullptr */
    TMap<FString, FRHAPI_SessionTemplate>* GetTemplatesOrNull() { if (Templates_IsSet) return &Templates_Optional; return nullptr; }
    /** @brief Returns a pointer to Templates_Optional, if it has been set, otherwise returns nullptr */
    const TMap<FString, FRHAPI_SessionTemplate>* GetTemplatesOrNull() const { if (Templates_IsSet) return &Templates_Optional; return nullptr; }
    /** @brief Sets the value of Templates_Optional and also sets Templates_IsSet to true */
    void SetTemplates(TMap<FString, FRHAPI_SessionTemplate> NewValue) { Templates_Optional = NewValue; Templates_IsSet = true; }
     /** @brief Clears the value of Templates_Optional and sets Templates_IsSet to false */
    void ClearTemplates() { Templates_IsSet = false; }
};

/** @} */
