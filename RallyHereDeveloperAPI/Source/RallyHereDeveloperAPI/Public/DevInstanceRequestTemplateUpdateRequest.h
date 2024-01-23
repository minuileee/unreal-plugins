// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevHostType.h"
#include "DevInstanceRequestTemplateUpdateRequest.generated.h"

/** @defgroup RHAPI_DevInstanceRequestTemplateUpdateRequest RallyHere API Model DevInstanceRequestTemplateUpdateRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevInstanceRequestTemplateUpdateRequest : public FRHAPI_DevModel
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

    /** @brief Which MapSelectionList is used to choose a map when using this template */
    FGuid MapSelectionListId_Optional{  };
    /** @brief true if MapSelectionListId_Optional has been set to a value */
    bool MapSelectionListId_IsSet{ false };
    /** @brief Gets the value of MapSelectionListId_Optional, regardless of it having been set */
    FGuid& GetMapSelectionListId() { return MapSelectionListId_Optional; }
    /** @brief Gets the value of MapSelectionListId_Optional, regardless of it having been set */
    const FGuid& GetMapSelectionListId() const { return MapSelectionListId_Optional; }
    /** @brief Gets the value of MapSelectionListId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetMapSelectionListId(const FGuid& DefaultValue) const { if (MapSelectionListId_IsSet) return MapSelectionListId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of MapSelectionListId_Optional and returns true if it has been set, otherwise returns false */
    bool GetMapSelectionListId(FGuid& OutValue) const { if (MapSelectionListId_IsSet) OutValue = MapSelectionListId_Optional; return MapSelectionListId_IsSet; }
    /** @brief Returns a pointer to MapSelectionListId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetMapSelectionListIdOrNull() { if (MapSelectionListId_IsSet) return &MapSelectionListId_Optional; return nullptr; }
    /** @brief Returns a pointer to MapSelectionListId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetMapSelectionListIdOrNull() const { if (MapSelectionListId_IsSet) return &MapSelectionListId_Optional; return nullptr; }
    /** @brief Sets the value of MapSelectionListId_Optional and also sets MapSelectionListId_IsSet to true */
    void SetMapSelectionListId(FGuid NewValue) { MapSelectionListId_Optional = NewValue; MapSelectionListId_IsSet = true; }
     /** @brief Clears the value of MapSelectionListId_Optional and sets MapSelectionListId_IsSet to false */
    void ClearMapSelectionListId() { MapSelectionListId_IsSet = false; }

    /** @brief ID to uniquely identify this InstanceRequestTemplate */
    FGuid InstanceRequestTemplateId_Optional{  };
    /** @brief true if InstanceRequestTemplateId_Optional has been set to a value */
    bool InstanceRequestTemplateId_IsSet{ false };
    /** @brief Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set */
    FGuid& GetInstanceRequestTemplateId() { return InstanceRequestTemplateId_Optional; }
    /** @brief Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set */
    const FGuid& GetInstanceRequestTemplateId() const { return InstanceRequestTemplateId_Optional; }
    /** @brief Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetInstanceRequestTemplateId(const FGuid& DefaultValue) const { if (InstanceRequestTemplateId_IsSet) return InstanceRequestTemplateId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false */
    bool GetInstanceRequestTemplateId(FGuid& OutValue) const { if (InstanceRequestTemplateId_IsSet) OutValue = InstanceRequestTemplateId_Optional; return InstanceRequestTemplateId_IsSet; }
    /** @brief Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetInstanceRequestTemplateIdOrNull() { if (InstanceRequestTemplateId_IsSet) return &InstanceRequestTemplateId_Optional; return nullptr; }
    /** @brief Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetInstanceRequestTemplateIdOrNull() const { if (InstanceRequestTemplateId_IsSet) return &InstanceRequestTemplateId_Optional; return nullptr; }
    /** @brief Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true */
    void SetInstanceRequestTemplateId(FGuid NewValue) { InstanceRequestTemplateId_Optional = NewValue; InstanceRequestTemplateId_IsSet = true; }
     /** @brief Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false */
    void ClearInstanceRequestTemplateId() { InstanceRequestTemplateId_IsSet = false; }

    /** @brief Which host type is used by default (player hosted, or dedicated instance */
    ERHAPI_DevHostType DefaultHostType_Optional{  };
    /** @brief true if DefaultHostType_Optional has been set to a value */
    bool DefaultHostType_IsSet{ false };
    /** @brief Gets the value of DefaultHostType_Optional, regardless of it having been set */
    ERHAPI_DevHostType& GetDefaultHostType() { return DefaultHostType_Optional; }
    /** @brief Gets the value of DefaultHostType_Optional, regardless of it having been set */
    const ERHAPI_DevHostType& GetDefaultHostType() const { return DefaultHostType_Optional; }
    /** @brief Gets the value of DefaultHostType_Optional, if it has been set, otherwise it returns DefaultValue */
    const ERHAPI_DevHostType& GetDefaultHostType(const ERHAPI_DevHostType& DefaultValue) const { if (DefaultHostType_IsSet) return DefaultHostType_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of DefaultHostType_Optional and returns true if it has been set, otherwise returns false */
    bool GetDefaultHostType(ERHAPI_DevHostType& OutValue) const { if (DefaultHostType_IsSet) OutValue = DefaultHostType_Optional; return DefaultHostType_IsSet; }
    /** @brief Returns a pointer to DefaultHostType_Optional, if it has been set, otherwise returns nullptr */
    ERHAPI_DevHostType* GetDefaultHostTypeOrNull() { if (DefaultHostType_IsSet) return &DefaultHostType_Optional; return nullptr; }
    /** @brief Returns a pointer to DefaultHostType_Optional, if it has been set, otherwise returns nullptr */
    const ERHAPI_DevHostType* GetDefaultHostTypeOrNull() const { if (DefaultHostType_IsSet) return &DefaultHostType_Optional; return nullptr; }
    /** @brief Sets the value of DefaultHostType_Optional and also sets DefaultHostType_IsSet to true */
    void SetDefaultHostType(ERHAPI_DevHostType NewValue) { DefaultHostType_Optional = NewValue; DefaultHostType_IsSet = true; }
     /** @brief Clears the value of DefaultHostType_Optional and sets DefaultHostType_IsSet to false */
    void ClearDefaultHostType() { DefaultHostType_IsSet = false; }

    /** @brief Old config used by Legacy systems. These values are ignored by the current APIs */
    FRHAPI_DevJsonObject LegacyConfig_Optional{  };
    /** @brief true if LegacyConfig_Optional has been set to a value */
    bool LegacyConfig_IsSet{ false };
    /** @brief Gets the value of LegacyConfig_Optional, regardless of it having been set */
    FRHAPI_DevJsonObject& GetLegacyConfig() { return LegacyConfig_Optional; }
    /** @brief Gets the value of LegacyConfig_Optional, regardless of it having been set */
    const FRHAPI_DevJsonObject& GetLegacyConfig() const { return LegacyConfig_Optional; }
    /** @brief Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_DevJsonObject& GetLegacyConfig(const FRHAPI_DevJsonObject& DefaultValue) const { if (LegacyConfig_IsSet) return LegacyConfig_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false */
    bool GetLegacyConfig(FRHAPI_DevJsonObject& OutValue) const { if (LegacyConfig_IsSet) OutValue = LegacyConfig_Optional; return LegacyConfig_IsSet; }
    /** @brief Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_DevJsonObject* GetLegacyConfigOrNull() { if (LegacyConfig_IsSet) return &LegacyConfig_Optional; return nullptr; }
    /** @brief Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_DevJsonObject* GetLegacyConfigOrNull() const { if (LegacyConfig_IsSet) return &LegacyConfig_Optional; return nullptr; }
    /** @brief Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true */
    void SetLegacyConfig(FRHAPI_DevJsonObject NewValue) { LegacyConfig_Optional = NewValue; LegacyConfig_IsSet = true; }
     /** @brief Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false */
    void ClearLegacyConfig() { LegacyConfig_IsSet = false; }
};

/** @} */
