// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevMenuDataSandbox.generated.h"

/** @defgroup RHAPI_DevMenuDataSandbox RallyHere API Model DevMenuDataSandbox
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevMenuDataSandbox : public FRHAPI_DevModel
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

    FGuid SandboxId{  };
    /** @brief Gets the value of SandboxId */
    FGuid& GetSandboxId() { return SandboxId; }
    /** @brief Gets the value of SandboxId */
    const FGuid& GetSandboxId() const { return SandboxId; }
    /** @brief Sets the value of SandboxId */
    void SetSandboxId(FGuid NewValue) { SandboxId = NewValue;  }

    FString ShortName{  };
    /** @brief Gets the value of ShortName */
    FString& GetShortName() { return ShortName; }
    /** @brief Gets the value of ShortName */
    const FString& GetShortName() const { return ShortName; }
    /** @brief Sets the value of ShortName */
    void SetShortName(FString NewValue) { ShortName = NewValue;  }

    FString SandboxName{  };
    /** @brief Gets the value of SandboxName */
    FString& GetSandboxName() { return SandboxName; }
    /** @brief Gets the value of SandboxName */
    const FString& GetSandboxName() const { return SandboxName; }
    /** @brief Sets the value of SandboxName */
    void SetSandboxName(FString NewValue) { SandboxName = NewValue;  }

    FString SandboxClassicSupportToolUrl_Optional{  };
    /** @brief true if SandboxClassicSupportToolUrl_Optional has been set to a value */
    bool SandboxClassicSupportToolUrl_IsSet{ false };
    /** @brief Gets the value of SandboxClassicSupportToolUrl_Optional, regardless of it having been set */
    FString& GetSandboxClassicSupportToolUrl() { return SandboxClassicSupportToolUrl_Optional; }
    /** @brief Gets the value of SandboxClassicSupportToolUrl_Optional, regardless of it having been set */
    const FString& GetSandboxClassicSupportToolUrl() const { return SandboxClassicSupportToolUrl_Optional; }
    /** @brief Gets the value of SandboxClassicSupportToolUrl_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetSandboxClassicSupportToolUrl(const FString& DefaultValue) const { if (SandboxClassicSupportToolUrl_IsSet) return SandboxClassicSupportToolUrl_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of SandboxClassicSupportToolUrl_Optional and returns true if it has been set, otherwise returns false */
    bool GetSandboxClassicSupportToolUrl(FString& OutValue) const { if (SandboxClassicSupportToolUrl_IsSet) OutValue = SandboxClassicSupportToolUrl_Optional; return SandboxClassicSupportToolUrl_IsSet; }
    /** @brief Returns a pointer to SandboxClassicSupportToolUrl_Optional, if it has been set, otherwise returns nullptr */
    FString* GetSandboxClassicSupportToolUrlOrNull() { if (SandboxClassicSupportToolUrl_IsSet) return &SandboxClassicSupportToolUrl_Optional; return nullptr; }
    /** @brief Returns a pointer to SandboxClassicSupportToolUrl_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetSandboxClassicSupportToolUrlOrNull() const { if (SandboxClassicSupportToolUrl_IsSet) return &SandboxClassicSupportToolUrl_Optional; return nullptr; }
    /** @brief Sets the value of SandboxClassicSupportToolUrl_Optional and also sets SandboxClassicSupportToolUrl_IsSet to true */
    void SetSandboxClassicSupportToolUrl(FString NewValue) { SandboxClassicSupportToolUrl_Optional = NewValue; SandboxClassicSupportToolUrl_IsSet = true; }
     /** @brief Clears the value of SandboxClassicSupportToolUrl_Optional and sets SandboxClassicSupportToolUrl_IsSet to false */
    void ClearSandboxClassicSupportToolUrl() { SandboxClassicSupportToolUrl_IsSet = false; }

    bool Archive_Optional{  };
    /** @brief true if Archive_Optional has been set to a value */
    bool Archive_IsSet{ false };
    /** @brief Gets the value of Archive_Optional, regardless of it having been set */
    bool& GetArchive() { return Archive_Optional; }
    /** @brief Gets the value of Archive_Optional, regardless of it having been set */
    const bool& GetArchive() const { return Archive_Optional; }
    /** @brief Gets the value of Archive_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetArchive(const bool& DefaultValue) const { if (Archive_IsSet) return Archive_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Archive_Optional and returns true if it has been set, otherwise returns false */
    bool GetArchive(bool& OutValue) const { if (Archive_IsSet) OutValue = Archive_Optional; return Archive_IsSet; }
    /** @brief Returns a pointer to Archive_Optional, if it has been set, otherwise returns nullptr */
    bool* GetArchiveOrNull() { if (Archive_IsSet) return &Archive_Optional; return nullptr; }
    /** @brief Returns a pointer to Archive_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetArchiveOrNull() const { if (Archive_IsSet) return &Archive_Optional; return nullptr; }
    /** @brief Sets the value of Archive_Optional and also sets Archive_IsSet to true */
    void SetArchive(bool NewValue) { Archive_Optional = NewValue; Archive_IsSet = true; }
     /** @brief Clears the value of Archive_Optional and sets Archive_IsSet to false */
    void ClearArchive() { Archive_Optional = false; Archive_IsSet = false; }
    /** @brief Returns true if Archive_Optional is set and matches the default value */
    bool IsArchiveDefaultValue() const { return Archive_IsSet && Archive_Optional == false; }
    /** @brief Sets the value of Archive_Optional to its default and also sets Archive_IsSet to true */
    void SetArchiveToDefault() { Archive_Optional = false; Archive_IsSet = true; }
};

/** @} */
