// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "PlayerRankResponseV2.h"
#include "PlayerRankUpdateResponseV2.generated.h"

/** @defgroup RHAPI_PlayerRankUpdateResponseV2 RallyHere API Model PlayerRankUpdateResponseV2
 *  @{
 */

/**
 * @brief Response to successfully updating players&#39; ranks
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlayerRankUpdateResponseV2 : public FRHAPI_Model
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

	/** @brief List of players and their updated ranks */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TArray<FRHAPI_PlayerRankResponseV2> UpdatedPlayers{  };
	/** @brief Gets the value of UpdatedPlayers */
	TArray<FRHAPI_PlayerRankResponseV2>& GetUpdatedPlayers() { return UpdatedPlayers; }
	/** @brief Gets the value of UpdatedPlayers */
	const TArray<FRHAPI_PlayerRankResponseV2>& GetUpdatedPlayers() const { return UpdatedPlayers; }
	/** @brief Sets the value of UpdatedPlayers */
	void SetUpdatedPlayers(const TArray<FRHAPI_PlayerRankResponseV2>& NewValue) { UpdatedPlayers = NewValue;  }
	/** @brief Sets the value of UpdatedPlayers using move semantics */
	void SetUpdatedPlayers(TArray<FRHAPI_PlayerRankResponseV2>&& NewValue) { UpdatedPlayers = NewValue;  }
};

/** @} */
