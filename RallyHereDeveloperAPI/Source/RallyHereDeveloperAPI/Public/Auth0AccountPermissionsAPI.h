// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "RallyHereDeveloperAPIAuthContext.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevHTTPValidationError.h"
#include "DevPortalPermissions.h"
#include "DevUserPermissionsAndEntities.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_GetAccountPermissions;
struct FResponse_GetAccountPermissions;
struct FRequest_GetAccountPermissionsForAuth0;
struct FResponse_GetAccountPermissionsForAuth0;
struct FRequest_GetPortalPermissions;
struct FResponse_GetPortalPermissions;

DECLARE_DELEGATE_OneParam(FDelegate_GetAccountPermissions, const FResponse_GetAccountPermissions&);
DECLARE_DELEGATE_OneParam(FDelegate_GetAccountPermissionsForAuth0, const FResponse_GetAccountPermissionsForAuth0&);
DECLARE_DELEGATE_OneParam(FDelegate_GetPortalPermissions, const FResponse_GetPortalPermissions&);

class RALLYHEREDEVELOPERAPI_API FAuth0AccountPermissionsAPI : public FAPI
{
public:
    FAuth0AccountPermissionsAPI();
    virtual ~FAuth0AccountPermissionsAPI();

    FHttpRequestPtr GetAccountPermissions(const FRequest_GetAccountPermissions& Request, const FDelegate_GetAccountPermissions& Delegate = FDelegate_GetAccountPermissions(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetAccountPermissionsForAuth0(const FRequest_GetAccountPermissionsForAuth0& Request, const FDelegate_GetAccountPermissionsForAuth0& Delegate = FDelegate_GetAccountPermissionsForAuth0(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetPortalPermissions(const FRequest_GetPortalPermissions& Request, const FDelegate_GetPortalPermissions& Delegate = FDelegate_GetPortalPermissions(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnGetAccountPermissionsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAccountPermissions Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetAccountPermissionsForAuth0Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAccountPermissionsForAuth0 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetPortalPermissionsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetPortalPermissions Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Get Account Permissions

*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetAccountPermissions : public FRequest
{
    FRequest_GetAccountPermissions();
    virtual ~FRequest_GetAccountPermissions() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetAccountPermissions : public FResponse
{
    FResponse_GetAccountPermissions(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetAccountPermissions() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPortalPermissions Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetAccountPermissions
{
    typedef FRequest_GetAccountPermissions Request;
    typedef FResponse_GetAccountPermissions Response;
    typedef FDelegate_GetAccountPermissions Delegate;
    typedef FAuth0AccountPermissionsAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetAccountPermissions(InRequest, InDelegate, Priority); }
};

/* Get Account Permissions For Auth0

*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetAccountPermissionsForAuth0 : public FRequest
{
    FRequest_GetAccountPermissionsForAuth0();
    virtual ~FRequest_GetAccountPermissionsForAuth0() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FString Auth0UserId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetAccountPermissionsForAuth0 : public FResponse
{
    FResponse_GetAccountPermissionsForAuth0(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetAccountPermissionsForAuth0() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPortalPermissions Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetAccountPermissionsForAuth0
{
    typedef FRequest_GetAccountPermissionsForAuth0 Request;
    typedef FResponse_GetAccountPermissionsForAuth0 Response;
    typedef FDelegate_GetAccountPermissionsForAuth0 Delegate;
    typedef FAuth0AccountPermissionsAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetAccountPermissionsForAuth0(InRequest, InDelegate, Priority); }
};

/* Get Portal Permissions

*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetPortalPermissions : public FRequest
{
    FRequest_GetPortalPermissions();
    virtual ~FRequest_GetPortalPermissions() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetPortalPermissions : public FResponse
{
    FResponse_GetPortalPermissions(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetPortalPermissions() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevUserPermissionsAndEntities Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetPortalPermissions
{
    typedef FRequest_GetPortalPermissions Request;
    typedef FResponse_GetPortalPermissions Response;
    typedef FDelegate_GetPortalPermissions Delegate;
    typedef FAuth0AccountPermissionsAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetPortalPermissions(InRequest, InDelegate, Priority); }
};


}
