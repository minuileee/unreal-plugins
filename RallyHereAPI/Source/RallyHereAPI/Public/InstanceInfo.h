// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "HostType.h"
#include "InstanceHealth.h"
#include "InstanceJoinableStatus.h"
#include "InstanceStartupParams.h"
#include "JoinParams.h"
#include "InstanceInfo.generated.h"

/** @defgroup RHAPI_InstanceInfo RallyHere API Model InstanceInfo
 *  @{
 */

/**
 * @brief Information about the instance resource in a session
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_InstanceInfo : public FRHAPI_Model
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

    /** @brief Allocation ID for instance that's been spun up */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString AllocationId_Optional{  };
    /** @brief true if AllocationId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool AllocationId_IsSet{ false };
    /** @brief Gets the value of AllocationId_Optional, regardless of it having been set */
    FString& GetAllocationId() { return AllocationId_Optional; }
    /** @brief Gets the value of AllocationId_Optional, regardless of it having been set */
    const FString& GetAllocationId() const { return AllocationId_Optional; }
    /** @brief Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetAllocationId(const FString& DefaultValue) const { if (AllocationId_IsSet) return AllocationId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false */
    bool GetAllocationId(FString& OutValue) const { if (AllocationId_IsSet) OutValue = AllocationId_Optional; return AllocationId_IsSet; }
    /** @brief Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr */
    FString* GetAllocationIdOrNull() { if (AllocationId_IsSet) return &AllocationId_Optional; return nullptr; }
    /** @brief Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetAllocationIdOrNull() const { if (AllocationId_IsSet) return &AllocationId_Optional; return nullptr; }
    /** @brief Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true */
    void SetAllocationId(FString NewValue) { AllocationId_Optional = NewValue; AllocationId_IsSet = true; }
     /** @brief Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false */
    void ClearAllocationId() { AllocationId_IsSet = false; }

    /** @brief Unique ID for the host/session relationship */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString InstanceId{  };
    /** @brief Gets the value of InstanceId */
    FString& GetInstanceId() { return InstanceId; }
    /** @brief Gets the value of InstanceId */
    const FString& GetInstanceId() const { return InstanceId; }
    /** @brief Sets the value of InstanceId */
    void SetInstanceId(FString NewValue) { InstanceId = NewValue;  }

    /** @brief Type of the host */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    ERHAPI_HostType HostType{  };
    /** @brief Gets the value of HostType */
    ERHAPI_HostType& GetHostType() { return HostType; }
    /** @brief Gets the value of HostType */
    const ERHAPI_HostType& GetHostType() const { return HostType; }
    /** @brief Sets the value of HostType */
    void SetHostType(ERHAPI_HostType NewValue) { HostType = NewValue;  }

    /** @brief Player ID of the host, if the host type is player */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 HostPlayerId_Optional{  };
    /** @brief true if HostPlayerId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool HostPlayerId_IsSet{ false };
    /** @brief Gets the value of HostPlayerId_Optional, regardless of it having been set */
    int32& GetHostPlayerId() { return HostPlayerId_Optional; }
    /** @brief Gets the value of HostPlayerId_Optional, regardless of it having been set */
    const int32& GetHostPlayerId() const { return HostPlayerId_Optional; }
    /** @brief Gets the value of HostPlayerId_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetHostPlayerId(const int32& DefaultValue) const { if (HostPlayerId_IsSet) return HostPlayerId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of HostPlayerId_Optional and returns true if it has been set, otherwise returns false */
    bool GetHostPlayerId(int32& OutValue) const { if (HostPlayerId_IsSet) OutValue = HostPlayerId_Optional; return HostPlayerId_IsSet; }
    /** @brief Returns a pointer to HostPlayerId_Optional, if it has been set, otherwise returns nullptr */
    int32* GetHostPlayerIdOrNull() { if (HostPlayerId_IsSet) return &HostPlayerId_Optional; return nullptr; }
    /** @brief Returns a pointer to HostPlayerId_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetHostPlayerIdOrNull() const { if (HostPlayerId_IsSet) return &HostPlayerId_Optional; return nullptr; }
    /** @brief Sets the value of HostPlayerId_Optional and also sets HostPlayerId_IsSet to true */
    void SetHostPlayerId(int32 NewValue) { HostPlayerId_Optional = NewValue; HostPlayerId_IsSet = true; }
     /** @brief Clears the value of HostPlayerId_Optional and sets HostPlayerId_IsSet to false */
    void ClearHostPlayerId() { HostPlayerId_Optional = 0; HostPlayerId_IsSet = false; }
    /** @brief Returns true if HostPlayerId_Optional is set and matches the default value */
    bool IsHostPlayerIdDefaultValue() const { return HostPlayerId_IsSet && HostPlayerId_Optional == 0; }
    /** @brief Sets the value of HostPlayerId_Optional to its default and also sets HostPlayerId_IsSet to true */
    void SetHostPlayerIdToDefault() { HostPlayerId_Optional = 0; HostPlayerId_IsSet = true; }

    /** @brief Player UUID of the host, if the host type is player */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid HostPlayerUuid_Optional{  };
    /** @brief true if HostPlayerUuid_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool HostPlayerUuid_IsSet{ false };
    /** @brief Gets the value of HostPlayerUuid_Optional, regardless of it having been set */
    FGuid& GetHostPlayerUuid() { return HostPlayerUuid_Optional; }
    /** @brief Gets the value of HostPlayerUuid_Optional, regardless of it having been set */
    const FGuid& GetHostPlayerUuid() const { return HostPlayerUuid_Optional; }
    /** @brief Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetHostPlayerUuid(const FGuid& DefaultValue) const { if (HostPlayerUuid_IsSet) return HostPlayerUuid_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false */
    bool GetHostPlayerUuid(FGuid& OutValue) const { if (HostPlayerUuid_IsSet) OutValue = HostPlayerUuid_Optional; return HostPlayerUuid_IsSet; }
    /** @brief Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetHostPlayerUuidOrNull() { if (HostPlayerUuid_IsSet) return &HostPlayerUuid_Optional; return nullptr; }
    /** @brief Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetHostPlayerUuidOrNull() const { if (HostPlayerUuid_IsSet) return &HostPlayerUuid_Optional; return nullptr; }
    /** @brief Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true */
    void SetHostPlayerUuid(FGuid NewValue) { HostPlayerUuid_Optional = NewValue; HostPlayerUuid_IsSet = true; }
     /** @brief Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false */
    void ClearHostPlayerUuid() { HostPlayerUuid_IsSet = false; }

    /** @brief Unique ID for the process that is running this instance */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString HostDedicatedProcessId_Optional{  };
    /** @brief true if HostDedicatedProcessId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool HostDedicatedProcessId_IsSet{ false };
    /** @brief Gets the value of HostDedicatedProcessId_Optional, regardless of it having been set */
    FString& GetHostDedicatedProcessId() { return HostDedicatedProcessId_Optional; }
    /** @brief Gets the value of HostDedicatedProcessId_Optional, regardless of it having been set */
    const FString& GetHostDedicatedProcessId() const { return HostDedicatedProcessId_Optional; }
    /** @brief Gets the value of HostDedicatedProcessId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetHostDedicatedProcessId(const FString& DefaultValue) const { if (HostDedicatedProcessId_IsSet) return HostDedicatedProcessId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of HostDedicatedProcessId_Optional and returns true if it has been set, otherwise returns false */
    bool GetHostDedicatedProcessId(FString& OutValue) const { if (HostDedicatedProcessId_IsSet) OutValue = HostDedicatedProcessId_Optional; return HostDedicatedProcessId_IsSet; }
    /** @brief Returns a pointer to HostDedicatedProcessId_Optional, if it has been set, otherwise returns nullptr */
    FString* GetHostDedicatedProcessIdOrNull() { if (HostDedicatedProcessId_IsSet) return &HostDedicatedProcessId_Optional; return nullptr; }
    /** @brief Returns a pointer to HostDedicatedProcessId_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetHostDedicatedProcessIdOrNull() const { if (HostDedicatedProcessId_IsSet) return &HostDedicatedProcessId_Optional; return nullptr; }
    /** @brief Sets the value of HostDedicatedProcessId_Optional and also sets HostDedicatedProcessId_IsSet to true */
    void SetHostDedicatedProcessId(FString NewValue) { HostDedicatedProcessId_Optional = NewValue; HostDedicatedProcessId_IsSet = true; }
     /** @brief Clears the value of HostDedicatedProcessId_Optional and sets HostDedicatedProcessId_IsSet to false */
    void ClearHostDedicatedProcessId() { HostDedicatedProcessId_IsSet = false; }

    /** @brief Unique ID for the machine running the instance */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString HostDedicatedServerId_Optional{  };
    /** @brief true if HostDedicatedServerId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool HostDedicatedServerId_IsSet{ false };
    /** @brief Gets the value of HostDedicatedServerId_Optional, regardless of it having been set */
    FString& GetHostDedicatedServerId() { return HostDedicatedServerId_Optional; }
    /** @brief Gets the value of HostDedicatedServerId_Optional, regardless of it having been set */
    const FString& GetHostDedicatedServerId() const { return HostDedicatedServerId_Optional; }
    /** @brief Gets the value of HostDedicatedServerId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetHostDedicatedServerId(const FString& DefaultValue) const { if (HostDedicatedServerId_IsSet) return HostDedicatedServerId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of HostDedicatedServerId_Optional and returns true if it has been set, otherwise returns false */
    bool GetHostDedicatedServerId(FString& OutValue) const { if (HostDedicatedServerId_IsSet) OutValue = HostDedicatedServerId_Optional; return HostDedicatedServerId_IsSet; }
    /** @brief Returns a pointer to HostDedicatedServerId_Optional, if it has been set, otherwise returns nullptr */
    FString* GetHostDedicatedServerIdOrNull() { if (HostDedicatedServerId_IsSet) return &HostDedicatedServerId_Optional; return nullptr; }
    /** @brief Returns a pointer to HostDedicatedServerId_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetHostDedicatedServerIdOrNull() const { if (HostDedicatedServerId_IsSet) return &HostDedicatedServerId_Optional; return nullptr; }
    /** @brief Sets the value of HostDedicatedServerId_Optional and also sets HostDedicatedServerId_IsSet to true */
    void SetHostDedicatedServerId(FString NewValue) { HostDedicatedServerId_Optional = NewValue; HostDedicatedServerId_IsSet = true; }
     /** @brief Clears the value of HostDedicatedServerId_Optional and sets HostDedicatedServerId_IsSet to false */
    void ClearHostDedicatedServerId() { HostDedicatedServerId_IsSet = false; }

    /** @brief Is the instance joinable at this time? */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    ERHAPI_InstanceJoinableStatus JoinStatus{  };
    /** @brief Gets the value of JoinStatus */
    ERHAPI_InstanceJoinableStatus& GetJoinStatus() { return JoinStatus; }
    /** @brief Gets the value of JoinStatus */
    const ERHAPI_InstanceJoinableStatus& GetJoinStatus() const { return JoinStatus; }
    /** @brief Sets the value of JoinStatus */
    void SetJoinStatus(ERHAPI_InstanceJoinableStatus NewValue) { JoinStatus = NewValue;  }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_JoinParams JoinParams_Optional{  };
    /** @brief true if JoinParams_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool JoinParams_IsSet{ false };
    /** @brief Gets the value of JoinParams_Optional, regardless of it having been set */
    FRHAPI_JoinParams& GetJoinParams() { return JoinParams_Optional; }
    /** @brief Gets the value of JoinParams_Optional, regardless of it having been set */
    const FRHAPI_JoinParams& GetJoinParams() const { return JoinParams_Optional; }
    /** @brief Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_JoinParams& GetJoinParams(const FRHAPI_JoinParams& DefaultValue) const { if (JoinParams_IsSet) return JoinParams_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false */
    bool GetJoinParams(FRHAPI_JoinParams& OutValue) const { if (JoinParams_IsSet) OutValue = JoinParams_Optional; return JoinParams_IsSet; }
    /** @brief Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_JoinParams* GetJoinParamsOrNull() { if (JoinParams_IsSet) return &JoinParams_Optional; return nullptr; }
    /** @brief Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_JoinParams* GetJoinParamsOrNull() const { if (JoinParams_IsSet) return &JoinParams_Optional; return nullptr; }
    /** @brief Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true */
    void SetJoinParams(FRHAPI_JoinParams NewValue) { JoinParams_Optional = NewValue; JoinParams_IsSet = true; }
     /** @brief Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false */
    void ClearJoinParams() { JoinParams_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_InstanceStartupParams InstanceStartupParams_Optional{  };
    /** @brief true if InstanceStartupParams_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool InstanceStartupParams_IsSet{ false };
    /** @brief Gets the value of InstanceStartupParams_Optional, regardless of it having been set */
    FRHAPI_InstanceStartupParams& GetInstanceStartupParams() { return InstanceStartupParams_Optional; }
    /** @brief Gets the value of InstanceStartupParams_Optional, regardless of it having been set */
    const FRHAPI_InstanceStartupParams& GetInstanceStartupParams() const { return InstanceStartupParams_Optional; }
    /** @brief Gets the value of InstanceStartupParams_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_InstanceStartupParams& GetInstanceStartupParams(const FRHAPI_InstanceStartupParams& DefaultValue) const { if (InstanceStartupParams_IsSet) return InstanceStartupParams_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of InstanceStartupParams_Optional and returns true if it has been set, otherwise returns false */
    bool GetInstanceStartupParams(FRHAPI_InstanceStartupParams& OutValue) const { if (InstanceStartupParams_IsSet) OutValue = InstanceStartupParams_Optional; return InstanceStartupParams_IsSet; }
    /** @brief Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_InstanceStartupParams* GetInstanceStartupParamsOrNull() { if (InstanceStartupParams_IsSet) return &InstanceStartupParams_Optional; return nullptr; }
    /** @brief Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_InstanceStartupParams* GetInstanceStartupParamsOrNull() const { if (InstanceStartupParams_IsSet) return &InstanceStartupParams_Optional; return nullptr; }
    /** @brief Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true */
    void SetInstanceStartupParams(FRHAPI_InstanceStartupParams NewValue) { InstanceStartupParams_Optional = NewValue; InstanceStartupParams_IsSet = true; }
     /** @brief Clears the value of InstanceStartupParams_Optional and sets InstanceStartupParams_IsSet to false */
    void ClearInstanceStartupParams() { InstanceStartupParams_IsSet = false; }

    /** @brief Product Client Version number.  Used for compatibility checking with players */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Version_Optional{  };
    /** @brief true if Version_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Version_IsSet{ false };
    /** @brief Gets the value of Version_Optional, regardless of it having been set */
    FString& GetVersion() { return Version_Optional; }
    /** @brief Gets the value of Version_Optional, regardless of it having been set */
    const FString& GetVersion() const { return Version_Optional; }
    /** @brief Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetVersion(const FString& DefaultValue) const { if (Version_IsSet) return Version_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false */
    bool GetVersion(FString& OutValue) const { if (Version_IsSet) OutValue = Version_Optional; return Version_IsSet; }
    /** @brief Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr */
    FString* GetVersionOrNull() { if (Version_IsSet) return &Version_Optional; return nullptr; }
    /** @brief Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetVersionOrNull() const { if (Version_IsSet) return &Version_Optional; return nullptr; }
    /** @brief Sets the value of Version_Optional and also sets Version_IsSet to true */
    void SetVersion(FString NewValue) { Version_Optional = NewValue; Version_IsSet = true; }
     /** @brief Clears the value of Version_Optional and sets Version_IsSet to false */
    void ClearVersion() { Version_IsSet = false; }

    /** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FDateTime Created{  };
    /** @brief Gets the value of Created */
    FDateTime& GetCreated() { return Created; }
    /** @brief Gets the value of Created */
    const FDateTime& GetCreated() const { return Created; }
    /** @brief Sets the value of Created */
    void SetCreated(FDateTime NewValue) { Created = NewValue;  }

    /** @brief instance-defined custom data */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TMap<FString, FString> CustomData_Optional{  };
    /** @brief true if CustomData_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
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

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_InstanceHealth InstanceHealth_Optional{  };
    /** @brief true if InstanceHealth_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool InstanceHealth_IsSet{ false };
    /** @brief Gets the value of InstanceHealth_Optional, regardless of it having been set */
    FRHAPI_InstanceHealth& GetInstanceHealth() { return InstanceHealth_Optional; }
    /** @brief Gets the value of InstanceHealth_Optional, regardless of it having been set */
    const FRHAPI_InstanceHealth& GetInstanceHealth() const { return InstanceHealth_Optional; }
    /** @brief Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_InstanceHealth& GetInstanceHealth(const FRHAPI_InstanceHealth& DefaultValue) const { if (InstanceHealth_IsSet) return InstanceHealth_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false */
    bool GetInstanceHealth(FRHAPI_InstanceHealth& OutValue) const { if (InstanceHealth_IsSet) OutValue = InstanceHealth_Optional; return InstanceHealth_IsSet; }
    /** @brief Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_InstanceHealth* GetInstanceHealthOrNull() { if (InstanceHealth_IsSet) return &InstanceHealth_Optional; return nullptr; }
    /** @brief Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_InstanceHealth* GetInstanceHealthOrNull() const { if (InstanceHealth_IsSet) return &InstanceHealth_Optional; return nullptr; }
    /** @brief Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true */
    void SetInstanceHealth(FRHAPI_InstanceHealth NewValue) { InstanceHealth_Optional = NewValue; InstanceHealth_IsSet = true; }
     /** @brief Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false */
    void ClearInstanceHealth() { InstanceHealth_IsSet = false; }

    /** @brief The profile id that this instance was spawned from */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString MatchMakingProfileId_Optional{  };
    /** @brief true if MatchMakingProfileId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool MatchMakingProfileId_IsSet{ false };
    /** @brief Gets the value of MatchMakingProfileId_Optional, regardless of it having been set */
    FString& GetMatchMakingProfileId() { return MatchMakingProfileId_Optional; }
    /** @brief Gets the value of MatchMakingProfileId_Optional, regardless of it having been set */
    const FString& GetMatchMakingProfileId() const { return MatchMakingProfileId_Optional; }
    /** @brief Gets the value of MatchMakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetMatchMakingProfileId(const FString& DefaultValue) const { if (MatchMakingProfileId_IsSet) return MatchMakingProfileId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of MatchMakingProfileId_Optional and returns true if it has been set, otherwise returns false */
    bool GetMatchMakingProfileId(FString& OutValue) const { if (MatchMakingProfileId_IsSet) OutValue = MatchMakingProfileId_Optional; return MatchMakingProfileId_IsSet; }
    /** @brief Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr */
    FString* GetMatchMakingProfileIdOrNull() { if (MatchMakingProfileId_IsSet) return &MatchMakingProfileId_Optional; return nullptr; }
    /** @brief Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetMatchMakingProfileIdOrNull() const { if (MatchMakingProfileId_IsSet) return &MatchMakingProfileId_Optional; return nullptr; }
    /** @brief Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true */
    void SetMatchMakingProfileId(FString NewValue) { MatchMakingProfileId_Optional = NewValue; MatchMakingProfileId_IsSet = true; }
     /** @brief Clears the value of MatchMakingProfileId_Optional and sets MatchMakingProfileId_IsSet to false */
    void ClearMatchMakingProfileId() { MatchMakingProfileId_IsSet = false; }
};

/** @} */
