// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "MatchPlayerResponse.generated.h"

/** @defgroup RHAPI_MatchPlayerResponse RallyHere API Model MatchPlayerResponse
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_MatchPlayerResponse : public FRHAPI_Model
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

    /** @brief Timestamp of when the resource was last modified */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FDateTime LastModifiedTimestamp_Optional{  };
    /** @brief true if LastModifiedTimestamp_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool LastModifiedTimestamp_IsSet{ false };
    /** @brief Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set */
    FDateTime& GetLastModifiedTimestamp() { return LastModifiedTimestamp_Optional; }
    /** @brief Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set */
    const FDateTime& GetLastModifiedTimestamp() const { return LastModifiedTimestamp_Optional; }
    /** @brief Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue */
    const FDateTime& GetLastModifiedTimestamp(const FDateTime& DefaultValue) const { if (LastModifiedTimestamp_IsSet) return LastModifiedTimestamp_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false */
    bool GetLastModifiedTimestamp(FDateTime& OutValue) const { if (LastModifiedTimestamp_IsSet) OutValue = LastModifiedTimestamp_Optional; return LastModifiedTimestamp_IsSet; }
    /** @brief Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr */
    FDateTime* GetLastModifiedTimestampOrNull() { if (LastModifiedTimestamp_IsSet) return &LastModifiedTimestamp_Optional; return nullptr; }
    /** @brief Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr */
    const FDateTime* GetLastModifiedTimestampOrNull() const { if (LastModifiedTimestamp_IsSet) return &LastModifiedTimestamp_Optional; return nullptr; }
    /** @brief Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true */
    void SetLastModifiedTimestamp(FDateTime NewValue) { LastModifiedTimestamp_Optional = NewValue; LastModifiedTimestamp_IsSet = true; }
     /** @brief Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false */
    void ClearLastModifiedTimestamp() { LastModifiedTimestamp_IsSet = false; }

    /** @brief Timestamp of when the resource was created */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FDateTime CreatedTimestamp_Optional{  };
    /** @brief true if CreatedTimestamp_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool CreatedTimestamp_IsSet{ false };
    /** @brief Gets the value of CreatedTimestamp_Optional, regardless of it having been set */
    FDateTime& GetCreatedTimestamp() { return CreatedTimestamp_Optional; }
    /** @brief Gets the value of CreatedTimestamp_Optional, regardless of it having been set */
    const FDateTime& GetCreatedTimestamp() const { return CreatedTimestamp_Optional; }
    /** @brief Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue */
    const FDateTime& GetCreatedTimestamp(const FDateTime& DefaultValue) const { if (CreatedTimestamp_IsSet) return CreatedTimestamp_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false */
    bool GetCreatedTimestamp(FDateTime& OutValue) const { if (CreatedTimestamp_IsSet) OutValue = CreatedTimestamp_Optional; return CreatedTimestamp_IsSet; }
    /** @brief Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr */
    FDateTime* GetCreatedTimestampOrNull() { if (CreatedTimestamp_IsSet) return &CreatedTimestamp_Optional; return nullptr; }
    /** @brief Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr */
    const FDateTime* GetCreatedTimestampOrNull() const { if (CreatedTimestamp_IsSet) return &CreatedTimestamp_Optional; return nullptr; }
    /** @brief Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true */
    void SetCreatedTimestamp(FDateTime NewValue) { CreatedTimestamp_Optional = NewValue; CreatedTimestamp_IsSet = true; }
     /** @brief Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false */
    void ClearCreatedTimestamp() { CreatedTimestamp_IsSet = false; }

    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FGuid PlayerUuid_Optional{  };
    /** @brief true if PlayerUuid_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool PlayerUuid_IsSet{ false };
    /** @brief Gets the value of PlayerUuid_Optional, regardless of it having been set */
    FGuid& GetPlayerUuid() { return PlayerUuid_Optional; }
    /** @brief Gets the value of PlayerUuid_Optional, regardless of it having been set */
    const FGuid& GetPlayerUuid() const { return PlayerUuid_Optional; }
    /** @brief Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetPlayerUuid(const FGuid& DefaultValue) const { if (PlayerUuid_IsSet) return PlayerUuid_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false */
    bool GetPlayerUuid(FGuid& OutValue) const { if (PlayerUuid_IsSet) OutValue = PlayerUuid_Optional; return PlayerUuid_IsSet; }
    /** @brief Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetPlayerUuidOrNull() { if (PlayerUuid_IsSet) return &PlayerUuid_Optional; return nullptr; }
    /** @brief Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetPlayerUuidOrNull() const { if (PlayerUuid_IsSet) return &PlayerUuid_Optional; return nullptr; }
    /** @brief Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true */
    void SetPlayerUuid(FGuid NewValue) { PlayerUuid_Optional = NewValue; PlayerUuid_IsSet = true; }
     /** @brief Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false */
    void ClearPlayerUuid() { PlayerUuid_IsSet = false; }

    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString TeamId_Optional{  };
    /** @brief true if TeamId_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool TeamId_IsSet{ false };
    /** @brief Gets the value of TeamId_Optional, regardless of it having been set */
    FString& GetTeamId() { return TeamId_Optional; }
    /** @brief Gets the value of TeamId_Optional, regardless of it having been set */
    const FString& GetTeamId() const { return TeamId_Optional; }
    /** @brief Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetTeamId(const FString& DefaultValue) const { if (TeamId_IsSet) return TeamId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false */
    bool GetTeamId(FString& OutValue) const { if (TeamId_IsSet) OutValue = TeamId_Optional; return TeamId_IsSet; }
    /** @brief Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr */
    FString* GetTeamIdOrNull() { if (TeamId_IsSet) return &TeamId_Optional; return nullptr; }
    /** @brief Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetTeamIdOrNull() const { if (TeamId_IsSet) return &TeamId_Optional; return nullptr; }
    /** @brief Sets the value of TeamId_Optional and also sets TeamId_IsSet to true */
    void SetTeamId(FString NewValue) { TeamId_Optional = NewValue; TeamId_IsSet = true; }
     /** @brief Clears the value of TeamId_Optional and sets TeamId_IsSet to false */
    void ClearTeamId() { TeamId_IsSet = false; }

    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString PartySessionId_Optional{  };
    /** @brief true if PartySessionId_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool PartySessionId_IsSet{ false };
    /** @brief Gets the value of PartySessionId_Optional, regardless of it having been set */
    FString& GetPartySessionId() { return PartySessionId_Optional; }
    /** @brief Gets the value of PartySessionId_Optional, regardless of it having been set */
    const FString& GetPartySessionId() const { return PartySessionId_Optional; }
    /** @brief Gets the value of PartySessionId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetPartySessionId(const FString& DefaultValue) const { if (PartySessionId_IsSet) return PartySessionId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of PartySessionId_Optional and returns true if it has been set, otherwise returns false */
    bool GetPartySessionId(FString& OutValue) const { if (PartySessionId_IsSet) OutValue = PartySessionId_Optional; return PartySessionId_IsSet; }
    /** @brief Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr */
    FString* GetPartySessionIdOrNull() { if (PartySessionId_IsSet) return &PartySessionId_Optional; return nullptr; }
    /** @brief Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetPartySessionIdOrNull() const { if (PartySessionId_IsSet) return &PartySessionId_Optional; return nullptr; }
    /** @brief Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true */
    void SetPartySessionId(FString NewValue) { PartySessionId_Optional = NewValue; PartySessionId_IsSet = true; }
     /** @brief Clears the value of PartySessionId_Optional and sets PartySessionId_IsSet to false */
    void ClearPartySessionId() { PartySessionId_IsSet = false; }

    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    int32 Placement_Optional{  };
    /** @brief true if Placement_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool Placement_IsSet{ false };
    /** @brief Gets the value of Placement_Optional, regardless of it having been set */
    int32& GetPlacement() { return Placement_Optional; }
    /** @brief Gets the value of Placement_Optional, regardless of it having been set */
    const int32& GetPlacement() const { return Placement_Optional; }
    /** @brief Gets the value of Placement_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetPlacement(const int32& DefaultValue) const { if (Placement_IsSet) return Placement_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Placement_Optional and returns true if it has been set, otherwise returns false */
    bool GetPlacement(int32& OutValue) const { if (Placement_IsSet) OutValue = Placement_Optional; return Placement_IsSet; }
    /** @brief Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr */
    int32* GetPlacementOrNull() { if (Placement_IsSet) return &Placement_Optional; return nullptr; }
    /** @brief Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetPlacementOrNull() const { if (Placement_IsSet) return &Placement_Optional; return nullptr; }
    /** @brief Sets the value of Placement_Optional and also sets Placement_IsSet to true */
    void SetPlacement(int32 NewValue) { Placement_Optional = NewValue; Placement_IsSet = true; }
     /** @brief Clears the value of Placement_Optional and sets Placement_IsSet to false */
    void ClearPlacement() { Placement_Optional = 0; Placement_IsSet = false; }
    /** @brief Returns true if Placement_Optional is set and matches the default value */
    bool IsPlacementDefaultValue() const { return Placement_IsSet && Placement_Optional == 0; }
    /** @brief Sets the value of Placement_Optional to its default and also sets Placement_IsSet to true */
    void SetPlacementToDefault() { Placement_Optional = 0; Placement_IsSet = true; }

    /** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FDateTime JoinedMatchTimestamp_Optional{  };
    /** @brief true if JoinedMatchTimestamp_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool JoinedMatchTimestamp_IsSet{ false };
    /** @brief Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set */
    FDateTime& GetJoinedMatchTimestamp() { return JoinedMatchTimestamp_Optional; }
    /** @brief Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set */
    const FDateTime& GetJoinedMatchTimestamp() const { return JoinedMatchTimestamp_Optional; }
    /** @brief Gets the value of JoinedMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue */
    const FDateTime& GetJoinedMatchTimestamp(const FDateTime& DefaultValue) const { if (JoinedMatchTimestamp_IsSet) return JoinedMatchTimestamp_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of JoinedMatchTimestamp_Optional and returns true if it has been set, otherwise returns false */
    bool GetJoinedMatchTimestamp(FDateTime& OutValue) const { if (JoinedMatchTimestamp_IsSet) OutValue = JoinedMatchTimestamp_Optional; return JoinedMatchTimestamp_IsSet; }
    /** @brief Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr */
    FDateTime* GetJoinedMatchTimestampOrNull() { if (JoinedMatchTimestamp_IsSet) return &JoinedMatchTimestamp_Optional; return nullptr; }
    /** @brief Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr */
    const FDateTime* GetJoinedMatchTimestampOrNull() const { if (JoinedMatchTimestamp_IsSet) return &JoinedMatchTimestamp_Optional; return nullptr; }
    /** @brief Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true */
    void SetJoinedMatchTimestamp(FDateTime NewValue) { JoinedMatchTimestamp_Optional = NewValue; JoinedMatchTimestamp_IsSet = true; }
     /** @brief Clears the value of JoinedMatchTimestamp_Optional and sets JoinedMatchTimestamp_IsSet to false */
    void ClearJoinedMatchTimestamp() { JoinedMatchTimestamp_IsSet = false; }

    /** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FDateTime LeftMatchTimestamp_Optional{  };
    /** @brief true if LeftMatchTimestamp_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool LeftMatchTimestamp_IsSet{ false };
    /** @brief Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set */
    FDateTime& GetLeftMatchTimestamp() { return LeftMatchTimestamp_Optional; }
    /** @brief Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set */
    const FDateTime& GetLeftMatchTimestamp() const { return LeftMatchTimestamp_Optional; }
    /** @brief Gets the value of LeftMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue */
    const FDateTime& GetLeftMatchTimestamp(const FDateTime& DefaultValue) const { if (LeftMatchTimestamp_IsSet) return LeftMatchTimestamp_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LeftMatchTimestamp_Optional and returns true if it has been set, otherwise returns false */
    bool GetLeftMatchTimestamp(FDateTime& OutValue) const { if (LeftMatchTimestamp_IsSet) OutValue = LeftMatchTimestamp_Optional; return LeftMatchTimestamp_IsSet; }
    /** @brief Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr */
    FDateTime* GetLeftMatchTimestampOrNull() { if (LeftMatchTimestamp_IsSet) return &LeftMatchTimestamp_Optional; return nullptr; }
    /** @brief Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr */
    const FDateTime* GetLeftMatchTimestampOrNull() const { if (LeftMatchTimestamp_IsSet) return &LeftMatchTimestamp_Optional; return nullptr; }
    /** @brief Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true */
    void SetLeftMatchTimestamp(FDateTime NewValue) { LeftMatchTimestamp_Optional = NewValue; LeftMatchTimestamp_IsSet = true; }
     /** @brief Clears the value of LeftMatchTimestamp_Optional and sets LeftMatchTimestamp_IsSet to false */
    void ClearLeftMatchTimestamp() { LeftMatchTimestamp_IsSet = false; }

    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    int32 DurationSeconds_Optional{  };
    /** @brief true if DurationSeconds_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool DurationSeconds_IsSet{ false };
    /** @brief Gets the value of DurationSeconds_Optional, regardless of it having been set */
    int32& GetDurationSeconds() { return DurationSeconds_Optional; }
    /** @brief Gets the value of DurationSeconds_Optional, regardless of it having been set */
    const int32& GetDurationSeconds() const { return DurationSeconds_Optional; }
    /** @brief Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetDurationSeconds(const int32& DefaultValue) const { if (DurationSeconds_IsSet) return DurationSeconds_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false */
    bool GetDurationSeconds(int32& OutValue) const { if (DurationSeconds_IsSet) OutValue = DurationSeconds_Optional; return DurationSeconds_IsSet; }
    /** @brief Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr */
    int32* GetDurationSecondsOrNull() { if (DurationSeconds_IsSet) return &DurationSeconds_Optional; return nullptr; }
    /** @brief Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetDurationSecondsOrNull() const { if (DurationSeconds_IsSet) return &DurationSeconds_Optional; return nullptr; }
    /** @brief Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true */
    void SetDurationSeconds(int32 NewValue) { DurationSeconds_Optional = NewValue; DurationSeconds_IsSet = true; }
     /** @brief Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false */
    void ClearDurationSeconds() { DurationSeconds_Optional = 0; DurationSeconds_IsSet = false; }
    /** @brief Returns true if DurationSeconds_Optional is set and matches the default value */
    bool IsDurationSecondsDefaultValue() const { return DurationSeconds_IsSet && DurationSeconds_Optional == 0; }
    /** @brief Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true */
    void SetDurationSecondsToDefault() { DurationSeconds_Optional = 0; DurationSeconds_IsSet = true; }

    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString StartingRank_Optional{  };
    /** @brief true if StartingRank_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool StartingRank_IsSet{ false };
    /** @brief Gets the value of StartingRank_Optional, regardless of it having been set */
    FString& GetStartingRank() { return StartingRank_Optional; }
    /** @brief Gets the value of StartingRank_Optional, regardless of it having been set */
    const FString& GetStartingRank() const { return StartingRank_Optional; }
    /** @brief Gets the value of StartingRank_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetStartingRank(const FString& DefaultValue) const { if (StartingRank_IsSet) return StartingRank_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of StartingRank_Optional and returns true if it has been set, otherwise returns false */
    bool GetStartingRank(FString& OutValue) const { if (StartingRank_IsSet) OutValue = StartingRank_Optional; return StartingRank_IsSet; }
    /** @brief Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr */
    FString* GetStartingRankOrNull() { if (StartingRank_IsSet) return &StartingRank_Optional; return nullptr; }
    /** @brief Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetStartingRankOrNull() const { if (StartingRank_IsSet) return &StartingRank_Optional; return nullptr; }
    /** @brief Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true */
    void SetStartingRank(FString NewValue) { StartingRank_Optional = NewValue; StartingRank_IsSet = true; }
     /** @brief Clears the value of StartingRank_Optional and sets StartingRank_IsSet to false */
    void ClearStartingRank() { StartingRank_IsSet = false; }

    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FString FinishingRank_Optional{  };
    /** @brief true if FinishingRank_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool FinishingRank_IsSet{ false };
    /** @brief Gets the value of FinishingRank_Optional, regardless of it having been set */
    FString& GetFinishingRank() { return FinishingRank_Optional; }
    /** @brief Gets the value of FinishingRank_Optional, regardless of it having been set */
    const FString& GetFinishingRank() const { return FinishingRank_Optional; }
    /** @brief Gets the value of FinishingRank_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetFinishingRank(const FString& DefaultValue) const { if (FinishingRank_IsSet) return FinishingRank_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of FinishingRank_Optional and returns true if it has been set, otherwise returns false */
    bool GetFinishingRank(FString& OutValue) const { if (FinishingRank_IsSet) OutValue = FinishingRank_Optional; return FinishingRank_IsSet; }
    /** @brief Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr */
    FString* GetFinishingRankOrNull() { if (FinishingRank_IsSet) return &FinishingRank_Optional; return nullptr; }
    /** @brief Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetFinishingRankOrNull() const { if (FinishingRank_IsSet) return &FinishingRank_Optional; return nullptr; }
    /** @brief Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true */
    void SetFinishingRank(FString NewValue) { FinishingRank_Optional = NewValue; FinishingRank_IsSet = true; }
     /** @brief Clears the value of FinishingRank_Optional and sets FinishingRank_IsSet to false */
    void ClearFinishingRank() { FinishingRank_IsSet = false; }

    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    FRHAPI_JsonObject CustomData_Optional{  };
    /** @brief true if CustomData_Optional has been set to a value */
    UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
    bool CustomData_IsSet{ false };
    /** @brief Gets the value of CustomData_Optional, regardless of it having been set */
    FRHAPI_JsonObject& GetCustomData() { return CustomData_Optional; }
    /** @brief Gets the value of CustomData_Optional, regardless of it having been set */
    const FRHAPI_JsonObject& GetCustomData() const { return CustomData_Optional; }
    /** @brief Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_JsonObject& GetCustomData(const FRHAPI_JsonObject& DefaultValue) const { if (CustomData_IsSet) return CustomData_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false */
    bool GetCustomData(FRHAPI_JsonObject& OutValue) const { if (CustomData_IsSet) OutValue = CustomData_Optional; return CustomData_IsSet; }
    /** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_JsonObject* GetCustomDataOrNull() { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
    /** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_JsonObject* GetCustomDataOrNull() const { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
    /** @brief Sets the value of CustomData_Optional and also sets CustomData_IsSet to true */
    void SetCustomData(FRHAPI_JsonObject NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true; }
     /** @brief Clears the value of CustomData_Optional and sets CustomData_IsSet to false */
    void ClearCustomData() { CustomData_IsSet = false; }
};

/** @} */