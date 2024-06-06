// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "RallyHereDeveloperAPIAuthContext.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevHTTPValidationError.h"
#include "DevPlatformData.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_EnvironmentGetEnvironmentMetricPlayersActive;
struct FResponse_EnvironmentGetEnvironmentMetricPlayersActive;
struct FRequest_EnvironmentGetEnvironmentMetricPlayersCcu;
struct FResponse_EnvironmentGetEnvironmentMetricPlayersCcu;
struct FRequest_EnvironmentGetEnvironmentMetricPlayersNew;
struct FResponse_EnvironmentGetEnvironmentMetricPlayersNew;
struct FRequest_EnvironmentGetEnvironmentMetricPurchases;
struct FResponse_EnvironmentGetEnvironmentMetricPurchases;

DECLARE_DELEGATE_OneParam(FDelegate_EnvironmentGetEnvironmentMetricPlayersActive, const FResponse_EnvironmentGetEnvironmentMetricPlayersActive&);
DECLARE_DELEGATE_OneParam(FDelegate_EnvironmentGetEnvironmentMetricPlayersCcu, const FResponse_EnvironmentGetEnvironmentMetricPlayersCcu&);
DECLARE_DELEGATE_OneParam(FDelegate_EnvironmentGetEnvironmentMetricPlayersNew, const FResponse_EnvironmentGetEnvironmentMetricPlayersNew&);
DECLARE_DELEGATE_OneParam(FDelegate_EnvironmentGetEnvironmentMetricPurchases, const FResponse_EnvironmentGetEnvironmentMetricPurchases&);

class RALLYHEREDEVELOPERAPI_API FEnvironmentAPI : public FAPI
{
public:
    FEnvironmentAPI();
    virtual ~FEnvironmentAPI();

    FHttpRequestPtr EnvironmentGetEnvironmentMetricPlayersActive(const FRequest_EnvironmentGetEnvironmentMetricPlayersActive& Request, const FDelegate_EnvironmentGetEnvironmentMetricPlayersActive& Delegate = FDelegate_EnvironmentGetEnvironmentMetricPlayersActive(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr EnvironmentGetEnvironmentMetricPlayersCcu(const FRequest_EnvironmentGetEnvironmentMetricPlayersCcu& Request, const FDelegate_EnvironmentGetEnvironmentMetricPlayersCcu& Delegate = FDelegate_EnvironmentGetEnvironmentMetricPlayersCcu(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr EnvironmentGetEnvironmentMetricPlayersNew(const FRequest_EnvironmentGetEnvironmentMetricPlayersNew& Request, const FDelegate_EnvironmentGetEnvironmentMetricPlayersNew& Delegate = FDelegate_EnvironmentGetEnvironmentMetricPlayersNew(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr EnvironmentGetEnvironmentMetricPurchases(const FRequest_EnvironmentGetEnvironmentMetricPurchases& Request, const FDelegate_EnvironmentGetEnvironmentMetricPurchases& Delegate = FDelegate_EnvironmentGetEnvironmentMetricPurchases(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnEnvironmentGetEnvironmentMetricPlayersActiveResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_EnvironmentGetEnvironmentMetricPlayersActive Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnEnvironmentGetEnvironmentMetricPlayersCcuResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_EnvironmentGetEnvironmentMetricPlayersCcu Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnEnvironmentGetEnvironmentMetricPlayersNewResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_EnvironmentGetEnvironmentMetricPlayersNew Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnEnvironmentGetEnvironmentMetricPurchasesResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_EnvironmentGetEnvironmentMetricPurchases Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Get Environment Metric Players Active
 *
 * Get active player count during time window, requires `<routers.common.permissions.PortalPermission object at 0x7f23fd71a790>` permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_EnvironmentGetEnvironmentMetricPlayersActive : public FRequest
{
    FRequest_EnvironmentGetEnvironmentMetricPlayersActive();
    virtual ~FRequest_EnvironmentGetEnvironmentMetricPlayersActive() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Sandbox ID */
    FGuid SandboxId;
    TOptional<FDateTime> FromDate;
    TOptional<FDateTime> ToDate;
    TOptional<int32> PreviousSeconds;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_EnvironmentGetEnvironmentMetricPlayersActive : public FResponse
{
    FResponse_EnvironmentGetEnvironmentMetricPlayersActive(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_EnvironmentGetEnvironmentMetricPlayersActive() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPlatformData Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevPlatformData& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_EnvironmentGetEnvironmentMetricPlayersActive
{
    typedef FRequest_EnvironmentGetEnvironmentMetricPlayersActive Request;
    typedef FResponse_EnvironmentGetEnvironmentMetricPlayersActive Response;
    typedef FDelegate_EnvironmentGetEnvironmentMetricPlayersActive Delegate;
    typedef FEnvironmentAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.EnvironmentGetEnvironmentMetricPlayersActive(InRequest, InDelegate, Priority); }
};

/* Get Environment Metric Players Ccu
 *
 * Get latest CCU from time window, requires `<routers.common.permissions.PortalPermission object at 0x7f23fd71a790>` permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_EnvironmentGetEnvironmentMetricPlayersCcu : public FRequest
{
    FRequest_EnvironmentGetEnvironmentMetricPlayersCcu();
    virtual ~FRequest_EnvironmentGetEnvironmentMetricPlayersCcu() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Sandbox ID */
    FGuid SandboxId;
    TOptional<FDateTime> FromDate;
    TOptional<FDateTime> ToDate;
    TOptional<int32> PreviousSeconds;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_EnvironmentGetEnvironmentMetricPlayersCcu : public FResponse
{
    FResponse_EnvironmentGetEnvironmentMetricPlayersCcu(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_EnvironmentGetEnvironmentMetricPlayersCcu() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPlatformData Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevPlatformData& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_EnvironmentGetEnvironmentMetricPlayersCcu
{
    typedef FRequest_EnvironmentGetEnvironmentMetricPlayersCcu Request;
    typedef FResponse_EnvironmentGetEnvironmentMetricPlayersCcu Response;
    typedef FDelegate_EnvironmentGetEnvironmentMetricPlayersCcu Delegate;
    typedef FEnvironmentAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.EnvironmentGetEnvironmentMetricPlayersCcu(InRequest, InDelegate, Priority); }
};

/* Get Environment Metric Players New
 *
 * Get new player count during time window, requires `<routers.common.permissions.PortalPermission object at 0x7f23fd71a790>` permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_EnvironmentGetEnvironmentMetricPlayersNew : public FRequest
{
    FRequest_EnvironmentGetEnvironmentMetricPlayersNew();
    virtual ~FRequest_EnvironmentGetEnvironmentMetricPlayersNew() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Sandbox ID */
    FGuid SandboxId;
    TOptional<FDateTime> FromDate;
    TOptional<FDateTime> ToDate;
    TOptional<int32> PreviousSeconds;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_EnvironmentGetEnvironmentMetricPlayersNew : public FResponse
{
    FResponse_EnvironmentGetEnvironmentMetricPlayersNew(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_EnvironmentGetEnvironmentMetricPlayersNew() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPlatformData Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevPlatformData& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_EnvironmentGetEnvironmentMetricPlayersNew
{
    typedef FRequest_EnvironmentGetEnvironmentMetricPlayersNew Request;
    typedef FResponse_EnvironmentGetEnvironmentMetricPlayersNew Response;
    typedef FDelegate_EnvironmentGetEnvironmentMetricPlayersNew Delegate;
    typedef FEnvironmentAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.EnvironmentGetEnvironmentMetricPlayersNew(InRequest, InDelegate, Priority); }
};

/* Get Environment Metric Purchases
 *
 * Get purchase count during time window, requires `<routers.common.permissions.PortalPermission object at 0x7f23fd71a790>` permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_EnvironmentGetEnvironmentMetricPurchases : public FRequest
{
    FRequest_EnvironmentGetEnvironmentMetricPurchases();
    virtual ~FRequest_EnvironmentGetEnvironmentMetricPurchases() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Sandbox ID */
    FGuid SandboxId;
    TOptional<FDateTime> FromDate;
    TOptional<FDateTime> ToDate;
    TOptional<int32> PreviousSeconds;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_EnvironmentGetEnvironmentMetricPurchases : public FResponse
{
    FResponse_EnvironmentGetEnvironmentMetricPurchases(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_EnvironmentGetEnvironmentMetricPurchases() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPlatformData Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevPlatformData& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_EnvironmentGetEnvironmentMetricPurchases
{
    typedef FRequest_EnvironmentGetEnvironmentMetricPurchases Request;
    typedef FResponse_EnvironmentGetEnvironmentMetricPurchases Response;
    typedef FDelegate_EnvironmentGetEnvironmentMetricPurchases Delegate;
    typedef FEnvironmentAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.EnvironmentGetEnvironmentMetricPurchases(InRequest, InDelegate, Priority); }
};


}