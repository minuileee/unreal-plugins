// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "ClientVisibleSettings.generated.h"

/** @defgroup RHAPI_ClientVisibleSettings RallyHere API Model ClientVisibleSettings
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_ClientVisibleSettings : public FRHAPI_Model
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

    /** @brief How frequently the client should tell this service that it's online. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 SelfPingIntervalSeconds_Optional{  };
    /** @brief true if SelfPingIntervalSeconds_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool SelfPingIntervalSeconds_IsSet{ false };
    /** @brief Gets the value of SelfPingIntervalSeconds_Optional, regardless of it having been set */
    int32& GetSelfPingIntervalSeconds() { return SelfPingIntervalSeconds_Optional; }
    /** @brief Gets the value of SelfPingIntervalSeconds_Optional, regardless of it having been set */
    const int32& GetSelfPingIntervalSeconds() const { return SelfPingIntervalSeconds_Optional; }
    /** @brief Gets the value of SelfPingIntervalSeconds_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetSelfPingIntervalSeconds(const int32& DefaultValue) const { if (SelfPingIntervalSeconds_IsSet) return SelfPingIntervalSeconds_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of SelfPingIntervalSeconds_Optional and returns true if it has been set, otherwise returns false */
    bool GetSelfPingIntervalSeconds(int32& OutValue) const { if (SelfPingIntervalSeconds_IsSet) OutValue = SelfPingIntervalSeconds_Optional; return SelfPingIntervalSeconds_IsSet; }
    /** @brief Returns a pointer to SelfPingIntervalSeconds_Optional, if it has been set, otherwise returns nullptr */
    int32* GetSelfPingIntervalSecondsOrNull() { if (SelfPingIntervalSeconds_IsSet) return &SelfPingIntervalSeconds_Optional; return nullptr; }
    /** @brief Returns a pointer to SelfPingIntervalSeconds_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetSelfPingIntervalSecondsOrNull() const { if (SelfPingIntervalSeconds_IsSet) return &SelfPingIntervalSeconds_Optional; return nullptr; }
    /** @brief Sets the value of SelfPingIntervalSeconds_Optional and also sets SelfPingIntervalSeconds_IsSet to true */
    void SetSelfPingIntervalSeconds(int32 NewValue) { SelfPingIntervalSeconds_Optional = NewValue; SelfPingIntervalSeconds_IsSet = true; }
     /** @brief Clears the value of SelfPingIntervalSeconds_Optional and sets SelfPingIntervalSeconds_IsSet to false */
    void ClearSelfPingIntervalSeconds() { SelfPingIntervalSeconds_Optional = 30; SelfPingIntervalSeconds_IsSet = false; }
    /** @brief Returns true if SelfPingIntervalSeconds_Optional is set and matches the default value */
    bool IsSelfPingIntervalSecondsDefaultValue() const { return SelfPingIntervalSeconds_IsSet && SelfPingIntervalSeconds_Optional == 30; }
    /** @brief Sets the value of SelfPingIntervalSeconds_Optional to its default and also sets SelfPingIntervalSeconds_IsSet to true */
    void SetSelfPingIntervalSecondsToDefault() { SelfPingIntervalSeconds_Optional = 30; SelfPingIntervalSeconds_IsSet = true; }

    /** @brief If a client hasn't said that it's online within this time period, it will be treated as offline when others query its presence. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 LastSeenAgeConsideredOfflineSeconds_Optional{  };
    /** @brief true if LastSeenAgeConsideredOfflineSeconds_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool LastSeenAgeConsideredOfflineSeconds_IsSet{ false };
    /** @brief Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, regardless of it having been set */
    int32& GetLastSeenAgeConsideredOfflineSeconds() { return LastSeenAgeConsideredOfflineSeconds_Optional; }
    /** @brief Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, regardless of it having been set */
    const int32& GetLastSeenAgeConsideredOfflineSeconds() const { return LastSeenAgeConsideredOfflineSeconds_Optional; }
    /** @brief Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetLastSeenAgeConsideredOfflineSeconds(const int32& DefaultValue) const { if (LastSeenAgeConsideredOfflineSeconds_IsSet) return LastSeenAgeConsideredOfflineSeconds_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LastSeenAgeConsideredOfflineSeconds_Optional and returns true if it has been set, otherwise returns false */
    bool GetLastSeenAgeConsideredOfflineSeconds(int32& OutValue) const { if (LastSeenAgeConsideredOfflineSeconds_IsSet) OutValue = LastSeenAgeConsideredOfflineSeconds_Optional; return LastSeenAgeConsideredOfflineSeconds_IsSet; }
    /** @brief Returns a pointer to LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise returns nullptr */
    int32* GetLastSeenAgeConsideredOfflineSecondsOrNull() { if (LastSeenAgeConsideredOfflineSeconds_IsSet) return &LastSeenAgeConsideredOfflineSeconds_Optional; return nullptr; }
    /** @brief Returns a pointer to LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetLastSeenAgeConsideredOfflineSecondsOrNull() const { if (LastSeenAgeConsideredOfflineSeconds_IsSet) return &LastSeenAgeConsideredOfflineSeconds_Optional; return nullptr; }
    /** @brief Sets the value of LastSeenAgeConsideredOfflineSeconds_Optional and also sets LastSeenAgeConsideredOfflineSeconds_IsSet to true */
    void SetLastSeenAgeConsideredOfflineSeconds(int32 NewValue) { LastSeenAgeConsideredOfflineSeconds_Optional = NewValue; LastSeenAgeConsideredOfflineSeconds_IsSet = true; }
     /** @brief Clears the value of LastSeenAgeConsideredOfflineSeconds_Optional and sets LastSeenAgeConsideredOfflineSeconds_IsSet to false */
    void ClearLastSeenAgeConsideredOfflineSeconds() { LastSeenAgeConsideredOfflineSeconds_Optional = 60; LastSeenAgeConsideredOfflineSeconds_IsSet = false; }
    /** @brief Returns true if LastSeenAgeConsideredOfflineSeconds_Optional is set and matches the default value */
    bool IsLastSeenAgeConsideredOfflineSecondsDefaultValue() const { return LastSeenAgeConsideredOfflineSeconds_IsSet && LastSeenAgeConsideredOfflineSeconds_Optional == 60; }
    /** @brief Sets the value of LastSeenAgeConsideredOfflineSeconds_Optional to its default and also sets LastSeenAgeConsideredOfflineSeconds_IsSet to true */
    void SetLastSeenAgeConsideredOfflineSecondsToDefault() { LastSeenAgeConsideredOfflineSeconds_Optional = 60; LastSeenAgeConsideredOfflineSeconds_IsSet = true; }
};

/** @} */