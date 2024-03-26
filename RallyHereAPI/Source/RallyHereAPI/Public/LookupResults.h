// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "PlatformIdentityLookupResults.h"
#include "PlayerResponse.h"
#include "LookupResults.generated.h"

/** @defgroup RHAPI_LookupResults RallyHere API Model LookupResults
 *  @{
 */

/**
 * @brief Lookup results for a player query
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_LookupResults : public FRHAPI_Model
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

	/** @brief List of display names and the players that match that display name */
	TArray<TMap<FString, TArray<FRHAPI_PlayerResponse>>> DisplayNames_Optional{  };
	/** @brief true if DisplayNames_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool DisplayNames_IsSet{ false };
	/** @brief Gets the value of DisplayNames_Optional, regardless of it having been set */
	TArray<TMap<FString, TArray<FRHAPI_PlayerResponse>>>& GetDisplayNames() { return DisplayNames_Optional; }
	/** @brief Gets the value of DisplayNames_Optional, regardless of it having been set */
	const TArray<TMap<FString, TArray<FRHAPI_PlayerResponse>>>& GetDisplayNames() const { return DisplayNames_Optional; }
	/** @brief Gets the value of DisplayNames_Optional, if it has been set, otherwise it returns DefaultValue */
	const TArray<TMap<FString, TArray<FRHAPI_PlayerResponse>>>& GetDisplayNames(const TArray<TMap<FString, TArray<FRHAPI_PlayerResponse>>>& DefaultValue) const { if (DisplayNames_IsSet) return DisplayNames_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of DisplayNames_Optional and returns true if it has been set, otherwise returns false */
	bool GetDisplayNames(TArray<TMap<FString, TArray<FRHAPI_PlayerResponse>>>& OutValue) const { if (DisplayNames_IsSet) OutValue = DisplayNames_Optional; return DisplayNames_IsSet; }
	/** @brief Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr */
	TArray<TMap<FString, TArray<FRHAPI_PlayerResponse>>>* GetDisplayNamesOrNull() { if (DisplayNames_IsSet) return &DisplayNames_Optional; return nullptr; }
	/** @brief Returns a pointer to DisplayNames_Optional, if it has been set, otherwise returns nullptr */
	const TArray<TMap<FString, TArray<FRHAPI_PlayerResponse>>>* GetDisplayNamesOrNull() const { if (DisplayNames_IsSet) return &DisplayNames_Optional; return nullptr; }
	/** @brief Sets the value of DisplayNames_Optional and also sets DisplayNames_IsSet to true */
	void SetDisplayNames(TArray<TMap<FString, TArray<FRHAPI_PlayerResponse>>> NewValue) { DisplayNames_Optional = NewValue; DisplayNames_IsSet = true; }
	 /** @brief Clears the value of DisplayNames_Optional and sets DisplayNames_IsSet to false */
	void ClearDisplayNames() { DisplayNames_IsSet = false; }

	/** @brief *DEPRECATED* Use `identity_platforms_by_platform` instead. List of platforms and the players that match that platform user id */
	TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults>> IdentityPlatforms_Optional{  };
	/** @brief true if IdentityPlatforms_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool IdentityPlatforms_IsSet{ false };
	/** @brief Gets the value of IdentityPlatforms_Optional, regardless of it having been set */
	TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults>>& GetIdentityPlatforms() { return IdentityPlatforms_Optional; }
	/** @brief Gets the value of IdentityPlatforms_Optional, regardless of it having been set */
	const TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults>>& GetIdentityPlatforms() const { return IdentityPlatforms_Optional; }
	/** @brief Gets the value of IdentityPlatforms_Optional, if it has been set, otherwise it returns DefaultValue */
	const TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults>>& GetIdentityPlatforms(const TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults>>& DefaultValue) const { if (IdentityPlatforms_IsSet) return IdentityPlatforms_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of IdentityPlatforms_Optional and returns true if it has been set, otherwise returns false */
	bool GetIdentityPlatforms(TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults>>& OutValue) const { if (IdentityPlatforms_IsSet) OutValue = IdentityPlatforms_Optional; return IdentityPlatforms_IsSet; }
	/** @brief Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr */
	TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults>>* GetIdentityPlatformsOrNull() { if (IdentityPlatforms_IsSet) return &IdentityPlatforms_Optional; return nullptr; }
	/** @brief Returns a pointer to IdentityPlatforms_Optional, if it has been set, otherwise returns nullptr */
	const TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults>>* GetIdentityPlatformsOrNull() const { if (IdentityPlatforms_IsSet) return &IdentityPlatforms_Optional; return nullptr; }
	/** @brief Sets the value of IdentityPlatforms_Optional and also sets IdentityPlatforms_IsSet to true */
	void SetIdentityPlatforms(TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults>> NewValue) { IdentityPlatforms_Optional = NewValue; IdentityPlatforms_IsSet = true; }
	 /** @brief Clears the value of IdentityPlatforms_Optional and sets IdentityPlatforms_IsSet to false */
	void ClearIdentityPlatforms() { IdentityPlatforms_IsSet = false; }

	/** @brief List of platforms and the players that match that platform user id */
	TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults>> IdentityPlatformsByPlatform_Optional{  };
	/** @brief true if IdentityPlatformsByPlatform_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool IdentityPlatformsByPlatform_IsSet{ false };
	/** @brief Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set */
	TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults>>& GetIdentityPlatformsByPlatform() { return IdentityPlatformsByPlatform_Optional; }
	/** @brief Gets the value of IdentityPlatformsByPlatform_Optional, regardless of it having been set */
	const TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults>>& GetIdentityPlatformsByPlatform() const { return IdentityPlatformsByPlatform_Optional; }
	/** @brief Gets the value of IdentityPlatformsByPlatform_Optional, if it has been set, otherwise it returns DefaultValue */
	const TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults>>& GetIdentityPlatformsByPlatform(const TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults>>& DefaultValue) const { if (IdentityPlatformsByPlatform_IsSet) return IdentityPlatformsByPlatform_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of IdentityPlatformsByPlatform_Optional and returns true if it has been set, otherwise returns false */
	bool GetIdentityPlatformsByPlatform(TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults>>& OutValue) const { if (IdentityPlatformsByPlatform_IsSet) OutValue = IdentityPlatformsByPlatform_Optional; return IdentityPlatformsByPlatform_IsSet; }
	/** @brief Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr */
	TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults>>* GetIdentityPlatformsByPlatformOrNull() { if (IdentityPlatformsByPlatform_IsSet) return &IdentityPlatformsByPlatform_Optional; return nullptr; }
	/** @brief Returns a pointer to IdentityPlatformsByPlatform_Optional, if it has been set, otherwise returns nullptr */
	const TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults>>* GetIdentityPlatformsByPlatformOrNull() const { if (IdentityPlatformsByPlatform_IsSet) return &IdentityPlatformsByPlatform_Optional; return nullptr; }
	/** @brief Sets the value of IdentityPlatformsByPlatform_Optional and also sets IdentityPlatformsByPlatform_IsSet to true */
	void SetIdentityPlatformsByPlatform(TMap<FString, TArray<FRHAPI_PlatformIdentityLookupResults>> NewValue) { IdentityPlatformsByPlatform_Optional = NewValue; IdentityPlatformsByPlatform_IsSet = true; }
	 /** @brief Clears the value of IdentityPlatformsByPlatform_Optional and sets IdentityPlatformsByPlatform_IsSet to false */
	void ClearIdentityPlatformsByPlatform() { IdentityPlatformsByPlatform_IsSet = false; }
};

/** @} */
