// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "FileResponse.generated.h"

/** @defgroup RHAPI_FileResponse RallyHere API Model FileResponse
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_FileResponse : public FRHAPI_Model
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
	FString Name{  };
	/** @brief Gets the value of Name */
	FString& GetName() { return Name; }
	/** @brief Gets the value of Name */
	const FString& GetName() const { return Name; }
	/** @brief Sets the value of Name */
	void SetName(FString NewValue) { Name = NewValue;  }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 Size{ 0 };
	/** @brief Gets the value of Size */
	int32& GetSize() { return Size; }
	/** @brief Gets the value of Size */
	const int32& GetSize() const { return Size; }
	/** @brief Sets the value of Size */
	void SetSize(int32 NewValue) { Size = NewValue;  }
	/** @brief Returns true if Size matches the default value */
	bool IsSizeDefaultValue() const { return Size == 0; }
	/** @brief Sets the value of Size to its default  */
	void SetSizeToDefault() { Size = 0;  }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString ContentType{  };
	/** @brief Gets the value of ContentType */
	FString& GetContentType() { return ContentType; }
	/** @brief Gets the value of ContentType */
	const FString& GetContentType() const { return ContentType; }
	/** @brief Sets the value of ContentType */
	void SetContentType(FString NewValue) { ContentType = NewValue;  }

	/** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FDateTime CreatedTimestamp{  };
	/** @brief Gets the value of CreatedTimestamp */
	FDateTime& GetCreatedTimestamp() { return CreatedTimestamp; }
	/** @brief Gets the value of CreatedTimestamp */
	const FDateTime& GetCreatedTimestamp() const { return CreatedTimestamp; }
	/** @brief Sets the value of CreatedTimestamp */
	void SetCreatedTimestamp(FDateTime NewValue) { CreatedTimestamp = NewValue;  }
};

/** @} */
