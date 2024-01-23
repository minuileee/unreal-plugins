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
#include "DevMachineImage.h"
#include "DevMachineImageCreate.h"
#include "DevMachineImageUpdate.h"
#include "DevMachineImageVersionsAndTransactions.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_CreateMi;
struct FResponse_CreateMi;
struct FRequest_GetAllMis;
struct FResponse_GetAllMis;
struct FRequest_GetMi;
struct FResponse_GetMi;
struct FRequest_GetMiVersions;
struct FResponse_GetMiVersions;
struct FRequest_UpdateMi;
struct FResponse_UpdateMi;

DECLARE_DELEGATE_OneParam(FDelegate_CreateMi, const FResponse_CreateMi&);
DECLARE_DELEGATE_OneParam(FDelegate_GetAllMis, const FResponse_GetAllMis&);
DECLARE_DELEGATE_OneParam(FDelegate_GetMi, const FResponse_GetMi&);
DECLARE_DELEGATE_OneParam(FDelegate_GetMiVersions, const FResponse_GetMiVersions&);
DECLARE_DELEGATE_OneParam(FDelegate_UpdateMi, const FResponse_UpdateMi&);

class RALLYHEREDEVELOPERAPI_API FArmadaMachineImageAPI : public FAPI
{
public:
    FArmadaMachineImageAPI();
    virtual ~FArmadaMachineImageAPI();

    FHttpRequestPtr CreateMi(const FRequest_CreateMi& Request, const FDelegate_CreateMi& Delegate = FDelegate_CreateMi(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetAllMis(const FRequest_GetAllMis& Request, const FDelegate_GetAllMis& Delegate = FDelegate_GetAllMis(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetMi(const FRequest_GetMi& Request, const FDelegate_GetMi& Delegate = FDelegate_GetMi(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetMiVersions(const FRequest_GetMiVersions& Request, const FDelegate_GetMiVersions& Delegate = FDelegate_GetMiVersions(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr UpdateMi(const FRequest_UpdateMi& Request, const FDelegate_UpdateMi& Delegate = FDelegate_UpdateMi(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnCreateMiResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_CreateMi Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetAllMisResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAllMis Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetMiResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetMi Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetMiVersionsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetMiVersions Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnUpdateMiResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UpdateMi Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Create Mi
 *
 * Create a machine image
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_CreateMi : public FRequest
{
    FRequest_CreateMi();
    virtual ~FRequest_CreateMi() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FRHAPI_DevMachineImageCreate MachineImageCreate;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_CreateMi : public FResponse
{
    FResponse_CreateMi(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_CreateMi() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevMachineImage Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevMachineImage& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_CreateMi
{
    typedef FRequest_CreateMi Request;
    typedef FResponse_CreateMi Response;
    typedef FDelegate_CreateMi Delegate;
    typedef FArmadaMachineImageAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.CreateMi(InRequest, InDelegate, Priority); }
};

/* Get All Mis
 *
 * Get all machine images
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetAllMis : public FRequest
{
    FRequest_GetAllMis();
    virtual ~FRequest_GetAllMis() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetAllMis : public FResponse
{
    FResponse_GetAllMis(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetAllMis() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    TArray<FRHAPI_DevMachineImage> Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(TArray<FRHAPI_DevMachineImage>& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetAllMis
{
    typedef FRequest_GetAllMis Request;
    typedef FResponse_GetAllMis Response;
    typedef FDelegate_GetAllMis Delegate;
    typedef FArmadaMachineImageAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetAllMis(InRequest, InDelegate, Priority); }
};

/* Get Mi
 *
 * Get a machine image
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetMi : public FRequest
{
    FRequest_GetMi();
    virtual ~FRequest_GetMi() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* The machine image ID */
    FGuid MiId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetMi : public FResponse
{
    FResponse_GetMi(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetMi() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevMachineImage Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevMachineImage& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetMi
{
    typedef FRequest_GetMi Request;
    typedef FResponse_GetMi Response;
    typedef FDelegate_GetMi Delegate;
    typedef FArmadaMachineImageAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetMi(InRequest, InDelegate, Priority); }
};

/* Get Mi Versions
 *
 * Get versions for a machine image
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetMiVersions : public FRequest
{
    FRequest_GetMiVersions();
    virtual ~FRequest_GetMiVersions() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* The machine image ID */
    FGuid MiId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetMiVersions : public FResponse
{
    FResponse_GetMiVersions(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetMiVersions() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevMachineImageVersionsAndTransactions Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevMachineImageVersionsAndTransactions& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetMiVersions
{
    typedef FRequest_GetMiVersions Request;
    typedef FResponse_GetMiVersions Response;
    typedef FDelegate_GetMiVersions Delegate;
    typedef FArmadaMachineImageAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetMiVersions(InRequest, InDelegate, Priority); }
};

/* Update Mi
 *
 * Update a machine image
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_UpdateMi : public FRequest
{
    FRequest_UpdateMi();
    virtual ~FRequest_UpdateMi() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* The machine image ID */
    FGuid MiId;
    FRHAPI_DevMachineImageUpdate MachineImageUpdate;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_UpdateMi : public FResponse
{
    FResponse_UpdateMi(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_UpdateMi() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevMachineImage Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevMachineImage& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_UpdateMi
{
    typedef FRequest_UpdateMi Request;
    typedef FResponse_UpdateMi Response;
    typedef FDelegate_UpdateMi Delegate;
    typedef FArmadaMachineImageAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.UpdateMi(InRequest, InDelegate, Priority); }
};


}
