// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "HzApiErrorModel.generated.h"

/** @defgroup RHAPI_HzApiErrorModel RallyHere API Model HzApiErrorModel
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_HzApiErrorModel : public FRHAPI_Model
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
	bool AuthSuccess_Optional{  };
	/** @brief true if AuthSuccess_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool AuthSuccess_IsSet{ false };
	/** @brief Gets the value of AuthSuccess_Optional, regardless of it having been set */
	bool& GetAuthSuccess() { return AuthSuccess_Optional; }
	/** @brief Gets the value of AuthSuccess_Optional, regardless of it having been set */
	const bool& GetAuthSuccess() const { return AuthSuccess_Optional; }
	/** @brief Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue */
	const bool& GetAuthSuccess(const bool& DefaultValue) const { if (AuthSuccess_IsSet) return AuthSuccess_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false */
	bool GetAuthSuccess(bool& OutValue) const { if (AuthSuccess_IsSet) OutValue = AuthSuccess_Optional; return AuthSuccess_IsSet; }
	/** @brief Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr */
	bool* GetAuthSuccessOrNull() { if (AuthSuccess_IsSet) return &AuthSuccess_Optional; return nullptr; }
	/** @brief Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr */
	const bool* GetAuthSuccessOrNull() const { if (AuthSuccess_IsSet) return &AuthSuccess_Optional; return nullptr; }
	/** @brief Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true */
	void SetAuthSuccess(const bool& NewValue) { AuthSuccess_Optional = NewValue; AuthSuccess_IsSet = true; }
	/** @brief Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true using move semantics */
	void SetAuthSuccess(bool&& NewValue) { AuthSuccess_Optional = NewValue; AuthSuccess_IsSet = true; }
	 /** @brief Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false */
	void ClearAuthSuccess() { AuthSuccess_Optional = true; AuthSuccess_IsSet = false; }
	/** @brief Returns true if AuthSuccess_Optional is set and matches the default value */
	bool IsAuthSuccessDefaultValue() const { return AuthSuccess_IsSet && AuthSuccess_Optional == true; }
	/** @brief Sets the value of AuthSuccess_Optional to its default and also sets AuthSuccess_IsSet to true */
	void SetAuthSuccessToDefault() { AuthSuccess_Optional = true; AuthSuccess_IsSet = true; }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString ErrorCode{  };
	/** @brief Gets the value of ErrorCode */
	FString& GetErrorCode() { return ErrorCode; }
	/** @brief Gets the value of ErrorCode */
	const FString& GetErrorCode() const { return ErrorCode; }
	/** @brief Sets the value of ErrorCode */
	void SetErrorCode(const FString& NewValue) { ErrorCode = NewValue;  }
	/** @brief Sets the value of ErrorCode using move semantics */
	void SetErrorCode(FString&& NewValue) { ErrorCode = NewValue;  }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString Desc{  };
	/** @brief Gets the value of Desc */
	FString& GetDesc() { return Desc; }
	/** @brief Gets the value of Desc */
	const FString& GetDesc() const { return Desc; }
	/** @brief Sets the value of Desc */
	void SetDesc(const FString& NewValue) { Desc = NewValue;  }
	/** @brief Sets the value of Desc using move semantics */
	void SetDesc(FString&& NewValue) { Desc = NewValue;  }
};

/** @} */
