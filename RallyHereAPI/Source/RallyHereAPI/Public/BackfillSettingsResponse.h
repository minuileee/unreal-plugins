// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "BackfillSettingsResponse.generated.h"

/** @defgroup RHAPI_BackfillSettingsResponse RallyHere API Model BackfillSettingsResponse
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_BackfillSettingsResponse : public FRHAPI_Model
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

	/** @brief How often we expect backfill heartbeats to occur */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	float Timeout{  };
	/** @brief Gets the value of Timeout */
	float& GetTimeout() { return Timeout; }
	/** @brief Gets the value of Timeout */
	const float& GetTimeout() const { return Timeout; }
	/** @brief Sets the value of Timeout */
	void SetTimeout(const float& NewValue) { Timeout = NewValue;  }
	/** @brief Sets the value of Timeout using move semantics */
	void SetTimeout(float&& NewValue) { Timeout = NewValue;  }
};

/** @} */
