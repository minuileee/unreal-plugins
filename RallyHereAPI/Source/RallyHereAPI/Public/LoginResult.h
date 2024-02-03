// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "Platform.h"
#include "PortalUserInfo.h"
#include "Restriction.h"
#include "LoginResult.generated.h"

/** @defgroup RHAPI_LoginResult RallyHere API Model LoginResult
 *  @{
 */

/**
 * @brief Login result
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_LoginResult : public FRHAPI_Model
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

    /** @brief Parent portal auth result */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_PortalUserInfo PortalParentAuthResult_Optional{  };
    /** @brief true if PortalParentAuthResult_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool PortalParentAuthResult_IsSet{ false };
    /** @brief Gets the value of PortalParentAuthResult_Optional, regardless of it having been set */
    FRHAPI_PortalUserInfo& GetPortalParentAuthResult() { return PortalParentAuthResult_Optional; }
    /** @brief Gets the value of PortalParentAuthResult_Optional, regardless of it having been set */
    const FRHAPI_PortalUserInfo& GetPortalParentAuthResult() const { return PortalParentAuthResult_Optional; }
    /** @brief Gets the value of PortalParentAuthResult_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_PortalUserInfo& GetPortalParentAuthResult(const FRHAPI_PortalUserInfo& DefaultValue) const { if (PortalParentAuthResult_IsSet) return PortalParentAuthResult_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of PortalParentAuthResult_Optional and returns true if it has been set, otherwise returns false */
    bool GetPortalParentAuthResult(FRHAPI_PortalUserInfo& OutValue) const { if (PortalParentAuthResult_IsSet) OutValue = PortalParentAuthResult_Optional; return PortalParentAuthResult_IsSet; }
    /** @brief Returns a pointer to PortalParentAuthResult_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_PortalUserInfo* GetPortalParentAuthResultOrNull() { if (PortalParentAuthResult_IsSet) return &PortalParentAuthResult_Optional; return nullptr; }
    /** @brief Returns a pointer to PortalParentAuthResult_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_PortalUserInfo* GetPortalParentAuthResultOrNull() const { if (PortalParentAuthResult_IsSet) return &PortalParentAuthResult_Optional; return nullptr; }
    /** @brief Sets the value of PortalParentAuthResult_Optional and also sets PortalParentAuthResult_IsSet to true */
    void SetPortalParentAuthResult(FRHAPI_PortalUserInfo NewValue) { PortalParentAuthResult_Optional = NewValue; PortalParentAuthResult_IsSet = true; }
     /** @brief Clears the value of PortalParentAuthResult_Optional and sets PortalParentAuthResult_IsSet to false */
    void ClearPortalParentAuthResult() { PortalParentAuthResult_IsSet = false; }

    /** @brief List of permissions for this user. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<FString> Permissions_Optional{  };
    /** @brief true if Permissions_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Permissions_IsSet{ false };
    /** @brief Gets the value of Permissions_Optional, regardless of it having been set */
    TArray<FString>& GetPermissions() { return Permissions_Optional; }
    /** @brief Gets the value of Permissions_Optional, regardless of it having been set */
    const TArray<FString>& GetPermissions() const { return Permissions_Optional; }
    /** @brief Gets the value of Permissions_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FString>& GetPermissions(const TArray<FString>& DefaultValue) const { if (Permissions_IsSet) return Permissions_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Permissions_Optional and returns true if it has been set, otherwise returns false */
    bool GetPermissions(TArray<FString>& OutValue) const { if (Permissions_IsSet) OutValue = Permissions_Optional; return Permissions_IsSet; }
    /** @brief Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr */
    TArray<FString>* GetPermissionsOrNull() { if (Permissions_IsSet) return &Permissions_Optional; return nullptr; }
    /** @brief Returns a pointer to Permissions_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FString>* GetPermissionsOrNull() const { if (Permissions_IsSet) return &Permissions_Optional; return nullptr; }
    /** @brief Sets the value of Permissions_Optional and also sets Permissions_IsSet to true */
    void SetPermissions(TArray<FString> NewValue) { Permissions_Optional = NewValue; Permissions_IsSet = true; }
     /** @brief Clears the value of Permissions_Optional and sets Permissions_IsSet to false */
    void ClearPermissions() { Permissions_IsSet = false; }

    /** @brief List of restrictions on this player */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<FRHAPI_Restriction> Restrictions_Optional{  };
    /** @brief true if Restrictions_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Restrictions_IsSet{ false };
    /** @brief Gets the value of Restrictions_Optional, regardless of it having been set */
    TArray<FRHAPI_Restriction>& GetRestrictions() { return Restrictions_Optional; }
    /** @brief Gets the value of Restrictions_Optional, regardless of it having been set */
    const TArray<FRHAPI_Restriction>& GetRestrictions() const { return Restrictions_Optional; }
    /** @brief Gets the value of Restrictions_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FRHAPI_Restriction>& GetRestrictions(const TArray<FRHAPI_Restriction>& DefaultValue) const { if (Restrictions_IsSet) return Restrictions_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Restrictions_Optional and returns true if it has been set, otherwise returns false */
    bool GetRestrictions(TArray<FRHAPI_Restriction>& OutValue) const { if (Restrictions_IsSet) OutValue = Restrictions_Optional; return Restrictions_IsSet; }
    /** @brief Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr */
    TArray<FRHAPI_Restriction>* GetRestrictionsOrNull() { if (Restrictions_IsSet) return &Restrictions_Optional; return nullptr; }
    /** @brief Returns a pointer to Restrictions_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FRHAPI_Restriction>* GetRestrictionsOrNull() const { if (Restrictions_IsSet) return &Restrictions_Optional; return nullptr; }
    /** @brief Sets the value of Restrictions_Optional and also sets Restrictions_IsSet to true */
    void SetRestrictions(TArray<FRHAPI_Restriction> NewValue) { Restrictions_Optional = NewValue; Restrictions_IsSet = true; }
     /** @brief Clears the value of Restrictions_Optional and sets Restrictions_IsSet to false */
    void ClearRestrictions() { Restrictions_IsSet = false; }

    /** @brief Active player ID. *DEPRECATED* use `active_player_uuid` instead */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 ActivePlayerId_Optional{  };
    /** @brief true if ActivePlayerId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool ActivePlayerId_IsSet{ false };
    /** @brief Gets the value of ActivePlayerId_Optional, regardless of it having been set */
    int32& GetActivePlayerId() { return ActivePlayerId_Optional; }
    /** @brief Gets the value of ActivePlayerId_Optional, regardless of it having been set */
    const int32& GetActivePlayerId() const { return ActivePlayerId_Optional; }
    /** @brief Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetActivePlayerId(const int32& DefaultValue) const { if (ActivePlayerId_IsSet) return ActivePlayerId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false */
    bool GetActivePlayerId(int32& OutValue) const { if (ActivePlayerId_IsSet) OutValue = ActivePlayerId_Optional; return ActivePlayerId_IsSet; }
    /** @brief Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr */
    int32* GetActivePlayerIdOrNull() { if (ActivePlayerId_IsSet) return &ActivePlayerId_Optional; return nullptr; }
    /** @brief Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetActivePlayerIdOrNull() const { if (ActivePlayerId_IsSet) return &ActivePlayerId_Optional; return nullptr; }
    /** @brief Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true */
    void SetActivePlayerId(int32 NewValue) { ActivePlayerId_Optional = NewValue; ActivePlayerId_IsSet = true; }
     /** @brief Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false */
    void ClearActivePlayerId() { ActivePlayerId_Optional = 0; ActivePlayerId_IsSet = false; }
    /** @brief Returns true if ActivePlayerId_Optional is set and matches the default value */
    bool IsActivePlayerIdDefaultValue() const { return ActivePlayerId_IsSet && ActivePlayerId_Optional == 0; }
    /** @brief Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true */
    void SetActivePlayerIdToDefault() { ActivePlayerId_Optional = 0; ActivePlayerId_IsSet = true; }

    /** @brief Active player UUID */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid ActivePlayerUuid_Optional{  };
    /** @brief true if ActivePlayerUuid_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool ActivePlayerUuid_IsSet{ false };
    /** @brief Gets the value of ActivePlayerUuid_Optional, regardless of it having been set */
    FGuid& GetActivePlayerUuid() { return ActivePlayerUuid_Optional; }
    /** @brief Gets the value of ActivePlayerUuid_Optional, regardless of it having been set */
    const FGuid& GetActivePlayerUuid() const { return ActivePlayerUuid_Optional; }
    /** @brief Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetActivePlayerUuid(const FGuid& DefaultValue) const { if (ActivePlayerUuid_IsSet) return ActivePlayerUuid_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false */
    bool GetActivePlayerUuid(FGuid& OutValue) const { if (ActivePlayerUuid_IsSet) OutValue = ActivePlayerUuid_Optional; return ActivePlayerUuid_IsSet; }
    /** @brief Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetActivePlayerUuidOrNull() { if (ActivePlayerUuid_IsSet) return &ActivePlayerUuid_Optional; return nullptr; }
    /** @brief Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetActivePlayerUuidOrNull() const { if (ActivePlayerUuid_IsSet) return &ActivePlayerUuid_Optional; return nullptr; }
    /** @brief Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true */
    void SetActivePlayerUuid(FGuid NewValue) { ActivePlayerUuid_Optional = NewValue; ActivePlayerUuid_IsSet = true; }
     /** @brief Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false */
    void ClearActivePlayerUuid() { ActivePlayerUuid_IsSet = false; }

    /** @brief Platform */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    ERHAPI_Platform Platform_Optional{  };
    /** @brief true if Platform_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Platform_IsSet{ false };
    /** @brief Gets the value of Platform_Optional, regardless of it having been set */
    ERHAPI_Platform& GetPlatform() { return Platform_Optional; }
    /** @brief Gets the value of Platform_Optional, regardless of it having been set */
    const ERHAPI_Platform& GetPlatform() const { return Platform_Optional; }
    /** @brief Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue */
    const ERHAPI_Platform& GetPlatform(const ERHAPI_Platform& DefaultValue) const { if (Platform_IsSet) return Platform_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false */
    bool GetPlatform(ERHAPI_Platform& OutValue) const { if (Platform_IsSet) OutValue = Platform_Optional; return Platform_IsSet; }
    /** @brief Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr */
    ERHAPI_Platform* GetPlatformOrNull() { if (Platform_IsSet) return &Platform_Optional; return nullptr; }
    /** @brief Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr */
    const ERHAPI_Platform* GetPlatformOrNull() const { if (Platform_IsSet) return &Platform_Optional; return nullptr; }
    /** @brief Sets the value of Platform_Optional and also sets Platform_IsSet to true */
    void SetPlatform(ERHAPI_Platform NewValue) { Platform_Optional = NewValue; Platform_IsSet = true; }
     /** @brief Clears the value of Platform_Optional and sets Platform_IsSet to false */
    void ClearPlatform() { Platform_IsSet = false; }

    /** @brief Portal ID *DEPRECATED* use `platform` instead */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 PortalId_Optional{  };
    /** @brief true if PortalId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool PortalId_IsSet{ false };
    /** @brief Gets the value of PortalId_Optional, regardless of it having been set */
    int32& GetPortalId() { return PortalId_Optional; }
    /** @brief Gets the value of PortalId_Optional, regardless of it having been set */
    const int32& GetPortalId() const { return PortalId_Optional; }
    /** @brief Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetPortalId(const int32& DefaultValue) const { if (PortalId_IsSet) return PortalId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false */
    bool GetPortalId(int32& OutValue) const { if (PortalId_IsSet) OutValue = PortalId_Optional; return PortalId_IsSet; }
    /** @brief Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr */
    int32* GetPortalIdOrNull() { if (PortalId_IsSet) return &PortalId_Optional; return nullptr; }
    /** @brief Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetPortalIdOrNull() const { if (PortalId_IsSet) return &PortalId_Optional; return nullptr; }
    /** @brief Sets the value of PortalId_Optional and also sets PortalId_IsSet to true */
    void SetPortalId(int32 NewValue) { PortalId_Optional = NewValue; PortalId_IsSet = true; }
     /** @brief Clears the value of PortalId_Optional and sets PortalId_IsSet to false */
    void ClearPortalId() { PortalId_Optional = 0; PortalId_IsSet = false; }
    /** @brief Returns true if PortalId_Optional is set and matches the default value */
    bool IsPortalIdDefaultValue() const { return PortalId_IsSet && PortalId_Optional == 0; }
    /** @brief Sets the value of PortalId_Optional to its default and also sets PortalId_IsSet to true */
    void SetPortalIdToDefault() { PortalId_Optional = 0; PortalId_IsSet = true; }

    /** @brief Portal user ID */
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

    /** @brief Display name */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString DisplayName_Optional{  };
    /** @brief true if DisplayName_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool DisplayName_IsSet{ false };
    /** @brief Gets the value of DisplayName_Optional, regardless of it having been set */
    FString& GetDisplayName() { return DisplayName_Optional; }
    /** @brief Gets the value of DisplayName_Optional, regardless of it having been set */
    const FString& GetDisplayName() const { return DisplayName_Optional; }
    /** @brief Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetDisplayName(const FString& DefaultValue) const { if (DisplayName_IsSet) return DisplayName_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false */
    bool GetDisplayName(FString& OutValue) const { if (DisplayName_IsSet) OutValue = DisplayName_Optional; return DisplayName_IsSet; }
    /** @brief Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr */
    FString* GetDisplayNameOrNull() { if (DisplayName_IsSet) return &DisplayName_Optional; return nullptr; }
    /** @brief Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetDisplayNameOrNull() const { if (DisplayName_IsSet) return &DisplayName_Optional; return nullptr; }
    /** @brief Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true */
    void SetDisplayName(FString NewValue) { DisplayName_Optional = NewValue; DisplayName_IsSet = true; }
     /** @brief Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false */
    void ClearDisplayName() { DisplayName_IsSet = false; }

    /** @brief Role ID */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 RoleId_Optional{  };
    /** @brief true if RoleId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool RoleId_IsSet{ false };
    /** @brief Gets the value of RoleId_Optional, regardless of it having been set */
    int32& GetRoleId() { return RoleId_Optional; }
    /** @brief Gets the value of RoleId_Optional, regardless of it having been set */
    const int32& GetRoleId() const { return RoleId_Optional; }
    /** @brief Gets the value of RoleId_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetRoleId(const int32& DefaultValue) const { if (RoleId_IsSet) return RoleId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of RoleId_Optional and returns true if it has been set, otherwise returns false */
    bool GetRoleId(int32& OutValue) const { if (RoleId_IsSet) OutValue = RoleId_Optional; return RoleId_IsSet; }
    /** @brief Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr */
    int32* GetRoleIdOrNull() { if (RoleId_IsSet) return &RoleId_Optional; return nullptr; }
    /** @brief Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetRoleIdOrNull() const { if (RoleId_IsSet) return &RoleId_Optional; return nullptr; }
    /** @brief Sets the value of RoleId_Optional and also sets RoleId_IsSet to true */
    void SetRoleId(int32 NewValue) { RoleId_Optional = NewValue; RoleId_IsSet = true; }
     /** @brief Clears the value of RoleId_Optional and sets RoleId_IsSet to false */
    void ClearRoleId() { RoleId_Optional = 0; RoleId_IsSet = false; }
    /** @brief Returns true if RoleId_Optional is set and matches the default value */
    bool IsRoleIdDefaultValue() const { return RoleId_IsSet && RoleId_Optional == 0; }
    /** @brief Sets the value of RoleId_Optional to its default and also sets RoleId_IsSet to true */
    void SetRoleIdToDefault() { RoleId_Optional = 0; RoleId_IsSet = true; }

    /** @brief Person ID */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid PersonId_Optional{  };
    /** @brief true if PersonId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool PersonId_IsSet{ false };
    /** @brief Gets the value of PersonId_Optional, regardless of it having been set */
    FGuid& GetPersonId() { return PersonId_Optional; }
    /** @brief Gets the value of PersonId_Optional, regardless of it having been set */
    const FGuid& GetPersonId() const { return PersonId_Optional; }
    /** @brief Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetPersonId(const FGuid& DefaultValue) const { if (PersonId_IsSet) return PersonId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false */
    bool GetPersonId(FGuid& OutValue) const { if (PersonId_IsSet) OutValue = PersonId_Optional; return PersonId_IsSet; }
    /** @brief Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetPersonIdOrNull() { if (PersonId_IsSet) return &PersonId_Optional; return nullptr; }
    /** @brief Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetPersonIdOrNull() const { if (PersonId_IsSet) return &PersonId_Optional; return nullptr; }
    /** @brief Sets the value of PersonId_Optional and also sets PersonId_IsSet to true */
    void SetPersonId(FGuid NewValue) { PersonId_Optional = NewValue; PersonId_IsSet = true; }
     /** @brief Clears the value of PersonId_Optional and sets PersonId_IsSet to false */
    void ClearPersonId() { PersonId_IsSet = false; }

    /** @brief Access token that can be used for future requests */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString AccessToken_Optional{  };
    /** @brief true if AccessToken_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool AccessToken_IsSet{ false };
    /** @brief Gets the value of AccessToken_Optional, regardless of it having been set */
    FString& GetAccessToken() { return AccessToken_Optional; }
    /** @brief Gets the value of AccessToken_Optional, regardless of it having been set */
    const FString& GetAccessToken() const { return AccessToken_Optional; }
    /** @brief Gets the value of AccessToken_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetAccessToken(const FString& DefaultValue) const { if (AccessToken_IsSet) return AccessToken_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of AccessToken_Optional and returns true if it has been set, otherwise returns false */
    bool GetAccessToken(FString& OutValue) const { if (AccessToken_IsSet) OutValue = AccessToken_Optional; return AccessToken_IsSet; }
    /** @brief Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr */
    FString* GetAccessTokenOrNull() { if (AccessToken_IsSet) return &AccessToken_Optional; return nullptr; }
    /** @brief Returns a pointer to AccessToken_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetAccessTokenOrNull() const { if (AccessToken_IsSet) return &AccessToken_Optional; return nullptr; }
    /** @brief Sets the value of AccessToken_Optional and also sets AccessToken_IsSet to true */
    void SetAccessToken(FString NewValue) { AccessToken_Optional = NewValue; AccessToken_IsSet = true; }
     /** @brief Clears the value of AccessToken_Optional and sets AccessToken_IsSet to false */
    void ClearAccessToken() { AccessToken_Optional = TEXT(""); AccessToken_IsSet = false; }
    /** @brief Returns true if AccessToken_Optional is set and matches the default value */
    bool IsAccessTokenDefaultValue() const { return AccessToken_IsSet && AccessToken_Optional == TEXT(""); }
    /** @brief Sets the value of AccessToken_Optional to its default and also sets AccessToken_IsSet to true */
    void SetAccessTokenToDefault() { AccessToken_Optional = TEXT(""); AccessToken_IsSet = true; }

    /** @brief Refresh token that can be used to refresh authentication for a new access token */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString RefreshToken_Optional{  };
    /** @brief true if RefreshToken_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool RefreshToken_IsSet{ false };
    /** @brief Gets the value of RefreshToken_Optional, regardless of it having been set */
    FString& GetRefreshToken() { return RefreshToken_Optional; }
    /** @brief Gets the value of RefreshToken_Optional, regardless of it having been set */
    const FString& GetRefreshToken() const { return RefreshToken_Optional; }
    /** @brief Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetRefreshToken(const FString& DefaultValue) const { if (RefreshToken_IsSet) return RefreshToken_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false */
    bool GetRefreshToken(FString& OutValue) const { if (RefreshToken_IsSet) OutValue = RefreshToken_Optional; return RefreshToken_IsSet; }
    /** @brief Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr */
    FString* GetRefreshTokenOrNull() { if (RefreshToken_IsSet) return &RefreshToken_Optional; return nullptr; }
    /** @brief Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetRefreshTokenOrNull() const { if (RefreshToken_IsSet) return &RefreshToken_Optional; return nullptr; }
    /** @brief Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true */
    void SetRefreshToken(FString NewValue) { RefreshToken_Optional = NewValue; RefreshToken_IsSet = true; }
     /** @brief Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false */
    void ClearRefreshToken() { RefreshToken_IsSet = false; }

    /** @brief Publisher UUID */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid PublisherUuid{  };
    /** @brief Gets the value of PublisherUuid */
    FGuid& GetPublisherUuid() { return PublisherUuid; }
    /** @brief Gets the value of PublisherUuid */
    const FGuid& GetPublisherUuid() const { return PublisherUuid; }
    /** @brief Sets the value of PublisherUuid */
    void SetPublisherUuid(FGuid NewValue) { PublisherUuid = NewValue;  }

    /** @brief Tenant UUID */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid TenantUuid{  };
    /** @brief Gets the value of TenantUuid */
    FGuid& GetTenantUuid() { return TenantUuid; }
    /** @brief Gets the value of TenantUuid */
    const FGuid& GetTenantUuid() const { return TenantUuid; }
    /** @brief Sets the value of TenantUuid */
    void SetTenantUuid(FGuid NewValue) { TenantUuid = NewValue;  }

    /** @brief Config elector UUID */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid ConfigElectorUuid{  };
    /** @brief Gets the value of ConfigElectorUuid */
    FGuid& GetConfigElectorUuid() { return ConfigElectorUuid; }
    /** @brief Gets the value of ConfigElectorUuid */
    const FGuid& GetConfigElectorUuid() const { return ConfigElectorUuid; }
    /** @brief Sets the value of ConfigElectorUuid */
    void SetConfigElectorUuid(FGuid NewValue) { ConfigElectorUuid = NewValue;  }

    /** @brief Client UUID */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid ClientUuid{  };
    /** @brief Gets the value of ClientUuid */
    FGuid& GetClientUuid() { return ClientUuid; }
    /** @brief Gets the value of ClientUuid */
    const FGuid& GetClientUuid() const { return ClientUuid; }
    /** @brief Sets the value of ClientUuid */
    void SetClientUuid(FGuid NewValue) { ClientUuid = NewValue;  }

    /** @brief Token type */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString TokenType{  };
    /** @brief Gets the value of TokenType */
    FString& GetTokenType() { return TokenType; }
    /** @brief Gets the value of TokenType */
    const FString& GetTokenType() const { return TokenType; }
    /** @brief Sets the value of TokenType */
    void SetTokenType(FString NewValue) { TokenType = NewValue;  }

    /** @brief Result access token expiration time in seconds */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 ExpiresIn_Optional{  };
    /** @brief true if ExpiresIn_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool ExpiresIn_IsSet{ false };
    /** @brief Gets the value of ExpiresIn_Optional, regardless of it having been set */
    int32& GetExpiresIn() { return ExpiresIn_Optional; }
    /** @brief Gets the value of ExpiresIn_Optional, regardless of it having been set */
    const int32& GetExpiresIn() const { return ExpiresIn_Optional; }
    /** @brief Gets the value of ExpiresIn_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetExpiresIn(const int32& DefaultValue) const { if (ExpiresIn_IsSet) return ExpiresIn_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of ExpiresIn_Optional and returns true if it has been set, otherwise returns false */
    bool GetExpiresIn(int32& OutValue) const { if (ExpiresIn_IsSet) OutValue = ExpiresIn_Optional; return ExpiresIn_IsSet; }
    /** @brief Returns a pointer to ExpiresIn_Optional, if it has been set, otherwise returns nullptr */
    int32* GetExpiresInOrNull() { if (ExpiresIn_IsSet) return &ExpiresIn_Optional; return nullptr; }
    /** @brief Returns a pointer to ExpiresIn_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetExpiresInOrNull() const { if (ExpiresIn_IsSet) return &ExpiresIn_Optional; return nullptr; }
    /** @brief Sets the value of ExpiresIn_Optional and also sets ExpiresIn_IsSet to true */
    void SetExpiresIn(int32 NewValue) { ExpiresIn_Optional = NewValue; ExpiresIn_IsSet = true; }
     /** @brief Clears the value of ExpiresIn_Optional and sets ExpiresIn_IsSet to false */
    void ClearExpiresIn() { ExpiresIn_Optional = 0; ExpiresIn_IsSet = false; }
    /** @brief Returns true if ExpiresIn_Optional is set and matches the default value */
    bool IsExpiresInDefaultValue() const { return ExpiresIn_IsSet && ExpiresIn_Optional == 0; }
    /** @brief Sets the value of ExpiresIn_Optional to its default and also sets ExpiresIn_IsSet to true */
    void SetExpiresInToDefault() { ExpiresIn_Optional = 0; ExpiresIn_IsSet = true; }
};

/** @} */
