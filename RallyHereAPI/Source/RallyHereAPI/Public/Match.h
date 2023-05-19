// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "Match.generated.h"

/**
 * @brief Info about the current match in the instance
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_Match : public FRHAPI_Model
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
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString MatchId{  };
    /** @brief Gets the value of MatchId */
    FString& GetMatchId() { return MatchId; }
    /** @brief Gets the value of MatchId */
    const FString& GetMatchId() const { return MatchId; }
    /** @brief Sets the value of MatchId */
    void SetMatchId(FString NewValue) { MatchId = NewValue;  }

    /** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FDateTime Created{  };
    /** @brief Gets the value of Created */
    FDateTime& GetCreated() { return Created; }
    /** @brief Gets the value of Created */
    const FDateTime& GetCreated() const { return Created; }
    /** @brief Sets the value of Created */
    void SetCreated(FDateTime NewValue) { Created = NewValue;  }

    /** @brief instance-defined custom data */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TMap<FString, FString> CustomData_Optional{  };
    /** @brief true if CustomData_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
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

    /** @brief List of tickets that were assigned to this match if created by matchmaking */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<FString> TicketIds_Optional{  };
    /** @brief true if TicketIds_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
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
    void SetTicketIds(TArray<FString> NewValue) { TicketIds_Optional = NewValue; TicketIds_IsSet = true; }
     /** @brief Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false */
    void ClearTicketIds() { TicketIds_IsSet = false; }
};
