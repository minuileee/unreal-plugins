// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "KeyClaim.h"
#include "KeyClaims.generated.h"

/** @defgroup RHAPI_KeyClaims RallyHere API Model KeyClaims
 *  @{
 */

/**
 * @brief List of Key Claims available to the player.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_KeyClaims : public FRHAPI_Model
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

	/** @brief List of Key Claims available to the Player */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TArray<FRHAPI_KeyClaim> Claims{  };
	/** @brief Gets the value of Claims */
	TArray<FRHAPI_KeyClaim>& GetClaims() { return Claims; }
	/** @brief Gets the value of Claims */
	const TArray<FRHAPI_KeyClaim>& GetClaims() const { return Claims; }
	/** @brief Sets the value of Claims */
	void SetClaims(const TArray<FRHAPI_KeyClaim>& NewValue) { Claims = NewValue;  }
	/** @brief Sets the value of Claims using move semantics */
	void SetClaims(TArray<FRHAPI_KeyClaim>&& NewValue) { Claims = NewValue;  }
};

/** @} */
