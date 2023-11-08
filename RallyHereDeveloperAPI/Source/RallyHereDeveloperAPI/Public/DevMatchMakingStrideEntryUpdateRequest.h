// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevMatchMakingStrideEntryUpdateRequest.generated.h"

/** @defgroup RHAPI_DevMatchMakingStrideEntryUpdateRequest RallyHere API Model DevMatchMakingStrideEntryUpdateRequest
 *  @{
 */

/**
 * @brief
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevMatchMakingStrideEntryUpdateRequest : public FRHAPI_DevModel
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

    /** @brief How many partitions are created at this point in the stride */
    int32 Step_Optional{  };
    /** @brief true if Step_Optional has been set to a value */
    bool Step_IsSet{ false };
    /** @brief Gets the value of Step_Optional, regardless of it having been set */
    int32& GetStep() { return Step_Optional; }
    /** @brief Gets the value of Step_Optional, regardless of it having been set */
    const int32& GetStep() const { return Step_Optional; }
    /** @brief Gets the value of Step_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetStep(const int32& DefaultValue) const { if (Step_IsSet) return Step_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Step_Optional and returns true if it has been set, otherwise returns false */
    bool GetStep(int32& OutValue) const { if (Step_IsSet) OutValue = Step_Optional; return Step_IsSet; }
    /** @brief Returns a pointer to Step_Optional, if it has been set, otherwise returns nullptr */
    int32* GetStepOrNull() { if (Step_IsSet) return &Step_Optional; return nullptr; }
    /** @brief Returns a pointer to Step_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetStepOrNull() const { if (Step_IsSet) return &Step_Optional; return nullptr; }
    /** @brief Sets the value of Step_Optional and also sets Step_IsSet to true */
    void SetStep(int32 NewValue) { Step_Optional = NewValue; Step_IsSet = true; }
     /** @brief Clears the value of Step_Optional and sets Step_IsSet to false */
    void ClearStep() { Step_Optional = 0; Step_IsSet = false; }
    /** @brief Returns true if Step_Optional is set and matches the default value */
    bool IsStepDefaultValue() const { return Step_IsSet && Step_Optional == 0; }
    /** @brief Sets the value of Step_Optional to its default and also sets Step_IsSet to true */
    void SetStepToDefault() { Step_Optional = 0; Step_IsSet = true; }

    /** @brief How far into adjacent skill partitions overlap when trying to match players together */
    int32 Overlap_Optional{  };
    /** @brief true if Overlap_Optional has been set to a value */
    bool Overlap_IsSet{ false };
    /** @brief Gets the value of Overlap_Optional, regardless of it having been set */
    int32& GetOverlap() { return Overlap_Optional; }
    /** @brief Gets the value of Overlap_Optional, regardless of it having been set */
    const int32& GetOverlap() const { return Overlap_Optional; }
    /** @brief Gets the value of Overlap_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetOverlap(const int32& DefaultValue) const { if (Overlap_IsSet) return Overlap_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Overlap_Optional and returns true if it has been set, otherwise returns false */
    bool GetOverlap(int32& OutValue) const { if (Overlap_IsSet) OutValue = Overlap_Optional; return Overlap_IsSet; }
    /** @brief Returns a pointer to Overlap_Optional, if it has been set, otherwise returns nullptr */
    int32* GetOverlapOrNull() { if (Overlap_IsSet) return &Overlap_Optional; return nullptr; }
    /** @brief Returns a pointer to Overlap_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetOverlapOrNull() const { if (Overlap_IsSet) return &Overlap_Optional; return nullptr; }
    /** @brief Sets the value of Overlap_Optional and also sets Overlap_IsSet to true */
    void SetOverlap(int32 NewValue) { Overlap_Optional = NewValue; Overlap_IsSet = true; }
     /** @brief Clears the value of Overlap_Optional and sets Overlap_IsSet to false */
    void ClearOverlap() { Overlap_Optional = 0; Overlap_IsSet = false; }
    /** @brief Returns true if Overlap_Optional is set and matches the default value */
    bool IsOverlapDefaultValue() const { return Overlap_IsSet && Overlap_Optional == 0; }
    /** @brief Sets the value of Overlap_Optional to its default and also sets Overlap_IsSet to true */
    void SetOverlapToDefault() { Overlap_Optional = 0; Overlap_IsSet = true; }

    /** @brief The minimum popluation required to use this step of the stride */
    int32 MinPopulation_Optional{  };
    /** @brief true if MinPopulation_Optional has been set to a value */
    bool MinPopulation_IsSet{ false };
    /** @brief Gets the value of MinPopulation_Optional, regardless of it having been set */
    int32& GetMinPopulation() { return MinPopulation_Optional; }
    /** @brief Gets the value of MinPopulation_Optional, regardless of it having been set */
    const int32& GetMinPopulation() const { return MinPopulation_Optional; }
    /** @brief Gets the value of MinPopulation_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetMinPopulation(const int32& DefaultValue) const { if (MinPopulation_IsSet) return MinPopulation_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of MinPopulation_Optional and returns true if it has been set, otherwise returns false */
    bool GetMinPopulation(int32& OutValue) const { if (MinPopulation_IsSet) OutValue = MinPopulation_Optional; return MinPopulation_IsSet; }
    /** @brief Returns a pointer to MinPopulation_Optional, if it has been set, otherwise returns nullptr */
    int32* GetMinPopulationOrNull() { if (MinPopulation_IsSet) return &MinPopulation_Optional; return nullptr; }
    /** @brief Returns a pointer to MinPopulation_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetMinPopulationOrNull() const { if (MinPopulation_IsSet) return &MinPopulation_Optional; return nullptr; }
    /** @brief Sets the value of MinPopulation_Optional and also sets MinPopulation_IsSet to true */
    void SetMinPopulation(int32 NewValue) { MinPopulation_Optional = NewValue; MinPopulation_IsSet = true; }
     /** @brief Clears the value of MinPopulation_Optional and sets MinPopulation_IsSet to false */
    void ClearMinPopulation() { MinPopulation_Optional = 0; MinPopulation_IsSet = false; }
    /** @brief Returns true if MinPopulation_Optional is set and matches the default value */
    bool IsMinPopulationDefaultValue() const { return MinPopulation_IsSet && MinPopulation_Optional == 0; }
    /** @brief Sets the value of MinPopulation_Optional to its default and also sets MinPopulation_IsSet to true */
    void SetMinPopulationToDefault() { MinPopulation_Optional = 0; MinPopulation_IsSet = true; }
};

/** @} */
