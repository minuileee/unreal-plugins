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
#include "DevPlatform.h"
#include "DevAllPlatformSessionTemplatesResponse.h"
#include "DevHTTPValidationError.h"
#include "DevPlatformSessionTemplate.h"
#include "DevPlatformSessionTemplateRequest.h"
#include "DevPlatformSessionTemplateUpdateRequest.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_SandboxCreatePlatformSessionTemplate;
struct FResponse_SandboxCreatePlatformSessionTemplate;
struct FRequest_SandboxDeletePlatformSessionTemplate;
struct FResponse_SandboxDeletePlatformSessionTemplate;
struct FRequest_SandboxGetAllPlatformSessionTemplates;
struct FResponse_SandboxGetAllPlatformSessionTemplates;
struct FRequest_SandboxGetSpecificPlatformSessionTemplate;
struct FResponse_SandboxGetSpecificPlatformSessionTemplate;
struct FRequest_SandboxPatchPlatformSessionTemplate;
struct FResponse_SandboxPatchPlatformSessionTemplate;
struct FRequest_SandboxPutPlatformSessionTemplate;
struct FResponse_SandboxPutPlatformSessionTemplate;

DECLARE_DELEGATE_OneParam(FDelegate_SandboxCreatePlatformSessionTemplate, const FResponse_SandboxCreatePlatformSessionTemplate&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxDeletePlatformSessionTemplate, const FResponse_SandboxDeletePlatformSessionTemplate&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxGetAllPlatformSessionTemplates, const FResponse_SandboxGetAllPlatformSessionTemplates&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxGetSpecificPlatformSessionTemplate, const FResponse_SandboxGetSpecificPlatformSessionTemplate&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxPatchPlatformSessionTemplate, const FResponse_SandboxPatchPlatformSessionTemplate&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxPutPlatformSessionTemplate, const FResponse_SandboxPutPlatformSessionTemplate&);

class RALLYHEREDEVELOPERAPI_API FPlatformSessionTemplatesAPI : public FAPI
{
public:
    FPlatformSessionTemplatesAPI();
    virtual ~FPlatformSessionTemplatesAPI();

    FHttpRequestPtr SandboxCreatePlatformSessionTemplate(const FRequest_SandboxCreatePlatformSessionTemplate& Request, const FDelegate_SandboxCreatePlatformSessionTemplate& Delegate = FDelegate_SandboxCreatePlatformSessionTemplate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxDeletePlatformSessionTemplate(const FRequest_SandboxDeletePlatformSessionTemplate& Request, const FDelegate_SandboxDeletePlatformSessionTemplate& Delegate = FDelegate_SandboxDeletePlatformSessionTemplate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxGetAllPlatformSessionTemplates(const FRequest_SandboxGetAllPlatformSessionTemplates& Request, const FDelegate_SandboxGetAllPlatformSessionTemplates& Delegate = FDelegate_SandboxGetAllPlatformSessionTemplates(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxGetSpecificPlatformSessionTemplate(const FRequest_SandboxGetSpecificPlatformSessionTemplate& Request, const FDelegate_SandboxGetSpecificPlatformSessionTemplate& Delegate = FDelegate_SandboxGetSpecificPlatformSessionTemplate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxPatchPlatformSessionTemplate(const FRequest_SandboxPatchPlatformSessionTemplate& Request, const FDelegate_SandboxPatchPlatformSessionTemplate& Delegate = FDelegate_SandboxPatchPlatformSessionTemplate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxPutPlatformSessionTemplate(const FRequest_SandboxPutPlatformSessionTemplate& Request, const FDelegate_SandboxPutPlatformSessionTemplate& Delegate = FDelegate_SandboxPutPlatformSessionTemplate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnSandboxCreatePlatformSessionTemplateResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxCreatePlatformSessionTemplate Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxDeletePlatformSessionTemplateResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxDeletePlatformSessionTemplate Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxGetAllPlatformSessionTemplatesResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxGetAllPlatformSessionTemplates Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxGetSpecificPlatformSessionTemplateResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxGetSpecificPlatformSessionTemplate Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxPatchPlatformSessionTemplateResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxPatchPlatformSessionTemplate Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxPutPlatformSessionTemplateResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxPutPlatformSessionTemplate Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Create Platform Session Template
 *
 * Add a new Platform Session Template for a specific Session Template
 *     
 *     Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxCreatePlatformSessionTemplate : public FRequest
{
    FRequest_SandboxCreatePlatformSessionTemplate();
    virtual ~FRequest_SandboxCreatePlatformSessionTemplate() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid SessionTemplateId;
    ERHAPI_DevPlatform Platform;
    /* Sandbox ID */
    FGuid SandboxId;
    FRHAPI_DevPlatformSessionTemplateRequest PlatformSessionTemplateRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxCreatePlatformSessionTemplate : public FResponse
{
    FResponse_SandboxCreatePlatformSessionTemplate(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxCreatePlatformSessionTemplate() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPlatformSessionTemplate Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevPlatformSessionTemplate& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxCreatePlatformSessionTemplate
{
    typedef FRequest_SandboxCreatePlatformSessionTemplate Request;
    typedef FResponse_SandboxCreatePlatformSessionTemplate Response;
    typedef FDelegate_SandboxCreatePlatformSessionTemplate Delegate;
    typedef FPlatformSessionTemplatesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxCreatePlatformSessionTemplate(InRequest, InDelegate, Priority); }
};

/* Delete Platform Session Template
 *
 * Delete a specific Platform Session Template for a specific Session Template
 *     
 *     Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxDeletePlatformSessionTemplate : public FRequest
{
    FRequest_SandboxDeletePlatformSessionTemplate();
    virtual ~FRequest_SandboxDeletePlatformSessionTemplate() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid SessionTemplateId;
    ERHAPI_DevPlatform Platform;
    /* Sandbox ID */
    FGuid SandboxId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxDeletePlatformSessionTemplate : public FResponse
{
    FResponse_SandboxDeletePlatformSessionTemplate(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxDeletePlatformSessionTemplate() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    


    // Manual Response Helpers
    /* Response 204
    Successful Response
    */

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxDeletePlatformSessionTemplate
{
    typedef FRequest_SandboxDeletePlatformSessionTemplate Request;
    typedef FResponse_SandboxDeletePlatformSessionTemplate Response;
    typedef FDelegate_SandboxDeletePlatformSessionTemplate Delegate;
    typedef FPlatformSessionTemplatesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxDeletePlatformSessionTemplate(InRequest, InDelegate, Priority); }
};

/* Get All Platform Session Templates
 *
 * Get all Platform Session Templates in a specific sandbox
 *     
 *     Requires any of permissions: 
 * 	 sandbox:config:view, sandbox:config:edit
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxGetAllPlatformSessionTemplates : public FRequest
{
    FRequest_SandboxGetAllPlatformSessionTemplates();
    virtual ~FRequest_SandboxGetAllPlatformSessionTemplates() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid SessionTemplateId;
    /* Sandbox ID */
    FGuid SandboxId;
    /* The maximum number of elements to be returned per call */
    TOptional<int32> PageSize;
    /* Cursor to designate where you are in iterating through values. Start with '0', and pass this on subsequent calls to continue iteration */
    TOptional<FString> Cursor;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxGetAllPlatformSessionTemplates : public FResponse
{
    FResponse_SandboxGetAllPlatformSessionTemplates(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxGetAllPlatformSessionTemplates() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevAllPlatformSessionTemplatesResponse Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevAllPlatformSessionTemplatesResponse& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxGetAllPlatformSessionTemplates
{
    typedef FRequest_SandboxGetAllPlatformSessionTemplates Request;
    typedef FResponse_SandboxGetAllPlatformSessionTemplates Response;
    typedef FDelegate_SandboxGetAllPlatformSessionTemplates Delegate;
    typedef FPlatformSessionTemplatesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxGetAllPlatformSessionTemplates(InRequest, InDelegate, Priority); }
};

/* Get Specific Platform Session Template
 *
 * Get a specific Platform Session Template for a specific Session Template in a specific sandbox
 *     
 *     Requires any of permissions: 
 * 	 sandbox:config:view, sandbox:config:edit
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxGetSpecificPlatformSessionTemplate : public FRequest
{
    FRequest_SandboxGetSpecificPlatformSessionTemplate();
    virtual ~FRequest_SandboxGetSpecificPlatformSessionTemplate() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    ERHAPI_DevPlatform Platform;
    FGuid SessionTemplateId;
    /* Sandbox ID */
    FGuid SandboxId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxGetSpecificPlatformSessionTemplate : public FResponse
{
    FResponse_SandboxGetSpecificPlatformSessionTemplate(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxGetSpecificPlatformSessionTemplate() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPlatformSessionTemplate Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevPlatformSessionTemplate& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxGetSpecificPlatformSessionTemplate
{
    typedef FRequest_SandboxGetSpecificPlatformSessionTemplate Request;
    typedef FResponse_SandboxGetSpecificPlatformSessionTemplate Response;
    typedef FDelegate_SandboxGetSpecificPlatformSessionTemplate Delegate;
    typedef FPlatformSessionTemplatesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxGetSpecificPlatformSessionTemplate(InRequest, InDelegate, Priority); }
};

/* Patch Platform Session Template
 *
 * Update a Platform Session Template for a specific Session Template
 *     
 *     Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxPatchPlatformSessionTemplate : public FRequest
{
    FRequest_SandboxPatchPlatformSessionTemplate();
    virtual ~FRequest_SandboxPatchPlatformSessionTemplate() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    ERHAPI_DevPlatform Platform;
    FGuid SessionTemplateId;
    /* Sandbox ID */
    FGuid SandboxId;
    FRHAPI_DevPlatformSessionTemplateUpdateRequest PlatformSessionTemplateUpdateRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxPatchPlatformSessionTemplate : public FResponse
{
    FResponse_SandboxPatchPlatformSessionTemplate(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxPatchPlatformSessionTemplate() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPlatformSessionTemplate Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevPlatformSessionTemplate& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxPatchPlatformSessionTemplate
{
    typedef FRequest_SandboxPatchPlatformSessionTemplate Request;
    typedef FResponse_SandboxPatchPlatformSessionTemplate Response;
    typedef FDelegate_SandboxPatchPlatformSessionTemplate Delegate;
    typedef FPlatformSessionTemplatesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxPatchPlatformSessionTemplate(InRequest, InDelegate, Priority); }
};

/* Put Platform Session Template
 *
 * Update a Platform Session Template for a specific Session Template
 * 
 *     Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxPutPlatformSessionTemplate : public FRequest
{
    FRequest_SandboxPutPlatformSessionTemplate();
    virtual ~FRequest_SandboxPutPlatformSessionTemplate() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    ERHAPI_DevPlatform Platform;
    FGuid SessionTemplateId;
    /* Sandbox ID */
    FGuid SandboxId;
    FRHAPI_DevPlatformSessionTemplateRequest PlatformSessionTemplateRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxPutPlatformSessionTemplate : public FResponse
{
    FResponse_SandboxPutPlatformSessionTemplate(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxPutPlatformSessionTemplate() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPlatformSessionTemplate Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevPlatformSessionTemplate& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxPutPlatformSessionTemplate
{
    typedef FRequest_SandboxPutPlatformSessionTemplate Request;
    typedef FResponse_SandboxPutPlatformSessionTemplate Response;
    typedef FDelegate_SandboxPutPlatformSessionTemplate Delegate;
    typedef FPlatformSessionTemplatesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxPutPlatformSessionTemplate(InRequest, InDelegate, Priority); }
};


}