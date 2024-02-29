// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "LoginLootReward.generated.h"

/** @defgroup RHAPI_LoginLootReward RallyHere API Model LoginLootReward
 *  @{
 */

/**
 * @brief Login loot reward
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_LoginLootReward : public FRHAPI_Model
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

    /** @brief Loot ID */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString LootId_Optional{  };
    /** @brief true if LootId_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool LootId_IsSet{ false };
    /** @brief Gets the value of LootId_Optional, regardless of it having been set */
    FString& GetLootId() { return LootId_Optional; }
    /** @brief Gets the value of LootId_Optional, regardless of it having been set */
    const FString& GetLootId() const { return LootId_Optional; }
    /** @brief Gets the value of LootId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetLootId(const FString& DefaultValue) const { if (LootId_IsSet) return LootId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LootId_Optional and returns true if it has been set, otherwise returns false */
    bool GetLootId(FString& OutValue) const { if (LootId_IsSet) OutValue = LootId_Optional; return LootId_IsSet; }
    /** @brief Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr */
    FString* GetLootIdOrNull() { if (LootId_IsSet) return &LootId_Optional; return nullptr; }
    /** @brief Returns a pointer to LootId_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetLootIdOrNull() const { if (LootId_IsSet) return &LootId_Optional; return nullptr; }
    /** @brief Sets the value of LootId_Optional and also sets LootId_IsSet to true */
    void SetLootId(FString NewValue) { LootId_Optional = NewValue; LootId_IsSet = true; }
     /** @brief Clears the value of LootId_Optional and sets LootId_IsSet to false */
    void ClearLootId() { LootId_IsSet = false; }

    /** @brief Legacy Loot ID */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    int32 LegacyLootId{ 0 };
    /** @brief Gets the value of LegacyLootId */
    int32& GetLegacyLootId() { return LegacyLootId; }
    /** @brief Gets the value of LegacyLootId */
    const int32& GetLegacyLootId() const { return LegacyLootId; }
    /** @brief Sets the value of LegacyLootId */
    void SetLegacyLootId(int32 NewValue) { LegacyLootId = NewValue;  }
    /** @brief Returns true if LegacyLootId matches the default value */
    bool IsLegacyLootIdDefaultValue() const { return LegacyLootId == 0; }
    /** @brief Sets the value of LegacyLootId to its default  */
    void SetLegacyLootIdToDefault() { LegacyLootId = 0;  }
};

/** @} */
