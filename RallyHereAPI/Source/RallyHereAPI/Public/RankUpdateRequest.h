// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "RankedTeam.h"
#include "RankUpdateRequest.generated.h"

/** @defgroup RHAPI_RankUpdateRequest RallyHere API Model RankUpdateRequest
 *  @{
 */

/**
 * @brief DEPRECATED A request body to calculate and update players&#39; ratings from a match
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_RankUpdateRequest : public FRHAPI_Model
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

	/** @brief ID for the instance the match took place on */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString InstanceId_Optional{  };
	/** @brief true if InstanceId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool InstanceId_IsSet{ false };
	/** @brief Gets the value of InstanceId_Optional, regardless of it having been set */
	FString& GetInstanceId() { return InstanceId_Optional; }
	/** @brief Gets the value of InstanceId_Optional, regardless of it having been set */
	const FString& GetInstanceId() const { return InstanceId_Optional; }
	/** @brief Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetInstanceId(const FString& DefaultValue) const { if (InstanceId_IsSet) return InstanceId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false */
	bool GetInstanceId(FString& OutValue) const { if (InstanceId_IsSet) OutValue = InstanceId_Optional; return InstanceId_IsSet; }
	/** @brief Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr */
	FString* GetInstanceIdOrNull() { if (InstanceId_IsSet) return &InstanceId_Optional; return nullptr; }
	/** @brief Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetInstanceIdOrNull() const { if (InstanceId_IsSet) return &InstanceId_Optional; return nullptr; }
	/** @brief Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true */
	void SetInstanceId(const FString& NewValue) { InstanceId_Optional = NewValue; InstanceId_IsSet = true; }
	/** @brief Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics */
	void SetInstanceId(FString&& NewValue) { InstanceId_Optional = NewValue; InstanceId_IsSet = true; }
	 /** @brief Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false */
	void ClearInstanceId() { InstanceId_IsSet = false; }

	/** @brief ID for the rank type used in this match */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 RankId{ 0 };
	/** @brief Gets the value of RankId */
	int32& GetRankId() { return RankId; }
	/** @brief Gets the value of RankId */
	const int32& GetRankId() const { return RankId; }
	/** @brief Sets the value of RankId */
	void SetRankId(const int32& NewValue) { RankId = NewValue;  }
	/** @brief Sets the value of RankId using move semantics */
	void SetRankId(int32&& NewValue) { RankId = NewValue;  }
	/** @brief Returns true if RankId matches the default value */
	bool IsRankIdDefaultValue() const { return RankId == 0; }
	/** @brief Sets the value of RankId to its default  */
	void SetRankIdToDefault() { RankId = 0;  }

	/** @brief How many seconds the match lasted */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 MatchLengthSeconds{ 0 };
	/** @brief Gets the value of MatchLengthSeconds */
	int32& GetMatchLengthSeconds() { return MatchLengthSeconds; }
	/** @brief Gets the value of MatchLengthSeconds */
	const int32& GetMatchLengthSeconds() const { return MatchLengthSeconds; }
	/** @brief Sets the value of MatchLengthSeconds */
	void SetMatchLengthSeconds(const int32& NewValue) { MatchLengthSeconds = NewValue;  }
	/** @brief Sets the value of MatchLengthSeconds using move semantics */
	void SetMatchLengthSeconds(int32&& NewValue) { MatchLengthSeconds = NewValue;  }
	/** @brief Returns true if MatchLengthSeconds matches the default value */
	bool IsMatchLengthSecondsDefaultValue() const { return MatchLengthSeconds == 0; }
	/** @brief Sets the value of MatchLengthSeconds to its default  */
	void SetMatchLengthSecondsToDefault() { MatchLengthSeconds = 0;  }

	/** @brief List of teams that participated in this match */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TArray<FRHAPI_RankedTeam> Teams{  };
	/** @brief Gets the value of Teams */
	TArray<FRHAPI_RankedTeam>& GetTeams() { return Teams; }
	/** @brief Gets the value of Teams */
	const TArray<FRHAPI_RankedTeam>& GetTeams() const { return Teams; }
	/** @brief Sets the value of Teams */
	void SetTeams(const TArray<FRHAPI_RankedTeam>& NewValue) { Teams = NewValue;  }
	/** @brief Sets the value of Teams using move semantics */
	void SetTeams(TArray<FRHAPI_RankedTeam>&& NewValue) { Teams = NewValue;  }
};

/** @} */
