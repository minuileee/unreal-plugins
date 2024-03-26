// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "IndividualCCUs.generated.h"

/** @defgroup RHAPI_IndividualCCUs RallyHere API Model IndividualCCUs
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_IndividualCCUs : public FRHAPI_Model
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

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TMap<FString, int32> Ccus{  };
	/** @brief Gets the value of Ccus */
	TMap<FString, int32>& GetCcus() { return Ccus; }
	/** @brief Gets the value of Ccus */
	const TMap<FString, int32>& GetCcus() const { return Ccus; }
	/** @brief Sets the value of Ccus */
	void SetCcus(TMap<FString, int32> NewValue) { Ccus = NewValue;  }
};

/** @} */
