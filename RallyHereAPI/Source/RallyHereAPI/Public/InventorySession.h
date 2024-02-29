// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "Platform.h"
#include "InventorySession.generated.h"

/** @defgroup RHAPI_InventorySession RallyHere API Model InventorySession
 *  @{
 */

/**
 * @brief Inventory Session for a Player.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_InventorySession : public FRHAPI_Model
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

    /** @brief Unique ID for this Inventory Session. */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString SessionId{  };
    /** @brief Gets the value of SessionId */
    FString& GetSessionId() { return SessionId; }
    /** @brief Gets the value of SessionId */
    const FString& GetSessionId() const { return SessionId; }
    /** @brief Sets the value of SessionId */
    void SetSessionId(FString NewValue) { SessionId = NewValue;  }

    /** @brief Platform for this Inventory Session. */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    ERHAPI_Platform SessionPlatform_Optional{  };
    /** @brief true if SessionPlatform_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool SessionPlatform_IsSet{ false };
    /** @brief Gets the value of SessionPlatform_Optional, regardless of it having been set */
    ERHAPI_Platform& GetSessionPlatform() { return SessionPlatform_Optional; }
    /** @brief Gets the value of SessionPlatform_Optional, regardless of it having been set */
    const ERHAPI_Platform& GetSessionPlatform() const { return SessionPlatform_Optional; }
    /** @brief Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue */
    const ERHAPI_Platform& GetSessionPlatform(const ERHAPI_Platform& DefaultValue) const { if (SessionPlatform_IsSet) return SessionPlatform_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false */
    bool GetSessionPlatform(ERHAPI_Platform& OutValue) const { if (SessionPlatform_IsSet) OutValue = SessionPlatform_Optional; return SessionPlatform_IsSet; }
    /** @brief Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr */
    ERHAPI_Platform* GetSessionPlatformOrNull() { if (SessionPlatform_IsSet) return &SessionPlatform_Optional; return nullptr; }
    /** @brief Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr */
    const ERHAPI_Platform* GetSessionPlatformOrNull() const { if (SessionPlatform_IsSet) return &SessionPlatform_Optional; return nullptr; }
    /** @brief Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true */
    void SetSessionPlatform(ERHAPI_Platform NewValue) { SessionPlatform_Optional = NewValue; SessionPlatform_IsSet = true; }
     /** @brief Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false */
    void ClearSessionPlatform() { SessionPlatform_IsSet = false; }

    /** @brief Durable Loot that has been applied when this Inventory Session was created. */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    TArray<int32> AppliedDurableLoot_Optional{  };
    /** @brief true if AppliedDurableLoot_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool AppliedDurableLoot_IsSet{ false };
    /** @brief Gets the value of AppliedDurableLoot_Optional, regardless of it having been set */
    TArray<int32>& GetAppliedDurableLoot() { return AppliedDurableLoot_Optional; }
    /** @brief Gets the value of AppliedDurableLoot_Optional, regardless of it having been set */
    const TArray<int32>& GetAppliedDurableLoot() const { return AppliedDurableLoot_Optional; }
    /** @brief Gets the value of AppliedDurableLoot_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<int32>& GetAppliedDurableLoot(const TArray<int32>& DefaultValue) const { if (AppliedDurableLoot_IsSet) return AppliedDurableLoot_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of AppliedDurableLoot_Optional and returns true if it has been set, otherwise returns false */
    bool GetAppliedDurableLoot(TArray<int32>& OutValue) const { if (AppliedDurableLoot_IsSet) OutValue = AppliedDurableLoot_Optional; return AppliedDurableLoot_IsSet; }
    /** @brief Returns a pointer to AppliedDurableLoot_Optional, if it has been set, otherwise returns nullptr */
    TArray<int32>* GetAppliedDurableLootOrNull() { if (AppliedDurableLoot_IsSet) return &AppliedDurableLoot_Optional; return nullptr; }
    /** @brief Returns a pointer to AppliedDurableLoot_Optional, if it has been set, otherwise returns nullptr */
    const TArray<int32>* GetAppliedDurableLootOrNull() const { if (AppliedDurableLoot_IsSet) return &AppliedDurableLoot_Optional; return nullptr; }
    /** @brief Sets the value of AppliedDurableLoot_Optional and also sets AppliedDurableLoot_IsSet to true */
    void SetAppliedDurableLoot(TArray<int32> NewValue) { AppliedDurableLoot_Optional = NewValue; AppliedDurableLoot_IsSet = true; }
     /** @brief Clears the value of AppliedDurableLoot_Optional and sets AppliedDurableLoot_IsSet to false */
    void ClearAppliedDurableLoot() { AppliedDurableLoot_IsSet = false; }
};

/** @} */
