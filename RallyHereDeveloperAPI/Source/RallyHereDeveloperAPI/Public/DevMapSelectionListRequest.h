// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevLegacyMapSelectionListConfig.h"
#include "DevMapSelectionListRequest.generated.h"

/** @defgroup RHAPI_DevMapSelectionListRequest RallyHere API Model DevMapSelectionListRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevMapSelectionListRequest : public FRHAPI_DevModel
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

    /** @brief Readable name for this MapSelectionList */
    FString Name{  };
    /** @brief Gets the value of Name */
    FString& GetName() { return Name; }
    /** @brief Gets the value of Name */
    const FString& GetName() const { return Name; }
    /** @brief Sets the value of Name */
    void SetName(FString NewValue) { Name = NewValue;  }

    FRHAPI_DevLegacyMapSelectionListConfig LegacyConfig_Optional{  };
    /** @brief true if LegacyConfig_Optional has been set to a value */
    bool LegacyConfig_IsSet{ false };
    /** @brief Gets the value of LegacyConfig_Optional, regardless of it having been set */
    FRHAPI_DevLegacyMapSelectionListConfig& GetLegacyConfig() { return LegacyConfig_Optional; }
    /** @brief Gets the value of LegacyConfig_Optional, regardless of it having been set */
    const FRHAPI_DevLegacyMapSelectionListConfig& GetLegacyConfig() const { return LegacyConfig_Optional; }
    /** @brief Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_DevLegacyMapSelectionListConfig& GetLegacyConfig(const FRHAPI_DevLegacyMapSelectionListConfig& DefaultValue) const { if (LegacyConfig_IsSet) return LegacyConfig_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false */
    bool GetLegacyConfig(FRHAPI_DevLegacyMapSelectionListConfig& OutValue) const { if (LegacyConfig_IsSet) OutValue = LegacyConfig_Optional; return LegacyConfig_IsSet; }
    /** @brief Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_DevLegacyMapSelectionListConfig* GetLegacyConfigOrNull() { if (LegacyConfig_IsSet) return &LegacyConfig_Optional; return nullptr; }
    /** @brief Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_DevLegacyMapSelectionListConfig* GetLegacyConfigOrNull() const { if (LegacyConfig_IsSet) return &LegacyConfig_Optional; return nullptr; }
    /** @brief Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true */
    void SetLegacyConfig(FRHAPI_DevLegacyMapSelectionListConfig NewValue) { LegacyConfig_Optional = NewValue; LegacyConfig_IsSet = true; }
     /** @brief Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false */
    void ClearLegacyConfig() { LegacyConfig_IsSet = false; }
};

/** @} */
