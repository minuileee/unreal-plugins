// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "BodyFindOpportunities.generated.h"

/** @defgroup RHAPI_BodyFindOpportunities RallyHere API Model BodyFindOpportunities
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_BodyFindOpportunities : public FRHAPI_Model
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

	/** @brief Width of the screen in pixels */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 ScreenPixelWidth_Optional{  };
	/** @brief true if ScreenPixelWidth_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool ScreenPixelWidth_IsSet{ false };
	/** @brief Gets the value of ScreenPixelWidth_Optional, regardless of it having been set */
	int32& GetScreenPixelWidth() { return ScreenPixelWidth_Optional; }
	/** @brief Gets the value of ScreenPixelWidth_Optional, regardless of it having been set */
	const int32& GetScreenPixelWidth() const { return ScreenPixelWidth_Optional; }
	/** @brief Gets the value of ScreenPixelWidth_Optional, if it has been set, otherwise it returns DefaultValue */
	const int32& GetScreenPixelWidth(const int32& DefaultValue) const { if (ScreenPixelWidth_IsSet) return ScreenPixelWidth_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of ScreenPixelWidth_Optional and returns true if it has been set, otherwise returns false */
	bool GetScreenPixelWidth(int32& OutValue) const { if (ScreenPixelWidth_IsSet) OutValue = ScreenPixelWidth_Optional; return ScreenPixelWidth_IsSet; }
	/** @brief Returns a pointer to ScreenPixelWidth_Optional, if it has been set, otherwise returns nullptr */
	int32* GetScreenPixelWidthOrNull() { if (ScreenPixelWidth_IsSet) return &ScreenPixelWidth_Optional; return nullptr; }
	/** @brief Returns a pointer to ScreenPixelWidth_Optional, if it has been set, otherwise returns nullptr */
	const int32* GetScreenPixelWidthOrNull() const { if (ScreenPixelWidth_IsSet) return &ScreenPixelWidth_Optional; return nullptr; }
	/** @brief Sets the value of ScreenPixelWidth_Optional and also sets ScreenPixelWidth_IsSet to true */
	void SetScreenPixelWidth(const int32& NewValue) { ScreenPixelWidth_Optional = NewValue; ScreenPixelWidth_IsSet = true; }
	/** @brief Sets the value of ScreenPixelWidth_Optional and also sets ScreenPixelWidth_IsSet to true using move semantics */
	void SetScreenPixelWidth(int32&& NewValue) { ScreenPixelWidth_Optional = NewValue; ScreenPixelWidth_IsSet = true; }
	 /** @brief Clears the value of ScreenPixelWidth_Optional and sets ScreenPixelWidth_IsSet to false */
	void ClearScreenPixelWidth() { ScreenPixelWidth_Optional = 0; ScreenPixelWidth_IsSet = false; }
	/** @brief Returns true if ScreenPixelWidth_Optional is set and matches the default value */
	bool IsScreenPixelWidthDefaultValue() const { return ScreenPixelWidth_IsSet && ScreenPixelWidth_Optional == 0; }
	/** @brief Sets the value of ScreenPixelWidth_Optional to its default and also sets ScreenPixelWidth_IsSet to true */
	void SetScreenPixelWidthToDefault() { ScreenPixelWidth_Optional = 0; ScreenPixelWidth_IsSet = true; }

	/** @brief Height of the screen in pixels */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 ScreenPixelHeight_Optional{  };
	/** @brief true if ScreenPixelHeight_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool ScreenPixelHeight_IsSet{ false };
	/** @brief Gets the value of ScreenPixelHeight_Optional, regardless of it having been set */
	int32& GetScreenPixelHeight() { return ScreenPixelHeight_Optional; }
	/** @brief Gets the value of ScreenPixelHeight_Optional, regardless of it having been set */
	const int32& GetScreenPixelHeight() const { return ScreenPixelHeight_Optional; }
	/** @brief Gets the value of ScreenPixelHeight_Optional, if it has been set, otherwise it returns DefaultValue */
	const int32& GetScreenPixelHeight(const int32& DefaultValue) const { if (ScreenPixelHeight_IsSet) return ScreenPixelHeight_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of ScreenPixelHeight_Optional and returns true if it has been set, otherwise returns false */
	bool GetScreenPixelHeight(int32& OutValue) const { if (ScreenPixelHeight_IsSet) OutValue = ScreenPixelHeight_Optional; return ScreenPixelHeight_IsSet; }
	/** @brief Returns a pointer to ScreenPixelHeight_Optional, if it has been set, otherwise returns nullptr */
	int32* GetScreenPixelHeightOrNull() { if (ScreenPixelHeight_IsSet) return &ScreenPixelHeight_Optional; return nullptr; }
	/** @brief Returns a pointer to ScreenPixelHeight_Optional, if it has been set, otherwise returns nullptr */
	const int32* GetScreenPixelHeightOrNull() const { if (ScreenPixelHeight_IsSet) return &ScreenPixelHeight_Optional; return nullptr; }
	/** @brief Sets the value of ScreenPixelHeight_Optional and also sets ScreenPixelHeight_IsSet to true */
	void SetScreenPixelHeight(const int32& NewValue) { ScreenPixelHeight_Optional = NewValue; ScreenPixelHeight_IsSet = true; }
	/** @brief Sets the value of ScreenPixelHeight_Optional and also sets ScreenPixelHeight_IsSet to true using move semantics */
	void SetScreenPixelHeight(int32&& NewValue) { ScreenPixelHeight_Optional = NewValue; ScreenPixelHeight_IsSet = true; }
	 /** @brief Clears the value of ScreenPixelHeight_Optional and sets ScreenPixelHeight_IsSet to false */
	void ClearScreenPixelHeight() { ScreenPixelHeight_Optional = 0; ScreenPixelHeight_IsSet = false; }
	/** @brief Returns true if ScreenPixelHeight_Optional is set and matches the default value */
	bool IsScreenPixelHeightDefaultValue() const { return ScreenPixelHeight_IsSet && ScreenPixelHeight_Optional == 0; }
	/** @brief Sets the value of ScreenPixelHeight_Optional to its default and also sets ScreenPixelHeight_IsSet to true */
	void SetScreenPixelHeightToDefault() { ScreenPixelHeight_Optional = 0; ScreenPixelHeight_IsSet = true; }

	/** @brief [ISO 3166-1 alpha-2](https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2) country code for the user */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString CountryCode{  };
	/** @brief Gets the value of CountryCode */
	FString& GetCountryCode() { return CountryCode; }
	/** @brief Gets the value of CountryCode */
	const FString& GetCountryCode() const { return CountryCode; }
	/** @brief Sets the value of CountryCode */
	void SetCountryCode(const FString& NewValue) { CountryCode = NewValue;  }
	/** @brief Sets the value of CountryCode using move semantics */
	void SetCountryCode(FString&& NewValue) { CountryCode = NewValue;  }

	/** @brief [ISO 639-2](https://www.loc.gov/standards/iso639-2/php/code_list.php) language code */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString LanguageCode{  };
	/** @brief Gets the value of LanguageCode */
	FString& GetLanguageCode() { return LanguageCode; }
	/** @brief Gets the value of LanguageCode */
	const FString& GetLanguageCode() const { return LanguageCode; }
	/** @brief Sets the value of LanguageCode */
	void SetLanguageCode(const FString& NewValue) { LanguageCode = NewValue;  }
	/** @brief Sets the value of LanguageCode using move semantics */
	void SetLanguageCode(FString&& NewValue) { LanguageCode = NewValue;  }

	/** @brief Unique Identifier for the device a session is started on.  E.g should be the same for multiple users on the same device. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString DeviceId_Optional{  };
	/** @brief true if DeviceId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool DeviceId_IsSet{ false };
	/** @brief Gets the value of DeviceId_Optional, regardless of it having been set */
	FString& GetDeviceId() { return DeviceId_Optional; }
	/** @brief Gets the value of DeviceId_Optional, regardless of it having been set */
	const FString& GetDeviceId() const { return DeviceId_Optional; }
	/** @brief Gets the value of DeviceId_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetDeviceId(const FString& DefaultValue) const { if (DeviceId_IsSet) return DeviceId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of DeviceId_Optional and returns true if it has been set, otherwise returns false */
	bool GetDeviceId(FString& OutValue) const { if (DeviceId_IsSet) OutValue = DeviceId_Optional; return DeviceId_IsSet; }
	/** @brief Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr */
	FString* GetDeviceIdOrNull() { if (DeviceId_IsSet) return &DeviceId_Optional; return nullptr; }
	/** @brief Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetDeviceIdOrNull() const { if (DeviceId_IsSet) return &DeviceId_Optional; return nullptr; }
	/** @brief Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true */
	void SetDeviceId(const FString& NewValue) { DeviceId_Optional = NewValue; DeviceId_IsSet = true; }
	/** @brief Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true using move semantics */
	void SetDeviceId(FString&& NewValue) { DeviceId_Optional = NewValue; DeviceId_IsSet = true; }
	 /** @brief Clears the value of DeviceId_Optional and sets DeviceId_IsSet to false */
	void ClearDeviceId() { DeviceId_IsSet = false; }
};

/** @} */
