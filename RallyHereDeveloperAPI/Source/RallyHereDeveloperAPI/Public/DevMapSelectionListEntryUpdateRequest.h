// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevMapSelectionListEntryUpdateRequest.generated.h"

/** @defgroup RHAPI_DevMapSelectionListEntryUpdateRequest RallyHere API Model DevMapSelectionListEntryUpdateRequest
 *  @{
 */

/**
 * @brief
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevMapSelectionListEntryUpdateRequest : public FRHAPI_DevModel
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

    /** @brief The weight given to this entry when choosing from the MapSelectionList */
    int32 MapWeight_Optional{  };
    /** @brief true if MapWeight_Optional has been set to a value */
    bool MapWeight_IsSet{ false };
    /** @brief Gets the value of MapWeight_Optional, regardless of it having been set */
    int32& GetMapWeight() { return MapWeight_Optional; }
    /** @brief Gets the value of MapWeight_Optional, regardless of it having been set */
    const int32& GetMapWeight() const { return MapWeight_Optional; }
    /** @brief Gets the value of MapWeight_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetMapWeight(const int32& DefaultValue) const { if (MapWeight_IsSet) return MapWeight_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of MapWeight_Optional and returns true if it has been set, otherwise returns false */
    bool GetMapWeight(int32& OutValue) const { if (MapWeight_IsSet) OutValue = MapWeight_Optional; return MapWeight_IsSet; }
    /** @brief Returns a pointer to MapWeight_Optional, if it has been set, otherwise returns nullptr */
    int32* GetMapWeightOrNull() { if (MapWeight_IsSet) return &MapWeight_Optional; return nullptr; }
    /** @brief Returns a pointer to MapWeight_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetMapWeightOrNull() const { if (MapWeight_IsSet) return &MapWeight_Optional; return nullptr; }
    /** @brief Sets the value of MapWeight_Optional and also sets MapWeight_IsSet to true */
    void SetMapWeight(int32 NewValue) { MapWeight_Optional = NewValue; MapWeight_IsSet = true; }
     /** @brief Clears the value of MapWeight_Optional and sets MapWeight_IsSet to false */
    void ClearMapWeight() { MapWeight_Optional = 0; MapWeight_IsSet = false; }
    /** @brief Returns true if MapWeight_Optional is set and matches the default value */
    bool IsMapWeightDefaultValue() const { return MapWeight_IsSet && MapWeight_Optional == 0; }
    /** @brief Sets the value of MapWeight_Optional to its default and also sets MapWeight_IsSet to true */
    void SetMapWeightToDefault() { MapWeight_Optional = 0; MapWeight_IsSet = true; }

    /** @brief Which Map this entry refers to */
    FGuid MapId_Optional{  };
    /** @brief true if MapId_Optional has been set to a value */
    bool MapId_IsSet{ false };
    /** @brief Gets the value of MapId_Optional, regardless of it having been set */
    FGuid& GetMapId() { return MapId_Optional; }
    /** @brief Gets the value of MapId_Optional, regardless of it having been set */
    const FGuid& GetMapId() const { return MapId_Optional; }
    /** @brief Gets the value of MapId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetMapId(const FGuid& DefaultValue) const { if (MapId_IsSet) return MapId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of MapId_Optional and returns true if it has been set, otherwise returns false */
    bool GetMapId(FGuid& OutValue) const { if (MapId_IsSet) OutValue = MapId_Optional; return MapId_IsSet; }
    /** @brief Returns a pointer to MapId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetMapIdOrNull() { if (MapId_IsSet) return &MapId_Optional; return nullptr; }
    /** @brief Returns a pointer to MapId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetMapIdOrNull() const { if (MapId_IsSet) return &MapId_Optional; return nullptr; }
    /** @brief Sets the value of MapId_Optional and also sets MapId_IsSet to true */
    void SetMapId(FGuid NewValue) { MapId_Optional = NewValue; MapId_IsSet = true; }
     /** @brief Clears the value of MapId_Optional and sets MapId_IsSet to false */
    void ClearMapId() { MapId_IsSet = false; }
};

/** @} */
