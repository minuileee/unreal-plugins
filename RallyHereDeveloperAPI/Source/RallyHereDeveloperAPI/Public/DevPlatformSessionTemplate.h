// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevPlatform.h"
#include "DevPlatformSessionTemplate.generated.h"

/** @defgroup RHAPI_DevPlatformSessionTemplate RallyHere API Model DevPlatformSessionTemplate
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevPlatformSessionTemplate : public FRHAPI_DevModel
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

    /** @brief The platform's name for this type of platform session */
    FString PlatformSessionType{  };
    /** @brief Gets the value of PlatformSessionType */
    FString& GetPlatformSessionType() { return PlatformSessionType; }
    /** @brief Gets the value of PlatformSessionType */
    const FString& GetPlatformSessionType() const { return PlatformSessionType; }
    /** @brief Sets the value of PlatformSessionType */
    void SetPlatformSessionType(FString NewValue) { PlatformSessionType = NewValue;  }

    /** @brief Custom passthrough data that will be added to all sessions of this type */
    TMap<FString, FString> CustomData_Optional{  };
    /** @brief true if CustomData_Optional has been set to a value */
    bool CustomData_IsSet{ false };
    /** @brief Gets the value of CustomData_Optional, regardless of it having been set */
    TMap<FString, FString>& GetCustomData() { return CustomData_Optional; }
    /** @brief Gets the value of CustomData_Optional, regardless of it having been set */
    const TMap<FString, FString>& GetCustomData() const { return CustomData_Optional; }
    /** @brief Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue */
    const TMap<FString, FString>& GetCustomData(const TMap<FString, FString>& DefaultValue) const { if (CustomData_IsSet) return CustomData_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false */
    bool GetCustomData(TMap<FString, FString>& OutValue) const { if (CustomData_IsSet) OutValue = CustomData_Optional; return CustomData_IsSet; }
    /** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
    TMap<FString, FString>* GetCustomDataOrNull() { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
    /** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
    const TMap<FString, FString>* GetCustomDataOrNull() const { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
    /** @brief Sets the value of CustomData_Optional and also sets CustomData_IsSet to true */
    void SetCustomData(TMap<FString, FString> NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true; }
     /** @brief Clears the value of CustomData_Optional and sets CustomData_IsSet to false */
    void ClearCustomData() { CustomData_IsSet = false; }

    /** @brief ID of the Sandbox */
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

    /** @brief Unique id for this type of session that this template is associated with */
    FGuid SessionTemplateId{  };
    /** @brief Gets the value of SessionTemplateId */
    FGuid& GetSessionTemplateId() { return SessionTemplateId; }
    /** @brief Gets the value of SessionTemplateId */
    const FGuid& GetSessionTemplateId() const { return SessionTemplateId; }
    /** @brief Sets the value of SessionTemplateId */
    void SetSessionTemplateId(FGuid NewValue) { SessionTemplateId = NewValue;  }

    /** @brief Which platform this template is associated with */
    ERHAPI_DevPlatform Platform{  };
    /** @brief Gets the value of Platform */
    ERHAPI_DevPlatform& GetPlatform() { return Platform; }
    /** @brief Gets the value of Platform */
    const ERHAPI_DevPlatform& GetPlatform() const { return Platform; }
    /** @brief Sets the value of Platform */
    void SetPlatform(ERHAPI_DevPlatform NewValue) { Platform = NewValue;  }

    /** @brief Account ID of the user who last modified the resource */
    FGuid LastModifiedAccountId_Optional{  };
    /** @brief true if LastModifiedAccountId_Optional has been set to a value */
    bool LastModifiedAccountId_IsSet{ false };
    /** @brief Gets the value of LastModifiedAccountId_Optional, regardless of it having been set */
    FGuid& GetLastModifiedAccountId() { return LastModifiedAccountId_Optional; }
    /** @brief Gets the value of LastModifiedAccountId_Optional, regardless of it having been set */
    const FGuid& GetLastModifiedAccountId() const { return LastModifiedAccountId_Optional; }
    /** @brief Gets the value of LastModifiedAccountId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetLastModifiedAccountId(const FGuid& DefaultValue) const { if (LastModifiedAccountId_IsSet) return LastModifiedAccountId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LastModifiedAccountId_Optional and returns true if it has been set, otherwise returns false */
    bool GetLastModifiedAccountId(FGuid& OutValue) const { if (LastModifiedAccountId_IsSet) OutValue = LastModifiedAccountId_Optional; return LastModifiedAccountId_IsSet; }
    /** @brief Returns a pointer to LastModifiedAccountId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetLastModifiedAccountIdOrNull() { if (LastModifiedAccountId_IsSet) return &LastModifiedAccountId_Optional; return nullptr; }
    /** @brief Returns a pointer to LastModifiedAccountId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetLastModifiedAccountIdOrNull() const { if (LastModifiedAccountId_IsSet) return &LastModifiedAccountId_Optional; return nullptr; }
    /** @brief Sets the value of LastModifiedAccountId_Optional and also sets LastModifiedAccountId_IsSet to true */
    void SetLastModifiedAccountId(FGuid NewValue) { LastModifiedAccountId_Optional = NewValue; LastModifiedAccountId_IsSet = true; }
     /** @brief Clears the value of LastModifiedAccountId_Optional and sets LastModifiedAccountId_IsSet to false */
    void ClearLastModifiedAccountId() { LastModifiedAccountId_IsSet = false; }

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