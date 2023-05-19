// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "PlayerSessionInvite.generated.h"

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlayerSessionInvite : public FRHAPI_Model
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

    /** @brief Session ID for the invite */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString SessionId{  };
    /** @brief Gets the value of SessionId */
    FString& GetSessionId() { return SessionId; }
    /** @brief Gets the value of SessionId */
    const FString& GetSessionId() const { return SessionId; }
    /** @brief Sets the value of SessionId */
    void SetSessionId(FString NewValue) { SessionId = NewValue;  }

    /** @brief Player who sent the invite */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid InvitingPlayerUuid_Optional{  };
    /** @brief true if InvitingPlayerUuid_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool InvitingPlayerUuid_IsSet{ false };
    /** @brief Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set */
    FGuid& GetInvitingPlayerUuid() { return InvitingPlayerUuid_Optional; }
    /** @brief Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set */
    const FGuid& GetInvitingPlayerUuid() const { return InvitingPlayerUuid_Optional; }
    /** @brief Gets the value of InvitingPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetInvitingPlayerUuid(const FGuid& DefaultValue) const { if (InvitingPlayerUuid_IsSet) return InvitingPlayerUuid_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of InvitingPlayerUuid_Optional and returns true if it has been set, otherwise returns false */
    bool GetInvitingPlayerUuid(FGuid& OutValue) const { if (InvitingPlayerUuid_IsSet) OutValue = InvitingPlayerUuid_Optional; return InvitingPlayerUuid_IsSet; }
    /** @brief Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetInvitingPlayerUuidOrNull() { if (InvitingPlayerUuid_IsSet) return &InvitingPlayerUuid_Optional; return nullptr; }
    /** @brief Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetInvitingPlayerUuidOrNull() const { if (InvitingPlayerUuid_IsSet) return &InvitingPlayerUuid_Optional; return nullptr; }
    /** @brief Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true */
    void SetInvitingPlayerUuid(FGuid NewValue) { InvitingPlayerUuid_Optional = NewValue; InvitingPlayerUuid_IsSet = true; }
     /** @brief Clears the value of InvitingPlayerUuid_Optional and sets InvitingPlayerUuid_IsSet to false */
    void ClearInvitingPlayerUuid() { InvitingPlayerUuid_IsSet = false; }
};
