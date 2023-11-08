// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "RestrictionType.h"
#include "Restriction.generated.h"

/** @defgroup RHAPI_Restriction RallyHere API Model Restriction
 *  @{
 */

/**
 * @brief Restriction applied to a player
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_Restriction : public FRHAPI_Model
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

    /** @brief Type of restriction */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    ERHAPI_RestrictionType Type{  };
    /** @brief Gets the value of Type */
    ERHAPI_RestrictionType& GetType() { return Type; }
    /** @brief Gets the value of Type */
    const ERHAPI_RestrictionType& GetType() const { return Type; }
    /** @brief Sets the value of Type */
    void SetType(ERHAPI_RestrictionType NewValue) { Type = NewValue;  }

    /** @brief Reason the restriction was applied */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Reason_Optional{  };
    /** @brief true if Reason_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Reason_IsSet{ false };
    /** @brief Gets the value of Reason_Optional, regardless of it having been set */
    FString& GetReason() { return Reason_Optional; }
    /** @brief Gets the value of Reason_Optional, regardless of it having been set */
    const FString& GetReason() const { return Reason_Optional; }
    /** @brief Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetReason(const FString& DefaultValue) const { if (Reason_IsSet) return Reason_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false */
    bool GetReason(FString& OutValue) const { if (Reason_IsSet) OutValue = Reason_Optional; return Reason_IsSet; }
    /** @brief Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr */
    FString* GetReasonOrNull() { if (Reason_IsSet) return &Reason_Optional; return nullptr; }
    /** @brief Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetReasonOrNull() const { if (Reason_IsSet) return &Reason_Optional; return nullptr; }
    /** @brief Sets the value of Reason_Optional and also sets Reason_IsSet to true */
    void SetReason(FString NewValue) { Reason_Optional = NewValue; Reason_IsSet = true; }
     /** @brief Clears the value of Reason_Optional and sets Reason_IsSet to false */
    void ClearReason() { Reason_IsSet = false; }

    /** @brief Date the restriction expires.  Null means the restriction is permanent */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FDateTime Expiration_Optional{  };
    /** @brief true if Expiration_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Expiration_IsSet{ false };
    /** @brief Gets the value of Expiration_Optional, regardless of it having been set */
    FDateTime& GetExpiration() { return Expiration_Optional; }
    /** @brief Gets the value of Expiration_Optional, regardless of it having been set */
    const FDateTime& GetExpiration() const { return Expiration_Optional; }
    /** @brief Gets the value of Expiration_Optional, if it has been set, otherwise it returns DefaultValue */
    const FDateTime& GetExpiration(const FDateTime& DefaultValue) const { if (Expiration_IsSet) return Expiration_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Expiration_Optional and returns true if it has been set, otherwise returns false */
    bool GetExpiration(FDateTime& OutValue) const { if (Expiration_IsSet) OutValue = Expiration_Optional; return Expiration_IsSet; }
    /** @brief Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr */
    FDateTime* GetExpirationOrNull() { if (Expiration_IsSet) return &Expiration_Optional; return nullptr; }
    /** @brief Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr */
    const FDateTime* GetExpirationOrNull() const { if (Expiration_IsSet) return &Expiration_Optional; return nullptr; }
    /** @brief Sets the value of Expiration_Optional and also sets Expiration_IsSet to true */
    void SetExpiration(FDateTime NewValue) { Expiration_Optional = NewValue; Expiration_IsSet = true; }
     /** @brief Clears the value of Expiration_Optional and sets Expiration_IsSet to false */
    void ClearExpiration() { Expiration_IsSet = false; }
};

/** @} */
