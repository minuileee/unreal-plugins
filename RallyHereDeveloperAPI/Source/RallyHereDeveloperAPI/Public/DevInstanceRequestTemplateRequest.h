// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevHostType.h"
#include "DevInstanceRequestTemplateRequest.generated.h"

/** @defgroup RHAPI_DevInstanceRequestTemplateRequest RallyHere API Model DevInstanceRequestTemplateRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevInstanceRequestTemplateRequest : public FRHAPI_DevModel
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
    FGuid MapSelectionListId{  };
    /** @brief Gets the value of MapSelectionListId */
    FGuid& GetMapSelectionListId() { return MapSelectionListId; }
    /** @brief Gets the value of MapSelectionListId */
    const FGuid& GetMapSelectionListId() const { return MapSelectionListId; }
    /** @brief Sets the value of MapSelectionListId */
    void SetMapSelectionListId(FGuid NewValue) { MapSelectionListId = NewValue;  }

    /** @brief Which host type is used by default (player hosted, or dedicated instance */
    ERHAPI_DevHostType DefaultHostType{  };
    /** @brief Gets the value of DefaultHostType */
    ERHAPI_DevHostType& GetDefaultHostType() { return DefaultHostType; }
    /** @brief Gets the value of DefaultHostType */
    const ERHAPI_DevHostType& GetDefaultHostType() const { return DefaultHostType; }
    /** @brief Sets the value of DefaultHostType */
    void SetDefaultHostType(ERHAPI_DevHostType NewValue) { DefaultHostType = NewValue;  }

    /** @brief Dictionary of config required for legacy games */
    TMap<FString, FString> LegacyConfig_Optional{  };
    /** @brief true if LegacyConfig_Optional has been set to a value */
    bool LegacyConfig_IsSet{ false };
    /** @brief Gets the value of LegacyConfig_Optional, regardless of it having been set */
    TMap<FString, FString>& GetLegacyConfig() { return LegacyConfig_Optional; }
    /** @brief Gets the value of LegacyConfig_Optional, regardless of it having been set */
    const TMap<FString, FString>& GetLegacyConfig() const { return LegacyConfig_Optional; }
    /** @brief Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue */
    const TMap<FString, FString>& GetLegacyConfig(const TMap<FString, FString>& DefaultValue) const { if (LegacyConfig_IsSet) return LegacyConfig_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false */
    bool GetLegacyConfig(TMap<FString, FString>& OutValue) const { if (LegacyConfig_IsSet) OutValue = LegacyConfig_Optional; return LegacyConfig_IsSet; }
    /** @brief Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr */
    TMap<FString, FString>* GetLegacyConfigOrNull() { if (LegacyConfig_IsSet) return &LegacyConfig_Optional; return nullptr; }
    /** @brief Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr */
    const TMap<FString, FString>* GetLegacyConfigOrNull() const { if (LegacyConfig_IsSet) return &LegacyConfig_Optional; return nullptr; }
    /** @brief Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true */
    void SetLegacyConfig(TMap<FString, FString> NewValue) { LegacyConfig_Optional = NewValue; LegacyConfig_IsSet = true; }
     /** @brief Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false */
    void ClearLegacyConfig() { LegacyConfig_IsSet = false; }
};

/** @} */