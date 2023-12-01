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
#include "DevEnvironment.h"
#include "DevEnvironmentCreate.h"
#include "DevEnvironmentResponse.h"
#include "DevEnvironmentUpdate.h"
#include "DevHTTPValidationError.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_EnvironmentCreateEnvironment;
struct FResponse_EnvironmentCreateEnvironment;
struct FRequest_EnvironmentDeleteEnvironment;
struct FResponse_EnvironmentDeleteEnvironment;
struct FRequest_EnvironmentGetAllEnvironments;
struct FResponse_EnvironmentGetAllEnvironments;
struct FRequest_EnvironmentGetEnvironment;
struct FResponse_EnvironmentGetEnvironment;
struct FRequest_EnvironmentUpdateEnvironment;
struct FResponse_EnvironmentUpdateEnvironment;

DECLARE_DELEGATE_OneParam(FDelegate_EnvironmentCreateEnvironment, const FResponse_EnvironmentCreateEnvironment&);
DECLARE_DELEGATE_OneParam(FDelegate_EnvironmentDeleteEnvironment, const FResponse_EnvironmentDeleteEnvironment&);
DECLARE_DELEGATE_OneParam(FDelegate_EnvironmentGetAllEnvironments, const FResponse_EnvironmentGetAllEnvironments&);
DECLARE_DELEGATE_OneParam(FDelegate_EnvironmentGetEnvironment, const FResponse_EnvironmentGetEnvironment&);
DECLARE_DELEGATE_OneParam(FDelegate_EnvironmentUpdateEnvironment, const FResponse_EnvironmentUpdateEnvironment&);

class RALLYHEREDEVELOPERAPI_API FEnvironmentsAPI : public FAPI
{
public:
    FEnvironmentsAPI();
    virtual ~FEnvironmentsAPI();

    FHttpRequestPtr EnvironmentCreateEnvironment(const FRequest_EnvironmentCreateEnvironment& Request, const FDelegate_EnvironmentCreateEnvironment& Delegate = FDelegate_EnvironmentCreateEnvironment(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr EnvironmentDeleteEnvironment(const FRequest_EnvironmentDeleteEnvironment& Request, const FDelegate_EnvironmentDeleteEnvironment& Delegate = FDelegate_EnvironmentDeleteEnvironment(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr EnvironmentGetAllEnvironments(const FRequest_EnvironmentGetAllEnvironments& Request, const FDelegate_EnvironmentGetAllEnvironments& Delegate = FDelegate_EnvironmentGetAllEnvironments(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr EnvironmentGetEnvironment(const FRequest_EnvironmentGetEnvironment& Request, const FDelegate_EnvironmentGetEnvironment& Delegate = FDelegate_EnvironmentGetEnvironment(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr EnvironmentUpdateEnvironment(const FRequest_EnvironmentUpdateEnvironment& Request, const FDelegate_EnvironmentUpdateEnvironment& Delegate = FDelegate_EnvironmentUpdateEnvironment(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnEnvironmentCreateEnvironmentResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_EnvironmentCreateEnvironment Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnEnvironmentDeleteEnvironmentResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_EnvironmentDeleteEnvironment Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnEnvironmentGetAllEnvironmentsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_EnvironmentGetAllEnvironments Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnEnvironmentGetEnvironmentResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_EnvironmentGetEnvironment Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnEnvironmentUpdateEnvironmentResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_EnvironmentUpdateEnvironment Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Create Environment
 *
 * Create an environment
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_EnvironmentCreateEnvironment : public FRequest
{
    FRequest_EnvironmentCreateEnvironment();
    virtual ~FRequest_EnvironmentCreateEnvironment() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Product ID */
    FGuid ProductId;
    FRHAPI_DevEnvironmentCreate EnvironmentCreate;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_EnvironmentCreateEnvironment : public FResponse
{
    FResponse_EnvironmentCreateEnvironment(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_EnvironmentCreateEnvironment() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevEnvironment Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevEnvironment& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_EnvironmentCreateEnvironment
{
    typedef FRequest_EnvironmentCreateEnvironment Request;
    typedef FResponse_EnvironmentCreateEnvironment Response;
    typedef FDelegate_EnvironmentCreateEnvironment Delegate;
    typedef FEnvironmentsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.EnvironmentCreateEnvironment(InRequest, InDelegate, Priority); }
};

/* Delete Environment
 *
 * Delete an environment
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_EnvironmentDeleteEnvironment : public FRequest
{
    FRequest_EnvironmentDeleteEnvironment();
    virtual ~FRequest_EnvironmentDeleteEnvironment() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* The environment ID */
    FGuid EnvironmentId;
    /* Product ID */
    FGuid ProductId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_EnvironmentDeleteEnvironment : public FResponse
{
    FResponse_EnvironmentDeleteEnvironment(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_EnvironmentDeleteEnvironment() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevJsonValue Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevJsonValue& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_EnvironmentDeleteEnvironment
{
    typedef FRequest_EnvironmentDeleteEnvironment Request;
    typedef FResponse_EnvironmentDeleteEnvironment Response;
    typedef FDelegate_EnvironmentDeleteEnvironment Delegate;
    typedef FEnvironmentsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.EnvironmentDeleteEnvironment(InRequest, InDelegate, Priority); }
};

/* Get All Environments
 *
 * Get all environments
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_EnvironmentGetAllEnvironments : public FRequest
{
    FRequest_EnvironmentGetAllEnvironments();
    virtual ~FRequest_EnvironmentGetAllEnvironments() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Product ID */
    FGuid ProductId;
    /* Include archive environments */
    TOptional<bool> IncludeArchive;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_EnvironmentGetAllEnvironments : public FResponse
{
    FResponse_EnvironmentGetAllEnvironments(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_EnvironmentGetAllEnvironments() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    TArray<FRHAPI_DevEnvironmentResponse> Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(TArray<FRHAPI_DevEnvironmentResponse>& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_EnvironmentGetAllEnvironments
{
    typedef FRequest_EnvironmentGetAllEnvironments Request;
    typedef FResponse_EnvironmentGetAllEnvironments Response;
    typedef FDelegate_EnvironmentGetAllEnvironments Delegate;
    typedef FEnvironmentsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.EnvironmentGetAllEnvironments(InRequest, InDelegate, Priority); }
};

/* Get Environment
 *
 * Get an environment
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_EnvironmentGetEnvironment : public FRequest
{
    FRequest_EnvironmentGetEnvironment();
    virtual ~FRequest_EnvironmentGetEnvironment() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* The environment ID */
    FGuid EnvironmentId;
    /* Product ID */
    FGuid ProductId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_EnvironmentGetEnvironment : public FResponse
{
    FResponse_EnvironmentGetEnvironment(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_EnvironmentGetEnvironment() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevEnvironmentResponse Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevEnvironmentResponse& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_EnvironmentGetEnvironment
{
    typedef FRequest_EnvironmentGetEnvironment Request;
    typedef FResponse_EnvironmentGetEnvironment Response;
    typedef FDelegate_EnvironmentGetEnvironment Delegate;
    typedef FEnvironmentsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.EnvironmentGetEnvironment(InRequest, InDelegate, Priority); }
};

/* Update Environment
 *
 * Create an environment
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_EnvironmentUpdateEnvironment : public FRequest
{
    FRequest_EnvironmentUpdateEnvironment();
    virtual ~FRequest_EnvironmentUpdateEnvironment() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* The environment ID */
    FGuid EnvironmentId;
    /* Product ID */
    FGuid ProductId;
    FRHAPI_DevEnvironmentUpdate EnvironmentUpdate;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_EnvironmentUpdateEnvironment : public FResponse
{
    FResponse_EnvironmentUpdateEnvironment(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_EnvironmentUpdateEnvironment() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevEnvironment Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevEnvironment& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_EnvironmentUpdateEnvironment
{
    typedef FRequest_EnvironmentUpdateEnvironment Request;
    typedef FResponse_EnvironmentUpdateEnvironment Response;
    typedef FDelegate_EnvironmentUpdateEnvironment Delegate;
    typedef FEnvironmentsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.EnvironmentUpdateEnvironment(InRequest, InDelegate, Priority); }
};


}
