// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "PlayerLastSeenUpdate.generated.h"

/** @defgroup RHAPI_PlayerLastSeenUpdate RallyHere API Model PlayerLastSeenUpdate
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlayerLastSeenUpdate : public FRHAPI_Model
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

    /** @brief Last time this player reported their online status */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FDateTime Time{  };
    /** @brief Gets the value of Time */
    FDateTime& GetTime() { return Time; }
    /** @brief Gets the value of Time */
    const FDateTime& GetTime() const { return Time; }
    /** @brief Sets the value of Time */
    void SetTime(FDateTime NewValue) { Time = NewValue;  }

    /** @brief Platform the user was online in */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Platform_Optional{  };
    /** @brief true if Platform_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Platform_IsSet{ false };
    /** @brief Gets the value of Platform_Optional, regardless of it having been set */
    FString& GetPlatform() { return Platform_Optional; }
    /** @brief Gets the value of Platform_Optional, regardless of it having been set */
    const FString& GetPlatform() const { return Platform_Optional; }
    /** @brief Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetPlatform(const FString& DefaultValue) const { if (Platform_IsSet) return Platform_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false */
    bool GetPlatform(FString& OutValue) const { if (Platform_IsSet) OutValue = Platform_Optional; return Platform_IsSet; }
    /** @brief Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr */
    FString* GetPlatformOrNull() { if (Platform_IsSet) return &Platform_Optional; return nullptr; }
    /** @brief Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetPlatformOrNull() const { if (Platform_IsSet) return &Platform_Optional; return nullptr; }
    /** @brief Sets the value of Platform_Optional and also sets Platform_IsSet to true */
    void SetPlatform(FString NewValue) { Platform_Optional = NewValue; Platform_IsSet = true; }
     /** @brief Clears the value of Platform_Optional and sets Platform_IsSet to false */
    void ClearPlatform() { Platform_IsSet = false; }

    /** @brief Player Display Name */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString DisplayName_Optional{  };
    /** @brief true if DisplayName_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool DisplayName_IsSet{ false };
    /** @brief Gets the value of DisplayName_Optional, regardless of it having been set */
    FString& GetDisplayName() { return DisplayName_Optional; }
    /** @brief Gets the value of DisplayName_Optional, regardless of it having been set */
    const FString& GetDisplayName() const { return DisplayName_Optional; }
    /** @brief Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetDisplayName(const FString& DefaultValue) const { if (DisplayName_IsSet) return DisplayName_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false */
    bool GetDisplayName(FString& OutValue) const { if (DisplayName_IsSet) OutValue = DisplayName_Optional; return DisplayName_IsSet; }
    /** @brief Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr */
    FString* GetDisplayNameOrNull() { if (DisplayName_IsSet) return &DisplayName_Optional; return nullptr; }
    /** @brief Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetDisplayNameOrNull() const { if (DisplayName_IsSet) return &DisplayName_Optional; return nullptr; }
    /** @brief Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true */
    void SetDisplayName(FString NewValue) { DisplayName_Optional = NewValue; DisplayName_IsSet = true; }
     /** @brief Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false */
    void ClearDisplayName() { DisplayName_IsSet = false; }
};

/** @} */
