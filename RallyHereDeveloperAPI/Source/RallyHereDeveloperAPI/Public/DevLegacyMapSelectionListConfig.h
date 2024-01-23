// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevLegacyMapSelectionListConfig.generated.h"

/** @defgroup RHAPI_DevLegacyMapSelectionListConfig RallyHere API Model DevLegacyMapSelectionListConfig
 *  @{
 */

/**
 * @brief Old config used by Legacy systems. These values are ignored by the current APIs
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevLegacyMapSelectionListConfig : public FRHAPI_DevModel
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

    /** @brief Old map selection list id */
    int32 MapSelectionListId_Optional{  };
    /** @brief true if MapSelectionListId_Optional has been set to a value */
    bool MapSelectionListId_IsSet{ false };
    /** @brief Gets the value of MapSelectionListId_Optional, regardless of it having been set */
    int32& GetMapSelectionListId() { return MapSelectionListId_Optional; }
    /** @brief Gets the value of MapSelectionListId_Optional, regardless of it having been set */
    const int32& GetMapSelectionListId() const { return MapSelectionListId_Optional; }
    /** @brief Gets the value of MapSelectionListId_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetMapSelectionListId(const int32& DefaultValue) const { if (MapSelectionListId_IsSet) return MapSelectionListId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of MapSelectionListId_Optional and returns true if it has been set, otherwise returns false */
    bool GetMapSelectionListId(int32& OutValue) const { if (MapSelectionListId_IsSet) OutValue = MapSelectionListId_Optional; return MapSelectionListId_IsSet; }
    /** @brief Returns a pointer to MapSelectionListId_Optional, if it has been set, otherwise returns nullptr */
    int32* GetMapSelectionListIdOrNull() { if (MapSelectionListId_IsSet) return &MapSelectionListId_Optional; return nullptr; }
    /** @brief Returns a pointer to MapSelectionListId_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetMapSelectionListIdOrNull() const { if (MapSelectionListId_IsSet) return &MapSelectionListId_Optional; return nullptr; }
    /** @brief Sets the value of MapSelectionListId_Optional and also sets MapSelectionListId_IsSet to true */
    void SetMapSelectionListId(int32 NewValue) { MapSelectionListId_Optional = NewValue; MapSelectionListId_IsSet = true; }
     /** @brief Clears the value of MapSelectionListId_Optional and sets MapSelectionListId_IsSet to false */
    void ClearMapSelectionListId() { MapSelectionListId_Optional = 0; MapSelectionListId_IsSet = false; }
    /** @brief Returns true if MapSelectionListId_Optional is set and matches the default value */
    bool IsMapSelectionListIdDefaultValue() const { return MapSelectionListId_IsSet && MapSelectionListId_Optional == 0; }
    /** @brief Sets the value of MapSelectionListId_Optional to its default and also sets MapSelectionListId_IsSet to true */
    void SetMapSelectionListIdToDefault() { MapSelectionListId_Optional = 0; MapSelectionListId_IsSet = true; }
};

/** @} */
