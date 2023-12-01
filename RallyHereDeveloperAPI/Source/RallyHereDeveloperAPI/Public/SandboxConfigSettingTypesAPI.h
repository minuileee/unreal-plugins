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
#include "DevAllSettingTypeResponse.h"
#include "DevHTTPValidationError.h"
#include "DevSettingType.h"
#include "DevSettingTypeRequest.h"
#include "DevSettingTypeUpdateRequest.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_SandboxCreateSettingType;
struct FResponse_SandboxCreateSettingType;
struct FRequest_SandboxDeleteSettingType;
struct FResponse_SandboxDeleteSettingType;
struct FRequest_SandboxGetSettingTypeForSandbox;
struct FResponse_SandboxGetSettingTypeForSandbox;
struct FRequest_SandboxGetSettingTypesForSandbox;
struct FResponse_SandboxGetSettingTypesForSandbox;
struct FRequest_SandboxUpdateSettingType;
struct FResponse_SandboxUpdateSettingType;

DECLARE_DELEGATE_OneParam(FDelegate_SandboxCreateSettingType, const FResponse_SandboxCreateSettingType&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxDeleteSettingType, const FResponse_SandboxDeleteSettingType&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxGetSettingTypeForSandbox, const FResponse_SandboxGetSettingTypeForSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxGetSettingTypesForSandbox, const FResponse_SandboxGetSettingTypesForSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxUpdateSettingType, const FResponse_SandboxUpdateSettingType&);

class RALLYHEREDEVELOPERAPI_API FSandboxConfigSettingTypesAPI : public FAPI
{
public:
    FSandboxConfigSettingTypesAPI();
    virtual ~FSandboxConfigSettingTypesAPI();

    FHttpRequestPtr SandboxCreateSettingType(const FRequest_SandboxCreateSettingType& Request, const FDelegate_SandboxCreateSettingType& Delegate = FDelegate_SandboxCreateSettingType(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxDeleteSettingType(const FRequest_SandboxDeleteSettingType& Request, const FDelegate_SandboxDeleteSettingType& Delegate = FDelegate_SandboxDeleteSettingType(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxGetSettingTypeForSandbox(const FRequest_SandboxGetSettingTypeForSandbox& Request, const FDelegate_SandboxGetSettingTypeForSandbox& Delegate = FDelegate_SandboxGetSettingTypeForSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxGetSettingTypesForSandbox(const FRequest_SandboxGetSettingTypesForSandbox& Request, const FDelegate_SandboxGetSettingTypesForSandbox& Delegate = FDelegate_SandboxGetSettingTypesForSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxUpdateSettingType(const FRequest_SandboxUpdateSettingType& Request, const FDelegate_SandboxUpdateSettingType& Delegate = FDelegate_SandboxUpdateSettingType(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnSandboxCreateSettingTypeResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxCreateSettingType Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxDeleteSettingTypeResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxDeleteSettingType Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxGetSettingTypeForSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxGetSettingTypeForSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxGetSettingTypesForSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxGetSettingTypesForSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxUpdateSettingTypeResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxUpdateSettingType Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Create Setting Type
 *
 * Create custom Setting Type for a sandbox
 *     Requires permission sandbox:config:edit.
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


    // Manual Response Helpers
    /* Response 201
    Successful Response
    */
    bool TryGetContentFor201(FRHAPI_DevSettingType& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxCreateSettingType
{
    typedef FRequest_SandboxCreateSettingType Request;
    typedef FResponse_SandboxCreateSettingType Response;
    typedef FDelegate_SandboxCreateSettingType Delegate;
    typedef FSandboxConfigSettingTypesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxCreateSettingType(InRequest, InDelegate, Priority); }
};

/* Delete Setting Type
 *
 * Delete custom Setting Type for a sandbox
 *     Requires permission sandbox:config:edit.
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
    /* Setting Type Unique ID */
    FGuid SettingTypeUniqueId;
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

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxDeleteSettingType
{
    typedef FRequest_SandboxDeleteSettingType Request;
    typedef FResponse_SandboxDeleteSettingType Response;
    typedef FDelegate_SandboxDeleteSettingType Delegate;
    typedef FSandboxConfigSettingTypesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxDeleteSettingType(InRequest, InDelegate, Priority); }
};

/* Get Setting Type For Sandbox
 *
 * Get custom Setting Type for a sandbox
 *     Requires any of permissions: 
 * 	 sandbox:config:view, sandbox:config:edit
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
    /* Setting Type Unique ID */
    FGuid SettingTypeUniqueId;
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


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevSettingType& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxGetSettingTypeForSandbox
{
    typedef FRequest_SandboxGetSettingTypeForSandbox Request;
    typedef FResponse_SandboxGetSettingTypeForSandbox Response;
    typedef FDelegate_SandboxGetSettingTypeForSandbox Delegate;
    typedef FSandboxConfigSettingTypesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxGetSettingTypeForSandbox(InRequest, InDelegate, Priority); }
};

/* Get Setting Types For Sandbox
 *
 * Get all custom Setting Types for a sandbox
 *     Requires any of permissions: 
 * 	 sandbox:config:view, sandbox:config:edit
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


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevAllSettingTypeResponse& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxGetSettingTypesForSandbox
{
    typedef FRequest_SandboxGetSettingTypesForSandbox Request;
    typedef FResponse_SandboxGetSettingTypesForSandbox Response;
    typedef FDelegate_SandboxGetSettingTypesForSandbox Delegate;
    typedef FSandboxConfigSettingTypesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxGetSettingTypesForSandbox(InRequest, InDelegate, Priority); }
};

/* Update Setting Type
 *
 * Update custom Setting Type for a sandbox
 *     Requires permission sandbox:config:edit.
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
    /* Setting Type Unique ID */
    FGuid SettingTypeUniqueId;
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


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevSettingType& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxUpdateSettingType
{
    typedef FRequest_SandboxUpdateSettingType Request;
    typedef FResponse_SandboxUpdateSettingType Response;
    typedef FDelegate_SandboxUpdateSettingType Delegate;
    typedef FSandboxConfigSettingTypesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxUpdateSettingType(InRequest, InDelegate, Priority); }
};


}
