// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevExternalKeyEntitlement.h"
#include "DevLootEntitlement.h"
#include "DevPlatform.h"
#include "DevUpdateEntitlementSku.generated.h"

/** @defgroup RHAPI_DevUpdateEntitlementSku RallyHere API Model DevUpdateEntitlementSku
 *  @{
 */

/**
 * @brief Entitlement Sku to update.
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevUpdateEntitlementSku : public FRHAPI_DevModel
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

    /** @brief The platform the Entitlement Sku is for. */
    ERHAPI_DevPlatform Platform{  };
    /** @brief Gets the value of Platform */
    ERHAPI_DevPlatform& GetPlatform() { return Platform; }
    /** @brief Gets the value of Platform */
    const ERHAPI_DevPlatform& GetPlatform() const { return Platform; }
    /** @brief Sets the value of Platform */
    void SetPlatform(ERHAPI_DevPlatform NewValue) { Platform = NewValue;  }

    FRHAPI_DevLootEntitlement LootEntitlement_Optional{  };
    /** @brief true if LootEntitlement_Optional has been set to a value */
    bool LootEntitlement_IsSet{ false };
    /** @brief Gets the value of LootEntitlement_Optional, regardless of it having been set */
    FRHAPI_DevLootEntitlement& GetLootEntitlement() { return LootEntitlement_Optional; }
    /** @brief Gets the value of LootEntitlement_Optional, regardless of it having been set */
    const FRHAPI_DevLootEntitlement& GetLootEntitlement() const { return LootEntitlement_Optional; }
    /** @brief Gets the value of LootEntitlement_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_DevLootEntitlement& GetLootEntitlement(const FRHAPI_DevLootEntitlement& DefaultValue) const { if (LootEntitlement_IsSet) return LootEntitlement_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LootEntitlement_Optional and returns true if it has been set, otherwise returns false */
    bool GetLootEntitlement(FRHAPI_DevLootEntitlement& OutValue) const { if (LootEntitlement_IsSet) OutValue = LootEntitlement_Optional; return LootEntitlement_IsSet; }
    /** @brief Returns a pointer to LootEntitlement_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_DevLootEntitlement* GetLootEntitlementOrNull() { if (LootEntitlement_IsSet) return &LootEntitlement_Optional; return nullptr; }
    /** @brief Returns a pointer to LootEntitlement_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_DevLootEntitlement* GetLootEntitlementOrNull() const { if (LootEntitlement_IsSet) return &LootEntitlement_Optional; return nullptr; }
    /** @brief Sets the value of LootEntitlement_Optional and also sets LootEntitlement_IsSet to true */
    void SetLootEntitlement(FRHAPI_DevLootEntitlement NewValue) { LootEntitlement_Optional = NewValue; LootEntitlement_IsSet = true; }
     /** @brief Clears the value of LootEntitlement_Optional and sets LootEntitlement_IsSet to false */
    void ClearLootEntitlement() { LootEntitlement_IsSet = false; }

    FRHAPI_DevExternalKeyEntitlement ExternalKeyEntitlement_Optional{  };
    /** @brief true if ExternalKeyEntitlement_Optional has been set to a value */
    bool ExternalKeyEntitlement_IsSet{ false };
    /** @brief Gets the value of ExternalKeyEntitlement_Optional, regardless of it having been set */
    FRHAPI_DevExternalKeyEntitlement& GetExternalKeyEntitlement() { return ExternalKeyEntitlement_Optional; }
    /** @brief Gets the value of ExternalKeyEntitlement_Optional, regardless of it having been set */
    const FRHAPI_DevExternalKeyEntitlement& GetExternalKeyEntitlement() const { return ExternalKeyEntitlement_Optional; }
    /** @brief Gets the value of ExternalKeyEntitlement_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_DevExternalKeyEntitlement& GetExternalKeyEntitlement(const FRHAPI_DevExternalKeyEntitlement& DefaultValue) const { if (ExternalKeyEntitlement_IsSet) return ExternalKeyEntitlement_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of ExternalKeyEntitlement_Optional and returns true if it has been set, otherwise returns false */
    bool GetExternalKeyEntitlement(FRHAPI_DevExternalKeyEntitlement& OutValue) const { if (ExternalKeyEntitlement_IsSet) OutValue = ExternalKeyEntitlement_Optional; return ExternalKeyEntitlement_IsSet; }
    /** @brief Returns a pointer to ExternalKeyEntitlement_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_DevExternalKeyEntitlement* GetExternalKeyEntitlementOrNull() { if (ExternalKeyEntitlement_IsSet) return &ExternalKeyEntitlement_Optional; return nullptr; }
    /** @brief Returns a pointer to ExternalKeyEntitlement_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_DevExternalKeyEntitlement* GetExternalKeyEntitlementOrNull() const { if (ExternalKeyEntitlement_IsSet) return &ExternalKeyEntitlement_Optional; return nullptr; }
    /** @brief Sets the value of ExternalKeyEntitlement_Optional and also sets ExternalKeyEntitlement_IsSet to true */
    void SetExternalKeyEntitlement(FRHAPI_DevExternalKeyEntitlement NewValue) { ExternalKeyEntitlement_Optional = NewValue; ExternalKeyEntitlement_IsSet = true; }
     /** @brief Clears the value of ExternalKeyEntitlement_Optional and sets ExternalKeyEntitlement_IsSet to false */
    void ClearExternalKeyEntitlement() { ExternalKeyEntitlement_IsSet = false; }

    /** @brief The External SKU. */
    FString Sku{  };
    /** @brief Gets the value of Sku */
    FString& GetSku() { return Sku; }
    /** @brief Gets the value of Sku */
    const FString& GetSku() const { return Sku; }
    /** @brief Sets the value of Sku */
    void SetSku(FString NewValue) { Sku = NewValue;  }
};

/** @} */