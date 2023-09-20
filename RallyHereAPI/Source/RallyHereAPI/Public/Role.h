// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "Role.generated.h"

/** @defgroup RHAPI_Role RallyHere API Model Role
 *  @{
 */

/**
 * @brief Role object that is used to define a role for a player
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_Role : public FRHAPI_Model
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

    /** @brief Unique Role ID */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString RoleId{  };
    /** @brief Gets the value of RoleId */
    FString& GetRoleId() { return RoleId; }
    /** @brief Gets the value of RoleId */
    const FString& GetRoleId() const { return RoleId; }
    /** @brief Sets the value of RoleId */
    void SetRoleId(FString NewValue) { RoleId = NewValue;  }

    /** @brief Custom data for the role */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_JsonObject CustomData_Optional{  };
    /** @brief true if CustomData_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool CustomData_IsSet{ false };
    /** @brief Gets the value of CustomData_Optional, regardless of it having been set */
    FRHAPI_JsonObject& GetCustomData() { return CustomData_Optional; }
    /** @brief Gets the value of CustomData_Optional, regardless of it having been set */
    const FRHAPI_JsonObject& GetCustomData() const { return CustomData_Optional; }
    /** @brief Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_JsonObject& GetCustomData(const FRHAPI_JsonObject& DefaultValue) const { if (CustomData_IsSet) return CustomData_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false */
    bool GetCustomData(FRHAPI_JsonObject& OutValue) const { if (CustomData_IsSet) OutValue = CustomData_Optional; return CustomData_IsSet; }
    /** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_JsonObject* GetCustomDataOrNull() { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
    /** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_JsonObject* GetCustomDataOrNull() const { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
    /** @brief Sets the value of CustomData_Optional and also sets CustomData_IsSet to true */
    void SetCustomData(FRHAPI_JsonObject NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true; }
     /** @brief Clears the value of CustomData_Optional and sets CustomData_IsSet to false */
    void ClearCustomData() { CustomData_IsSet = false; }

    /** @brief List of loot table item ids that are fulfilled for the player when they begin a new inventory session */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<int32> LoginLootRewards_Optional{  };
    /** @brief true if LoginLootRewards_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool LoginLootRewards_IsSet{ false };
    /** @brief Gets the value of LoginLootRewards_Optional, regardless of it having been set */
    TArray<int32>& GetLoginLootRewards() { return LoginLootRewards_Optional; }
    /** @brief Gets the value of LoginLootRewards_Optional, regardless of it having been set */
    const TArray<int32>& GetLoginLootRewards() const { return LoginLootRewards_Optional; }
    /** @brief Gets the value of LoginLootRewards_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<int32>& GetLoginLootRewards(const TArray<int32>& DefaultValue) const { if (LoginLootRewards_IsSet) return LoginLootRewards_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LoginLootRewards_Optional and returns true if it has been set, otherwise returns false */
    bool GetLoginLootRewards(TArray<int32>& OutValue) const { if (LoginLootRewards_IsSet) OutValue = LoginLootRewards_Optional; return LoginLootRewards_IsSet; }
    /** @brief Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr */
    TArray<int32>* GetLoginLootRewardsOrNull() { if (LoginLootRewards_IsSet) return &LoginLootRewards_Optional; return nullptr; }
    /** @brief Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr */
    const TArray<int32>* GetLoginLootRewardsOrNull() const { if (LoginLootRewards_IsSet) return &LoginLootRewards_Optional; return nullptr; }
    /** @brief Sets the value of LoginLootRewards_Optional and also sets LoginLootRewards_IsSet to true */
    void SetLoginLootRewards(TArray<int32> NewValue) { LoginLootRewards_Optional = NewValue; LoginLootRewards_IsSet = true; }
     /** @brief Clears the value of LoginLootRewards_Optional and sets LoginLootRewards_IsSet to false */
    void ClearLoginLootRewards() { LoginLootRewards_IsSet = false; }
};

/** @} */
