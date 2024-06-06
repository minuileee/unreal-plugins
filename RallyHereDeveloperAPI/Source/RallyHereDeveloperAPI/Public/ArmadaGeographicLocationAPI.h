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
#include "DevGeographicLocation.h"
#include "DevGeographicLocationCreate.h"
#include "DevGeographicLocationUpdate.h"
#include "DevGeographicLocationVersionsAndTransactions.h"
#include "DevHTTPValidationError.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_CreateGeoLoc;
struct FResponse_CreateGeoLoc;
struct FRequest_GetAllGeoLocs;
struct FResponse_GetAllGeoLocs;
struct FRequest_GetGeoLoc;
struct FResponse_GetGeoLoc;
struct FRequest_GetGeoLocVersions;
struct FResponse_GetGeoLocVersions;
struct FRequest_UpdateGeoLoc;
struct FResponse_UpdateGeoLoc;

DECLARE_DELEGATE_OneParam(FDelegate_CreateGeoLoc, const FResponse_CreateGeoLoc&);
DECLARE_DELEGATE_OneParam(FDelegate_GetAllGeoLocs, const FResponse_GetAllGeoLocs&);
DECLARE_DELEGATE_OneParam(FDelegate_GetGeoLoc, const FResponse_GetGeoLoc&);
DECLARE_DELEGATE_OneParam(FDelegate_GetGeoLocVersions, const FResponse_GetGeoLocVersions&);
DECLARE_DELEGATE_OneParam(FDelegate_UpdateGeoLoc, const FResponse_UpdateGeoLoc&);

class RALLYHEREDEVELOPERAPI_API FArmadaGeographicLocationAPI : public FAPI
{
public:
    FArmadaGeographicLocationAPI();
    virtual ~FArmadaGeographicLocationAPI();

    FHttpRequestPtr CreateGeoLoc(const FRequest_CreateGeoLoc& Request, const FDelegate_CreateGeoLoc& Delegate = FDelegate_CreateGeoLoc(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetAllGeoLocs(const FRequest_GetAllGeoLocs& Request, const FDelegate_GetAllGeoLocs& Delegate = FDelegate_GetAllGeoLocs(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetGeoLoc(const FRequest_GetGeoLoc& Request, const FDelegate_GetGeoLoc& Delegate = FDelegate_GetGeoLoc(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetGeoLocVersions(const FRequest_GetGeoLocVersions& Request, const FDelegate_GetGeoLocVersions& Delegate = FDelegate_GetGeoLocVersions(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr UpdateGeoLoc(const FRequest_UpdateGeoLoc& Request, const FDelegate_UpdateGeoLoc& Delegate = FDelegate_UpdateGeoLoc(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnCreateGeoLocResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_CreateGeoLoc Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetAllGeoLocsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAllGeoLocs Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetGeoLocResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetGeoLoc Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetGeoLocVersionsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetGeoLocVersions Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnUpdateGeoLocResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UpdateGeoLoc Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Create Geo Loc
 *
 * Create a geographic location
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_CreateGeoLoc : public FRequest
{
    FRequest_CreateGeoLoc();
    virtual ~FRequest_CreateGeoLoc() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FRHAPI_DevGeographicLocationCreate GeographicLocationCreate;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_CreateGeoLoc : public FResponse
{
    FResponse_CreateGeoLoc(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_CreateGeoLoc() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevGeographicLocation Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevGeographicLocation& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_CreateGeoLoc
{
    typedef FRequest_CreateGeoLoc Request;
    typedef FResponse_CreateGeoLoc Response;
    typedef FDelegate_CreateGeoLoc Delegate;
    typedef FArmadaGeographicLocationAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.CreateGeoLoc(InRequest, InDelegate, Priority); }
};

/* Get All Geo Locs
 *
 * Get all geographic locations
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetAllGeoLocs : public FRequest
{
    FRequest_GetAllGeoLocs();
    virtual ~FRequest_GetAllGeoLocs() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetAllGeoLocs : public FResponse
{
    FResponse_GetAllGeoLocs(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetAllGeoLocs() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    TArray<FRHAPI_DevGeographicLocation> Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(TArray<FRHAPI_DevGeographicLocation>& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetAllGeoLocs
{
    typedef FRequest_GetAllGeoLocs Request;
    typedef FResponse_GetAllGeoLocs Response;
    typedef FDelegate_GetAllGeoLocs Delegate;
    typedef FArmadaGeographicLocationAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetAllGeoLocs(InRequest, InDelegate, Priority); }
};

/* Get Geo Loc
 *
 * Get a geographic location
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetGeoLoc : public FRequest
{
    FRequest_GetGeoLoc();
    virtual ~FRequest_GetGeoLoc() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* The geographic location ID */
    FGuid GeoLocId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetGeoLoc : public FResponse
{
    FResponse_GetGeoLoc(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetGeoLoc() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevGeographicLocation Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevGeographicLocation& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetGeoLoc
{
    typedef FRequest_GetGeoLoc Request;
    typedef FResponse_GetGeoLoc Response;
    typedef FDelegate_GetGeoLoc Delegate;
    typedef FArmadaGeographicLocationAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetGeoLoc(InRequest, InDelegate, Priority); }
};

/* Get Geo Loc Versions
 *
 * Get versions for the geographic location
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetGeoLocVersions : public FRequest
{
    FRequest_GetGeoLocVersions();
    virtual ~FRequest_GetGeoLocVersions() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* The geographic location ID */
    FGuid GeoLocId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetGeoLocVersions : public FResponse
{
    FResponse_GetGeoLocVersions(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetGeoLocVersions() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevGeographicLocationVersionsAndTransactions Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevGeographicLocationVersionsAndTransactions& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetGeoLocVersions
{
    typedef FRequest_GetGeoLocVersions Request;
    typedef FResponse_GetGeoLocVersions Response;
    typedef FDelegate_GetGeoLocVersions Delegate;
    typedef FArmadaGeographicLocationAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetGeoLocVersions(InRequest, InDelegate, Priority); }
};

/* Update Geo Loc
 *
 * Update a geographic location
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_UpdateGeoLoc : public FRequest
{
    FRequest_UpdateGeoLoc();
    virtual ~FRequest_UpdateGeoLoc() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* The geographic location ID */
    FGuid GeoLocId;
    FRHAPI_DevGeographicLocationUpdate GeographicLocationUpdate;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_UpdateGeoLoc : public FResponse
{
    FResponse_UpdateGeoLoc(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_UpdateGeoLoc() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevGeographicLocation Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevGeographicLocation& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_UpdateGeoLoc
{
    typedef FRequest_UpdateGeoLoc Request;
    typedef FResponse_UpdateGeoLoc Response;
    typedef FDelegate_UpdateGeoLoc Delegate;
    typedef FArmadaGeographicLocationAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.UpdateGeoLoc(InRequest, InDelegate, Priority); }
};


}