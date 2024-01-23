// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "Portal.h"
#include "KeyClaim.generated.h"

/** @defgroup RHAPI_KeyClaim RallyHere API Model KeyClaim
 *  @{
 */

/**
 * @brief A KeyClaim is a reward a player for fulfilling requirements of an eternal marketing campaign. Once the player has completed the requirements of the campaign and have been assigned a sku of the campaign by the Platform, invoke Process Key Entitlements to consume the sku from the Platform for a Key Claim.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_KeyClaim : public FRHAPI_Model
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

    /** @brief Platform the player is on */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    ERHAPI_Portal PortalId_Optional{  };
    /** @brief true if PortalId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool PortalId_IsSet{ false };
    /** @brief Gets the value of PortalId_Optional, regardless of it having been set */
    ERHAPI_Portal& GetPortalId() { return PortalId_Optional; }
    /** @brief Gets the value of PortalId_Optional, regardless of it having been set */
    const ERHAPI_Portal& GetPortalId() const { return PortalId_Optional; }
    /** @brief Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue */
    const ERHAPI_Portal& GetPortalId(const ERHAPI_Portal& DefaultValue) const { if (PortalId_IsSet) return PortalId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false */
    bool GetPortalId(ERHAPI_Portal& OutValue) const { if (PortalId_IsSet) OutValue = PortalId_Optional; return PortalId_IsSet; }
    /** @brief Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr */
    ERHAPI_Portal* GetPortalIdOrNull() { if (PortalId_IsSet) return &PortalId_Optional; return nullptr; }
    /** @brief Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr */
    const ERHAPI_Portal* GetPortalIdOrNull() const { if (PortalId_IsSet) return &PortalId_Optional; return nullptr; }
    /** @brief Sets the value of PortalId_Optional and also sets PortalId_IsSet to true */
    void SetPortalId(ERHAPI_Portal NewValue) { PortalId_Optional = NewValue; PortalId_IsSet = true; }
     /** @brief Clears the value of PortalId_Optional and sets PortalId_IsSet to false */
    void ClearPortalId() { PortalId_IsSet = false; }

    /** @brief The Platform's unique identifier for the player */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString PortalUserId_Optional{  };
    /** @brief true if PortalUserId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool PortalUserId_IsSet{ false };
    /** @brief Gets the value of PortalUserId_Optional, regardless of it having been set */
    FString& GetPortalUserId() { return PortalUserId_Optional; }
    /** @brief Gets the value of PortalUserId_Optional, regardless of it having been set */
    const FString& GetPortalUserId() const { return PortalUserId_Optional; }
    /** @brief Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetPortalUserId(const FString& DefaultValue) const { if (PortalUserId_IsSet) return PortalUserId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false */
    bool GetPortalUserId(FString& OutValue) const { if (PortalUserId_IsSet) OutValue = PortalUserId_Optional; return PortalUserId_IsSet; }
    /** @brief Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr */
    FString* GetPortalUserIdOrNull() { if (PortalUserId_IsSet) return &PortalUserId_Optional; return nullptr; }
    /** @brief Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetPortalUserIdOrNull() const { if (PortalUserId_IsSet) return &PortalUserId_Optional; return nullptr; }
    /** @brief Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true */
    void SetPortalUserId(FString NewValue) { PortalUserId_Optional = NewValue; PortalUserId_IsSet = true; }
     /** @brief Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false */
    void ClearPortalUserId() { PortalUserId_IsSet = false; }

    /** @brief The unique identifier for the KeyClaim */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid KeyClaimUuid{  };
    /** @brief Gets the value of KeyClaimUuid */
    FGuid& GetKeyClaimUuid() { return KeyClaimUuid; }
    /** @brief Gets the value of KeyClaimUuid */
    const FGuid& GetKeyClaimUuid() const { return KeyClaimUuid; }
    /** @brief Sets the value of KeyClaimUuid */
    void SetKeyClaimUuid(FGuid NewValue) { KeyClaimUuid = NewValue;  }

    /** @brief Whether the KeyClaim has been claimed */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Claimed_Optional{  };
    /** @brief true if Claimed_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Claimed_IsSet{ false };
    /** @brief Gets the value of Claimed_Optional, regardless of it having been set */
    bool& GetClaimed() { return Claimed_Optional; }
    /** @brief Gets the value of Claimed_Optional, regardless of it having been set */
    const bool& GetClaimed() const { return Claimed_Optional; }
    /** @brief Gets the value of Claimed_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetClaimed(const bool& DefaultValue) const { if (Claimed_IsSet) return Claimed_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Claimed_Optional and returns true if it has been set, otherwise returns false */
    bool GetClaimed(bool& OutValue) const { if (Claimed_IsSet) OutValue = Claimed_Optional; return Claimed_IsSet; }
    /** @brief Returns a pointer to Claimed_Optional, if it has been set, otherwise returns nullptr */
    bool* GetClaimedOrNull() { if (Claimed_IsSet) return &Claimed_Optional; return nullptr; }
    /** @brief Returns a pointer to Claimed_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetClaimedOrNull() const { if (Claimed_IsSet) return &Claimed_Optional; return nullptr; }
    /** @brief Sets the value of Claimed_Optional and also sets Claimed_IsSet to true */
    void SetClaimed(bool NewValue) { Claimed_Optional = NewValue; Claimed_IsSet = true; }
     /** @brief Clears the value of Claimed_Optional and sets Claimed_IsSet to false */
    void ClearClaimed() { Claimed_Optional = false; Claimed_IsSet = false; }
    /** @brief Returns true if Claimed_Optional is set and matches the default value */
    bool IsClaimedDefaultValue() const { return Claimed_IsSet && Claimed_Optional == false; }
    /** @brief Sets the value of Claimed_Optional to its default and also sets Claimed_IsSet to true */
    void SetClaimedToDefault() { Claimed_Optional = false; Claimed_IsSet = true; }

    /** @brief The external key that was been claimed by the player. This is only filled out once the KeyClaim has been claimed */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString ExternalKey_Optional{  };
    /** @brief true if ExternalKey_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool ExternalKey_IsSet{ false };
    /** @brief Gets the value of ExternalKey_Optional, regardless of it having been set */
    FString& GetExternalKey() { return ExternalKey_Optional; }
    /** @brief Gets the value of ExternalKey_Optional, regardless of it having been set */
    const FString& GetExternalKey() const { return ExternalKey_Optional; }
    /** @brief Gets the value of ExternalKey_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetExternalKey(const FString& DefaultValue) const { if (ExternalKey_IsSet) return ExternalKey_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of ExternalKey_Optional and returns true if it has been set, otherwise returns false */
    bool GetExternalKey(FString& OutValue) const { if (ExternalKey_IsSet) OutValue = ExternalKey_Optional; return ExternalKey_IsSet; }
    /** @brief Returns a pointer to ExternalKey_Optional, if it has been set, otherwise returns nullptr */
    FString* GetExternalKeyOrNull() { if (ExternalKey_IsSet) return &ExternalKey_Optional; return nullptr; }
    /** @brief Returns a pointer to ExternalKey_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetExternalKeyOrNull() const { if (ExternalKey_IsSet) return &ExternalKey_Optional; return nullptr; }
    /** @brief Sets the value of ExternalKey_Optional and also sets ExternalKey_IsSet to true */
    void SetExternalKey(FString NewValue) { ExternalKey_Optional = NewValue; ExternalKey_IsSet = true; }
     /** @brief Clears the value of ExternalKey_Optional and sets ExternalKey_IsSet to false */
    void ClearExternalKey() { ExternalKey_IsSet = false; }

    /** @brief The unique identifier for the MarketingCampaign that the external key was claimed from */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid ExternalKeyCampaignUuid_Optional{  };
    /** @brief true if ExternalKeyCampaignUuid_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool ExternalKeyCampaignUuid_IsSet{ false };
    /** @brief Gets the value of ExternalKeyCampaignUuid_Optional, regardless of it having been set */
    FGuid& GetExternalKeyCampaignUuid() { return ExternalKeyCampaignUuid_Optional; }
    /** @brief Gets the value of ExternalKeyCampaignUuid_Optional, regardless of it having been set */
    const FGuid& GetExternalKeyCampaignUuid() const { return ExternalKeyCampaignUuid_Optional; }
    /** @brief Gets the value of ExternalKeyCampaignUuid_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetExternalKeyCampaignUuid(const FGuid& DefaultValue) const { if (ExternalKeyCampaignUuid_IsSet) return ExternalKeyCampaignUuid_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of ExternalKeyCampaignUuid_Optional and returns true if it has been set, otherwise returns false */
    bool GetExternalKeyCampaignUuid(FGuid& OutValue) const { if (ExternalKeyCampaignUuid_IsSet) OutValue = ExternalKeyCampaignUuid_Optional; return ExternalKeyCampaignUuid_IsSet; }
    /** @brief Returns a pointer to ExternalKeyCampaignUuid_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetExternalKeyCampaignUuidOrNull() { if (ExternalKeyCampaignUuid_IsSet) return &ExternalKeyCampaignUuid_Optional; return nullptr; }
    /** @brief Returns a pointer to ExternalKeyCampaignUuid_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetExternalKeyCampaignUuidOrNull() const { if (ExternalKeyCampaignUuid_IsSet) return &ExternalKeyCampaignUuid_Optional; return nullptr; }
    /** @brief Sets the value of ExternalKeyCampaignUuid_Optional and also sets ExternalKeyCampaignUuid_IsSet to true */
    void SetExternalKeyCampaignUuid(FGuid NewValue) { ExternalKeyCampaignUuid_Optional = NewValue; ExternalKeyCampaignUuid_IsSet = true; }
     /** @brief Clears the value of ExternalKeyCampaignUuid_Optional and sets ExternalKeyCampaignUuid_IsSet to false */
    void ClearExternalKeyCampaignUuid() { ExternalKeyCampaignUuid_IsSet = false; }

    /** @brief This can be used to allow the player to claim different types based on their preferrence. While we don't have requirement for what should contain, it must match a key type assigned to the external campaign. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString ExternalKeyType_Optional{  };
    /** @brief true if ExternalKeyType_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool ExternalKeyType_IsSet{ false };
    /** @brief Gets the value of ExternalKeyType_Optional, regardless of it having been set */
    FString& GetExternalKeyType() { return ExternalKeyType_Optional; }
    /** @brief Gets the value of ExternalKeyType_Optional, regardless of it having been set */
    const FString& GetExternalKeyType() const { return ExternalKeyType_Optional; }
    /** @brief Gets the value of ExternalKeyType_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetExternalKeyType(const FString& DefaultValue) const { if (ExternalKeyType_IsSet) return ExternalKeyType_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of ExternalKeyType_Optional and returns true if it has been set, otherwise returns false */
    bool GetExternalKeyType(FString& OutValue) const { if (ExternalKeyType_IsSet) OutValue = ExternalKeyType_Optional; return ExternalKeyType_IsSet; }
    /** @brief Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr */
    FString* GetExternalKeyTypeOrNull() { if (ExternalKeyType_IsSet) return &ExternalKeyType_Optional; return nullptr; }
    /** @brief Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetExternalKeyTypeOrNull() const { if (ExternalKeyType_IsSet) return &ExternalKeyType_Optional; return nullptr; }
    /** @brief Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true */
    void SetExternalKeyType(FString NewValue) { ExternalKeyType_Optional = NewValue; ExternalKeyType_IsSet = true; }
     /** @brief Clears the value of ExternalKeyType_Optional and sets ExternalKeyType_IsSet to false */
    void ClearExternalKeyType() { ExternalKeyType_IsSet = false; }

    /** @brief The time the KeyClaim was created */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString CreatedOn_Optional{  };
    /** @brief true if CreatedOn_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool CreatedOn_IsSet{ false };
    /** @brief Gets the value of CreatedOn_Optional, regardless of it having been set */
    FString& GetCreatedOn() { return CreatedOn_Optional; }
    /** @brief Gets the value of CreatedOn_Optional, regardless of it having been set */
    const FString& GetCreatedOn() const { return CreatedOn_Optional; }
    /** @brief Gets the value of CreatedOn_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetCreatedOn(const FString& DefaultValue) const { if (CreatedOn_IsSet) return CreatedOn_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CreatedOn_Optional and returns true if it has been set, otherwise returns false */
    bool GetCreatedOn(FString& OutValue) const { if (CreatedOn_IsSet) OutValue = CreatedOn_Optional; return CreatedOn_IsSet; }
    /** @brief Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr */
    FString* GetCreatedOnOrNull() { if (CreatedOn_IsSet) return &CreatedOn_Optional; return nullptr; }
    /** @brief Returns a pointer to CreatedOn_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetCreatedOnOrNull() const { if (CreatedOn_IsSet) return &CreatedOn_Optional; return nullptr; }
    /** @brief Sets the value of CreatedOn_Optional and also sets CreatedOn_IsSet to true */
    void SetCreatedOn(FString NewValue) { CreatedOn_Optional = NewValue; CreatedOn_IsSet = true; }
     /** @brief Clears the value of CreatedOn_Optional and sets CreatedOn_IsSet to false */
    void ClearCreatedOn() { CreatedOn_IsSet = false; }

    /** @brief The time the KeyClaim was last modified */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString LastModifiedOn_Optional{  };
    /** @brief true if LastModifiedOn_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool LastModifiedOn_IsSet{ false };
    /** @brief Gets the value of LastModifiedOn_Optional, regardless of it having been set */
    FString& GetLastModifiedOn() { return LastModifiedOn_Optional; }
    /** @brief Gets the value of LastModifiedOn_Optional, regardless of it having been set */
    const FString& GetLastModifiedOn() const { return LastModifiedOn_Optional; }
    /** @brief Gets the value of LastModifiedOn_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetLastModifiedOn(const FString& DefaultValue) const { if (LastModifiedOn_IsSet) return LastModifiedOn_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LastModifiedOn_Optional and returns true if it has been set, otherwise returns false */
    bool GetLastModifiedOn(FString& OutValue) const { if (LastModifiedOn_IsSet) OutValue = LastModifiedOn_Optional; return LastModifiedOn_IsSet; }
    /** @brief Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr */
    FString* GetLastModifiedOnOrNull() { if (LastModifiedOn_IsSet) return &LastModifiedOn_Optional; return nullptr; }
    /** @brief Returns a pointer to LastModifiedOn_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetLastModifiedOnOrNull() const { if (LastModifiedOn_IsSet) return &LastModifiedOn_Optional; return nullptr; }
    /** @brief Sets the value of LastModifiedOn_Optional and also sets LastModifiedOn_IsSet to true */
    void SetLastModifiedOn(FString NewValue) { LastModifiedOn_Optional = NewValue; LastModifiedOn_IsSet = true; }
     /** @brief Clears the value of LastModifiedOn_Optional and sets LastModifiedOn_IsSet to false */
    void ClearLastModifiedOn() { LastModifiedOn_IsSet = false; }
};

/** @} */
