// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevSandboxCopyRequest.generated.h"

/** @defgroup RHAPI_DevSandboxCopyRequest RallyHere API Model DevSandboxCopyRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevSandboxCopyRequest : public FRHAPI_DevModel
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

    FGuid TargetSandboxId{  };
    /** @brief Gets the value of TargetSandboxId */
    FGuid& GetTargetSandboxId() { return TargetSandboxId; }
    /** @brief Gets the value of TargetSandboxId */
    const FGuid& GetTargetSandboxId() const { return TargetSandboxId; }
    /** @brief Sets the value of TargetSandboxId */
    void SetTargetSandboxId(FGuid NewValue) { TargetSandboxId = NewValue;  }
};

/** @} */