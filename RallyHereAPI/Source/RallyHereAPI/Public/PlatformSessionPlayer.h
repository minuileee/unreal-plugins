// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "PlatformSessionPlayer.generated.h"

/** @defgroup RHAPI_PlatformSessionPlayer RallyHere API Model PlatformSessionPlayer
 *  @{
 */

/**
 * @brief A platform player resource in a platform session
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlatformSessionPlayer : public FRHAPI_Model
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

	/** @brief Player ID representing the current player */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 PlayerId_Optional{  };
	/** @brief true if PlayerId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool PlayerId_IsSet{ false };
	/** @brief Gets the value of PlayerId_Optional, regardless of it having been set */
	int32& GetPlayerId() { return PlayerId_Optional; }
	/** @brief Gets the value of PlayerId_Optional, regardless of it having been set */
	const int32& GetPlayerId() const { return PlayerId_Optional; }
	/** @brief Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue */
	const int32& GetPlayerId(const int32& DefaultValue) const { if (PlayerId_IsSet) return PlayerId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false */
	bool GetPlayerId(int32& OutValue) const { if (PlayerId_IsSet) OutValue = PlayerId_Optional; return PlayerId_IsSet; }
	/** @brief Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr */
	int32* GetPlayerIdOrNull() { if (PlayerId_IsSet) return &PlayerId_Optional; return nullptr; }
	/** @brief Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr */
	const int32* GetPlayerIdOrNull() const { if (PlayerId_IsSet) return &PlayerId_Optional; return nullptr; }
	/** @brief Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true */
	void SetPlayerId(int32 NewValue) { PlayerId_Optional = NewValue; PlayerId_IsSet = true; }
	 /** @brief Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false */
	void ClearPlayerId() { PlayerId_Optional = 0; PlayerId_IsSet = false; }
	/** @brief Returns true if PlayerId_Optional is set and matches the default value */
	bool IsPlayerIdDefaultValue() const { return PlayerId_IsSet && PlayerId_Optional == 0; }
	/** @brief Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true */
	void SetPlayerIdToDefault() { PlayerId_Optional = 0; PlayerId_IsSet = true; }

	/** @brief Player UUID representing the current player */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FGuid PlayerUuid{  };
	/** @brief Gets the value of PlayerUuid */
	FGuid& GetPlayerUuid() { return PlayerUuid; }
	/** @brief Gets the value of PlayerUuid */
	const FGuid& GetPlayerUuid() const { return PlayerUuid; }
	/** @brief Sets the value of PlayerUuid */
	void SetPlayerUuid(FGuid NewValue) { PlayerUuid = NewValue;  }

	/** @brief Is this player the leader of the platform session?  When setting up the parent session, if all players are from the same platform session, leadership is coordinated */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Leader_Optional{  };
	/** @brief true if Leader_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Leader_IsSet{ false };
	/** @brief Gets the value of Leader_Optional, regardless of it having been set */
	bool& GetLeader() { return Leader_Optional; }
	/** @brief Gets the value of Leader_Optional, regardless of it having been set */
	const bool& GetLeader() const { return Leader_Optional; }
	/** @brief Gets the value of Leader_Optional, if it has been set, otherwise it returns DefaultValue */
	const bool& GetLeader(const bool& DefaultValue) const { if (Leader_IsSet) return Leader_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Leader_Optional and returns true if it has been set, otherwise returns false */
	bool GetLeader(bool& OutValue) const { if (Leader_IsSet) OutValue = Leader_Optional; return Leader_IsSet; }
	/** @brief Returns a pointer to Leader_Optional, if it has been set, otherwise returns nullptr */
	bool* GetLeaderOrNull() { if (Leader_IsSet) return &Leader_Optional; return nullptr; }
	/** @brief Returns a pointer to Leader_Optional, if it has been set, otherwise returns nullptr */
	const bool* GetLeaderOrNull() const { if (Leader_IsSet) return &Leader_Optional; return nullptr; }
	/** @brief Sets the value of Leader_Optional and also sets Leader_IsSet to true */
	void SetLeader(bool NewValue) { Leader_Optional = NewValue; Leader_IsSet = true; }
	 /** @brief Clears the value of Leader_Optional and sets Leader_IsSet to false */
	void ClearLeader() { Leader_Optional = false; Leader_IsSet = false; }
	/** @brief Returns true if Leader_Optional is set and matches the default value */
	bool IsLeaderDefaultValue() const { return Leader_IsSet && Leader_Optional == false; }
	/** @brief Sets the value of Leader_Optional to its default and also sets Leader_IsSet to true */
	void SetLeaderToDefault() { Leader_Optional = false; Leader_IsSet = true; }
};

/** @} */
