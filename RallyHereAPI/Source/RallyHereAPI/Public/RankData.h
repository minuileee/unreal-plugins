// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "RankData.generated.h"

/** @defgroup RHAPI_RankData RallyHere API Model RankData
 *  @{
 */

/**
 * @brief Trueskill oriented ranked data about a player&#39;s skill and confidence levels
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_RankData : public FRHAPI_Model
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

    /** @brief Trueskill mu. This is a measure of perceived skill in a player */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    float Mu{  };
    /** @brief Gets the value of Mu */
    float& GetMu() { return Mu; }
    /** @brief Gets the value of Mu */
    const float& GetMu() const { return Mu; }
    /** @brief Sets the value of Mu */
    void SetMu(float NewValue) { Mu = NewValue;  }

    /** @brief Trueskill sigma. This is a measure of how unconfident we are in the perceived skill (high sigma means less confident) */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    float Sigma{  };
    /** @brief Gets the value of Sigma */
    float& GetSigma() { return Sigma; }
    /** @brief Gets the value of Sigma */
    const float& GetSigma() const { return Sigma; }
    /** @brief Sets the value of Sigma */
    void SetSigma(float NewValue) { Sigma = NewValue;  }

    /** @brief Custom key-value player rank data */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    TMap<FString, FString> CustomData_Optional{  };
    /** @brief true if CustomData_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
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
};

/** @} */
