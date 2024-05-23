// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "SessionJoinResponse.generated.h"

/** @defgroup RHAPI_SessionJoinResponse RallyHere API Model SessionJoinResponse
 *  @{
 */

/**
 * @brief Response when a player successfully joins a session
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_SessionJoinResponse : public FRHAPI_Model
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

	/** @brief Session ID the player is now a part of */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString SessionId{  };
	/** @brief Gets the value of SessionId */
	FString& GetSessionId() { return SessionId; }
	/** @brief Gets the value of SessionId */
	const FString& GetSessionId() const { return SessionId; }
	/** @brief Sets the value of SessionId */
	void SetSessionId(const FString& NewValue) { SessionId = NewValue;  }
	/** @brief Sets the value of SessionId using move semantics */
	void SetSessionId(FString&& NewValue) { SessionId = NewValue;  }
};

/** @} */
