// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevDependenciesSandboxConfigMatchmakingQueuesSchemasLegacyConfig.h"
#include "DevQueueUpdateRequest.generated.h"

/** @defgroup RHAPI_DevQueueUpdateRequest RallyHere API Model DevQueueUpdateRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevQueueUpdateRequest : public FRHAPI_DevModel
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

    /** @brief Flag for whether or not the queue is active, and can be joined or sessions created from it */
    bool Active_Optional{  };
    /** @brief true if Active_Optional has been set to a value */
    bool Active_IsSet{ false };
    /** @brief Gets the value of Active_Optional, regardless of it having been set */
    bool& GetActive() { return Active_Optional; }
    /** @brief Gets the value of Active_Optional, regardless of it having been set */
    const bool& GetActive() const { return Active_Optional; }
    /** @brief Gets the value of Active_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetActive(const bool& DefaultValue) const { if (Active_IsSet) return Active_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Active_Optional and returns true if it has been set, otherwise returns false */
    bool GetActive(bool& OutValue) const { if (Active_IsSet) OutValue = Active_Optional; return Active_IsSet; }
    /** @brief Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr */
    bool* GetActiveOrNull() { if (Active_IsSet) return &Active_Optional; return nullptr; }
    /** @brief Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetActiveOrNull() const { if (Active_IsSet) return &Active_Optional; return nullptr; }
    /** @brief Sets the value of Active_Optional and also sets Active_IsSet to true */
    void SetActive(bool NewValue) { Active_Optional = NewValue; Active_IsSet = true; }
     /** @brief Clears the value of Active_Optional and sets Active_IsSet to false */
    void ClearActive() { Active_Optional = false; Active_IsSet = false; }
    /** @brief Returns true if Active_Optional is set and matches the default value */
    bool IsActiveDefaultValue() const { return Active_IsSet && Active_Optional == false; }
    /** @brief Sets the value of Active_Optional to its default and also sets Active_IsSet to true */
    void SetActiveToDefault() { Active_Optional = false; Active_IsSet = true; }

    /** @brief The maximum size of a group that can join this queue */
    int32 MaxQueueGroupSize_Optional{  };
    /** @brief true if MaxQueueGroupSize_Optional has been set to a value */
    bool MaxQueueGroupSize_IsSet{ false };
    /** @brief Gets the value of MaxQueueGroupSize_Optional, regardless of it having been set */
    int32& GetMaxQueueGroupSize() { return MaxQueueGroupSize_Optional; }
    /** @brief Gets the value of MaxQueueGroupSize_Optional, regardless of it having been set */
    const int32& GetMaxQueueGroupSize() const { return MaxQueueGroupSize_Optional; }
    /** @brief Gets the value of MaxQueueGroupSize_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetMaxQueueGroupSize(const int32& DefaultValue) const { if (MaxQueueGroupSize_IsSet) return MaxQueueGroupSize_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of MaxQueueGroupSize_Optional and returns true if it has been set, otherwise returns false */
    bool GetMaxQueueGroupSize(int32& OutValue) const { if (MaxQueueGroupSize_IsSet) OutValue = MaxQueueGroupSize_Optional; return MaxQueueGroupSize_IsSet; }
    /** @brief Returns a pointer to MaxQueueGroupSize_Optional, if it has been set, otherwise returns nullptr */
    int32* GetMaxQueueGroupSizeOrNull() { if (MaxQueueGroupSize_IsSet) return &MaxQueueGroupSize_Optional; return nullptr; }
    /** @brief Returns a pointer to MaxQueueGroupSize_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetMaxQueueGroupSizeOrNull() const { if (MaxQueueGroupSize_IsSet) return &MaxQueueGroupSize_Optional; return nullptr; }
    /** @brief Sets the value of MaxQueueGroupSize_Optional and also sets MaxQueueGroupSize_IsSet to true */
    void SetMaxQueueGroupSize(int32 NewValue) { MaxQueueGroupSize_Optional = NewValue; MaxQueueGroupSize_IsSet = true; }
     /** @brief Clears the value of MaxQueueGroupSize_Optional and sets MaxQueueGroupSize_IsSet to false */
    void ClearMaxQueueGroupSize() { MaxQueueGroupSize_Optional = 0; MaxQueueGroupSize_IsSet = false; }
    /** @brief Returns true if MaxQueueGroupSize_Optional is set and matches the default value */
    bool IsMaxQueueGroupSizeDefaultValue() const { return MaxQueueGroupSize_IsSet && MaxQueueGroupSize_Optional == 0; }
    /** @brief Sets the value of MaxQueueGroupSize_Optional to its default and also sets MaxQueueGroupSize_IsSet to true */
    void SetMaxQueueGroupSizeToDefault() { MaxQueueGroupSize_Optional = 0; MaxQueueGroupSize_IsSet = true; }

    /** @brief ID for which group of matchmaking templates/rules will be used when joining this queue */
    FGuid MatchMakingTemplateGroupId_Optional{  };
    /** @brief true if MatchMakingTemplateGroupId_Optional has been set to a value */
    bool MatchMakingTemplateGroupId_IsSet{ false };
    /** @brief Gets the value of MatchMakingTemplateGroupId_Optional, regardless of it having been set */
    FGuid& GetMatchMakingTemplateGroupId() { return MatchMakingTemplateGroupId_Optional; }
    /** @brief Gets the value of MatchMakingTemplateGroupId_Optional, regardless of it having been set */
    const FGuid& GetMatchMakingTemplateGroupId() const { return MatchMakingTemplateGroupId_Optional; }
    /** @brief Gets the value of MatchMakingTemplateGroupId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetMatchMakingTemplateGroupId(const FGuid& DefaultValue) const { if (MatchMakingTemplateGroupId_IsSet) return MatchMakingTemplateGroupId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of MatchMakingTemplateGroupId_Optional and returns true if it has been set, otherwise returns false */
    bool GetMatchMakingTemplateGroupId(FGuid& OutValue) const { if (MatchMakingTemplateGroupId_IsSet) OutValue = MatchMakingTemplateGroupId_Optional; return MatchMakingTemplateGroupId_IsSet; }
    /** @brief Returns a pointer to MatchMakingTemplateGroupId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetMatchMakingTemplateGroupIdOrNull() { if (MatchMakingTemplateGroupId_IsSet) return &MatchMakingTemplateGroupId_Optional; return nullptr; }
    /** @brief Returns a pointer to MatchMakingTemplateGroupId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetMatchMakingTemplateGroupIdOrNull() const { if (MatchMakingTemplateGroupId_IsSet) return &MatchMakingTemplateGroupId_Optional; return nullptr; }
    /** @brief Sets the value of MatchMakingTemplateGroupId_Optional and also sets MatchMakingTemplateGroupId_IsSet to true */
    void SetMatchMakingTemplateGroupId(FGuid NewValue) { MatchMakingTemplateGroupId_Optional = NewValue; MatchMakingTemplateGroupId_IsSet = true; }
     /** @brief Clears the value of MatchMakingTemplateGroupId_Optional and sets MatchMakingTemplateGroupId_IsSet to false */
    void ClearMatchMakingTemplateGroupId() { MatchMakingTemplateGroupId_IsSet = false; }

    FRHAPI_DevDependenciesSandboxConfigMatchmakingQueuesSchemasLegacyConfig LegacyConfig_Optional{  };
    /** @brief true if LegacyConfig_Optional has been set to a value */
    bool LegacyConfig_IsSet{ false };
    /** @brief Gets the value of LegacyConfig_Optional, regardless of it having been set */
    FRHAPI_DevDependenciesSandboxConfigMatchmakingQueuesSchemasLegacyConfig& GetLegacyConfig() { return LegacyConfig_Optional; }
    /** @brief Gets the value of LegacyConfig_Optional, regardless of it having been set */
    const FRHAPI_DevDependenciesSandboxConfigMatchmakingQueuesSchemasLegacyConfig& GetLegacyConfig() const { return LegacyConfig_Optional; }
    /** @brief Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_DevDependenciesSandboxConfigMatchmakingQueuesSchemasLegacyConfig& GetLegacyConfig(const FRHAPI_DevDependenciesSandboxConfigMatchmakingQueuesSchemasLegacyConfig& DefaultValue) const { if (LegacyConfig_IsSet) return LegacyConfig_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false */
    bool GetLegacyConfig(FRHAPI_DevDependenciesSandboxConfigMatchmakingQueuesSchemasLegacyConfig& OutValue) const { if (LegacyConfig_IsSet) OutValue = LegacyConfig_Optional; return LegacyConfig_IsSet; }
    /** @brief Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_DevDependenciesSandboxConfigMatchmakingQueuesSchemasLegacyConfig* GetLegacyConfigOrNull() { if (LegacyConfig_IsSet) return &LegacyConfig_Optional; return nullptr; }
    /** @brief Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_DevDependenciesSandboxConfigMatchmakingQueuesSchemasLegacyConfig* GetLegacyConfigOrNull() const { if (LegacyConfig_IsSet) return &LegacyConfig_Optional; return nullptr; }
    /** @brief Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true */
    void SetLegacyConfig(FRHAPI_DevDependenciesSandboxConfigMatchmakingQueuesSchemasLegacyConfig NewValue) { LegacyConfig_Optional = NewValue; LegacyConfig_IsSet = true; }
     /** @brief Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false */
    void ClearLegacyConfig() { LegacyConfig_IsSet = false; }
};

/** @} */