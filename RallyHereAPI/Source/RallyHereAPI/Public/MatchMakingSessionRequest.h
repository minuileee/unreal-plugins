// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "SessionTeam.h"
#include "MatchMakingSessionRequest.generated.h"

/** @defgroup RHAPI_MatchMakingSessionRequest RallyHere API Model MatchMakingSessionRequest
 *  @{
 */

/**
 * @brief A request body for a new matchmade session to be created
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_MatchMakingSessionRequest : public FRHAPI_Model
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

    /** @brief List of teams that are to be invited to session */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<FRHAPI_SessionTeam> Teams{  };
    /** @brief Gets the value of Teams */
    TArray<FRHAPI_SessionTeam>& GetTeams() { return Teams; }
    /** @brief Gets the value of Teams */
    const TArray<FRHAPI_SessionTeam>& GetTeams() const { return Teams; }
    /** @brief Sets the value of Teams */
    void SetTeams(TArray<FRHAPI_SessionTeam> NewValue) { Teams = NewValue;  }

    /** @brief List of sessions and tickets the match was made with. Used to verify this match should still be created */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TMap<FString, FString> SessionTickets{  };
    /** @brief Gets the value of SessionTickets */
    TMap<FString, FString>& GetSessionTickets() { return SessionTickets; }
    /** @brief Gets the value of SessionTickets */
    const TMap<FString, FString>& GetSessionTickets() const { return SessionTickets; }
    /** @brief Sets the value of SessionTickets */
    void SetSessionTickets(TMap<FString, FString> NewValue) { SessionTickets = NewValue;  }

    /** @brief Which launch template should be used to request an instance */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid InstanceLaunchTemplateId_Optional{  };
    /** @brief true if InstanceLaunchTemplateId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool InstanceLaunchTemplateId_IsSet{ false };
    /** @brief Gets the value of InstanceLaunchTemplateId_Optional, regardless of it having been set */
    FGuid& GetInstanceLaunchTemplateId() { return InstanceLaunchTemplateId_Optional; }
    /** @brief Gets the value of InstanceLaunchTemplateId_Optional, regardless of it having been set */
    const FGuid& GetInstanceLaunchTemplateId() const { return InstanceLaunchTemplateId_Optional; }
    /** @brief Gets the value of InstanceLaunchTemplateId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetInstanceLaunchTemplateId(const FGuid& DefaultValue) const { if (InstanceLaunchTemplateId_IsSet) return InstanceLaunchTemplateId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of InstanceLaunchTemplateId_Optional and returns true if it has been set, otherwise returns false */
    bool GetInstanceLaunchTemplateId(FGuid& OutValue) const { if (InstanceLaunchTemplateId_IsSet) OutValue = InstanceLaunchTemplateId_Optional; return InstanceLaunchTemplateId_IsSet; }
    /** @brief Returns a pointer to InstanceLaunchTemplateId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetInstanceLaunchTemplateIdOrNull() { if (InstanceLaunchTemplateId_IsSet) return &InstanceLaunchTemplateId_Optional; return nullptr; }
    /** @brief Returns a pointer to InstanceLaunchTemplateId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetInstanceLaunchTemplateIdOrNull() const { if (InstanceLaunchTemplateId_IsSet) return &InstanceLaunchTemplateId_Optional; return nullptr; }
    /** @brief Sets the value of InstanceLaunchTemplateId_Optional and also sets InstanceLaunchTemplateId_IsSet to true */
    void SetInstanceLaunchTemplateId(FGuid NewValue) { InstanceLaunchTemplateId_Optional = NewValue; InstanceLaunchTemplateId_IsSet = true; }
     /** @brief Clears the value of InstanceLaunchTemplateId_Optional and sets InstanceLaunchTemplateId_IsSet to false */
    void ClearInstanceLaunchTemplateId() { InstanceLaunchTemplateId_IsSet = false; }

    /** @brief Which launch template should be used to request an instance */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid InstanceRequestTemplateId_Optional{  };
    /** @brief true if InstanceRequestTemplateId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool InstanceRequestTemplateId_IsSet{ false };
    /** @brief Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set */
    FGuid& GetInstanceRequestTemplateId() { return InstanceRequestTemplateId_Optional; }
    /** @brief Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set */
    const FGuid& GetInstanceRequestTemplateId() const { return InstanceRequestTemplateId_Optional; }
    /** @brief Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetInstanceRequestTemplateId(const FGuid& DefaultValue) const { if (InstanceRequestTemplateId_IsSet) return InstanceRequestTemplateId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false */
    bool GetInstanceRequestTemplateId(FGuid& OutValue) const { if (InstanceRequestTemplateId_IsSet) OutValue = InstanceRequestTemplateId_Optional; return InstanceRequestTemplateId_IsSet; }
    /** @brief Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetInstanceRequestTemplateIdOrNull() { if (InstanceRequestTemplateId_IsSet) return &InstanceRequestTemplateId_Optional; return nullptr; }
    /** @brief Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetInstanceRequestTemplateIdOrNull() const { if (InstanceRequestTemplateId_IsSet) return &InstanceRequestTemplateId_Optional; return nullptr; }
    /** @brief Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true */
    void SetInstanceRequestTemplateId(FGuid NewValue) { InstanceRequestTemplateId_Optional = NewValue; InstanceRequestTemplateId_IsSet = true; }
     /** @brief Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false */
    void ClearInstanceRequestTemplateId() { InstanceRequestTemplateId_IsSet = false; }

    /** @brief Region to start the instance in */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString RegionId{  };
    /** @brief Gets the value of RegionId */
    FString& GetRegionId() { return RegionId; }
    /** @brief Gets the value of RegionId */
    const FString& GetRegionId() const { return RegionId; }
    /** @brief Sets the value of RegionId */
    void SetRegionId(FString NewValue) { RegionId = NewValue;  }

    /** @brief Unique ID for this generated match */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString MatchId{  };
    /** @brief Gets the value of MatchId */
    FString& GetMatchId() { return MatchId; }
    /** @brief Gets the value of MatchId */
    const FString& GetMatchId() const { return MatchId; }
    /** @brief Sets the value of MatchId */
    void SetMatchId(FString NewValue) { MatchId = NewValue;  }

    /** @brief Custom data about the match */
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
};

/** @} */