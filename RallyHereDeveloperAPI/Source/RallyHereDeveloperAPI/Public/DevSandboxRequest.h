// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevSandboxRequest.generated.h"

/** @defgroup RHAPI_DevSandboxRequest RallyHere API Model DevSandboxRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevSandboxRequest : public FRHAPI_DevModel
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

    FString Name{  };
    /** @brief Gets the value of Name */
    FString& GetName() { return Name; }
    /** @brief Gets the value of Name */
    const FString& GetName() const { return Name; }
    /** @brief Sets the value of Name */
    void SetName(FString NewValue) { Name = NewValue;  }

    FString PrimaryContactEmail{  };
    /** @brief Gets the value of PrimaryContactEmail */
    FString& GetPrimaryContactEmail() { return PrimaryContactEmail; }
    /** @brief Gets the value of PrimaryContactEmail */
    const FString& GetPrimaryContactEmail() const { return PrimaryContactEmail; }
    /** @brief Sets the value of PrimaryContactEmail */
    void SetPrimaryContactEmail(FString NewValue) { PrimaryContactEmail = NewValue;  }

    FString ShortName{  };
    /** @brief Gets the value of ShortName */
    FString& GetShortName() { return ShortName; }
    /** @brief Gets the value of ShortName */
    const FString& GetShortName() const { return ShortName; }
    /** @brief Sets the value of ShortName */
    void SetShortName(FString NewValue) { ShortName = NewValue;  }

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

    /** @brief URL to the classic support tool */
    FString ClassicSupportToolUrl_Optional{  };
    /** @brief true if ClassicSupportToolUrl_Optional has been set to a value */
    bool ClassicSupportToolUrl_IsSet{ false };
    /** @brief Gets the value of ClassicSupportToolUrl_Optional, regardless of it having been set */
    FString& GetClassicSupportToolUrl() { return ClassicSupportToolUrl_Optional; }
    /** @brief Gets the value of ClassicSupportToolUrl_Optional, regardless of it having been set */
    const FString& GetClassicSupportToolUrl() const { return ClassicSupportToolUrl_Optional; }
    /** @brief Gets the value of ClassicSupportToolUrl_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetClassicSupportToolUrl(const FString& DefaultValue) const { if (ClassicSupportToolUrl_IsSet) return ClassicSupportToolUrl_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of ClassicSupportToolUrl_Optional and returns true if it has been set, otherwise returns false */
    bool GetClassicSupportToolUrl(FString& OutValue) const { if (ClassicSupportToolUrl_IsSet) OutValue = ClassicSupportToolUrl_Optional; return ClassicSupportToolUrl_IsSet; }
    /** @brief Returns a pointer to ClassicSupportToolUrl_Optional, if it has been set, otherwise returns nullptr */
    FString* GetClassicSupportToolUrlOrNull() { if (ClassicSupportToolUrl_IsSet) return &ClassicSupportToolUrl_Optional; return nullptr; }
    /** @brief Returns a pointer to ClassicSupportToolUrl_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetClassicSupportToolUrlOrNull() const { if (ClassicSupportToolUrl_IsSet) return &ClassicSupportToolUrl_Optional; return nullptr; }
    /** @brief Sets the value of ClassicSupportToolUrl_Optional and also sets ClassicSupportToolUrl_IsSet to true */
    void SetClassicSupportToolUrl(FString NewValue) { ClassicSupportToolUrl_Optional = NewValue; ClassicSupportToolUrl_IsSet = true; }
     /** @brief Clears the value of ClassicSupportToolUrl_Optional and sets ClassicSupportToolUrl_IsSet to false */
    void ClearClassicSupportToolUrl() { ClassicSupportToolUrl_IsSet = false; }
};

/** @} */
