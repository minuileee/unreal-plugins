// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevTaskforceSizeByTime.generated.h"

/** @defgroup RHAPI_DevTaskforceSizeByTime RallyHere API Model DevTaskforceSizeByTime
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevTaskforceSizeByTime : public FRHAPI_DevModel
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

    /** @brief The minimum size this taskforce can decay to */
    int32 MinDecayedSize{ 0 };
    /** @brief Gets the value of MinDecayedSize */
    int32& GetMinDecayedSize() { return MinDecayedSize; }
    /** @brief Gets the value of MinDecayedSize */
    const int32& GetMinDecayedSize() const { return MinDecayedSize; }
    /** @brief Sets the value of MinDecayedSize */
    void SetMinDecayedSize(int32 NewValue) { MinDecayedSize = NewValue;  }
    /** @brief Returns true if MinDecayedSize matches the default value */
    bool IsMinDecayedSizeDefaultValue() const { return MinDecayedSize == 0; }
    /** @brief Sets the value of MinDecayedSize to its default  */
    void SetMinDecayedSizeToDefault() { MinDecayedSize = 0;  }

    /** @brief How big the taskforce should be before any decay has occurred */
    int32 StartingSize{ 0 };
    /** @brief Gets the value of StartingSize */
    int32& GetStartingSize() { return StartingSize; }
    /** @brief Gets the value of StartingSize */
    const int32& GetStartingSize() const { return StartingSize; }
    /** @brief Sets the value of StartingSize */
    void SetStartingSize(int32 NewValue) { StartingSize = NewValue;  }
    /** @brief Returns true if StartingSize matches the default value */
    bool IsStartingSizeDefaultValue() const { return StartingSize == 0; }
    /** @brief Sets the value of StartingSize to its default  */
    void SetStartingSizeToDefault() { StartingSize = 0;  }

    /** @brief At what rate should the decay occur. 1 is linear, 2 quadratic etc */
    int32 DecayPower{ 0 };
    /** @brief Gets the value of DecayPower */
    int32& GetDecayPower() { return DecayPower; }
    /** @brief Gets the value of DecayPower */
    const int32& GetDecayPower() const { return DecayPower; }
    /** @brief Sets the value of DecayPower */
    void SetDecayPower(int32 NewValue) { DecayPower = NewValue;  }
    /** @brief Returns true if DecayPower matches the default value */
    bool IsDecayPowerDefaultValue() const { return DecayPower == 0; }
    /** @brief Sets the value of DecayPower to its default  */
    void SetDecayPowerToDefault() { DecayPower = 0;  }

    /** @brief How many minutes it will take for the taskforce size to fully decay */
    float MaxMinutes{  };
    /** @brief Gets the value of MaxMinutes */
    float& GetMaxMinutes() { return MaxMinutes; }
    /** @brief Gets the value of MaxMinutes */
    const float& GetMaxMinutes() const { return MaxMinutes; }
    /** @brief Sets the value of MaxMinutes */
    void SetMaxMinutes(float NewValue) { MaxMinutes = NewValue;  }
};

/** @} */