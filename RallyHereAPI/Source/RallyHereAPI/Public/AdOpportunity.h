// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "AdOpportunity.generated.h"

/** @defgroup RHAPI_AdOpportunity RallyHere API Model AdOpportunity
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_AdOpportunity : public FRHAPI_Model
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

	/** @brief The URL to the ad */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString AdUrl{  };
	/** @brief Gets the value of AdUrl */
	FString& GetAdUrl() { return AdUrl; }
	/** @brief Gets the value of AdUrl */
	const FString& GetAdUrl() const { return AdUrl; }
	/** @brief Sets the value of AdUrl */
	void SetAdUrl(const FString& NewValue) { AdUrl = NewValue;  }
	/** @brief Sets the value of AdUrl using move semantics */
	void SetAdUrl(FString&& NewValue) { AdUrl = NewValue;  }

	/** @brief The number of seconds the ad is */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 Seconds{ 0 };
	/** @brief Gets the value of Seconds */
	int32& GetSeconds() { return Seconds; }
	/** @brief Gets the value of Seconds */
	const int32& GetSeconds() const { return Seconds; }
	/** @brief Sets the value of Seconds */
	void SetSeconds(const int32& NewValue) { Seconds = NewValue;  }
	/** @brief Sets the value of Seconds using move semantics */
	void SetSeconds(int32&& NewValue) { Seconds = NewValue;  }
	/** @brief Returns true if Seconds matches the default value */
	bool IsSecondsDefaultValue() const { return Seconds == 0; }
	/** @brief Sets the value of Seconds to its default  */
	void SetSecondsToDefault() { Seconds = 0;  }

	/** @brief The ID of the ad opportunity */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString OpportunityId{  };
	/** @brief Gets the value of OpportunityId */
	FString& GetOpportunityId() { return OpportunityId; }
	/** @brief Gets the value of OpportunityId */
	const FString& GetOpportunityId() const { return OpportunityId; }
	/** @brief Sets the value of OpportunityId */
	void SetOpportunityId(const FString& NewValue) { OpportunityId = NewValue;  }
	/** @brief Sets the value of OpportunityId using move semantics */
	void SetOpportunityId(FString&& NewValue) { OpportunityId = NewValue;  }
};

/** @} */
