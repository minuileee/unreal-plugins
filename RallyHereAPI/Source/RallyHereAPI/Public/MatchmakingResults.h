// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "MatchmakingResults.generated.h"

/** @defgroup RHAPI_MatchmakingResults RallyHere API Model MatchmakingResults
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_MatchmakingResults : public FRHAPI_Model
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

	/** @brief Unique ID */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString MatchMakingId{  };
	/** @brief Gets the value of MatchMakingId */
	FString& GetMatchMakingId() { return MatchMakingId; }
	/** @brief Gets the value of MatchMakingId */
	const FString& GetMatchMakingId() const { return MatchMakingId; }
	/** @brief Sets the value of MatchMakingId */
	void SetMatchMakingId(const FString& NewValue) { MatchMakingId = NewValue;  }
	/** @brief Sets the value of MatchMakingId using move semantics */
	void SetMatchMakingId(FString&& NewValue) { MatchMakingId = NewValue;  }

	/** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FDateTime Created{  };
	/** @brief Gets the value of Created */
	FDateTime& GetCreated() { return Created; }
	/** @brief Gets the value of Created */
	const FDateTime& GetCreated() const { return Created; }
	/** @brief Sets the value of Created */
	void SetCreated(const FDateTime& NewValue) { Created = NewValue;  }
	/** @brief Sets the value of Created using move semantics */
	void SetCreated(FDateTime&& NewValue) { Created = NewValue;  }

	/** @brief MMF defined custom data */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TMap<FString, FString> CustomData_Optional{  };
	/** @brief true if CustomData_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool CustomData_IsSet{ false };
	/** @brief Gets the value of CustomData_Optional, regardless of it having been set */
	TMap<FString, FString>& GetCustomData() { return CustomData_Optional; }
	/** @brief Gets the value of CustomData_Optional, regardless of it having been set */
	const TMap<FString, FString>& GetCustomData() const { return CustomData_Optional; }
	/** @brief Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue */
	const TMap<FString, FString>& GetCustomData(const TMap<FString, FString>& DefaultValue) const { if (CustomData_IsSet) return CustomData_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false */
	bool GetCustomData(TMap<FString, FString>& OutValue) const { if (CustomData_IsSet) OutValue = CustomData_Optional; return CustomData_IsSet; }
	/** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
	TMap<FString, FString>* GetCustomDataOrNull() { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
	/** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
	const TMap<FString, FString>* GetCustomDataOrNull() const { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
	/** @brief Sets the value of CustomData_Optional and also sets CustomData_IsSet to true */
	void SetCustomData(const TMap<FString, FString>& NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true; }
	/** @brief Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics */
	void SetCustomData(TMap<FString, FString>&& NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true; }
	 /** @brief Clears the value of CustomData_Optional and sets CustomData_IsSet to false */
	void ClearCustomData() { CustomData_IsSet = false; }

	/** @brief List of tickets that were assigned to this match if created by matchmaking */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TArray<FString> TicketIds_Optional{  };
	/** @brief true if TicketIds_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool TicketIds_IsSet{ false };
	/** @brief Gets the value of TicketIds_Optional, regardless of it having been set */
	TArray<FString>& GetTicketIds() { return TicketIds_Optional; }
	/** @brief Gets the value of TicketIds_Optional, regardless of it having been set */
	const TArray<FString>& GetTicketIds() const { return TicketIds_Optional; }
	/** @brief Gets the value of TicketIds_Optional, if it has been set, otherwise it returns DefaultValue */
	const TArray<FString>& GetTicketIds(const TArray<FString>& DefaultValue) const { if (TicketIds_IsSet) return TicketIds_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of TicketIds_Optional and returns true if it has been set, otherwise returns false */
	bool GetTicketIds(TArray<FString>& OutValue) const { if (TicketIds_IsSet) OutValue = TicketIds_Optional; return TicketIds_IsSet; }
	/** @brief Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr */
	TArray<FString>* GetTicketIdsOrNull() { if (TicketIds_IsSet) return &TicketIds_Optional; return nullptr; }
	/** @brief Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr */
	const TArray<FString>* GetTicketIdsOrNull() const { if (TicketIds_IsSet) return &TicketIds_Optional; return nullptr; }
	/** @brief Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true */
	void SetTicketIds(const TArray<FString>& NewValue) { TicketIds_Optional = NewValue; TicketIds_IsSet = true; }
	/** @brief Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true using move semantics */
	void SetTicketIds(TArray<FString>&& NewValue) { TicketIds_Optional = NewValue; TicketIds_IsSet = true; }
	 /** @brief Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false */
	void ClearTicketIds() { TicketIds_IsSet = false; }

	/** @brief Whether or not the tickets from these results have been assigned */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool TicketsAssigned_Optional{  };
	/** @brief true if TicketsAssigned_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool TicketsAssigned_IsSet{ false };
	/** @brief Gets the value of TicketsAssigned_Optional, regardless of it having been set */
	bool& GetTicketsAssigned() { return TicketsAssigned_Optional; }
	/** @brief Gets the value of TicketsAssigned_Optional, regardless of it having been set */
	const bool& GetTicketsAssigned() const { return TicketsAssigned_Optional; }
	/** @brief Gets the value of TicketsAssigned_Optional, if it has been set, otherwise it returns DefaultValue */
	const bool& GetTicketsAssigned(const bool& DefaultValue) const { if (TicketsAssigned_IsSet) return TicketsAssigned_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of TicketsAssigned_Optional and returns true if it has been set, otherwise returns false */
	bool GetTicketsAssigned(bool& OutValue) const { if (TicketsAssigned_IsSet) OutValue = TicketsAssigned_Optional; return TicketsAssigned_IsSet; }
	/** @brief Returns a pointer to TicketsAssigned_Optional, if it has been set, otherwise returns nullptr */
	bool* GetTicketsAssignedOrNull() { if (TicketsAssigned_IsSet) return &TicketsAssigned_Optional; return nullptr; }
	/** @brief Returns a pointer to TicketsAssigned_Optional, if it has been set, otherwise returns nullptr */
	const bool* GetTicketsAssignedOrNull() const { if (TicketsAssigned_IsSet) return &TicketsAssigned_Optional; return nullptr; }
	/** @brief Sets the value of TicketsAssigned_Optional and also sets TicketsAssigned_IsSet to true */
	void SetTicketsAssigned(const bool& NewValue) { TicketsAssigned_Optional = NewValue; TicketsAssigned_IsSet = true; }
	/** @brief Sets the value of TicketsAssigned_Optional and also sets TicketsAssigned_IsSet to true using move semantics */
	void SetTicketsAssigned(bool&& NewValue) { TicketsAssigned_Optional = NewValue; TicketsAssigned_IsSet = true; }
	 /** @brief Clears the value of TicketsAssigned_Optional and sets TicketsAssigned_IsSet to false */
	void ClearTicketsAssigned() { TicketsAssigned_Optional = false; TicketsAssigned_IsSet = false; }
	/** @brief Returns true if TicketsAssigned_Optional is set and matches the default value */
	bool IsTicketsAssignedDefaultValue() const { return TicketsAssigned_IsSet && TicketsAssigned_Optional == false; }
	/** @brief Sets the value of TicketsAssigned_Optional to its default and also sets TicketsAssigned_IsSet to true */
	void SetTicketsAssignedToDefault() { TicketsAssigned_Optional = false; TicketsAssigned_IsSet = true; }
};

/** @} */
