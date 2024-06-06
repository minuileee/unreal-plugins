// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevCrossplayPartitionRequest.generated.h"

/** @defgroup RHAPI_DevCrossplayPartitionRequest RallyHere API Model DevCrossplayPartitionRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevCrossplayPartitionRequest : public FRHAPI_DevModel
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

    /** @brief Readable name for this CrossplayPartition */
    FString Name_Optional{  };
    /** @brief true if Name_Optional has been set to a value */
    bool Name_IsSet{ false };
    /** @brief Gets the value of Name_Optional, regardless of it having been set */
    FString& GetName() { return Name_Optional; }
    /** @brief Gets the value of Name_Optional, regardless of it having been set */
    const FString& GetName() const { return Name_Optional; }
    /** @brief Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetName(const FString& DefaultValue) const { if (Name_IsSet) return Name_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false */
    bool GetName(FString& OutValue) const { if (Name_IsSet) OutValue = Name_Optional; return Name_IsSet; }
    /** @brief Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr */
    FString* GetNameOrNull() { if (Name_IsSet) return &Name_Optional; return nullptr; }
    /** @brief Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetNameOrNull() const { if (Name_IsSet) return &Name_Optional; return nullptr; }
    /** @brief Sets the value of Name_Optional and also sets Name_IsSet to true */
    void SetName(FString NewValue) { Name_Optional = NewValue; Name_IsSet = true; }
     /** @brief Clears the value of Name_Optional and sets Name_IsSet to false */
    void ClearName() { Name_IsSet = false; }

    /** @brief Whether or not this partition is enabled and can be used */
    bool Enabled_Optional{  };
    /** @brief true if Enabled_Optional has been set to a value */
    bool Enabled_IsSet{ false };
    /** @brief Gets the value of Enabled_Optional, regardless of it having been set */
    bool& GetEnabled() { return Enabled_Optional; }
    /** @brief Gets the value of Enabled_Optional, regardless of it having been set */
    const bool& GetEnabled() const { return Enabled_Optional; }
    /** @brief Gets the value of Enabled_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetEnabled(const bool& DefaultValue) const { if (Enabled_IsSet) return Enabled_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Enabled_Optional and returns true if it has been set, otherwise returns false */
    bool GetEnabled(bool& OutValue) const { if (Enabled_IsSet) OutValue = Enabled_Optional; return Enabled_IsSet; }
    /** @brief Returns a pointer to Enabled_Optional, if it has been set, otherwise returns nullptr */
    bool* GetEnabledOrNull() { if (Enabled_IsSet) return &Enabled_Optional; return nullptr; }
    /** @brief Returns a pointer to Enabled_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetEnabledOrNull() const { if (Enabled_IsSet) return &Enabled_Optional; return nullptr; }
    /** @brief Sets the value of Enabled_Optional and also sets Enabled_IsSet to true */
    void SetEnabled(bool NewValue) { Enabled_Optional = NewValue; Enabled_IsSet = true; }
     /** @brief Clears the value of Enabled_Optional and sets Enabled_IsSet to false */
    void ClearEnabled() { Enabled_Optional = true; Enabled_IsSet = false; }
    /** @brief Returns true if Enabled_Optional is set and matches the default value */
    bool IsEnabledDefaultValue() const { return Enabled_IsSet && Enabled_Optional == true; }
    /** @brief Sets the value of Enabled_Optional to its default and also sets Enabled_IsSet to true */
    void SetEnabledToDefault() { Enabled_Optional = true; Enabled_IsSet = true; }
};

/** @} */