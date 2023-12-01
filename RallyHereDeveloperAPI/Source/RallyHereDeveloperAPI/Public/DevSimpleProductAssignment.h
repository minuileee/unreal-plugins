// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevSimpleProductAssignment.generated.h"

/** @defgroup RHAPI_DevSimpleProductAssignment RallyHere API Model DevSimpleProductAssignment
 *  @{
 */

/**
 * @brief This is a minimal assignment type that represents how we currently handle assignments, but should be improved upon in the future.
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevSimpleProductAssignment : public FRHAPI_DevModel
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

    /** @brief The name of the product that will be used directly by the deployment system. e.g., paladins, roco */
    FString Name{  };
    /** @brief Gets the value of Name */
    FString& GetName() { return Name; }
    /** @brief Gets the value of Name */
    const FString& GetName() const { return Name; }
    /** @brief Sets the value of Name */
    void SetName(FString NewValue) { Name = NewValue;  }

    /** @brief The number of instances of the product that will be used directly by the deployment system. */
    int32 Count{ 0 };
    /** @brief Gets the value of Count */
    int32& GetCount() { return Count; }
    /** @brief Gets the value of Count */
    const int32& GetCount() const { return Count; }
    /** @brief Sets the value of Count */
    void SetCount(int32 NewValue) { Count = NewValue;  }
    /** @brief Returns true if Count matches the default value */
    bool IsCountDefaultValue() const { return Count == 0; }
    /** @brief Sets the value of Count to its default  */
    void SetCountToDefault() { Count = 0;  }

    /** @brief The ID of the host this assignment is associated with */
    FGuid HostId{  };
    /** @brief Gets the value of HostId */
    FGuid& GetHostId() { return HostId; }
    /** @brief Gets the value of HostId */
    const FGuid& GetHostId() const { return HostId; }
    /** @brief Sets the value of HostId */
    void SetHostId(FGuid NewValue) { HostId = NewValue;  }

    FGuid SimpleProductAssignmentId{  };
    /** @brief Gets the value of SimpleProductAssignmentId */
    FGuid& GetSimpleProductAssignmentId() { return SimpleProductAssignmentId; }
    /** @brief Gets the value of SimpleProductAssignmentId */
    const FGuid& GetSimpleProductAssignmentId() const { return SimpleProductAssignmentId; }
    /** @brief Sets the value of SimpleProductAssignmentId */
    void SetSimpleProductAssignmentId(FGuid NewValue) { SimpleProductAssignmentId = NewValue;  }
};

/** @} */
