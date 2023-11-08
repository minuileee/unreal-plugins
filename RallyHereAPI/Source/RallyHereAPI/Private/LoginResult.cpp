// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "LoginResult.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_LoginResult

void FRHAPI_LoginResult::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("platform"));
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Platform));
    Writer->WriteIdentifierPrefix(TEXT("portal_id"));
    RallyHereAPI::WriteJsonValue(Writer, PortalId);
    Writer->WriteIdentifierPrefix(TEXT("portal_user_id"));
    RallyHereAPI::WriteJsonValue(Writer, PortalUserId);
    Writer->WriteIdentifierPrefix(TEXT("display_name"));
    RallyHereAPI::WriteJsonValue(Writer, DisplayName);
    if (PortalParentAuthResult_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("portal_parent_auth_result"));
        RallyHereAPI::WriteJsonValue(Writer, PortalParentAuthResult_Optional);
    }
    if (Permissions_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("permissions"));
        RallyHereAPI::WriteJsonValue(Writer, Permissions_Optional);
    }
    if (Restrictions_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("restrictions"));
        RallyHereAPI::WriteJsonValue(Writer, Restrictions_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("active_player_id"));
    RallyHereAPI::WriteJsonValue(Writer, ActivePlayerId);
    if (ActivePlayerUuid_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("active_player_uuid"));
        RallyHereAPI::WriteJsonValue(Writer, ActivePlayerUuid_Optional);
    }
    if (RoleId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("role_id"));
        RallyHereAPI::WriteJsonValue(Writer, RoleId_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("person_id"));
    RallyHereAPI::WriteJsonValue(Writer, PersonId);
    if (AccessToken_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("access_token"));
        RallyHereAPI::WriteJsonValue(Writer, AccessToken_Optional);
    }
    if (RefreshToken_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("refresh_token"));
        RallyHereAPI::WriteJsonValue(Writer, RefreshToken_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("publisher_uuid"));
    RallyHereAPI::WriteJsonValue(Writer, PublisherUuid);
    Writer->WriteIdentifierPrefix(TEXT("tenant_uuid"));
    RallyHereAPI::WriteJsonValue(Writer, TenantUuid);
    Writer->WriteIdentifierPrefix(TEXT("config_elector_uuid"));
    RallyHereAPI::WriteJsonValue(Writer, ConfigElectorUuid);
    Writer->WriteIdentifierPrefix(TEXT("client_uuid"));
    RallyHereAPI::WriteJsonValue(Writer, ClientUuid);
    Writer->WriteObjectEnd();
}

bool FRHAPI_LoginResult::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonPlatformField = (*Object)->TryGetField(TEXT("platform"));
    ParseSuccess &= JsonPlatformField.IsValid() && !JsonPlatformField->IsNull() && TryGetJsonValue(JsonPlatformField, Platform);
    const TSharedPtr<FJsonValue> JsonPortalIdField = (*Object)->TryGetField(TEXT("portal_id"));
    ParseSuccess &= JsonPortalIdField.IsValid() && !JsonPortalIdField->IsNull() && TryGetJsonValue(JsonPortalIdField, PortalId);
    const TSharedPtr<FJsonValue> JsonPortalUserIdField = (*Object)->TryGetField(TEXT("portal_user_id"));
    ParseSuccess &= JsonPortalUserIdField.IsValid() && !JsonPortalUserIdField->IsNull() && TryGetJsonValue(JsonPortalUserIdField, PortalUserId);
    const TSharedPtr<FJsonValue> JsonDisplayNameField = (*Object)->TryGetField(TEXT("display_name"));
    ParseSuccess &= JsonDisplayNameField.IsValid() && !JsonDisplayNameField->IsNull() && TryGetJsonValue(JsonDisplayNameField, DisplayName);
    const TSharedPtr<FJsonValue> JsonPortalParentAuthResultField = (*Object)->TryGetField(TEXT("portal_parent_auth_result"));
    if (JsonPortalParentAuthResultField.IsValid() && !JsonPortalParentAuthResultField->IsNull())
    {
        PortalParentAuthResult_IsSet = TryGetJsonValue(JsonPortalParentAuthResultField, PortalParentAuthResult_Optional);
        ParseSuccess &= PortalParentAuthResult_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPermissionsField = (*Object)->TryGetField(TEXT("permissions"));
    if (JsonPermissionsField.IsValid() && !JsonPermissionsField->IsNull())
    {
        Permissions_IsSet = TryGetJsonValue(JsonPermissionsField, Permissions_Optional);
        ParseSuccess &= Permissions_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonRestrictionsField = (*Object)->TryGetField(TEXT("restrictions"));
    if (JsonRestrictionsField.IsValid() && !JsonRestrictionsField->IsNull())
    {
        Restrictions_IsSet = TryGetJsonValue(JsonRestrictionsField, Restrictions_Optional);
        ParseSuccess &= Restrictions_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonActivePlayerIdField = (*Object)->TryGetField(TEXT("active_player_id"));
    ParseSuccess &= JsonActivePlayerIdField.IsValid() && !JsonActivePlayerIdField->IsNull() && TryGetJsonValue(JsonActivePlayerIdField, ActivePlayerId);
    const TSharedPtr<FJsonValue> JsonActivePlayerUuidField = (*Object)->TryGetField(TEXT("active_player_uuid"));
    if (JsonActivePlayerUuidField.IsValid() && !JsonActivePlayerUuidField->IsNull())
    {
        ActivePlayerUuid_IsSet = TryGetJsonValue(JsonActivePlayerUuidField, ActivePlayerUuid_Optional);
        ParseSuccess &= ActivePlayerUuid_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonRoleIdField = (*Object)->TryGetField(TEXT("role_id"));
    if (JsonRoleIdField.IsValid() && !JsonRoleIdField->IsNull())
    {
        RoleId_IsSet = TryGetJsonValue(JsonRoleIdField, RoleId_Optional);
        ParseSuccess &= RoleId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPersonIdField = (*Object)->TryGetField(TEXT("person_id"));
    ParseSuccess &= JsonPersonIdField.IsValid() && !JsonPersonIdField->IsNull() && TryGetJsonValue(JsonPersonIdField, PersonId);
    const TSharedPtr<FJsonValue> JsonAccessTokenField = (*Object)->TryGetField(TEXT("access_token"));
    if (JsonAccessTokenField.IsValid() && !JsonAccessTokenField->IsNull())
    {
        AccessToken_IsSet = TryGetJsonValue(JsonAccessTokenField, AccessToken_Optional);
        ParseSuccess &= AccessToken_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonRefreshTokenField = (*Object)->TryGetField(TEXT("refresh_token"));
    if (JsonRefreshTokenField.IsValid() && !JsonRefreshTokenField->IsNull())
    {
        RefreshToken_IsSet = TryGetJsonValue(JsonRefreshTokenField, RefreshToken_Optional);
        ParseSuccess &= RefreshToken_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPublisherUuidField = (*Object)->TryGetField(TEXT("publisher_uuid"));
    ParseSuccess &= JsonPublisherUuidField.IsValid() && !JsonPublisherUuidField->IsNull() && TryGetJsonValue(JsonPublisherUuidField, PublisherUuid);
    const TSharedPtr<FJsonValue> JsonTenantUuidField = (*Object)->TryGetField(TEXT("tenant_uuid"));
    ParseSuccess &= JsonTenantUuidField.IsValid() && !JsonTenantUuidField->IsNull() && TryGetJsonValue(JsonTenantUuidField, TenantUuid);
    const TSharedPtr<FJsonValue> JsonConfigElectorUuidField = (*Object)->TryGetField(TEXT("config_elector_uuid"));
    ParseSuccess &= JsonConfigElectorUuidField.IsValid() && !JsonConfigElectorUuidField->IsNull() && TryGetJsonValue(JsonConfigElectorUuidField, ConfigElectorUuid);
    const TSharedPtr<FJsonValue> JsonClientUuidField = (*Object)->TryGetField(TEXT("client_uuid"));
    ParseSuccess &= JsonClientUuidField.IsValid() && !JsonClientUuidField->IsNull() && TryGetJsonValue(JsonClientUuidField, ClientUuid);

    return ParseSuccess;
}

