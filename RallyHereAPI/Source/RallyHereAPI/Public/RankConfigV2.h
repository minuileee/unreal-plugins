// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "RankConfigV2.generated.h"

/** @defgroup RHAPI_RankConfigV2 RallyHere API Model RankConfigV2
 *  @{
 */

/**
 * @brief Configuration about a specific rank type
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_RankConfigV2 : public FRHAPI_Model
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

    /** @brief ID for this rank type */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString RankId{  };
    /** @brief Gets the value of RankId */
    FString& GetRankId() { return RankId; }
    /** @brief Gets the value of RankId */
    const FString& GetRankId() const { return RankId; }
    /** @brief Sets the value of RankId */
    void SetRankId(FString NewValue) { RankId = NewValue;  }

    /** @brief The default rank value for this rank id. Will be used when players do not have any rank history */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    float DefaultRank{  };
    /** @brief Gets the value of DefaultRank */
    float& GetDefaultRank() { return DefaultRank; }
    /** @brief Gets the value of DefaultRank */
    const float& GetDefaultRank() const { return DefaultRank; }
    /** @brief Sets the value of DefaultRank */
    void SetDefaultRank(float NewValue) { DefaultRank = NewValue;  }

    /** @brief The default skill variance for this rank id. Will be used when players do not have any rank history */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    float DefaultVariance{  };
    /** @brief Gets the value of DefaultVariance */
    float& GetDefaultVariance() { return DefaultVariance; }
    /** @brief Gets the value of DefaultVariance */
    const float& GetDefaultVariance() const { return DefaultVariance; }
    /** @brief Sets the value of DefaultVariance */
    void SetDefaultVariance(float NewValue) { DefaultVariance = NewValue;  }

    /** @brief The maximum rank value achievable. Any attempts to update a rank value to be higher than this get clamped to the maximum */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    float MaxRankAllowed{  };
    /** @brief Gets the value of MaxRankAllowed */
    float& GetMaxRankAllowed() { return MaxRankAllowed; }
    /** @brief Gets the value of MaxRankAllowed */
    const float& GetMaxRankAllowed() const { return MaxRankAllowed; }
    /** @brief Sets the value of MaxRankAllowed */
    void SetMaxRankAllowed(float NewValue) { MaxRankAllowed = NewValue;  }

    /** @brief The minimum rank value achievable. Any attempts to update a rank value to be lower than this get clamped to the minimum */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    float MinRankAllowed{  };
    /** @brief Gets the value of MinRankAllowed */
    float& GetMinRankAllowed() { return MinRankAllowed; }
    /** @brief Gets the value of MinRankAllowed */
    const float& GetMinRankAllowed() const { return MinRankAllowed; }
    /** @brief Sets the value of MinRankAllowed */
    void SetMinRankAllowed(float NewValue) { MinRankAllowed = NewValue;  }

    /** @brief The minimum skill variance allowed. Any attempts to update variance to be lower than this get clamped to the minimum */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    float MinVarianceAllowed{  };
    /** @brief Gets the value of MinVarianceAllowed */
    float& GetMinVarianceAllowed() { return MinVarianceAllowed; }
    /** @brief Gets the value of MinVarianceAllowed */
    const float& GetMinVarianceAllowed() const { return MinVarianceAllowed; }
    /** @brief Sets the value of MinVarianceAllowed */
    void SetMinVarianceAllowed(float NewValue) { MinVarianceAllowed = NewValue;  }

    /** @brief The distance between skill ranks that yields ~76% chance of winning. Recommended value is half the default variance */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    float TrueskillBeta_Optional{  };
    /** @brief true if TrueskillBeta_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool TrueskillBeta_IsSet{ false };
    /** @brief Gets the value of TrueskillBeta_Optional, regardless of it having been set */
    float& GetTrueskillBeta() { return TrueskillBeta_Optional; }
    /** @brief Gets the value of TrueskillBeta_Optional, regardless of it having been set */
    const float& GetTrueskillBeta() const { return TrueskillBeta_Optional; }
    /** @brief Gets the value of TrueskillBeta_Optional, if it has been set, otherwise it returns DefaultValue */
    const float& GetTrueskillBeta(const float& DefaultValue) const { if (TrueskillBeta_IsSet) return TrueskillBeta_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of TrueskillBeta_Optional and returns true if it has been set, otherwise returns false */
    bool GetTrueskillBeta(float& OutValue) const { if (TrueskillBeta_IsSet) OutValue = TrueskillBeta_Optional; return TrueskillBeta_IsSet; }
    /** @brief Returns a pointer to TrueskillBeta_Optional, if it has been set, otherwise returns nullptr */
    float* GetTrueskillBetaOrNull() { if (TrueskillBeta_IsSet) return &TrueskillBeta_Optional; return nullptr; }
    /** @brief Returns a pointer to TrueskillBeta_Optional, if it has been set, otherwise returns nullptr */
    const float* GetTrueskillBetaOrNull() const { if (TrueskillBeta_IsSet) return &TrueskillBeta_Optional; return nullptr; }
    /** @brief Sets the value of TrueskillBeta_Optional and also sets TrueskillBeta_IsSet to true */
    void SetTrueskillBeta(float NewValue) { TrueskillBeta_Optional = NewValue; TrueskillBeta_IsSet = true; }
     /** @brief Clears the value of TrueskillBeta_Optional and sets TrueskillBeta_IsSet to false */
    void ClearTrueskillBeta() { TrueskillBeta_IsSet = false; }

    /** @brief Factor that determines how quickly a player's variance is adjusted. A larger tau will result in more volatile in ranks. Recommended value is is (default_variance * .01) */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    float TrueskillTau_Optional{  };
    /** @brief true if TrueskillTau_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool TrueskillTau_IsSet{ false };
    /** @brief Gets the value of TrueskillTau_Optional, regardless of it having been set */
    float& GetTrueskillTau() { return TrueskillTau_Optional; }
    /** @brief Gets the value of TrueskillTau_Optional, regardless of it having been set */
    const float& GetTrueskillTau() const { return TrueskillTau_Optional; }
    /** @brief Gets the value of TrueskillTau_Optional, if it has been set, otherwise it returns DefaultValue */
    const float& GetTrueskillTau(const float& DefaultValue) const { if (TrueskillTau_IsSet) return TrueskillTau_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of TrueskillTau_Optional and returns true if it has been set, otherwise returns false */
    bool GetTrueskillTau(float& OutValue) const { if (TrueskillTau_IsSet) OutValue = TrueskillTau_Optional; return TrueskillTau_IsSet; }
    /** @brief Returns a pointer to TrueskillTau_Optional, if it has been set, otherwise returns nullptr */
    float* GetTrueskillTauOrNull() { if (TrueskillTau_IsSet) return &TrueskillTau_Optional; return nullptr; }
    /** @brief Returns a pointer to TrueskillTau_Optional, if it has been set, otherwise returns nullptr */
    const float* GetTrueskillTauOrNull() const { if (TrueskillTau_IsSet) return &TrueskillTau_Optional; return nullptr; }
    /** @brief Sets the value of TrueskillTau_Optional and also sets TrueskillTau_IsSet to true */
    void SetTrueskillTau(float NewValue) { TrueskillTau_Optional = NewValue; TrueskillTau_IsSet = true; }
     /** @brief Clears the value of TrueskillTau_Optional and sets TrueskillTau_IsSet to false */
    void ClearTrueskillTau() { TrueskillTau_IsSet = false; }

    /** @brief The percent probability of a draw occuring in the game. Must be in [0, 1) */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    float TrueskillDrawProbability_Optional{  };
    /** @brief true if TrueskillDrawProbability_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool TrueskillDrawProbability_IsSet{ false };
    /** @brief Gets the value of TrueskillDrawProbability_Optional, regardless of it having been set */
    float& GetTrueskillDrawProbability() { return TrueskillDrawProbability_Optional; }
    /** @brief Gets the value of TrueskillDrawProbability_Optional, regardless of it having been set */
    const float& GetTrueskillDrawProbability() const { return TrueskillDrawProbability_Optional; }
    /** @brief Gets the value of TrueskillDrawProbability_Optional, if it has been set, otherwise it returns DefaultValue */
    const float& GetTrueskillDrawProbability(const float& DefaultValue) const { if (TrueskillDrawProbability_IsSet) return TrueskillDrawProbability_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of TrueskillDrawProbability_Optional and returns true if it has been set, otherwise returns false */
    bool GetTrueskillDrawProbability(float& OutValue) const { if (TrueskillDrawProbability_IsSet) OutValue = TrueskillDrawProbability_Optional; return TrueskillDrawProbability_IsSet; }
    /** @brief Returns a pointer to TrueskillDrawProbability_Optional, if it has been set, otherwise returns nullptr */
    float* GetTrueskillDrawProbabilityOrNull() { if (TrueskillDrawProbability_IsSet) return &TrueskillDrawProbability_Optional; return nullptr; }
    /** @brief Returns a pointer to TrueskillDrawProbability_Optional, if it has been set, otherwise returns nullptr */
    const float* GetTrueskillDrawProbabilityOrNull() const { if (TrueskillDrawProbability_IsSet) return &TrueskillDrawProbability_Optional; return nullptr; }
    /** @brief Sets the value of TrueskillDrawProbability_Optional and also sets TrueskillDrawProbability_IsSet to true */
    void SetTrueskillDrawProbability(float NewValue) { TrueskillDrawProbability_Optional = NewValue; TrueskillDrawProbability_IsSet = true; }
     /** @brief Clears the value of TrueskillDrawProbability_Optional and sets TrueskillDrawProbability_IsSet to false */
    void ClearTrueskillDrawProbability() { TrueskillDrawProbability_IsSet = false; }
};

/** @} */
