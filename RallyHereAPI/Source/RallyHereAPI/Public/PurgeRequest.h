// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "PurgeRequest.generated.h"

/** @defgroup RHAPI_PurgeRequest RallyHere API Model PurgeRequest
 *  @{
 */

/**
 * @brief Purge request to purge a person from the system.  This will remove all data about that player from the system.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PurgeRequest : public FRHAPI_Model
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

	/** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FDateTime SuggestedPurgeTime_Optional{  };
	/** @brief true if SuggestedPurgeTime_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool SuggestedPurgeTime_IsSet{ false };
	/** @brief Gets the value of SuggestedPurgeTime_Optional, regardless of it having been set */
	FDateTime& GetSuggestedPurgeTime() { return SuggestedPurgeTime_Optional; }
	/** @brief Gets the value of SuggestedPurgeTime_Optional, regardless of it having been set */
	const FDateTime& GetSuggestedPurgeTime() const { return SuggestedPurgeTime_Optional; }
	/** @brief Gets the value of SuggestedPurgeTime_Optional, if it has been set, otherwise it returns DefaultValue */
	const FDateTime& GetSuggestedPurgeTime(const FDateTime& DefaultValue) const { if (SuggestedPurgeTime_IsSet) return SuggestedPurgeTime_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of SuggestedPurgeTime_Optional and returns true if it has been set, otherwise returns false */
	bool GetSuggestedPurgeTime(FDateTime& OutValue) const { if (SuggestedPurgeTime_IsSet) OutValue = SuggestedPurgeTime_Optional; return SuggestedPurgeTime_IsSet; }
	/** @brief Returns a pointer to SuggestedPurgeTime_Optional, if it has been set, otherwise returns nullptr */
	FDateTime* GetSuggestedPurgeTimeOrNull() { if (SuggestedPurgeTime_IsSet) return &SuggestedPurgeTime_Optional; return nullptr; }
	/** @brief Returns a pointer to SuggestedPurgeTime_Optional, if it has been set, otherwise returns nullptr */
	const FDateTime* GetSuggestedPurgeTimeOrNull() const { if (SuggestedPurgeTime_IsSet) return &SuggestedPurgeTime_Optional; return nullptr; }
	/** @brief Sets the value of SuggestedPurgeTime_Optional and also sets SuggestedPurgeTime_IsSet to true */
	void SetSuggestedPurgeTime(const FDateTime& NewValue) { SuggestedPurgeTime_Optional = NewValue; SuggestedPurgeTime_IsSet = true; }
	/** @brief Sets the value of SuggestedPurgeTime_Optional and also sets SuggestedPurgeTime_IsSet to true using move semantics */
	void SetSuggestedPurgeTime(FDateTime&& NewValue) { SuggestedPurgeTime_Optional = NewValue; SuggestedPurgeTime_IsSet = true; }
	 /** @brief Clears the value of SuggestedPurgeTime_Optional and sets SuggestedPurgeTime_IsSet to false */
	void ClearSuggestedPurgeTime() { SuggestedPurgeTime_IsSet = false; }
};

/** @} */
