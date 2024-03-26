// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "MatchPlayerWithMatch.h"
#include "PagedPlayerMatchResponse.generated.h"

/** @defgroup RHAPI_PagedPlayerMatchResponse RallyHere API Model PagedPlayerMatchResponse
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PagedPlayerMatchResponse : public FRHAPI_Model
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

	/** @brief List of player's matches */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TArray<FRHAPI_MatchPlayerWithMatch> PlayerMatches_Optional{  };
	/** @brief true if PlayerMatches_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool PlayerMatches_IsSet{ false };
	/** @brief Gets the value of PlayerMatches_Optional, regardless of it having been set */
	TArray<FRHAPI_MatchPlayerWithMatch>& GetPlayerMatches() { return PlayerMatches_Optional; }
	/** @brief Gets the value of PlayerMatches_Optional, regardless of it having been set */
	const TArray<FRHAPI_MatchPlayerWithMatch>& GetPlayerMatches() const { return PlayerMatches_Optional; }
	/** @brief Gets the value of PlayerMatches_Optional, if it has been set, otherwise it returns DefaultValue */
	const TArray<FRHAPI_MatchPlayerWithMatch>& GetPlayerMatches(const TArray<FRHAPI_MatchPlayerWithMatch>& DefaultValue) const { if (PlayerMatches_IsSet) return PlayerMatches_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of PlayerMatches_Optional and returns true if it has been set, otherwise returns false */
	bool GetPlayerMatches(TArray<FRHAPI_MatchPlayerWithMatch>& OutValue) const { if (PlayerMatches_IsSet) OutValue = PlayerMatches_Optional; return PlayerMatches_IsSet; }
	/** @brief Returns a pointer to PlayerMatches_Optional, if it has been set, otherwise returns nullptr */
	TArray<FRHAPI_MatchPlayerWithMatch>* GetPlayerMatchesOrNull() { if (PlayerMatches_IsSet) return &PlayerMatches_Optional; return nullptr; }
	/** @brief Returns a pointer to PlayerMatches_Optional, if it has been set, otherwise returns nullptr */
	const TArray<FRHAPI_MatchPlayerWithMatch>* GetPlayerMatchesOrNull() const { if (PlayerMatches_IsSet) return &PlayerMatches_Optional; return nullptr; }
	/** @brief Sets the value of PlayerMatches_Optional and also sets PlayerMatches_IsSet to true */
	void SetPlayerMatches(TArray<FRHAPI_MatchPlayerWithMatch> NewValue) { PlayerMatches_Optional = NewValue; PlayerMatches_IsSet = true; }
	 /** @brief Clears the value of PlayerMatches_Optional and sets PlayerMatches_IsSet to false */
	void ClearPlayerMatches() { PlayerMatches_IsSet = false; }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString Cursor_Optional{  };
	/** @brief true if Cursor_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Cursor_IsSet{ false };
	/** @brief Gets the value of Cursor_Optional, regardless of it having been set */
	FString& GetCursor() { return Cursor_Optional; }
	/** @brief Gets the value of Cursor_Optional, regardless of it having been set */
	const FString& GetCursor() const { return Cursor_Optional; }
	/** @brief Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetCursor(const FString& DefaultValue) const { if (Cursor_IsSet) return Cursor_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false */
	bool GetCursor(FString& OutValue) const { if (Cursor_IsSet) OutValue = Cursor_Optional; return Cursor_IsSet; }
	/** @brief Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr */
	FString* GetCursorOrNull() { if (Cursor_IsSet) return &Cursor_Optional; return nullptr; }
	/** @brief Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetCursorOrNull() const { if (Cursor_IsSet) return &Cursor_Optional; return nullptr; }
	/** @brief Sets the value of Cursor_Optional and also sets Cursor_IsSet to true */
	void SetCursor(FString NewValue) { Cursor_Optional = NewValue; Cursor_IsSet = true; }
	 /** @brief Clears the value of Cursor_Optional and sets Cursor_IsSet to false */
	void ClearCursor() { Cursor_IsSet = false; }
};

/** @} */
