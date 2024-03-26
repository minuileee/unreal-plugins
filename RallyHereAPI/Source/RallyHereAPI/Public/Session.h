// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "BackfillInfo.h"
#include "BrowserInfo.h"
#include "InstanceInfo.h"
#include "MatchInfo.h"
#include "MatchmakingInfo.h"
#include "MatchmakingResults.h"
#include "PlatformSession.h"
#include "SessionTeam.h"
#include "Session.generated.h"

/** @defgroup RHAPI_Session RallyHere API Model Session
 *  @{
 */

/**
 * @brief A session resource
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_Session : public FRHAPI_Model
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

	/** @brief template type */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString Type{  };
	/** @brief Gets the value of Type */
	FString& GetType() { return Type; }
	/** @brief Gets the value of Type */
	const FString& GetType() const { return Type; }
	/** @brief Sets the value of Type */
	void SetType(FString NewValue) { Type = NewValue;  }

	/** @brief unique ID for this session within its type */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString SessionId{  };
	/** @brief Gets the value of SessionId */
	FString& GetSessionId() { return SessionId; }
	/** @brief Gets the value of SessionId */
	const FString& GetSessionId() const { return SessionId; }
	/** @brief Sets the value of SessionId */
	void SetSessionId(FString NewValue) { SessionId = NewValue;  }

	/** @brief Info about the current active instance for the session */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_InstanceInfo Instance_Optional{  };
	/** @brief true if Instance_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Instance_IsSet{ false };
	/** @brief Gets the value of Instance_Optional, regardless of it having been set */
	FRHAPI_InstanceInfo& GetInstance() { return Instance_Optional; }
	/** @brief Gets the value of Instance_Optional, regardless of it having been set */
	const FRHAPI_InstanceInfo& GetInstance() const { return Instance_Optional; }
	/** @brief Gets the value of Instance_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_InstanceInfo& GetInstance(const FRHAPI_InstanceInfo& DefaultValue) const { if (Instance_IsSet) return Instance_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Instance_Optional and returns true if it has been set, otherwise returns false */
	bool GetInstance(FRHAPI_InstanceInfo& OutValue) const { if (Instance_IsSet) OutValue = Instance_Optional; return Instance_IsSet; }
	/** @brief Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_InstanceInfo* GetInstanceOrNull() { if (Instance_IsSet) return &Instance_Optional; return nullptr; }
	/** @brief Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_InstanceInfo* GetInstanceOrNull() const { if (Instance_IsSet) return &Instance_Optional; return nullptr; }
	/** @brief Sets the value of Instance_Optional and also sets Instance_IsSet to true */
	void SetInstance(FRHAPI_InstanceInfo NewValue) { Instance_Optional = NewValue; Instance_IsSet = true; }
	 /** @brief Clears the value of Instance_Optional and sets Instance_IsSet to false */
	void ClearInstance() { Instance_IsSet = false; }

	/** @brief DEPRECATED Info about the current match in the instance */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_MatchInfo Match_Optional{  };
	/** @brief true if Match_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Match_IsSet{ false };
	/** @brief Gets the value of Match_Optional, regardless of it having been set */
	FRHAPI_MatchInfo& GetMatch() { return Match_Optional; }
	/** @brief Gets the value of Match_Optional, regardless of it having been set */
	const FRHAPI_MatchInfo& GetMatch() const { return Match_Optional; }
	/** @brief Gets the value of Match_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_MatchInfo& GetMatch(const FRHAPI_MatchInfo& DefaultValue) const { if (Match_IsSet) return Match_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Match_Optional and returns true if it has been set, otherwise returns false */
	bool GetMatch(FRHAPI_MatchInfo& OutValue) const { if (Match_IsSet) OutValue = Match_Optional; return Match_IsSet; }
	/** @brief Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_MatchInfo* GetMatchOrNull() { if (Match_IsSet) return &Match_Optional; return nullptr; }
	/** @brief Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_MatchInfo* GetMatchOrNull() const { if (Match_IsSet) return &Match_Optional; return nullptr; }
	/** @brief Sets the value of Match_Optional and also sets Match_IsSet to true */
	void SetMatch(FRHAPI_MatchInfo NewValue) { Match_Optional = NewValue; Match_IsSet = true; }
	 /** @brief Clears the value of Match_Optional and sets Match_IsSet to false */
	void ClearMatch() { Match_IsSet = false; }

	/** @brief Info about the matchmaking results that resulted in this session */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_MatchmakingResults MatchmakingResults_Optional{  };
	/** @brief true if MatchmakingResults_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool MatchmakingResults_IsSet{ false };
	/** @brief Gets the value of MatchmakingResults_Optional, regardless of it having been set */
	FRHAPI_MatchmakingResults& GetMatchmakingResults() { return MatchmakingResults_Optional; }
	/** @brief Gets the value of MatchmakingResults_Optional, regardless of it having been set */
	const FRHAPI_MatchmakingResults& GetMatchmakingResults() const { return MatchmakingResults_Optional; }
	/** @brief Gets the value of MatchmakingResults_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_MatchmakingResults& GetMatchmakingResults(const FRHAPI_MatchmakingResults& DefaultValue) const { if (MatchmakingResults_IsSet) return MatchmakingResults_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of MatchmakingResults_Optional and returns true if it has been set, otherwise returns false */
	bool GetMatchmakingResults(FRHAPI_MatchmakingResults& OutValue) const { if (MatchmakingResults_IsSet) OutValue = MatchmakingResults_Optional; return MatchmakingResults_IsSet; }
	/** @brief Returns a pointer to MatchmakingResults_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_MatchmakingResults* GetMatchmakingResultsOrNull() { if (MatchmakingResults_IsSet) return &MatchmakingResults_Optional; return nullptr; }
	/** @brief Returns a pointer to MatchmakingResults_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_MatchmakingResults* GetMatchmakingResultsOrNull() const { if (MatchmakingResults_IsSet) return &MatchmakingResults_Optional; return nullptr; }
	/** @brief Sets the value of MatchmakingResults_Optional and also sets MatchmakingResults_IsSet to true */
	void SetMatchmakingResults(FRHAPI_MatchmakingResults NewValue) { MatchmakingResults_Optional = NewValue; MatchmakingResults_IsSet = true; }
	 /** @brief Clears the value of MatchmakingResults_Optional and sets MatchmakingResults_IsSet to false */
	void ClearMatchmakingResults() { MatchmakingResults_IsSet = false; }

	/** @brief Info about the matchmaking state of the session, if it is in the process of matchmaking */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_MatchmakingInfo Matchmaking_Optional{  };
	/** @brief true if Matchmaking_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Matchmaking_IsSet{ false };
	/** @brief Gets the value of Matchmaking_Optional, regardless of it having been set */
	FRHAPI_MatchmakingInfo& GetMatchmaking() { return Matchmaking_Optional; }
	/** @brief Gets the value of Matchmaking_Optional, regardless of it having been set */
	const FRHAPI_MatchmakingInfo& GetMatchmaking() const { return Matchmaking_Optional; }
	/** @brief Gets the value of Matchmaking_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_MatchmakingInfo& GetMatchmaking(const FRHAPI_MatchmakingInfo& DefaultValue) const { if (Matchmaking_IsSet) return Matchmaking_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Matchmaking_Optional and returns true if it has been set, otherwise returns false */
	bool GetMatchmaking(FRHAPI_MatchmakingInfo& OutValue) const { if (Matchmaking_IsSet) OutValue = Matchmaking_Optional; return Matchmaking_IsSet; }
	/** @brief Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_MatchmakingInfo* GetMatchmakingOrNull() { if (Matchmaking_IsSet) return &Matchmaking_Optional; return nullptr; }
	/** @brief Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_MatchmakingInfo* GetMatchmakingOrNull() const { if (Matchmaking_IsSet) return &Matchmaking_Optional; return nullptr; }
	/** @brief Sets the value of Matchmaking_Optional and also sets Matchmaking_IsSet to true */
	void SetMatchmaking(FRHAPI_MatchmakingInfo NewValue) { Matchmaking_Optional = NewValue; Matchmaking_IsSet = true; }
	 /** @brief Clears the value of Matchmaking_Optional and sets Matchmaking_IsSet to false */
	void ClearMatchmaking() { Matchmaking_IsSet = false; }

	/** @brief Info about the open-match backfill object for the session */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_BackfillInfo Backfill_Optional{  };
	/** @brief true if Backfill_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Backfill_IsSet{ false };
	/** @brief Gets the value of Backfill_Optional, regardless of it having been set */
	FRHAPI_BackfillInfo& GetBackfill() { return Backfill_Optional; }
	/** @brief Gets the value of Backfill_Optional, regardless of it having been set */
	const FRHAPI_BackfillInfo& GetBackfill() const { return Backfill_Optional; }
	/** @brief Gets the value of Backfill_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_BackfillInfo& GetBackfill(const FRHAPI_BackfillInfo& DefaultValue) const { if (Backfill_IsSet) return Backfill_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Backfill_Optional and returns true if it has been set, otherwise returns false */
	bool GetBackfill(FRHAPI_BackfillInfo& OutValue) const { if (Backfill_IsSet) OutValue = Backfill_Optional; return Backfill_IsSet; }
	/** @brief Returns a pointer to Backfill_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_BackfillInfo* GetBackfillOrNull() { if (Backfill_IsSet) return &Backfill_Optional; return nullptr; }
	/** @brief Returns a pointer to Backfill_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_BackfillInfo* GetBackfillOrNull() const { if (Backfill_IsSet) return &Backfill_Optional; return nullptr; }
	/** @brief Sets the value of Backfill_Optional and also sets Backfill_IsSet to true */
	void SetBackfill(FRHAPI_BackfillInfo NewValue) { Backfill_Optional = NewValue; Backfill_IsSet = true; }
	 /** @brief Clears the value of Backfill_Optional and sets Backfill_IsSet to false */
	void ClearBackfill() { Backfill_IsSet = false; }

	/** @brief Info about the browser state of the session */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_BrowserInfo Browser_Optional{  };
	/** @brief true if Browser_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Browser_IsSet{ false };
	/** @brief Gets the value of Browser_Optional, regardless of it having been set */
	FRHAPI_BrowserInfo& GetBrowser() { return Browser_Optional; }
	/** @brief Gets the value of Browser_Optional, regardless of it having been set */
	const FRHAPI_BrowserInfo& GetBrowser() const { return Browser_Optional; }
	/** @brief Gets the value of Browser_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_BrowserInfo& GetBrowser(const FRHAPI_BrowserInfo& DefaultValue) const { if (Browser_IsSet) return Browser_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Browser_Optional and returns true if it has been set, otherwise returns false */
	bool GetBrowser(FRHAPI_BrowserInfo& OutValue) const { if (Browser_IsSet) OutValue = Browser_Optional; return Browser_IsSet; }
	/** @brief Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_BrowserInfo* GetBrowserOrNull() { if (Browser_IsSet) return &Browser_Optional; return nullptr; }
	/** @brief Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_BrowserInfo* GetBrowserOrNull() const { if (Browser_IsSet) return &Browser_Optional; return nullptr; }
	/** @brief Sets the value of Browser_Optional and also sets Browser_IsSet to true */
	void SetBrowser(FRHAPI_BrowserInfo NewValue) { Browser_Optional = NewValue; Browser_IsSet = true; }
	 /** @brief Clears the value of Browser_Optional and sets Browser_IsSet to false */
	void ClearBrowser() { Browser_IsSet = false; }

	/** @brief Is this session freely joinable by players without an invite? */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Joinable{ false };
	/** @brief Gets the value of Joinable */
	bool& GetJoinable() { return Joinable; }
	/** @brief Gets the value of Joinable */
	const bool& GetJoinable() const { return Joinable; }
	/** @brief Sets the value of Joinable */
	void SetJoinable(bool NewValue) { Joinable = NewValue;  }
	/** @brief Returns true if Joinable matches the default value */
	bool IsJoinableDefaultValue() const { return Joinable == false; }
	/** @brief Sets the value of Joinable to its default  */
	void SetJoinableToDefault() { Joinable = false;  }

	/** @brief List of teams of players currently in the session */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TArray<FRHAPI_SessionTeam> Teams{  };
	/** @brief Gets the value of Teams */
	TArray<FRHAPI_SessionTeam>& GetTeams() { return Teams; }
	/** @brief Gets the value of Teams */
	const TArray<FRHAPI_SessionTeam>& GetTeams() const { return Teams; }
	/** @brief Sets the value of Teams */
	void SetTeams(TArray<FRHAPI_SessionTeam> NewValue) { Teams = NewValue;  }

	/** @brief Child Platform Sessions for this session.  A player joining one of the child platform sessions implicitly joins the parent session */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TArray<FRHAPI_PlatformSession> PlatformSession_Optional{  };
	/** @brief true if PlatformSession_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool PlatformSession_IsSet{ false };
	/** @brief Gets the value of PlatformSession_Optional, regardless of it having been set */
	TArray<FRHAPI_PlatformSession>& GetPlatformSession() { return PlatformSession_Optional; }
	/** @brief Gets the value of PlatformSession_Optional, regardless of it having been set */
	const TArray<FRHAPI_PlatformSession>& GetPlatformSession() const { return PlatformSession_Optional; }
	/** @brief Gets the value of PlatformSession_Optional, if it has been set, otherwise it returns DefaultValue */
	const TArray<FRHAPI_PlatformSession>& GetPlatformSession(const TArray<FRHAPI_PlatformSession>& DefaultValue) const { if (PlatformSession_IsSet) return PlatformSession_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of PlatformSession_Optional and returns true if it has been set, otherwise returns false */
	bool GetPlatformSession(TArray<FRHAPI_PlatformSession>& OutValue) const { if (PlatformSession_IsSet) OutValue = PlatformSession_Optional; return PlatformSession_IsSet; }
	/** @brief Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr */
	TArray<FRHAPI_PlatformSession>* GetPlatformSessionOrNull() { if (PlatformSession_IsSet) return &PlatformSession_Optional; return nullptr; }
	/** @brief Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr */
	const TArray<FRHAPI_PlatformSession>* GetPlatformSessionOrNull() const { if (PlatformSession_IsSet) return &PlatformSession_Optional; return nullptr; }
	/** @brief Sets the value of PlatformSession_Optional and also sets PlatformSession_IsSet to true */
	void SetPlatformSession(TArray<FRHAPI_PlatformSession> NewValue) { PlatformSession_Optional = NewValue; PlatformSession_IsSet = true; }
	 /** @brief Clears the value of PlatformSession_Optional and sets PlatformSession_IsSet to false */
	void ClearPlatformSession() { PlatformSession_IsSet = false; }

	/** @brief Leader Player or instance defined custom data about this session */
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
	void SetCustomData(TMap<FString, FString> NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true; }
	 /** @brief Clears the value of CustomData_Optional and sets CustomData_IsSet to false */
	void ClearCustomData() { CustomData_IsSet = false; }

	/** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FDateTime Created{  };
	/** @brief Gets the value of Created */
	FDateTime& GetCreated() { return Created; }
	/** @brief Gets the value of Created */
	const FDateTime& GetCreated() const { return Created; }
	/** @brief Sets the value of Created */
	void SetCreated(FDateTime NewValue) { Created = NewValue;  }

	/** @brief Preferred region for the instance and match to take place in */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString RegionId_Optional{  };
	/** @brief true if RegionId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool RegionId_IsSet{ false };
	/** @brief Gets the value of RegionId_Optional, regardless of it having been set */
	FString& GetRegionId() { return RegionId_Optional; }
	/** @brief Gets the value of RegionId_Optional, regardless of it having been set */
	const FString& GetRegionId() const { return RegionId_Optional; }
	/** @brief Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetRegionId(const FString& DefaultValue) const { if (RegionId_IsSet) return RegionId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false */
	bool GetRegionId(FString& OutValue) const { if (RegionId_IsSet) OutValue = RegionId_Optional; return RegionId_IsSet; }
	/** @brief Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr */
	FString* GetRegionIdOrNull() { if (RegionId_IsSet) return &RegionId_Optional; return nullptr; }
	/** @brief Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetRegionIdOrNull() const { if (RegionId_IsSet) return &RegionId_Optional; return nullptr; }
	/** @brief Sets the value of RegionId_Optional and also sets RegionId_IsSet to true */
	void SetRegionId(FString NewValue) { RegionId_Optional = NewValue; RegionId_IsSet = true; }
	 /** @brief Clears the value of RegionId_Optional and sets RegionId_IsSet to false */
	void ClearRegionId() { RegionId_IsSet = false; }

	/** @brief Flag of whether or not this session was created by matchmaking or not */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool CreatedByMatchmaking_Optional{  };
	/** @brief true if CreatedByMatchmaking_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool CreatedByMatchmaking_IsSet{ false };
	/** @brief Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set */
	bool& GetCreatedByMatchmaking() { return CreatedByMatchmaking_Optional; }
	/** @brief Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set */
	const bool& GetCreatedByMatchmaking() const { return CreatedByMatchmaking_Optional; }
	/** @brief Gets the value of CreatedByMatchmaking_Optional, if it has been set, otherwise it returns DefaultValue */
	const bool& GetCreatedByMatchmaking(const bool& DefaultValue) const { if (CreatedByMatchmaking_IsSet) return CreatedByMatchmaking_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of CreatedByMatchmaking_Optional and returns true if it has been set, otherwise returns false */
	bool GetCreatedByMatchmaking(bool& OutValue) const { if (CreatedByMatchmaking_IsSet) OutValue = CreatedByMatchmaking_Optional; return CreatedByMatchmaking_IsSet; }
	/** @brief Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr */
	bool* GetCreatedByMatchmakingOrNull() { if (CreatedByMatchmaking_IsSet) return &CreatedByMatchmaking_Optional; return nullptr; }
	/** @brief Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr */
	const bool* GetCreatedByMatchmakingOrNull() const { if (CreatedByMatchmaking_IsSet) return &CreatedByMatchmaking_Optional; return nullptr; }
	/** @brief Sets the value of CreatedByMatchmaking_Optional and also sets CreatedByMatchmaking_IsSet to true */
	void SetCreatedByMatchmaking(bool NewValue) { CreatedByMatchmaking_Optional = NewValue; CreatedByMatchmaking_IsSet = true; }
	 /** @brief Clears the value of CreatedByMatchmaking_Optional and sets CreatedByMatchmaking_IsSet to false */
	void ClearCreatedByMatchmaking() { CreatedByMatchmaking_Optional = false; CreatedByMatchmaking_IsSet = false; }
	/** @brief Returns true if CreatedByMatchmaking_Optional is set and matches the default value */
	bool IsCreatedByMatchmakingDefaultValue() const { return CreatedByMatchmaking_IsSet && CreatedByMatchmaking_Optional == false; }
	/** @brief Sets the value of CreatedByMatchmaking_Optional to its default and also sets CreatedByMatchmaking_IsSet to true */
	void SetCreatedByMatchmakingToDefault() { CreatedByMatchmaking_Optional = false; CreatedByMatchmaking_IsSet = true; }
};

/** @} */
