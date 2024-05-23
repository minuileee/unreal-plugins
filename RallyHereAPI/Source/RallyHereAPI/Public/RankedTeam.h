// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "CalculatedRank.h"
#include "RankedTeam.generated.h"

/** @defgroup RHAPI_RankedTeam RallyHere API Model RankedTeam
 *  @{
 */

/**
 * @brief One team of players from a match along with their placement in the match, and previous rank data about all of the players
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_RankedTeam : public FRHAPI_Model
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

	/** @brief List of CalculatedRank objects that give stats about a specific player from the match */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TArray<FRHAPI_CalculatedRank> Players{  };
	/** @brief Gets the value of Players */
	TArray<FRHAPI_CalculatedRank>& GetPlayers() { return Players; }
	/** @brief Gets the value of Players */
	const TArray<FRHAPI_CalculatedRank>& GetPlayers() const { return Players; }
	/** @brief Sets the value of Players */
	void SetPlayers(const TArray<FRHAPI_CalculatedRank>& NewValue) { Players = NewValue;  }
	/** @brief Sets the value of Players using move semantics */
	void SetPlayers(TArray<FRHAPI_CalculatedRank>&& NewValue) { Players = NewValue;  }

	/** @brief What rank this team came in. 1 indicates victory, and higher values are placements. Matching ranks indicate draws */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 TeamRank{ 0 };
	/** @brief Gets the value of TeamRank */
	int32& GetTeamRank() { return TeamRank; }
	/** @brief Gets the value of TeamRank */
	const int32& GetTeamRank() const { return TeamRank; }
	/** @brief Sets the value of TeamRank */
	void SetTeamRank(const int32& NewValue) { TeamRank = NewValue;  }
	/** @brief Sets the value of TeamRank using move semantics */
	void SetTeamRank(int32&& NewValue) { TeamRank = NewValue;  }
	/** @brief Returns true if TeamRank matches the default value */
	bool IsTeamRankDefaultValue() const { return TeamRank == 0; }
	/** @brief Sets the value of TeamRank to its default  */
	void SetTeamRankToDefault() { TeamRank = 0;  }
};

/** @} */
