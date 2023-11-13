// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "LoginRequestV1.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_LoginRequestV1

void FRHAPI_LoginRequestV1::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("grant_type"));
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(GrantType));
    if (PortalAccessToken_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("portal_access_token"));
        RallyHereAPI::WriteJsonValue(Writer, PortalAccessToken_Optional);
    }
    if (PortalDisplayName_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("portal_display_name"));
        RallyHereAPI::WriteJsonValue(Writer, PortalDisplayName_Optional);
    }
    if (PortalParentAccessToken_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("portal_parent_access_token"));
        RallyHereAPI::WriteJsonValue(Writer, PortalParentAccessToken_Optional);
    }
    if (PortalParentDisplayName_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("portal_parent_display_name"));
        RallyHereAPI::WriteJsonValue(Writer, PortalParentDisplayName_Optional);
    }
    if (IncludeRefresh_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("include_refresh"));
        RallyHereAPI::WriteJsonValue(Writer, IncludeRefresh_Optional);
    }
    if (AcceptEula_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("accept_eula"));
        RallyHereAPI::WriteJsonValue(Writer, AcceptEula_Optional);
    }
    if (AcceptTos_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("accept_tos"));
        RallyHereAPI::WriteJsonValue(Writer, AcceptTos_Optional);
    }
    if (AcceptPrivacyPolicy_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("accept_privacy_policy"));
        RallyHereAPI::WriteJsonValue(Writer, AcceptPrivacyPolicy_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_LoginRequestV1::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonGrantTypeField = (*Object)->TryGetField(TEXT("grant_type"));
    ParseSuccess &= JsonGrantTypeField.IsValid() && !JsonGrantTypeField->IsNull() && TryGetJsonValue(JsonGrantTypeField, GrantType);
    const TSharedPtr<FJsonValue> JsonPortalAccessTokenField = (*Object)->TryGetField(TEXT("portal_access_token"));
    if (JsonPortalAccessTokenField.IsValid() && !JsonPortalAccessTokenField->IsNull())
    {
        PortalAccessToken_IsSet = TryGetJsonValue(JsonPortalAccessTokenField, PortalAccessToken_Optional);
        ParseSuccess &= PortalAccessToken_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPortalDisplayNameField = (*Object)->TryGetField(TEXT("portal_display_name"));
    if (JsonPortalDisplayNameField.IsValid() && !JsonPortalDisplayNameField->IsNull())
    {
        PortalDisplayName_IsSet = TryGetJsonValue(JsonPortalDisplayNameField, PortalDisplayName_Optional);
        ParseSuccess &= PortalDisplayName_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPortalParentAccessTokenField = (*Object)->TryGetField(TEXT("portal_parent_access_token"));
    if (JsonPortalParentAccessTokenField.IsValid() && !JsonPortalParentAccessTokenField->IsNull())
    {
        PortalParentAccessToken_IsSet = TryGetJsonValue(JsonPortalParentAccessTokenField, PortalParentAccessToken_Optional);
        ParseSuccess &= PortalParentAccessToken_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPortalParentDisplayNameField = (*Object)->TryGetField(TEXT("portal_parent_display_name"));
    if (JsonPortalParentDisplayNameField.IsValid() && !JsonPortalParentDisplayNameField->IsNull())
    {
        PortalParentDisplayName_IsSet = TryGetJsonValue(JsonPortalParentDisplayNameField, PortalParentDisplayName_Optional);
        ParseSuccess &= PortalParentDisplayName_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonIncludeRefreshField = (*Object)->TryGetField(TEXT("include_refresh"));
    if (JsonIncludeRefreshField.IsValid() && !JsonIncludeRefreshField->IsNull())
    {
        IncludeRefresh_IsSet = TryGetJsonValue(JsonIncludeRefreshField, IncludeRefresh_Optional);
        ParseSuccess &= IncludeRefresh_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonAcceptEulaField = (*Object)->TryGetField(TEXT("accept_eula"));
    if (JsonAcceptEulaField.IsValid() && !JsonAcceptEulaField->IsNull())
    {
        AcceptEula_IsSet = TryGetJsonValue(JsonAcceptEulaField, AcceptEula_Optional);
        ParseSuccess &= AcceptEula_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonAcceptTosField = (*Object)->TryGetField(TEXT("accept_tos"));
    if (JsonAcceptTosField.IsValid() && !JsonAcceptTosField->IsNull())
    {
        AcceptTos_IsSet = TryGetJsonValue(JsonAcceptTosField, AcceptTos_Optional);
        ParseSuccess &= AcceptTos_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonAcceptPrivacyPolicyField = (*Object)->TryGetField(TEXT("accept_privacy_policy"));
    if (JsonAcceptPrivacyPolicyField.IsValid() && !JsonAcceptPrivacyPolicyField->IsNull())
    {
        AcceptPrivacyPolicy_IsSet = TryGetJsonValue(JsonAcceptPrivacyPolicyField, AcceptPrivacyPolicy_Optional);
        ParseSuccess &= AcceptPrivacyPolicy_IsSet;
    }

    return ParseSuccess;
}

