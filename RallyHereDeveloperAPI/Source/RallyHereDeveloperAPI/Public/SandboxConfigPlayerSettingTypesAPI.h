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
#include "DevAllSettingTypeResponse.h"
#include "DevHTTPValidationError.h"
#include "DevSettingType.h"
#include "DevSettingTypeRequest.h"
#include "DevSettingTypeUpdateRequest.h"
#include "Misc/TVariant.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_SandboxCreateSettingType;
struct FResponse_SandboxCreateSettingType;
struct FRequest_SandboxDeleteSettingType;
struct FResponse_SandboxDeleteSettingType;
struct FRequest_SandboxFullCreateSettingType;
struct FResponse_SandboxFullCreateSettingType;
struct FRequest_SandboxFullDeleteSettingType;
struct FResponse_SandboxFullDeleteSettingType;
struct FRequest_SandboxFullGetSettingTypeForSandbox;
struct FResponse_SandboxFullGetSettingTypeForSandbox;
struct FRequest_SandboxFullGetSettingTypesForSandbox;
struct FResponse_SandboxFullGetSettingTypesForSandbox;
struct FRequest_SandboxFullUpdateSettingType;
struct FResponse_SandboxFullUpdateSettingType;
struct FRequest_SandboxGetSettingTypeForSandbox;
struct FResponse_SandboxGetSettingTypeForSandbox;
struct FRequest_SandboxGetSettingTypesForSandbox;
struct FResponse_SandboxGetSettingTypesForSandbox;
struct FRequest_SandboxUpdateSettingType;
struct FResponse_SandboxUpdateSettingType;

DECLARE_DELEGATE_OneParam(FDelegate_SandboxCreateSettingType, const FResponse_SandboxCreateSettingType&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxDeleteSettingType, const FResponse_SandboxDeleteSettingType&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxFullCreateSettingType, const FResponse_SandboxFullCreateSettingType&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxFullDeleteSettingType, const FResponse_SandboxFullDeleteSettingType&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxFullGetSettingTypeForSandbox, const FResponse_SandboxFullGetSettingTypeForSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxFullGetSettingTypesForSandbox, const FResponse_SandboxFullGetSettingTypesForSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxFullUpdateSettingType, const FResponse_SandboxFullUpdateSettingType&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxGetSettingTypeForSandbox, const FResponse_SandboxGetSettingTypeForSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxGetSettingTypesForSandbox, const FResponse_SandboxGetSettingTypesForSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxUpdateSettingType, const FResponse_SandboxUpdateSettingType&);

class RALLYHEREDEVELOPERAPI_API FSandboxConfigPlayerSettingTypesAPI : public FAPI
{
public:
    FSandboxConfigPlayerSettingTypesAPI();
    virtual ~FSandboxConfigPlayerSettingTypesAPI();

    FHttpRequestPtr SandboxCreateSettingType(const FRequest_SandboxCreateSettingType& Request, const FDelegate_SandboxCreateSettingType& Delegate = FDelegate_SandboxCreateSettingType(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxDeleteSettingType(const FRequest_SandboxDeleteSettingType& Request, const FDelegate_SandboxDeleteSettingType& Delegate = FDelegate_SandboxDeleteSettingType(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxFullCreateSettingType(const FRequest_SandboxFullCreateSettingType& Request, const FDelegate_SandboxFullCreateSettingType& Delegate = FDelegate_SandboxFullCreateSettingType(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxFullDeleteSettingType(const FRequest_SandboxFullDeleteSettingType& Request, const FDelegate_SandboxFullDeleteSettingType& Delegate = FDelegate_SandboxFullDeleteSettingType(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxFullGetSettingTypeForSandbox(const FRequest_SandboxFullGetSettingTypeForSandbox& Request, const FDelegate_SandboxFullGetSettingTypeForSandbox& Delegate = FDelegate_SandboxFullGetSettingTypeForSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxFullGetSettingTypesForSandbox(const FRequest_SandboxFullGetSettingTypesForSandbox& Request, const FDelegate_SandboxFullGetSettingTypesForSandbox& Delegate = FDelegate_SandboxFullGetSettingTypesForSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxFullUpdateSettingType(const FRequest_SandboxFullUpdateSettingType& Request, const FDelegate_SandboxFullUpdateSettingType& Delegate = FDelegate_SandboxFullUpdateSettingType(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxGetSettingTypeForSandbox(const FRequest_SandboxGetSettingTypeForSandbox& Request, const FDelegate_SandboxGetSettingTypeForSandbox& Delegate = FDelegate_SandboxGetSettingTypeForSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxGetSettingTypesForSandbox(const FRequest_SandboxGetSettingTypesForSandbox& Request, const FDelegate_SandboxGetSettingTypesForSandbox& Delegate = FDelegate_SandboxGetSettingTypesForSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxUpdateSettingType(const FRequest_SandboxUpdateSettingType& Request, const FDelegate_SandboxUpdateSettingType& Delegate = FDelegate_SandboxUpdateSettingType(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnSandboxCreateSettingTypeResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxCreateSettingType Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxDeleteSettingTypeResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxDeleteSettingType Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxFullCreateSettingTypeResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxFullCreateSettingType Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxFullDeleteSettingTypeResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxFullDeleteSettingType Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxFullGetSettingTypeForSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxFullGetSettingTypeForSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxFullGetSettingTypesForSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxFullGetSettingTypesForSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxFullUpdateSettingTypeResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxFullUpdateSettingType Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxGetSettingTypeForSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxGetSettingTypeForSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxGetSettingTypesForSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxGetSettingTypesForSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxUpdateSettingTypeResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxUpdateSettingType Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Create Setting Type
 *
 * Create custom Setting Type for a sandbox     Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxCreateSettingType : public FRequest
{
    FRequest_SandboxCreateSettingType();
    virtual ~FRequest_SandboxCreateSettingType() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Sandbox ID */
    FGuid SandboxId;
    FRHAPI_DevSettingTypeRequest SettingTypeRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxCreateSettingType : public FResponse
{
    FResponse_SandboxCreateSettingType(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxCreateSettingType() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevSettingType Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxCreateSettingType
{
    typedef FRequest_SandboxCreateSettingType Request;
    typedef FResponse_SandboxCreateSettingType Response;
    typedef FDelegate_SandboxCreateSettingType Delegate;
    typedef FSandboxConfigPlayerSettingTypesAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxCreateSettingType(InRequest, InDelegate, Priority); }
};

/* Delete Setting Type
 *
 * Delete custom Setting Type for a sandbox     Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxDeleteSettingType : public FRequest
{
    FRequest_SandboxDeleteSettingType();
    virtual ~FRequest_SandboxDeleteSettingType() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Setting Type ID */
    FGuid SettingTypeId;
    /* Sandbox ID */
    FGuid SandboxId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxDeleteSettingType : public FResponse
{
    FResponse_SandboxDeleteSettingType(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxDeleteSettingType() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevJsonValue Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxDeleteSettingType
{
    typedef FRequest_SandboxDeleteSettingType Request;
    typedef FResponse_SandboxDeleteSettingType Response;
    typedef FDelegate_SandboxDeleteSettingType Delegate;
    typedef FSandboxConfigPlayerSettingTypesAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxDeleteSettingType(InRequest, InDelegate, Priority); }
};

/* Create Setting Type
 *
 * Create custom Setting Type for a sandbox     Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxFullCreateSettingType : public FRequest
{
    FRequest_SandboxFullCreateSettingType();
    virtual ~FRequest_SandboxFullCreateSettingType() = default;
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
    FRHAPI_DevSettingTypeRequest SettingTypeRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxFullCreateSettingType : public FResponse
{
    FResponse_SandboxFullCreateSettingType(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxFullCreateSettingType() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevSettingType Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxFullCreateSettingType
{
    typedef FRequest_SandboxFullCreateSettingType Request;
    typedef FResponse_SandboxFullCreateSettingType Response;
    typedef FDelegate_SandboxFullCreateSettingType Delegate;
    typedef FSandboxConfigPlayerSettingTypesAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxFullCreateSettingType(InRequest, InDelegate, Priority); }
};

/* Delete Setting Type
 *
 * Delete custom Setting Type for a sandbox     Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxFullDeleteSettingType : public FRequest
{
    FRequest_SandboxFullDeleteSettingType();
    virtual ~FRequest_SandboxFullDeleteSettingType() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Setting Type ID */
    FGuid SettingTypeId;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    /* Sandbox ID or short name */
    TVariant<FGuid, FString> SandboxIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxFullDeleteSettingType : public FResponse
{
    FResponse_SandboxFullDeleteSettingType(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxFullDeleteSettingType() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevJsonValue Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxFullDeleteSettingType
{
    typedef FRequest_SandboxFullDeleteSettingType Request;
    typedef FResponse_SandboxFullDeleteSettingType Response;
    typedef FDelegate_SandboxFullDeleteSettingType Delegate;
    typedef FSandboxConfigPlayerSettingTypesAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxFullDeleteSettingType(InRequest, InDelegate, Priority); }
};

/* Get Setting Type For Sandbox
 *
 * Get custom Setting Type for a sandbox     Requires any of permissions:    sandbox:config:view, sandbox:config:edit
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxFullGetSettingTypeForSandbox : public FRequest
{
    FRequest_SandboxFullGetSettingTypeForSandbox();
    virtual ~FRequest_SandboxFullGetSettingTypeForSandbox() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Setting Type ID */
    FGuid SettingTypeId;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    /* Sandbox ID or short name */
    TVariant<FGuid, FString> SandboxIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxFullGetSettingTypeForSandbox : public FResponse
{
    FResponse_SandboxFullGetSettingTypeForSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxFullGetSettingTypeForSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevSettingType Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxFullGetSettingTypeForSandbox
{
    typedef FRequest_SandboxFullGetSettingTypeForSandbox Request;
    typedef FResponse_SandboxFullGetSettingTypeForSandbox Response;
    typedef FDelegate_SandboxFullGetSettingTypeForSandbox Delegate;
    typedef FSandboxConfigPlayerSettingTypesAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxFullGetSettingTypeForSandbox(InRequest, InDelegate, Priority); }
};

/* Get Setting Types For Sandbox
 *
 * Get all custom Setting Types for a sandbox     Requires any of permissions:    sandbox:config:view, sandbox:config:edit
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxFullGetSettingTypesForSandbox : public FRequest
{
    FRequest_SandboxFullGetSettingTypesForSandbox();
    virtual ~FRequest_SandboxFullGetSettingTypesForSandbox() = default;
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

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxFullGetSettingTypesForSandbox : public FResponse
{
    FResponse_SandboxFullGetSettingTypesForSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxFullGetSettingTypesForSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevAllSettingTypeResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxFullGetSettingTypesForSandbox
{
    typedef FRequest_SandboxFullGetSettingTypesForSandbox Request;
    typedef FResponse_SandboxFullGetSettingTypesForSandbox Response;
    typedef FDelegate_SandboxFullGetSettingTypesForSandbox Delegate;
    typedef FSandboxConfigPlayerSettingTypesAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxFullGetSettingTypesForSandbox(InRequest, InDelegate, Priority); }
};

/* Update Setting Type
 *
 * Update custom Setting Type for a sandbox     Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxFullUpdateSettingType : public FRequest
{
    FRequest_SandboxFullUpdateSettingType();
    virtual ~FRequest_SandboxFullUpdateSettingType() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Setting Type ID */
    FGuid SettingTypeId;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    /* Sandbox ID or short name */
    TVariant<FGuid, FString> SandboxIdentifier;
    FRHAPI_DevSettingTypeUpdateRequest SettingTypeUpdateRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxFullUpdateSettingType : public FResponse
{
    FResponse_SandboxFullUpdateSettingType(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxFullUpdateSettingType() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevSettingType Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxFullUpdateSettingType
{
    typedef FRequest_SandboxFullUpdateSettingType Request;
    typedef FResponse_SandboxFullUpdateSettingType Response;
    typedef FDelegate_SandboxFullUpdateSettingType Delegate;
    typedef FSandboxConfigPlayerSettingTypesAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxFullUpdateSettingType(InRequest, InDelegate, Priority); }
};

/* Get Setting Type For Sandbox
 *
 * Get custom Setting Type for a sandbox     Requires any of permissions:    sandbox:config:view, sandbox:config:edit
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxGetSettingTypeForSandbox : public FRequest
{
    FRequest_SandboxGetSettingTypeForSandbox();
    virtual ~FRequest_SandboxGetSettingTypeForSandbox() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Setting Type ID */
    FGuid SettingTypeId;
    /* Sandbox ID */
    FGuid SandboxId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxGetSettingTypeForSandbox : public FResponse
{
    FResponse_SandboxGetSettingTypeForSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxGetSettingTypeForSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevSettingType Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxGetSettingTypeForSandbox
{
    typedef FRequest_SandboxGetSettingTypeForSandbox Request;
    typedef FResponse_SandboxGetSettingTypeForSandbox Response;
    typedef FDelegate_SandboxGetSettingTypeForSandbox Delegate;
    typedef FSandboxConfigPlayerSettingTypesAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxGetSettingTypeForSandbox(InRequest, InDelegate, Priority); }
};

/* Get Setting Types For Sandbox
 *
 * Get all custom Setting Types for a sandbox     Requires any of permissions:    sandbox:config:view, sandbox:config:edit
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxGetSettingTypesForSandbox : public FRequest
{
    FRequest_SandboxGetSettingTypesForSandbox();
    virtual ~FRequest_SandboxGetSettingTypesForSandbox() = default;
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

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxGetSettingTypesForSandbox : public FResponse
{
    FResponse_SandboxGetSettingTypesForSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxGetSettingTypesForSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevAllSettingTypeResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxGetSettingTypesForSandbox
{
    typedef FRequest_SandboxGetSettingTypesForSandbox Request;
    typedef FResponse_SandboxGetSettingTypesForSandbox Response;
    typedef FDelegate_SandboxGetSettingTypesForSandbox Delegate;
    typedef FSandboxConfigPlayerSettingTypesAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxGetSettingTypesForSandbox(InRequest, InDelegate, Priority); }
};

/* Update Setting Type
 *
 * Update custom Setting Type for a sandbox     Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxUpdateSettingType : public FRequest
{
    FRequest_SandboxUpdateSettingType();
    virtual ~FRequest_SandboxUpdateSettingType() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Setting Type ID */
    FGuid SettingTypeId;
    /* Sandbox ID */
    FGuid SandboxId;
    FRHAPI_DevSettingTypeUpdateRequest SettingTypeUpdateRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxUpdateSettingType : public FResponse
{
    FResponse_SandboxUpdateSettingType(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxUpdateSettingType() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevSettingType Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxUpdateSettingType
{
    typedef FRequest_SandboxUpdateSettingType Request;
    typedef FResponse_SandboxUpdateSettingType Response;
    typedef FDelegate_SandboxUpdateSettingType Delegate;
    typedef FSandboxConfigPlayerSettingTypesAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxUpdateSettingType(InRequest, InDelegate, Priority); }
};


}