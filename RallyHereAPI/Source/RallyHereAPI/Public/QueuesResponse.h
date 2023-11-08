// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "QueueConfig.h"
#include "QueuesResponse.generated.h"

/** @defgroup RHAPI_QueuesResponse RallyHere API Model QueuesResponse
 *  @{
 */

/**
 * @brief DEPRECATED - A list of configuration about queues
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_QueuesResponse : public FRHAPI_Model
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

    /** @brief List of queues */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<FRHAPI_QueueConfig> Queues{  };
    /** @brief Gets the value of Queues */
    TArray<FRHAPI_QueueConfig>& GetQueues() { return Queues; }
    /** @brief Gets the value of Queues */
    const TArray<FRHAPI_QueueConfig>& GetQueues() const { return Queues; }
    /** @brief Sets the value of Queues */
    void SetQueues(TArray<FRHAPI_QueueConfig> NewValue) { Queues = NewValue;  }
};

/** @} */
