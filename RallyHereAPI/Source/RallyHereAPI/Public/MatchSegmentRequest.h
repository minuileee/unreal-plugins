// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "MatchAllocation.h"
#include "MatchInstance.h"
#include "MatchSession.h"
#include "MatchState.h"
#include "MatchSegmentRequest.generated.h"

/** @defgroup RHAPI_MatchSegmentRequest RallyHere API Model MatchSegmentRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_MatchSegmentRequest : public FRHAPI_Model
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

    /** @brief Segment ID of the match */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString MatchSegment{  };
    /** @brief Gets the value of MatchSegment */
    FString& GetMatchSegment() { return MatchSegment; }
    /** @brief Gets the value of MatchSegment */
    const FString& GetMatchSegment() const { return MatchSegment; }
    /** @brief Sets the value of MatchSegment */
    void SetMatchSegment(FString NewValue) { MatchSegment = NewValue;  }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Type_Optional{  };
    /** @brief true if Type_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Type_IsSet{ false };
    /** @brief Gets the value of Type_Optional, regardless of it having been set */
    FString& GetType() { return Type_Optional; }
    /** @brief Gets the value of Type_Optional, regardless of it having been set */
    const FString& GetType() const { return Type_Optional; }
    /** @brief Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetType(const FString& DefaultValue) const { if (Type_IsSet) return Type_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false */
    bool GetType(FString& OutValue) const { if (Type_IsSet) OutValue = Type_Optional; return Type_IsSet; }
    /** @brief Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr */
    FString* GetTypeOrNull() { if (Type_IsSet) return &Type_Optional; return nullptr; }
    /** @brief Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetTypeOrNull() const { if (Type_IsSet) return &Type_Optional; return nullptr; }
    /** @brief Sets the value of Type_Optional and also sets Type_IsSet to true */
    void SetType(FString NewValue) { Type_Optional = NewValue; Type_IsSet = true; }
     /** @brief Clears the value of Type_Optional and sets Type_IsSet to false */
    void ClearType() { Type_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    ERHAPI_MatchState State_Optional{  };
    /** @brief true if State_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool State_IsSet{ false };
    /** @brief Gets the value of State_Optional, regardless of it having been set */
    ERHAPI_MatchState& GetState() { return State_Optional; }
    /** @brief Gets the value of State_Optional, regardless of it having been set */
    const ERHAPI_MatchState& GetState() const { return State_Optional; }
    /** @brief Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue */
    const ERHAPI_MatchState& GetState(const ERHAPI_MatchState& DefaultValue) const { if (State_IsSet) return State_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false */
    bool GetState(ERHAPI_MatchState& OutValue) const { if (State_IsSet) OutValue = State_Optional; return State_IsSet; }
    /** @brief Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr */
    ERHAPI_MatchState* GetStateOrNull() { if (State_IsSet) return &State_Optional; return nullptr; }
    /** @brief Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr */
    const ERHAPI_MatchState* GetStateOrNull() const { if (State_IsSet) return &State_Optional; return nullptr; }
    /** @brief Sets the value of State_Optional and also sets State_IsSet to true */
    void SetState(ERHAPI_MatchState NewValue) { State_Optional = NewValue; State_IsSet = true; }
     /** @brief Clears the value of State_Optional and sets State_IsSet to false */
    void ClearState() { State_IsSet = false; }

    /** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FDateTime StartTimestamp_Optional{  };
    /** @brief true if StartTimestamp_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool StartTimestamp_IsSet{ false };
    /** @brief Gets the value of StartTimestamp_Optional, regardless of it having been set */
    FDateTime& GetStartTimestamp() { return StartTimestamp_Optional; }
    /** @brief Gets the value of StartTimestamp_Optional, regardless of it having been set */
    const FDateTime& GetStartTimestamp() const { return StartTimestamp_Optional; }
    /** @brief Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue */
    const FDateTime& GetStartTimestamp(const FDateTime& DefaultValue) const { if (StartTimestamp_IsSet) return StartTimestamp_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false */
    bool GetStartTimestamp(FDateTime& OutValue) const { if (StartTimestamp_IsSet) OutValue = StartTimestamp_Optional; return StartTimestamp_IsSet; }
    /** @brief Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr */
    FDateTime* GetStartTimestampOrNull() { if (StartTimestamp_IsSet) return &StartTimestamp_Optional; return nullptr; }
    /** @brief Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr */
    const FDateTime* GetStartTimestampOrNull() const { if (StartTimestamp_IsSet) return &StartTimestamp_Optional; return nullptr; }
    /** @brief Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true */
    void SetStartTimestamp(FDateTime NewValue) { StartTimestamp_Optional = NewValue; StartTimestamp_IsSet = true; }
     /** @brief Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false */
    void ClearStartTimestamp() { StartTimestamp_IsSet = false; }

    /** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FDateTime EndTimestamp_Optional{  };
    /** @brief true if EndTimestamp_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool EndTimestamp_IsSet{ false };
    /** @brief Gets the value of EndTimestamp_Optional, regardless of it having been set */
    FDateTime& GetEndTimestamp() { return EndTimestamp_Optional; }
    /** @brief Gets the value of EndTimestamp_Optional, regardless of it having been set */
    const FDateTime& GetEndTimestamp() const { return EndTimestamp_Optional; }
    /** @brief Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue */
    const FDateTime& GetEndTimestamp(const FDateTime& DefaultValue) const { if (EndTimestamp_IsSet) return EndTimestamp_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false */
    bool GetEndTimestamp(FDateTime& OutValue) const { if (EndTimestamp_IsSet) OutValue = EndTimestamp_Optional; return EndTimestamp_IsSet; }
    /** @brief Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr */
    FDateTime* GetEndTimestampOrNull() { if (EndTimestamp_IsSet) return &EndTimestamp_Optional; return nullptr; }
    /** @brief Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr */
    const FDateTime* GetEndTimestampOrNull() const { if (EndTimestamp_IsSet) return &EndTimestamp_Optional; return nullptr; }
    /** @brief Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true */
    void SetEndTimestamp(FDateTime NewValue) { EndTimestamp_Optional = NewValue; EndTimestamp_IsSet = true; }
     /** @brief Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false */
    void ClearEndTimestamp() { EndTimestamp_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 DurationSeconds_Optional{  };
    /** @brief true if DurationSeconds_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
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

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_JsonObject CustomData_Optional{  };
    /** @brief true if CustomData_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
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

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString CorrelationId_Optional{  };
    /** @brief true if CorrelationId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool CorrelationId_IsSet{ false };
    /** @brief Gets the value of CorrelationId_Optional, regardless of it having been set */
    FString& GetCorrelationId() { return CorrelationId_Optional; }
    /** @brief Gets the value of CorrelationId_Optional, regardless of it having been set */
    const FString& GetCorrelationId() const { return CorrelationId_Optional; }
    /** @brief Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetCorrelationId(const FString& DefaultValue) const { if (CorrelationId_IsSet) return CorrelationId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false */
    bool GetCorrelationId(FString& OutValue) const { if (CorrelationId_IsSet) OutValue = CorrelationId_Optional; return CorrelationId_IsSet; }
    /** @brief Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr */
    FString* GetCorrelationIdOrNull() { if (CorrelationId_IsSet) return &CorrelationId_Optional; return nullptr; }
    /** @brief Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetCorrelationIdOrNull() const { if (CorrelationId_IsSet) return &CorrelationId_Optional; return nullptr; }
    /** @brief Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true */
    void SetCorrelationId(FString NewValue) { CorrelationId_Optional = NewValue; CorrelationId_IsSet = true; }
     /** @brief Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false */
    void ClearCorrelationId() { CorrelationId_IsSet = false; }

    /** @brief List of session IDs for the match */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<FRHAPI_MatchSession> Sessions_Optional{  };
    /** @brief true if Sessions_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Sessions_IsSet{ false };
    /** @brief Gets the value of Sessions_Optional, regardless of it having been set */
    TArray<FRHAPI_MatchSession>& GetSessions() { return Sessions_Optional; }
    /** @brief Gets the value of Sessions_Optional, regardless of it having been set */
    const TArray<FRHAPI_MatchSession>& GetSessions() const { return Sessions_Optional; }
    /** @brief Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FRHAPI_MatchSession>& GetSessions(const TArray<FRHAPI_MatchSession>& DefaultValue) const { if (Sessions_IsSet) return Sessions_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false */
    bool GetSessions(TArray<FRHAPI_MatchSession>& OutValue) const { if (Sessions_IsSet) OutValue = Sessions_Optional; return Sessions_IsSet; }
    /** @brief Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr */
    TArray<FRHAPI_MatchSession>* GetSessionsOrNull() { if (Sessions_IsSet) return &Sessions_Optional; return nullptr; }
    /** @brief Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FRHAPI_MatchSession>* GetSessionsOrNull() const { if (Sessions_IsSet) return &Sessions_Optional; return nullptr; }
    /** @brief Sets the value of Sessions_Optional and also sets Sessions_IsSet to true */
    void SetSessions(TArray<FRHAPI_MatchSession> NewValue) { Sessions_Optional = NewValue; Sessions_IsSet = true; }
     /** @brief Clears the value of Sessions_Optional and sets Sessions_IsSet to false */
    void ClearSessions() { Sessions_IsSet = false; }

    /** @brief List of MatchInstances for the match */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<FRHAPI_MatchInstance> Instances_Optional{  };
    /** @brief true if Instances_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Instances_IsSet{ false };
    /** @brief Gets the value of Instances_Optional, regardless of it having been set */
    TArray<FRHAPI_MatchInstance>& GetInstances() { return Instances_Optional; }
    /** @brief Gets the value of Instances_Optional, regardless of it having been set */
    const TArray<FRHAPI_MatchInstance>& GetInstances() const { return Instances_Optional; }
    /** @brief Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FRHAPI_MatchInstance>& GetInstances(const TArray<FRHAPI_MatchInstance>& DefaultValue) const { if (Instances_IsSet) return Instances_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false */
    bool GetInstances(TArray<FRHAPI_MatchInstance>& OutValue) const { if (Instances_IsSet) OutValue = Instances_Optional; return Instances_IsSet; }
    /** @brief Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr */
    TArray<FRHAPI_MatchInstance>* GetInstancesOrNull() { if (Instances_IsSet) return &Instances_Optional; return nullptr; }
    /** @brief Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FRHAPI_MatchInstance>* GetInstancesOrNull() const { if (Instances_IsSet) return &Instances_Optional; return nullptr; }
    /** @brief Sets the value of Instances_Optional and also sets Instances_IsSet to true */
    void SetInstances(TArray<FRHAPI_MatchInstance> NewValue) { Instances_Optional = NewValue; Instances_IsSet = true; }
     /** @brief Clears the value of Instances_Optional and sets Instances_IsSet to false */
    void ClearInstances() { Instances_IsSet = false; }

    /** @brief List of allocation IDs for the match */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<FRHAPI_MatchAllocation> Allocations_Optional{  };
    /** @brief true if Allocations_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Allocations_IsSet{ false };
    /** @brief Gets the value of Allocations_Optional, regardless of it having been set */
    TArray<FRHAPI_MatchAllocation>& GetAllocations() { return Allocations_Optional; }
    /** @brief Gets the value of Allocations_Optional, regardless of it having been set */
    const TArray<FRHAPI_MatchAllocation>& GetAllocations() const { return Allocations_Optional; }
    /** @brief Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FRHAPI_MatchAllocation>& GetAllocations(const TArray<FRHAPI_MatchAllocation>& DefaultValue) const { if (Allocations_IsSet) return Allocations_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false */
    bool GetAllocations(TArray<FRHAPI_MatchAllocation>& OutValue) const { if (Allocations_IsSet) OutValue = Allocations_Optional; return Allocations_IsSet; }
    /** @brief Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr */
    TArray<FRHAPI_MatchAllocation>* GetAllocationsOrNull() { if (Allocations_IsSet) return &Allocations_Optional; return nullptr; }
    /** @brief Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FRHAPI_MatchAllocation>* GetAllocationsOrNull() const { if (Allocations_IsSet) return &Allocations_Optional; return nullptr; }
    /** @brief Sets the value of Allocations_Optional and also sets Allocations_IsSet to true */
    void SetAllocations(TArray<FRHAPI_MatchAllocation> NewValue) { Allocations_Optional = NewValue; Allocations_IsSet = true; }
     /** @brief Clears the value of Allocations_Optional and sets Allocations_IsSet to false */
    void ClearAllocations() { Allocations_IsSet = false; }
};

/** @} */
