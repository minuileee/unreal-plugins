// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevRank.generated.h"

/** @defgroup RHAPI_DevRank RallyHere API Model DevRank
 *  @{
 */

/**
 * @brief
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevRank : public FRHAPI_DevModel
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

    /** @brief Readable name to identify this Rank */
    FString Name{  };
    /** @brief Gets the value of Name */
    FString& GetName() { return Name; }
    /** @brief Gets the value of Name */
    const FString& GetName() const { return Name; }
    /** @brief Sets the value of Name */
    void SetName(FString NewValue) { Name = NewValue;  }

    /** @brief The maximum skill value that can be achieved in this Rank */
    float RankMax{  };
    /** @brief Gets the value of RankMax */
    float& GetRankMax() { return RankMax; }
    /** @brief Gets the value of RankMax */
    const float& GetRankMax() const { return RankMax; }
    /** @brief Sets the value of RankMax */
    void SetRankMax(float NewValue) { RankMax = NewValue;  }

    /** @brief The minimum skill value that can be achieved in this Rank */
    float RankMin{  };
    /** @brief Gets the value of RankMin */
    float& GetRankMin() { return RankMin; }
    /** @brief Gets the value of RankMin */
    const float& GetRankMin() const { return RankMin; }
    /** @brief Sets the value of RankMin */
    void SetRankMin(float NewValue) { RankMin = NewValue;  }

    /** @brief The minimum sigma value achievable in this Rank when calculating with Trueskill */
    float TrueskillSigmaMin_Optional{  };
    /** @brief true if TrueskillSigmaMin_Optional has been set to a value */
    bool TrueskillSigmaMin_IsSet{ false };
    /** @brief Gets the value of TrueskillSigmaMin_Optional, regardless of it having been set */
    float& GetTrueskillSigmaMin() { return TrueskillSigmaMin_Optional; }
    /** @brief Gets the value of TrueskillSigmaMin_Optional, regardless of it having been set */
    const float& GetTrueskillSigmaMin() const { return TrueskillSigmaMin_Optional; }
    /** @brief Gets the value of TrueskillSigmaMin_Optional, if it has been set, otherwise it returns DefaultValue */
    const float& GetTrueskillSigmaMin(const float& DefaultValue) const { if (TrueskillSigmaMin_IsSet) return TrueskillSigmaMin_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of TrueskillSigmaMin_Optional and returns true if it has been set, otherwise returns false */
    bool GetTrueskillSigmaMin(float& OutValue) const { if (TrueskillSigmaMin_IsSet) OutValue = TrueskillSigmaMin_Optional; return TrueskillSigmaMin_IsSet; }
    /** @brief Returns a pointer to TrueskillSigmaMin_Optional, if it has been set, otherwise returns nullptr */
    float* GetTrueskillSigmaMinOrNull() { if (TrueskillSigmaMin_IsSet) return &TrueskillSigmaMin_Optional; return nullptr; }
    /** @brief Returns a pointer to TrueskillSigmaMin_Optional, if it has been set, otherwise returns nullptr */
    const float* GetTrueskillSigmaMinOrNull() const { if (TrueskillSigmaMin_IsSet) return &TrueskillSigmaMin_Optional; return nullptr; }
    /** @brief Sets the value of TrueskillSigmaMin_Optional and also sets TrueskillSigmaMin_IsSet to true */
    void SetTrueskillSigmaMin(float NewValue) { TrueskillSigmaMin_Optional = NewValue; TrueskillSigmaMin_IsSet = true; }
     /** @brief Clears the value of TrueskillSigmaMin_Optional and sets TrueskillSigmaMin_IsSet to false */
    void ClearTrueskillSigmaMin() { TrueskillSigmaMin_IsSet = false; }

    /** @brief Trueskill's default beta value, which represents the distance in rating to have ~76% chance of winning for the higher rated player. Trueskill's default is 4.167 */
    float TrueskillBeta_Optional{  };
    /** @brief true if TrueskillBeta_Optional has been set to a value */
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

    /** @brief Trueskill's default mu value, which represents player skill. Trueskill's default is 25 */
    float TrueskillDefaultMu_Optional{  };
    /** @brief true if TrueskillDefaultMu_Optional has been set to a value */
    bool TrueskillDefaultMu_IsSet{ false };
    /** @brief Gets the value of TrueskillDefaultMu_Optional, regardless of it having been set */
    float& GetTrueskillDefaultMu() { return TrueskillDefaultMu_Optional; }
    /** @brief Gets the value of TrueskillDefaultMu_Optional, regardless of it having been set */
    const float& GetTrueskillDefaultMu() const { return TrueskillDefaultMu_Optional; }
    /** @brief Gets the value of TrueskillDefaultMu_Optional, if it has been set, otherwise it returns DefaultValue */
    const float& GetTrueskillDefaultMu(const float& DefaultValue) const { if (TrueskillDefaultMu_IsSet) return TrueskillDefaultMu_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of TrueskillDefaultMu_Optional and returns true if it has been set, otherwise returns false */
    bool GetTrueskillDefaultMu(float& OutValue) const { if (TrueskillDefaultMu_IsSet) OutValue = TrueskillDefaultMu_Optional; return TrueskillDefaultMu_IsSet; }
    /** @brief Returns a pointer to TrueskillDefaultMu_Optional, if it has been set, otherwise returns nullptr */
    float* GetTrueskillDefaultMuOrNull() { if (TrueskillDefaultMu_IsSet) return &TrueskillDefaultMu_Optional; return nullptr; }
    /** @brief Returns a pointer to TrueskillDefaultMu_Optional, if it has been set, otherwise returns nullptr */
    const float* GetTrueskillDefaultMuOrNull() const { if (TrueskillDefaultMu_IsSet) return &TrueskillDefaultMu_Optional; return nullptr; }
    /** @brief Sets the value of TrueskillDefaultMu_Optional and also sets TrueskillDefaultMu_IsSet to true */
    void SetTrueskillDefaultMu(float NewValue) { TrueskillDefaultMu_Optional = NewValue; TrueskillDefaultMu_IsSet = true; }
     /** @brief Clears the value of TrueskillDefaultMu_Optional and sets TrueskillDefaultMu_IsSet to false */
    void ClearTrueskillDefaultMu() { TrueskillDefaultMu_IsSet = false; }

    /** @brief Trueskill's default sigma, which represents the systems uncertainty on the player's mu (higher values mean more uncertainty). Trueskill's default is 8.333 */
    float TrueskillDefaultSigma_Optional{  };
    /** @brief true if TrueskillDefaultSigma_Optional has been set to a value */
    bool TrueskillDefaultSigma_IsSet{ false };
    /** @brief Gets the value of TrueskillDefaultSigma_Optional, regardless of it having been set */
    float& GetTrueskillDefaultSigma() { return TrueskillDefaultSigma_Optional; }
    /** @brief Gets the value of TrueskillDefaultSigma_Optional, regardless of it having been set */
    const float& GetTrueskillDefaultSigma() const { return TrueskillDefaultSigma_Optional; }
    /** @brief Gets the value of TrueskillDefaultSigma_Optional, if it has been set, otherwise it returns DefaultValue */
    const float& GetTrueskillDefaultSigma(const float& DefaultValue) const { if (TrueskillDefaultSigma_IsSet) return TrueskillDefaultSigma_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of TrueskillDefaultSigma_Optional and returns true if it has been set, otherwise returns false */
    bool GetTrueskillDefaultSigma(float& OutValue) const { if (TrueskillDefaultSigma_IsSet) OutValue = TrueskillDefaultSigma_Optional; return TrueskillDefaultSigma_IsSet; }
    /** @brief Returns a pointer to TrueskillDefaultSigma_Optional, if it has been set, otherwise returns nullptr */
    float* GetTrueskillDefaultSigmaOrNull() { if (TrueskillDefaultSigma_IsSet) return &TrueskillDefaultSigma_Optional; return nullptr; }
    /** @brief Returns a pointer to TrueskillDefaultSigma_Optional, if it has been set, otherwise returns nullptr */
    const float* GetTrueskillDefaultSigmaOrNull() const { if (TrueskillDefaultSigma_IsSet) return &TrueskillDefaultSigma_Optional; return nullptr; }
    /** @brief Sets the value of TrueskillDefaultSigma_Optional and also sets TrueskillDefaultSigma_IsSet to true */
    void SetTrueskillDefaultSigma(float NewValue) { TrueskillDefaultSigma_Optional = NewValue; TrueskillDefaultSigma_IsSet = true; }
     /** @brief Clears the value of TrueskillDefaultSigma_Optional and sets TrueskillDefaultSigma_IsSet to false */
    void ClearTrueskillDefaultSigma() { TrueskillDefaultSigma_IsSet = false; }

    /** @brief Trueskill's draw probability. Trueskill's default is 0.1 */
    float TrueskillDrawProbability_Optional{  };
    /** @brief true if TrueskillDrawProbability_Optional has been set to a value */
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

    /** @brief Trueskill's tau, which represents the additive dynamic factor. The higher the value, the more dynamic ratings will be (wins grant more, and losses lose more). Trueskill's default value is 0.083 */
    float TrueskillTau_Optional{  };
    /** @brief true if TrueskillTau_Optional has been set to a value */
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

    /** @brief ID of the Sandbox */
    FGuid SandboxId_Optional{  };
    /** @brief true if SandboxId_Optional has been set to a value */
    bool SandboxId_IsSet{ false };
    /** @brief Gets the value of SandboxId_Optional, regardless of it having been set */
    FGuid& GetSandboxId() { return SandboxId_Optional; }
    /** @brief Gets the value of SandboxId_Optional, regardless of it having been set */
    const FGuid& GetSandboxId() const { return SandboxId_Optional; }
    /** @brief Gets the value of SandboxId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetSandboxId(const FGuid& DefaultValue) const { if (SandboxId_IsSet) return SandboxId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of SandboxId_Optional and returns true if it has been set, otherwise returns false */
    bool GetSandboxId(FGuid& OutValue) const { if (SandboxId_IsSet) OutValue = SandboxId_Optional; return SandboxId_IsSet; }
    /** @brief Returns a pointer to SandboxId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetSandboxIdOrNull() { if (SandboxId_IsSet) return &SandboxId_Optional; return nullptr; }
    /** @brief Returns a pointer to SandboxId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetSandboxIdOrNull() const { if (SandboxId_IsSet) return &SandboxId_Optional; return nullptr; }
    /** @brief Sets the value of SandboxId_Optional and also sets SandboxId_IsSet to true */
    void SetSandboxId(FGuid NewValue) { SandboxId_Optional = NewValue; SandboxId_IsSet = true; }
     /** @brief Clears the value of SandboxId_Optional and sets SandboxId_IsSet to false */
    void ClearSandboxId() { SandboxId_IsSet = false; }

    /** @brief Account ID of the user who last modified the resource */
    FGuid LastModifiedAccountId_Optional{  };
    /** @brief true if LastModifiedAccountId_Optional has been set to a value */
    bool LastModifiedAccountId_IsSet{ false };
    /** @brief Gets the value of LastModifiedAccountId_Optional, regardless of it having been set */
    FGuid& GetLastModifiedAccountId() { return LastModifiedAccountId_Optional; }
    /** @brief Gets the value of LastModifiedAccountId_Optional, regardless of it having been set */
    const FGuid& GetLastModifiedAccountId() const { return LastModifiedAccountId_Optional; }
    /** @brief Gets the value of LastModifiedAccountId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetLastModifiedAccountId(const FGuid& DefaultValue) const { if (LastModifiedAccountId_IsSet) return LastModifiedAccountId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LastModifiedAccountId_Optional and returns true if it has been set, otherwise returns false */
    bool GetLastModifiedAccountId(FGuid& OutValue) const { if (LastModifiedAccountId_IsSet) OutValue = LastModifiedAccountId_Optional; return LastModifiedAccountId_IsSet; }
    /** @brief Returns a pointer to LastModifiedAccountId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetLastModifiedAccountIdOrNull() { if (LastModifiedAccountId_IsSet) return &LastModifiedAccountId_Optional; return nullptr; }
    /** @brief Returns a pointer to LastModifiedAccountId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetLastModifiedAccountIdOrNull() const { if (LastModifiedAccountId_IsSet) return &LastModifiedAccountId_Optional; return nullptr; }
    /** @brief Sets the value of LastModifiedAccountId_Optional and also sets LastModifiedAccountId_IsSet to true */
    void SetLastModifiedAccountId(FGuid NewValue) { LastModifiedAccountId_Optional = NewValue; LastModifiedAccountId_IsSet = true; }
     /** @brief Clears the value of LastModifiedAccountId_Optional and sets LastModifiedAccountId_IsSet to false */
    void ClearLastModifiedAccountId() { LastModifiedAccountId_IsSet = false; }

    /** @brief Timestamp of when the resource was last modified */
    FDateTime LastModifiedTimestamp_Optional{  };
    /** @brief true if LastModifiedTimestamp_Optional has been set to a value */
    bool LastModifiedTimestamp_IsSet{ false };
    /** @brief Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set */
    FDateTime& GetLastModifiedTimestamp() { return LastModifiedTimestamp_Optional; }
    /** @brief Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set */
    const FDateTime& GetLastModifiedTimestamp() const { return LastModifiedTimestamp_Optional; }
    /** @brief Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue */
    const FDateTime& GetLastModifiedTimestamp(const FDateTime& DefaultValue) const { if (LastModifiedTimestamp_IsSet) return LastModifiedTimestamp_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false */
    bool GetLastModifiedTimestamp(FDateTime& OutValue) const { if (LastModifiedTimestamp_IsSet) OutValue = LastModifiedTimestamp_Optional; return LastModifiedTimestamp_IsSet; }
    /** @brief Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr */
    FDateTime* GetLastModifiedTimestampOrNull() { if (LastModifiedTimestamp_IsSet) return &LastModifiedTimestamp_Optional; return nullptr; }
    /** @brief Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr */
    const FDateTime* GetLastModifiedTimestampOrNull() const { if (LastModifiedTimestamp_IsSet) return &LastModifiedTimestamp_Optional; return nullptr; }
    /** @brief Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true */
    void SetLastModifiedTimestamp(FDateTime NewValue) { LastModifiedTimestamp_Optional = NewValue; LastModifiedTimestamp_IsSet = true; }
     /** @brief Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false */
    void ClearLastModifiedTimestamp() { LastModifiedTimestamp_IsSet = false; }

    FGuid RankId{  };
    /** @brief Gets the value of RankId */
    FGuid& GetRankId() { return RankId; }
    /** @brief Gets the value of RankId */
    const FGuid& GetRankId() const { return RankId; }
    /** @brief Sets the value of RankId */
    void SetRankId(FGuid NewValue) { RankId = NewValue;  }
};

/** @} */
