// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "SessionPlayerUpdateResponse.h"
#include "SessionInviteResponse.generated.h"

/** @defgroup RHAPI_SessionInviteResponse RallyHere API Model SessionInviteResponse
 *  @{
 */

/**
 * @brief Response to a request to update a session cohort
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_SessionInviteResponse : public FRHAPI_Model
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

	/** @brief List of players that were updated */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TArray<FRHAPI_SessionPlayerUpdateResponse> Players{  };
	/** @brief Gets the value of Players */
	TArray<FRHAPI_SessionPlayerUpdateResponse>& GetPlayers() { return Players; }
	/** @brief Gets the value of Players */
	const TArray<FRHAPI_SessionPlayerUpdateResponse>& GetPlayers() const { return Players; }
	/** @brief Sets the value of Players */
	void SetPlayers(const TArray<FRHAPI_SessionPlayerUpdateResponse>& NewValue) { Players = NewValue;  }
	/** @brief Sets the value of Players using move semantics */
	void SetPlayers(TArray<FRHAPI_SessionPlayerUpdateResponse>&& NewValue) { Players = NewValue;  }
};

/** @} */
