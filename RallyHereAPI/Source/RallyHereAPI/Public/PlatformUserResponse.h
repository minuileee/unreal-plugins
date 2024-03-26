// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "Platform.h"
#include "PlatformUserResponse.generated.h"

/** @defgroup RHAPI_PlatformUserResponse RallyHere API Model PlatformUserResponse
 *  @{
 */

/**
 * @brief Response for successfully creating a platform user
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlatformUserResponse : public FRHAPI_Model
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

	/** @brief Platform to search/create with */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_Platform Platform{  };
	/** @brief Gets the value of Platform */
	ERHAPI_Platform& GetPlatform() { return Platform; }
	/** @brief Gets the value of Platform */
	const ERHAPI_Platform& GetPlatform() const { return Platform; }
	/** @brief Sets the value of Platform */
	void SetPlatform(ERHAPI_Platform NewValue) { Platform = NewValue;  }

	/** @brief Platform user ID to search/create with */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString PlatformUserId{  };
	/** @brief Gets the value of PlatformUserId */
	FString& GetPlatformUserId() { return PlatformUserId; }
	/** @brief Gets the value of PlatformUserId */
	const FString& GetPlatformUserId() const { return PlatformUserId; }
	/** @brief Sets the value of PlatformUserId */
	void SetPlatformUserId(FString NewValue) { PlatformUserId = NewValue;  }

	/** @brief Platform Display name */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString DisplayName_Optional{  };
	/** @brief true if DisplayName_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool DisplayName_IsSet{ false };
	/** @brief Gets the value of DisplayName_Optional, regardless of it having been set */
	FString& GetDisplayName() { return DisplayName_Optional; }
	/** @brief Gets the value of DisplayName_Optional, regardless of it having been set */
	const FString& GetDisplayName() const { return DisplayName_Optional; }
	/** @brief Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetDisplayName(const FString& DefaultValue) const { if (DisplayName_IsSet) return DisplayName_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false */
	bool GetDisplayName(FString& OutValue) const { if (DisplayName_IsSet) OutValue = DisplayName_Optional; return DisplayName_IsSet; }
	/** @brief Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr */
	FString* GetDisplayNameOrNull() { if (DisplayName_IsSet) return &DisplayName_Optional; return nullptr; }
	/** @brief Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetDisplayNameOrNull() const { if (DisplayName_IsSet) return &DisplayName_Optional; return nullptr; }
	/** @brief Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true */
	void SetDisplayName(FString NewValue) { DisplayName_Optional = NewValue; DisplayName_IsSet = true; }
	 /** @brief Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false */
	void ClearDisplayName() { DisplayName_IsSet = false; }

	/** @brief Player ID *DEPRECATED* use `player_uuid` instead */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 PlayerId{ 0 };
	/** @brief Gets the value of PlayerId */
	int32& GetPlayerId() { return PlayerId; }
	/** @brief Gets the value of PlayerId */
	const int32& GetPlayerId() const { return PlayerId; }
	/** @brief Sets the value of PlayerId */
	void SetPlayerId(int32 NewValue) { PlayerId = NewValue;  }
	/** @brief Returns true if PlayerId matches the default value */
	bool IsPlayerIdDefaultValue() const { return PlayerId == 0; }
	/** @brief Sets the value of PlayerId to its default  */
	void SetPlayerIdToDefault() { PlayerId = 0;  }

	/** @brief Player UUID */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FGuid PlayerUuid{  };
	/** @brief Gets the value of PlayerUuid */
	FGuid& GetPlayerUuid() { return PlayerUuid; }
	/** @brief Gets the value of PlayerUuid */
	const FGuid& GetPlayerUuid() const { return PlayerUuid; }
	/** @brief Sets the value of PlayerUuid */
	void SetPlayerUuid(FGuid NewValue) { PlayerUuid = NewValue;  }

	/** @brief Person ID */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FGuid PersonId{  };
	/** @brief Gets the value of PersonId */
	FGuid& GetPersonId() { return PersonId; }
	/** @brief Gets the value of PersonId */
	const FGuid& GetPersonId() const { return PersonId; }
	/** @brief Sets the value of PersonId */
	void SetPersonId(FGuid NewValue) { PersonId = NewValue;  }

	/** @brief *DEPRECATED* use `active_player_uuid` instead.  Active player ID, if the player has an active player. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 ActivePlayerId_Optional{  };
	/** @brief true if ActivePlayerId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool ActivePlayerId_IsSet{ false };
	/** @brief Gets the value of ActivePlayerId_Optional, regardless of it having been set */
	int32& GetActivePlayerId() { return ActivePlayerId_Optional; }
	/** @brief Gets the value of ActivePlayerId_Optional, regardless of it having been set */
	const int32& GetActivePlayerId() const { return ActivePlayerId_Optional; }
	/** @brief Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue */
	const int32& GetActivePlayerId(const int32& DefaultValue) const { if (ActivePlayerId_IsSet) return ActivePlayerId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false */
	bool GetActivePlayerId(int32& OutValue) const { if (ActivePlayerId_IsSet) OutValue = ActivePlayerId_Optional; return ActivePlayerId_IsSet; }
	/** @brief Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr */
	int32* GetActivePlayerIdOrNull() { if (ActivePlayerId_IsSet) return &ActivePlayerId_Optional; return nullptr; }
	/** @brief Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr */
	const int32* GetActivePlayerIdOrNull() const { if (ActivePlayerId_IsSet) return &ActivePlayerId_Optional; return nullptr; }
	/** @brief Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true */
	void SetActivePlayerId(int32 NewValue) { ActivePlayerId_Optional = NewValue; ActivePlayerId_IsSet = true; }
	 /** @brief Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false */
	void ClearActivePlayerId() { ActivePlayerId_Optional = 0; ActivePlayerId_IsSet = false; }
	/** @brief Returns true if ActivePlayerId_Optional is set and matches the default value */
	bool IsActivePlayerIdDefaultValue() const { return ActivePlayerId_IsSet && ActivePlayerId_Optional == 0; }
	/** @brief Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true */
	void SetActivePlayerIdToDefault() { ActivePlayerId_Optional = 0; ActivePlayerId_IsSet = true; }

	/** @brief Active player UUID, if the player has an active player. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FGuid ActivePlayerUuid_Optional{  };
	/** @brief true if ActivePlayerUuid_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool ActivePlayerUuid_IsSet{ false };
	/** @brief Gets the value of ActivePlayerUuid_Optional, regardless of it having been set */
	FGuid& GetActivePlayerUuid() { return ActivePlayerUuid_Optional; }
	/** @brief Gets the value of ActivePlayerUuid_Optional, regardless of it having been set */
	const FGuid& GetActivePlayerUuid() const { return ActivePlayerUuid_Optional; }
	/** @brief Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue */
	const FGuid& GetActivePlayerUuid(const FGuid& DefaultValue) const { if (ActivePlayerUuid_IsSet) return ActivePlayerUuid_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false */
	bool GetActivePlayerUuid(FGuid& OutValue) const { if (ActivePlayerUuid_IsSet) OutValue = ActivePlayerUuid_Optional; return ActivePlayerUuid_IsSet; }
	/** @brief Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr */
	FGuid* GetActivePlayerUuidOrNull() { if (ActivePlayerUuid_IsSet) return &ActivePlayerUuid_Optional; return nullptr; }
	/** @brief Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr */
	const FGuid* GetActivePlayerUuidOrNull() const { if (ActivePlayerUuid_IsSet) return &ActivePlayerUuid_Optional; return nullptr; }
	/** @brief Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true */
	void SetActivePlayerUuid(FGuid NewValue) { ActivePlayerUuid_Optional = NewValue; ActivePlayerUuid_IsSet = true; }
	 /** @brief Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false */
	void ClearActivePlayerUuid() { ActivePlayerUuid_IsSet = false; }
};

/** @} */
