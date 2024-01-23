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
#include "DevAllSessionTemplatesResponse.h"
#include "DevHTTPValidationError.h"
#include "DevSessionTemplate.h"
#include "DevSessionTemplateRequest.h"
#include "DevSessionTemplateUpdateRequest.h"
#include "Misc/TVariant.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_OrgProductSandboxCreateSessionTemplateForSandbox;
struct FResponse_OrgProductSandboxCreateSessionTemplateForSandbox;
struct FRequest_OrgProductSandboxDeleteSessionTemplateForSandbox;
struct FResponse_OrgProductSandboxDeleteSessionTemplateForSandbox;
struct FRequest_OrgProductSandboxGetAllSessionTemplatesForSandbox;
struct FResponse_OrgProductSandboxGetAllSessionTemplatesForSandbox;
struct FRequest_OrgProductSandboxGetSessionTemplateForSandbox;
struct FResponse_OrgProductSandboxGetSessionTemplateForSandbox;
struct FRequest_OrgProductSandboxPatchSessionTemplateForSandbox;
struct FResponse_OrgProductSandboxPatchSessionTemplateForSandbox;
struct FRequest_OrgProductSandboxPutSessionTemplateForSandbox;
struct FResponse_OrgProductSandboxPutSessionTemplateForSandbox;
struct FRequest_SandboxCreateSessionTemplateForSandbox;
struct FResponse_SandboxCreateSessionTemplateForSandbox;
struct FRequest_SandboxDeleteSessionTemplateForSandbox;
struct FResponse_SandboxDeleteSessionTemplateForSandbox;
struct FRequest_SandboxGetAllSessionTemplatesForSandbox;
struct FResponse_SandboxGetAllSessionTemplatesForSandbox;
struct FRequest_SandboxGetSessionTemplateForSandbox;
struct FResponse_SandboxGetSessionTemplateForSandbox;
struct FRequest_SandboxPatchSessionTemplateForSandbox;
struct FResponse_SandboxPatchSessionTemplateForSandbox;
struct FRequest_SandboxPutSessionTemplateForSandbox;
struct FResponse_SandboxPutSessionTemplateForSandbox;

DECLARE_DELEGATE_OneParam(FDelegate_OrgProductSandboxCreateSessionTemplateForSandbox, const FResponse_OrgProductSandboxCreateSessionTemplateForSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_OrgProductSandboxDeleteSessionTemplateForSandbox, const FResponse_OrgProductSandboxDeleteSessionTemplateForSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_OrgProductSandboxGetAllSessionTemplatesForSandbox, const FResponse_OrgProductSandboxGetAllSessionTemplatesForSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_OrgProductSandboxGetSessionTemplateForSandbox, const FResponse_OrgProductSandboxGetSessionTemplateForSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_OrgProductSandboxPatchSessionTemplateForSandbox, const FResponse_OrgProductSandboxPatchSessionTemplateForSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_OrgProductSandboxPutSessionTemplateForSandbox, const FResponse_OrgProductSandboxPutSessionTemplateForSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxCreateSessionTemplateForSandbox, const FResponse_SandboxCreateSessionTemplateForSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxDeleteSessionTemplateForSandbox, const FResponse_SandboxDeleteSessionTemplateForSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxGetAllSessionTemplatesForSandbox, const FResponse_SandboxGetAllSessionTemplatesForSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxGetSessionTemplateForSandbox, const FResponse_SandboxGetSessionTemplateForSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxPatchSessionTemplateForSandbox, const FResponse_SandboxPatchSessionTemplateForSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxPutSessionTemplateForSandbox, const FResponse_SandboxPutSessionTemplateForSandbox&);

class RALLYHEREDEVELOPERAPI_API FSessionTemplatesAPI : public FAPI
{
public:
    FSessionTemplatesAPI();
    virtual ~FSessionTemplatesAPI();

    FHttpRequestPtr OrgProductSandboxCreateSessionTemplateForSandbox(const FRequest_OrgProductSandboxCreateSessionTemplateForSandbox& Request, const FDelegate_OrgProductSandboxCreateSessionTemplateForSandbox& Delegate = FDelegate_OrgProductSandboxCreateSessionTemplateForSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr OrgProductSandboxDeleteSessionTemplateForSandbox(const FRequest_OrgProductSandboxDeleteSessionTemplateForSandbox& Request, const FDelegate_OrgProductSandboxDeleteSessionTemplateForSandbox& Delegate = FDelegate_OrgProductSandboxDeleteSessionTemplateForSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr OrgProductSandboxGetAllSessionTemplatesForSandbox(const FRequest_OrgProductSandboxGetAllSessionTemplatesForSandbox& Request, const FDelegate_OrgProductSandboxGetAllSessionTemplatesForSandbox& Delegate = FDelegate_OrgProductSandboxGetAllSessionTemplatesForSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr OrgProductSandboxGetSessionTemplateForSandbox(const FRequest_OrgProductSandboxGetSessionTemplateForSandbox& Request, const FDelegate_OrgProductSandboxGetSessionTemplateForSandbox& Delegate = FDelegate_OrgProductSandboxGetSessionTemplateForSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr OrgProductSandboxPatchSessionTemplateForSandbox(const FRequest_OrgProductSandboxPatchSessionTemplateForSandbox& Request, const FDelegate_OrgProductSandboxPatchSessionTemplateForSandbox& Delegate = FDelegate_OrgProductSandboxPatchSessionTemplateForSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr OrgProductSandboxPutSessionTemplateForSandbox(const FRequest_OrgProductSandboxPutSessionTemplateForSandbox& Request, const FDelegate_OrgProductSandboxPutSessionTemplateForSandbox& Delegate = FDelegate_OrgProductSandboxPutSessionTemplateForSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxCreateSessionTemplateForSandbox(const FRequest_SandboxCreateSessionTemplateForSandbox& Request, const FDelegate_SandboxCreateSessionTemplateForSandbox& Delegate = FDelegate_SandboxCreateSessionTemplateForSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxDeleteSessionTemplateForSandbox(const FRequest_SandboxDeleteSessionTemplateForSandbox& Request, const FDelegate_SandboxDeleteSessionTemplateForSandbox& Delegate = FDelegate_SandboxDeleteSessionTemplateForSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxGetAllSessionTemplatesForSandbox(const FRequest_SandboxGetAllSessionTemplatesForSandbox& Request, const FDelegate_SandboxGetAllSessionTemplatesForSandbox& Delegate = FDelegate_SandboxGetAllSessionTemplatesForSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxGetSessionTemplateForSandbox(const FRequest_SandboxGetSessionTemplateForSandbox& Request, const FDelegate_SandboxGetSessionTemplateForSandbox& Delegate = FDelegate_SandboxGetSessionTemplateForSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxPatchSessionTemplateForSandbox(const FRequest_SandboxPatchSessionTemplateForSandbox& Request, const FDelegate_SandboxPatchSessionTemplateForSandbox& Delegate = FDelegate_SandboxPatchSessionTemplateForSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxPutSessionTemplateForSandbox(const FRequest_SandboxPutSessionTemplateForSandbox& Request, const FDelegate_SandboxPutSessionTemplateForSandbox& Delegate = FDelegate_SandboxPutSessionTemplateForSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnOrgProductSandboxCreateSessionTemplateForSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductSandboxCreateSessionTemplateForSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnOrgProductSandboxDeleteSessionTemplateForSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductSandboxDeleteSessionTemplateForSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnOrgProductSandboxGetAllSessionTemplatesForSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductSandboxGetAllSessionTemplatesForSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnOrgProductSandboxGetSessionTemplateForSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductSandboxGetSessionTemplateForSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnOrgProductSandboxPatchSessionTemplateForSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductSandboxPatchSessionTemplateForSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnOrgProductSandboxPutSessionTemplateForSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductSandboxPutSessionTemplateForSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxCreateSessionTemplateForSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxCreateSessionTemplateForSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxDeleteSessionTemplateForSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxDeleteSessionTemplateForSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxGetAllSessionTemplatesForSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxGetAllSessionTemplatesForSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxGetSessionTemplateForSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxGetSessionTemplateForSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxPatchSessionTemplateForSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxPatchSessionTemplateForSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxPutSessionTemplateForSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxPutSessionTemplateForSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Create Session Template For Sandbox
 *
 * Add a new Session Template for a sandbox          Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductSandboxCreateSessionTemplateForSandbox : public FRequest
{
    FRequest_OrgProductSandboxCreateSessionTemplateForSandbox();
    virtual ~FRequest_OrgProductSandboxCreateSessionTemplateForSandbox() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    /* Sandbox ID or short name */
    TVariant<FGuid, FString> SandboxIdentifier;
    FRHAPI_DevSessionTemplateRequest SessionTemplateRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductSandboxCreateSessionTemplateForSandbox : public FResponse
{
    FResponse_OrgProductSandboxCreateSessionTemplateForSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductSandboxCreateSessionTemplateForSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevSessionTemplate Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductSandboxCreateSessionTemplateForSandbox
{
    typedef FRequest_OrgProductSandboxCreateSessionTemplateForSandbox Request;
    typedef FResponse_OrgProductSandboxCreateSessionTemplateForSandbox Response;
    typedef FDelegate_OrgProductSandboxCreateSessionTemplateForSandbox Delegate;
    typedef FSessionTemplatesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductSandboxCreateSessionTemplateForSandbox(InRequest, InDelegate, Priority); }
};

/* Delete Session Template For Sandbox
 *
 * Delete a specific Session Template in a sandbox          Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductSandboxDeleteSessionTemplateForSandbox : public FRequest
{
    FRequest_OrgProductSandboxDeleteSessionTemplateForSandbox();
    virtual ~FRequest_OrgProductSandboxDeleteSessionTemplateForSandbox() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid SessionTemplateId;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    /* Sandbox ID or short name */
    TVariant<FGuid, FString> SandboxIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductSandboxDeleteSessionTemplateForSandbox : public FResponse
{
    FResponse_OrgProductSandboxDeleteSessionTemplateForSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductSandboxDeleteSessionTemplateForSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;



};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductSandboxDeleteSessionTemplateForSandbox
{
    typedef FRequest_OrgProductSandboxDeleteSessionTemplateForSandbox Request;
    typedef FResponse_OrgProductSandboxDeleteSessionTemplateForSandbox Response;
    typedef FDelegate_OrgProductSandboxDeleteSessionTemplateForSandbox Delegate;
    typedef FSessionTemplatesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductSandboxDeleteSessionTemplateForSandbox(InRequest, InDelegate, Priority); }
};

/* Get All Session Templates For Sandbox
 *
 * Get all Session Templates for a sandbox          Requires any of permissions:    sandbox:config:view, sandbox:config:edit
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductSandboxGetAllSessionTemplatesForSandbox : public FRequest
{
    FRequest_OrgProductSandboxGetAllSessionTemplatesForSandbox();
    virtual ~FRequest_OrgProductSandboxGetAllSessionTemplatesForSandbox() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    /* Sandbox ID or short name */
    TVariant<FGuid, FString> SandboxIdentifier;
    /* The maximum number of elements to be returned per call */
    TOptional<int32> PageSize;
    /* Cursor to designate where you are in iterating through values. Start with '0', and pass this on subsequent calls to continue iteration */
    TOptional<FString> Cursor;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductSandboxGetAllSessionTemplatesForSandbox : public FResponse
{
    FResponse_OrgProductSandboxGetAllSessionTemplatesForSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductSandboxGetAllSessionTemplatesForSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevAllSessionTemplatesResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductSandboxGetAllSessionTemplatesForSandbox
{
    typedef FRequest_OrgProductSandboxGetAllSessionTemplatesForSandbox Request;
    typedef FResponse_OrgProductSandboxGetAllSessionTemplatesForSandbox Response;
    typedef FDelegate_OrgProductSandboxGetAllSessionTemplatesForSandbox Delegate;
    typedef FSessionTemplatesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductSandboxGetAllSessionTemplatesForSandbox(InRequest, InDelegate, Priority); }
};

/* Get Session Template For Sandbox
 *
 * Get a specific session template and it&#39;s associated platform session templates for a sandbox          Requires any of permissions:    sandbox:config:view, sandbox:config:edit
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductSandboxGetSessionTemplateForSandbox : public FRequest
{
    FRequest_OrgProductSandboxGetSessionTemplateForSandbox();
    virtual ~FRequest_OrgProductSandboxGetSessionTemplateForSandbox() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid SessionTemplateId;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    /* Sandbox ID or short name */
    TVariant<FGuid, FString> SandboxIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductSandboxGetSessionTemplateForSandbox : public FResponse
{
    FResponse_OrgProductSandboxGetSessionTemplateForSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductSandboxGetSessionTemplateForSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevSessionTemplate Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductSandboxGetSessionTemplateForSandbox
{
    typedef FRequest_OrgProductSandboxGetSessionTemplateForSandbox Request;
    typedef FResponse_OrgProductSandboxGetSessionTemplateForSandbox Response;
    typedef FDelegate_OrgProductSandboxGetSessionTemplateForSandbox Delegate;
    typedef FSessionTemplatesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductSandboxGetSessionTemplateForSandbox(InRequest, InDelegate, Priority); }
};

/* Patch Session Template For Sandbox
 *
 * Update a specific Session Template in a sandbox          Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductSandboxPatchSessionTemplateForSandbox : public FRequest
{
    FRequest_OrgProductSandboxPatchSessionTemplateForSandbox();
    virtual ~FRequest_OrgProductSandboxPatchSessionTemplateForSandbox() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid SessionTemplateId;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    /* Sandbox ID or short name */
    TVariant<FGuid, FString> SandboxIdentifier;
    FRHAPI_DevSessionTemplateUpdateRequest SessionTemplateUpdateRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductSandboxPatchSessionTemplateForSandbox : public FResponse
{
    FResponse_OrgProductSandboxPatchSessionTemplateForSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductSandboxPatchSessionTemplateForSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevSessionTemplate Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductSandboxPatchSessionTemplateForSandbox
{
    typedef FRequest_OrgProductSandboxPatchSessionTemplateForSandbox Request;
    typedef FResponse_OrgProductSandboxPatchSessionTemplateForSandbox Response;
    typedef FDelegate_OrgProductSandboxPatchSessionTemplateForSandbox Delegate;
    typedef FSessionTemplatesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductSandboxPatchSessionTemplateForSandbox(InRequest, InDelegate, Priority); }
};

/* Put Session Template For Sandbox
 *
 * Update a specific Session Template in a sandbox      Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductSandboxPutSessionTemplateForSandbox : public FRequest
{
    FRequest_OrgProductSandboxPutSessionTemplateForSandbox();
    virtual ~FRequest_OrgProductSandboxPutSessionTemplateForSandbox() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid SessionTemplateId;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    /* Sandbox ID or short name */
    TVariant<FGuid, FString> SandboxIdentifier;
    FRHAPI_DevSessionTemplateRequest SessionTemplateRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductSandboxPutSessionTemplateForSandbox : public FResponse
{
    FResponse_OrgProductSandboxPutSessionTemplateForSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductSandboxPutSessionTemplateForSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevSessionTemplate Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductSandboxPutSessionTemplateForSandbox
{
    typedef FRequest_OrgProductSandboxPutSessionTemplateForSandbox Request;
    typedef FResponse_OrgProductSandboxPutSessionTemplateForSandbox Response;
    typedef FDelegate_OrgProductSandboxPutSessionTemplateForSandbox Delegate;
    typedef FSessionTemplatesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductSandboxPutSessionTemplateForSandbox(InRequest, InDelegate, Priority); }
};

/* Create Session Template For Sandbox
 *
 * Add a new Session Template for a sandbox          Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxCreateSessionTemplateForSandbox : public FRequest
{
    FRequest_SandboxCreateSessionTemplateForSandbox();
    virtual ~FRequest_SandboxCreateSessionTemplateForSandbox() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Sandbox ID */
    FGuid SandboxId;
    FRHAPI_DevSessionTemplateRequest SessionTemplateRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxCreateSessionTemplateForSandbox : public FResponse
{
    FResponse_SandboxCreateSessionTemplateForSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxCreateSessionTemplateForSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevSessionTemplate Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxCreateSessionTemplateForSandbox
{
    typedef FRequest_SandboxCreateSessionTemplateForSandbox Request;
    typedef FResponse_SandboxCreateSessionTemplateForSandbox Response;
    typedef FDelegate_SandboxCreateSessionTemplateForSandbox Delegate;
    typedef FSessionTemplatesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxCreateSessionTemplateForSandbox(InRequest, InDelegate, Priority); }
};

/* Delete Session Template For Sandbox
 *
 * Delete a specific Session Template in a sandbox          Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxDeleteSessionTemplateForSandbox : public FRequest
{
    FRequest_SandboxDeleteSessionTemplateForSandbox();
    virtual ~FRequest_SandboxDeleteSessionTemplateForSandbox() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid SessionTemplateId;
    /* Sandbox ID */
    FGuid SandboxId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxDeleteSessionTemplateForSandbox : public FResponse
{
    FResponse_SandboxDeleteSessionTemplateForSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxDeleteSessionTemplateForSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;



};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxDeleteSessionTemplateForSandbox
{
    typedef FRequest_SandboxDeleteSessionTemplateForSandbox Request;
    typedef FResponse_SandboxDeleteSessionTemplateForSandbox Response;
    typedef FDelegate_SandboxDeleteSessionTemplateForSandbox Delegate;
    typedef FSessionTemplatesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxDeleteSessionTemplateForSandbox(InRequest, InDelegate, Priority); }
};

/* Get All Session Templates For Sandbox
 *
 * Get all Session Templates for a sandbox          Requires any of permissions:    sandbox:config:view, sandbox:config:edit
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxGetAllSessionTemplatesForSandbox : public FRequest
{
    FRequest_SandboxGetAllSessionTemplatesForSandbox();
    virtual ~FRequest_SandboxGetAllSessionTemplatesForSandbox() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Sandbox ID */
    FGuid SandboxId;
    /* The maximum number of elements to be returned per call */
    TOptional<int32> PageSize;
    /* Cursor to designate where you are in iterating through values. Start with '0', and pass this on subsequent calls to continue iteration */
    TOptional<FString> Cursor;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxGetAllSessionTemplatesForSandbox : public FResponse
{
    FResponse_SandboxGetAllSessionTemplatesForSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxGetAllSessionTemplatesForSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevAllSessionTemplatesResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxGetAllSessionTemplatesForSandbox
{
    typedef FRequest_SandboxGetAllSessionTemplatesForSandbox Request;
    typedef FResponse_SandboxGetAllSessionTemplatesForSandbox Response;
    typedef FDelegate_SandboxGetAllSessionTemplatesForSandbox Delegate;
    typedef FSessionTemplatesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxGetAllSessionTemplatesForSandbox(InRequest, InDelegate, Priority); }
};

/* Get Session Template For Sandbox
 *
 * Get a specific session template and it&#39;s associated platform session templates for a sandbox          Requires any of permissions:    sandbox:config:view, sandbox:config:edit
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxGetSessionTemplateForSandbox : public FRequest
{
    FRequest_SandboxGetSessionTemplateForSandbox();
    virtual ~FRequest_SandboxGetSessionTemplateForSandbox() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid SessionTemplateId;
    /* Sandbox ID */
    FGuid SandboxId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxGetSessionTemplateForSandbox : public FResponse
{
    FResponse_SandboxGetSessionTemplateForSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxGetSessionTemplateForSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevSessionTemplate Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxGetSessionTemplateForSandbox
{
    typedef FRequest_SandboxGetSessionTemplateForSandbox Request;
    typedef FResponse_SandboxGetSessionTemplateForSandbox Response;
    typedef FDelegate_SandboxGetSessionTemplateForSandbox Delegate;
    typedef FSessionTemplatesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxGetSessionTemplateForSandbox(InRequest, InDelegate, Priority); }
};

/* Patch Session Template For Sandbox
 *
 * Update a specific Session Template in a sandbox          Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxPatchSessionTemplateForSandbox : public FRequest
{
    FRequest_SandboxPatchSessionTemplateForSandbox();
    virtual ~FRequest_SandboxPatchSessionTemplateForSandbox() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid SessionTemplateId;
    /* Sandbox ID */
    FGuid SandboxId;
    FRHAPI_DevSessionTemplateUpdateRequest SessionTemplateUpdateRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxPatchSessionTemplateForSandbox : public FResponse
{
    FResponse_SandboxPatchSessionTemplateForSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxPatchSessionTemplateForSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevSessionTemplate Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxPatchSessionTemplateForSandbox
{
    typedef FRequest_SandboxPatchSessionTemplateForSandbox Request;
    typedef FResponse_SandboxPatchSessionTemplateForSandbox Response;
    typedef FDelegate_SandboxPatchSessionTemplateForSandbox Delegate;
    typedef FSessionTemplatesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxPatchSessionTemplateForSandbox(InRequest, InDelegate, Priority); }
};

/* Put Session Template For Sandbox
 *
 * Update a specific Session Template in a sandbox      Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxPutSessionTemplateForSandbox : public FRequest
{
    FRequest_SandboxPutSessionTemplateForSandbox();
    virtual ~FRequest_SandboxPutSessionTemplateForSandbox() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid SessionTemplateId;
    /* Sandbox ID */
    FGuid SandboxId;
    FRHAPI_DevSessionTemplateRequest SessionTemplateRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxPutSessionTemplateForSandbox : public FResponse
{
    FResponse_SandboxPutSessionTemplateForSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxPutSessionTemplateForSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevSessionTemplate Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxPutSessionTemplateForSandbox
{
    typedef FRequest_SandboxPutSessionTemplateForSandbox Request;
    typedef FResponse_SandboxPutSessionTemplateForSandbox Response;
    typedef FDelegate_SandboxPutSessionTemplateForSandbox Delegate;
    typedef FSessionTemplatesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxPutSessionTemplateForSandbox(InRequest, InDelegate, Priority); }
};


}
