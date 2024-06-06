// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevRoleAuthBypassMethod.h"
#include "DevRoleLoginLootBase.h"
#include "DevRoleUpdate.generated.h"

/** @defgroup RHAPI_DevRoleUpdate RallyHere API Model DevRoleUpdate
 *  @{
 */

/**
 * @brief This mixin is meant to give a set of common properties to root config models
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevRoleUpdate : public FRHAPI_DevModel
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

    /** @brief Name of the resource */
    FString Name_Optional{  };
    /** @brief true if Name_Optional has been set to a value */
    bool Name_IsSet{ false };
    /** @brief Gets the value of Name_Optional, regardless of it having been set */
    FString& GetName() { return Name_Optional; }
    /** @brief Gets the value of Name_Optional, regardless of it having been set */
    const FString& GetName() const { return Name_Optional; }
    /** @brief Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetName(const FString& DefaultValue) const { if (Name_IsSet) return Name_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false */
    bool GetName(FString& OutValue) const { if (Name_IsSet) OutValue = Name_Optional; return Name_IsSet; }
    /** @brief Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr */
    FString* GetNameOrNull() { if (Name_IsSet) return &Name_Optional; return nullptr; }
    /** @brief Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetNameOrNull() const { if (Name_IsSet) return &Name_Optional; return nullptr; }
    /** @brief Sets the value of Name_Optional and also sets Name_IsSet to true */
    void SetName(FString NewValue) { Name_Optional = NewValue; Name_IsSet = true; }
     /** @brief Clears the value of Name_Optional and sets Name_IsSet to false */
    void ClearName() { Name_IsSet = false; }

    /** @brief Description of the resource */
    FString Description_Optional{  };
    /** @brief true if Description_Optional has been set to a value */
    bool Description_IsSet{ false };
    /** @brief Gets the value of Description_Optional, regardless of it having been set */
    FString& GetDescription() { return Description_Optional; }
    /** @brief Gets the value of Description_Optional, regardless of it having been set */
    const FString& GetDescription() const { return Description_Optional; }
    /** @brief Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetDescription(const FString& DefaultValue) const { if (Description_IsSet) return Description_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false */
    bool GetDescription(FString& OutValue) const { if (Description_IsSet) OutValue = Description_Optional; return Description_IsSet; }
    /** @brief Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr */
    FString* GetDescriptionOrNull() { if (Description_IsSet) return &Description_Optional; return nullptr; }
    /** @brief Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetDescriptionOrNull() const { if (Description_IsSet) return &Description_Optional; return nullptr; }
    /** @brief Sets the value of Description_Optional and also sets Description_IsSet to true */
    void SetDescription(FString NewValue) { Description_Optional = NewValue; Description_IsSet = true; }
     /** @brief Clears the value of Description_Optional and sets Description_IsSet to false */
    void ClearDescription() { Description_IsSet = false; }

    /** @brief Custom data associated with the resource */
    TMap<FString, FString> CustomData_Optional{  };
    /** @brief true if CustomData_Optional has been set to a value */
    bool CustomData_IsSet{ false };
    /** @brief Gets the value of CustomData_Optional, regardless of it having been set */
    TMap<FString, FString>& GetCustomData() { return CustomData_Optional; }
    /** @brief Gets the value of CustomData_Optional, regardless of it having been set */
    const TMap<FString, FString>& GetCustomData() const { return CustomData_Optional; }
    /** @brief Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue */
    const TMap<FString, FString>& GetCustomData(const TMap<FString, FString>& DefaultValue) const { if (CustomData_IsSet) return CustomData_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false */
    bool GetCustomData(TMap<FString, FString>& OutValue) const { if (CustomData_IsSet) OutValue = CustomData_Optional; return CustomData_IsSet; }
    /** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
    TMap<FString, FString>* GetCustomDataOrNull() { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
    /** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
    const TMap<FString, FString>* GetCustomDataOrNull() const { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
    /** @brief Sets the value of CustomData_Optional and also sets CustomData_IsSet to true */
    void SetCustomData(TMap<FString, FString> NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true; }
     /** @brief Clears the value of CustomData_Optional and sets CustomData_IsSet to false */
    void ClearCustomData() { CustomData_IsSet = false; }

    /** @brief List of login loot rewards for this role */
    TArray<FRHAPI_DevRoleLoginLootBase> LoginLootRewards_Optional{  };
    /** @brief true if LoginLootRewards_Optional has been set to a value */
    bool LoginLootRewards_IsSet{ false };
    /** @brief Gets the value of LoginLootRewards_Optional, regardless of it having been set */
    TArray<FRHAPI_DevRoleLoginLootBase>& GetLoginLootRewards() { return LoginLootRewards_Optional; }
    /** @brief Gets the value of LoginLootRewards_Optional, regardless of it having been set */
    const TArray<FRHAPI_DevRoleLoginLootBase>& GetLoginLootRewards() const { return LoginLootRewards_Optional; }
    /** @brief Gets the value of LoginLootRewards_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FRHAPI_DevRoleLoginLootBase>& GetLoginLootRewards(const TArray<FRHAPI_DevRoleLoginLootBase>& DefaultValue) const { if (LoginLootRewards_IsSet) return LoginLootRewards_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LoginLootRewards_Optional and returns true if it has been set, otherwise returns false */
    bool GetLoginLootRewards(TArray<FRHAPI_DevRoleLoginLootBase>& OutValue) const { if (LoginLootRewards_IsSet) OutValue = LoginLootRewards_Optional; return LoginLootRewards_IsSet; }
    /** @brief Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr */
    TArray<FRHAPI_DevRoleLoginLootBase>* GetLoginLootRewardsOrNull() { if (LoginLootRewards_IsSet) return &LoginLootRewards_Optional; return nullptr; }
    /** @brief Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FRHAPI_DevRoleLoginLootBase>* GetLoginLootRewardsOrNull() const { if (LoginLootRewards_IsSet) return &LoginLootRewards_Optional; return nullptr; }
    /** @brief Sets the value of LoginLootRewards_Optional and also sets LoginLootRewards_IsSet to true */
    void SetLoginLootRewards(TArray<FRHAPI_DevRoleLoginLootBase> NewValue) { LoginLootRewards_Optional = NewValue; LoginLootRewards_IsSet = true; }
     /** @brief Clears the value of LoginLootRewards_Optional and sets LoginLootRewards_IsSet to false */
    void ClearLoginLootRewards() { LoginLootRewards_IsSet = false; }

    /** @brief Auth bypass method for this role */
    ERHAPI_DevRoleAuthBypassMethod AuthBypass_Optional{  };
    /** @brief true if AuthBypass_Optional has been set to a value */
    bool AuthBypass_IsSet{ false };
    /** @brief Gets the value of AuthBypass_Optional, regardless of it having been set */
    ERHAPI_DevRoleAuthBypassMethod& GetAuthBypass() { return AuthBypass_Optional; }
    /** @brief Gets the value of AuthBypass_Optional, regardless of it having been set */
    const ERHAPI_DevRoleAuthBypassMethod& GetAuthBypass() const { return AuthBypass_Optional; }
    /** @brief Gets the value of AuthBypass_Optional, if it has been set, otherwise it returns DefaultValue */
    const ERHAPI_DevRoleAuthBypassMethod& GetAuthBypass(const ERHAPI_DevRoleAuthBypassMethod& DefaultValue) const { if (AuthBypass_IsSet) return AuthBypass_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of AuthBypass_Optional and returns true if it has been set, otherwise returns false */
    bool GetAuthBypass(ERHAPI_DevRoleAuthBypassMethod& OutValue) const { if (AuthBypass_IsSet) OutValue = AuthBypass_Optional; return AuthBypass_IsSet; }
    /** @brief Returns a pointer to AuthBypass_Optional, if it has been set, otherwise returns nullptr */
    ERHAPI_DevRoleAuthBypassMethod* GetAuthBypassOrNull() { if (AuthBypass_IsSet) return &AuthBypass_Optional; return nullptr; }
    /** @brief Returns a pointer to AuthBypass_Optional, if it has been set, otherwise returns nullptr */
    const ERHAPI_DevRoleAuthBypassMethod* GetAuthBypassOrNull() const { if (AuthBypass_IsSet) return &AuthBypass_Optional; return nullptr; }
    /** @brief Sets the value of AuthBypass_Optional and also sets AuthBypass_IsSet to true */
    void SetAuthBypass(ERHAPI_DevRoleAuthBypassMethod NewValue) { AuthBypass_Optional = NewValue; AuthBypass_IsSet = true; }
     /** @brief Clears the value of AuthBypass_Optional and sets AuthBypass_IsSet to false */
    void ClearAuthBypass() { AuthBypass_IsSet = false; }
};

/** @} */