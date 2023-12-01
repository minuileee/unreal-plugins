// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevEnvironmentResponse.generated.h"

/** @defgroup RHAPI_DevEnvironmentResponse RallyHere API Model DevEnvironmentResponse
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevEnvironmentResponse : public FRHAPI_DevModel
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

    /** @brief The name of the environment */
    FString Name{  };
    /** @brief Gets the value of Name */
    FString& GetName() { return Name; }
    /** @brief Gets the value of Name */
    const FString& GetName() const { return Name; }
    /** @brief Sets the value of Name */
    void SetName(FString NewValue) { Name = NewValue;  }

    /** @brief The short name of the environment */
    FString ShortName{  };
    /** @brief Gets the value of ShortName */
    FString& GetShortName() { return ShortName; }
    /** @brief Gets the value of ShortName */
    const FString& GetShortName() const { return ShortName; }
    /** @brief Sets the value of ShortName */
    void SetShortName(FString NewValue) { ShortName = NewValue;  }

    /** @brief The base url for this environment */
    FString BaseUrl_Optional{  };
    /** @brief true if BaseUrl_Optional has been set to a value */
    bool BaseUrl_IsSet{ false };
    /** @brief Gets the value of BaseUrl_Optional, regardless of it having been set */
    FString& GetBaseUrl() { return BaseUrl_Optional; }
    /** @brief Gets the value of BaseUrl_Optional, regardless of it having been set */
    const FString& GetBaseUrl() const { return BaseUrl_Optional; }
    /** @brief Gets the value of BaseUrl_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetBaseUrl(const FString& DefaultValue) const { if (BaseUrl_IsSet) return BaseUrl_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of BaseUrl_Optional and returns true if it has been set, otherwise returns false */
    bool GetBaseUrl(FString& OutValue) const { if (BaseUrl_IsSet) OutValue = BaseUrl_Optional; return BaseUrl_IsSet; }
    /** @brief Returns a pointer to BaseUrl_Optional, if it has been set, otherwise returns nullptr */
    FString* GetBaseUrlOrNull() { if (BaseUrl_IsSet) return &BaseUrl_Optional; return nullptr; }
    /** @brief Returns a pointer to BaseUrl_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetBaseUrlOrNull() const { if (BaseUrl_IsSet) return &BaseUrl_Optional; return nullptr; }
    /** @brief Sets the value of BaseUrl_Optional and also sets BaseUrl_IsSet to true */
    void SetBaseUrl(FString NewValue) { BaseUrl_Optional = NewValue; BaseUrl_IsSet = true; }
     /** @brief Clears the value of BaseUrl_Optional and sets BaseUrl_IsSet to false */
    void ClearBaseUrl() { BaseUrl_IsSet = false; }

    /** @brief The primary contact email for the environment */
    FString PrimaryContactEmail_Optional{  };
    /** @brief true if PrimaryContactEmail_Optional has been set to a value */
    bool PrimaryContactEmail_IsSet{ false };
    /** @brief Gets the value of PrimaryContactEmail_Optional, regardless of it having been set */
    FString& GetPrimaryContactEmail() { return PrimaryContactEmail_Optional; }
    /** @brief Gets the value of PrimaryContactEmail_Optional, regardless of it having been set */
    const FString& GetPrimaryContactEmail() const { return PrimaryContactEmail_Optional; }
    /** @brief Gets the value of PrimaryContactEmail_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetPrimaryContactEmail(const FString& DefaultValue) const { if (PrimaryContactEmail_IsSet) return PrimaryContactEmail_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of PrimaryContactEmail_Optional and returns true if it has been set, otherwise returns false */
    bool GetPrimaryContactEmail(FString& OutValue) const { if (PrimaryContactEmail_IsSet) OutValue = PrimaryContactEmail_Optional; return PrimaryContactEmail_IsSet; }
    /** @brief Returns a pointer to PrimaryContactEmail_Optional, if it has been set, otherwise returns nullptr */
    FString* GetPrimaryContactEmailOrNull() { if (PrimaryContactEmail_IsSet) return &PrimaryContactEmail_Optional; return nullptr; }
    /** @brief Returns a pointer to PrimaryContactEmail_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetPrimaryContactEmailOrNull() const { if (PrimaryContactEmail_IsSet) return &PrimaryContactEmail_Optional; return nullptr; }
    /** @brief Sets the value of PrimaryContactEmail_Optional and also sets PrimaryContactEmail_IsSet to true */
    void SetPrimaryContactEmail(FString NewValue) { PrimaryContactEmail_Optional = NewValue; PrimaryContactEmail_IsSet = true; }
     /** @brief Clears the value of PrimaryContactEmail_Optional and sets PrimaryContactEmail_IsSet to false */
    void ClearPrimaryContactEmail() { PrimaryContactEmail_IsSet = false; }

    /** @brief The id of the sandbox this environment uses */
    FGuid SandboxId_Optional{  };
    /** @brief true if SandboxId_Optional has been set to a value */
    bool SandboxId_IsSet{ false };
    /** @brief Gets the value of SandboxId_Optional, regardless of it having been set */
    FGuid& GetSandboxId() { return SandboxId_Optional; }
    /** @brief Gets the value of SandboxId_Optional, regardless of it having been set */
    const FGuid& GetSandboxId() const { return SandboxId_Optional; }
    /** @brief Gets the value of SandboxId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetSandboxId(const FGuid& DefaultValue) const { if (SandboxId_IsSet) return SandboxId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of SandboxId_Optional and returns true if it has been set, otherwise returns false */
    bool GetSandboxId(FGuid& OutValue) const { if (SandboxId_IsSet) OutValue = SandboxId_Optional; return SandboxId_IsSet; }
    /** @brief Returns a pointer to SandboxId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetSandboxIdOrNull() { if (SandboxId_IsSet) return &SandboxId_Optional; return nullptr; }
    /** @brief Returns a pointer to SandboxId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetSandboxIdOrNull() const { if (SandboxId_IsSet) return &SandboxId_Optional; return nullptr; }
    /** @brief Sets the value of SandboxId_Optional and also sets SandboxId_IsSet to true */
    void SetSandboxId(FGuid NewValue) { SandboxId_Optional = NewValue; SandboxId_IsSet = true; }
     /** @brief Clears the value of SandboxId_Optional and sets SandboxId_IsSet to false */
    void ClearSandboxId() { SandboxId_IsSet = false; }

    /** @brief Determines if the Loot is active. Inactive Loot will not be fulfilled. */
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

    FGuid EnvironmentId{  };
    /** @brief Gets the value of EnvironmentId */
    FGuid& GetEnvironmentId() { return EnvironmentId; }
    /** @brief Gets the value of EnvironmentId */
    const FGuid& GetEnvironmentId() const { return EnvironmentId; }
    /** @brief Sets the value of EnvironmentId */
    void SetEnvironmentId(FGuid NewValue) { EnvironmentId = NewValue;  }

    /** @brief Timestamp of when the resource was last modified */
    FDateTime LastModifiedTimestamp_Optional{  };
    /** @brief true if LastModifiedTimestamp_Optional has been set to a value */
    bool LastModifiedTimestamp_IsSet{ false };
    /** @brief Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set */
    FDateTime& GetLastModifiedTimestamp() { return LastModifiedTimestamp_Optional; }
    /** @brief Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set */
    const FDateTime& GetLastModifiedTimestamp() const { return LastModifiedTimestamp_Optional; }
    /** @brief Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue */
    const FDateTime& GetLastModifiedTimestamp(const FDateTime& DefaultValue) const { if (LastModifiedTimestamp_IsSet) return LastModifiedTimestamp_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false */
    bool GetLastModifiedTimestamp(FDateTime& OutValue) const { if (LastModifiedTimestamp_IsSet) OutValue = LastModifiedTimestamp_Optional; return LastModifiedTimestamp_IsSet; }
    /** @brief Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr */
    FDateTime* GetLastModifiedTimestampOrNull() { if (LastModifiedTimestamp_IsSet) return &LastModifiedTimestamp_Optional; return nullptr; }
    /** @brief Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr */
    const FDateTime* GetLastModifiedTimestampOrNull() const { if (LastModifiedTimestamp_IsSet) return &LastModifiedTimestamp_Optional; return nullptr; }
    /** @brief Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true */
    void SetLastModifiedTimestamp(FDateTime NewValue) { LastModifiedTimestamp_Optional = NewValue; LastModifiedTimestamp_IsSet = true; }
     /** @brief Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false */
    void ClearLastModifiedTimestamp() { LastModifiedTimestamp_IsSet = false; }
};

/** @} */
