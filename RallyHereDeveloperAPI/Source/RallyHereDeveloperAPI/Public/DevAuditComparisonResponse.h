// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevAuditComparisonResponse.generated.h"

/** @defgroup RHAPI_DevAuditComparisonResponse RallyHere API Model DevAuditComparisonResponse
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevAuditComparisonResponse : public FRHAPI_DevModel
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

    FGuid AuditId{  };
    /** @brief Gets the value of AuditId */
    FGuid& GetAuditId() { return AuditId; }
    /** @brief Gets the value of AuditId */
    const FGuid& GetAuditId() const { return AuditId; }
    /** @brief Sets the value of AuditId */
    void SetAuditId(FGuid NewValue) { AuditId = NewValue;  }

    FString AuditRefType{  };
    /** @brief Gets the value of AuditRefType */
    FString& GetAuditRefType() { return AuditRefType; }
    /** @brief Gets the value of AuditRefType */
    const FString& GetAuditRefType() const { return AuditRefType; }
    /** @brief Sets the value of AuditRefType */
    void SetAuditRefType(FString NewValue) { AuditRefType = NewValue;  }

    FGuid AuditRefId{  };
    /** @brief Gets the value of AuditRefId */
    FGuid& GetAuditRefId() { return AuditRefId; }
    /** @brief Gets the value of AuditRefId */
    const FGuid& GetAuditRefId() const { return AuditRefId; }
    /** @brief Sets the value of AuditRefId */
    void SetAuditRefId(FGuid NewValue) { AuditRefId = NewValue;  }

    FString AuditPath{  };
    /** @brief Gets the value of AuditPath */
    FString& GetAuditPath() { return AuditPath; }
    /** @brief Gets the value of AuditPath */
    const FString& GetAuditPath() const { return AuditPath; }
    /** @brief Sets the value of AuditPath */
    void SetAuditPath(FString NewValue) { AuditPath = NewValue;  }

    FString Before{  };
    /** @brief Gets the value of Before */
    FString& GetBefore() { return Before; }
    /** @brief Gets the value of Before */
    const FString& GetBefore() const { return Before; }
    /** @brief Sets the value of Before */
    void SetBefore(FString NewValue) { Before = NewValue;  }

    FString After{  };
    /** @brief Gets the value of After */
    FString& GetAfter() { return After; }
    /** @brief Gets the value of After */
    const FString& GetAfter() const { return After; }
    /** @brief Sets the value of After */
    void SetAfter(FString NewValue) { After = NewValue;  }

    FGuid AccountId{  };
    /** @brief Gets the value of AccountId */
    FGuid& GetAccountId() { return AccountId; }
    /** @brief Gets the value of AccountId */
    const FGuid& GetAccountId() const { return AccountId; }
    /** @brief Sets the value of AccountId */
    void SetAccountId(FGuid NewValue) { AccountId = NewValue;  }

    FDateTime ModifiedTimestamp{  };
    /** @brief Gets the value of ModifiedTimestamp */
    FDateTime& GetModifiedTimestamp() { return ModifiedTimestamp; }
    /** @brief Gets the value of ModifiedTimestamp */
    const FDateTime& GetModifiedTimestamp() const { return ModifiedTimestamp; }
    /** @brief Sets the value of ModifiedTimestamp */
    void SetModifiedTimestamp(FDateTime NewValue) { ModifiedTimestamp = NewValue;  }
};

/** @} */
