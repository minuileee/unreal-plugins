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
#include "DevPolicyListResponse.h"
#include "DevPolicyRequest.h"
#include "DevPolicyResponse.h"
#include "Misc/TVariant.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_OrgProductCreatePolicy;
struct FResponse_OrgProductCreatePolicy;
struct FRequest_OrgProductDeletePolicyById;
struct FResponse_OrgProductDeletePolicyById;
struct FRequest_OrgProductGetAllPolicies;
struct FResponse_OrgProductGetAllPolicies;
struct FRequest_OrgProductGetPolicyById;
struct FResponse_OrgProductGetPolicyById;
struct FRequest_OrgProductUpdatePolicyById;
struct FResponse_OrgProductUpdatePolicyById;
struct FRequest_ProductCreatePolicy;
struct FResponse_ProductCreatePolicy;
struct FRequest_ProductDeletePolicyById;
struct FResponse_ProductDeletePolicyById;
struct FRequest_ProductGetAllPolicies;
struct FResponse_ProductGetAllPolicies;
struct FRequest_ProductGetPolicyById;
struct FResponse_ProductGetPolicyById;
struct FRequest_ProductUpdatePolicyById;
struct FResponse_ProductUpdatePolicyById;

DECLARE_DELEGATE_OneParam(FDelegate_OrgProductCreatePolicy, const FResponse_OrgProductCreatePolicy&);
DECLARE_DELEGATE_OneParam(FDelegate_OrgProductDeletePolicyById, const FResponse_OrgProductDeletePolicyById&);
DECLARE_DELEGATE_OneParam(FDelegate_OrgProductGetAllPolicies, const FResponse_OrgProductGetAllPolicies&);
DECLARE_DELEGATE_OneParam(FDelegate_OrgProductGetPolicyById, const FResponse_OrgProductGetPolicyById&);
DECLARE_DELEGATE_OneParam(FDelegate_OrgProductUpdatePolicyById, const FResponse_OrgProductUpdatePolicyById&);
DECLARE_DELEGATE_OneParam(FDelegate_ProductCreatePolicy, const FResponse_ProductCreatePolicy&);
DECLARE_DELEGATE_OneParam(FDelegate_ProductDeletePolicyById, const FResponse_ProductDeletePolicyById&);
DECLARE_DELEGATE_OneParam(FDelegate_ProductGetAllPolicies, const FResponse_ProductGetAllPolicies&);
DECLARE_DELEGATE_OneParam(FDelegate_ProductGetPolicyById, const FResponse_ProductGetPolicyById&);
DECLARE_DELEGATE_OneParam(FDelegate_ProductUpdatePolicyById, const FResponse_ProductUpdatePolicyById&);

class RALLYHEREDEVELOPERAPI_API FPoliciesAPI : public FAPI
{
public:
    FPoliciesAPI();
    virtual ~FPoliciesAPI();

    FHttpRequestPtr OrgProductCreatePolicy(const FRequest_OrgProductCreatePolicy& Request, const FDelegate_OrgProductCreatePolicy& Delegate = FDelegate_OrgProductCreatePolicy(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr OrgProductDeletePolicyById(const FRequest_OrgProductDeletePolicyById& Request, const FDelegate_OrgProductDeletePolicyById& Delegate = FDelegate_OrgProductDeletePolicyById(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr OrgProductGetAllPolicies(const FRequest_OrgProductGetAllPolicies& Request, const FDelegate_OrgProductGetAllPolicies& Delegate = FDelegate_OrgProductGetAllPolicies(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr OrgProductGetPolicyById(const FRequest_OrgProductGetPolicyById& Request, const FDelegate_OrgProductGetPolicyById& Delegate = FDelegate_OrgProductGetPolicyById(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr OrgProductUpdatePolicyById(const FRequest_OrgProductUpdatePolicyById& Request, const FDelegate_OrgProductUpdatePolicyById& Delegate = FDelegate_OrgProductUpdatePolicyById(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr ProductCreatePolicy(const FRequest_ProductCreatePolicy& Request, const FDelegate_ProductCreatePolicy& Delegate = FDelegate_ProductCreatePolicy(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr ProductDeletePolicyById(const FRequest_ProductDeletePolicyById& Request, const FDelegate_ProductDeletePolicyById& Delegate = FDelegate_ProductDeletePolicyById(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr ProductGetAllPolicies(const FRequest_ProductGetAllPolicies& Request, const FDelegate_ProductGetAllPolicies& Delegate = FDelegate_ProductGetAllPolicies(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr ProductGetPolicyById(const FRequest_ProductGetPolicyById& Request, const FDelegate_ProductGetPolicyById& Delegate = FDelegate_ProductGetPolicyById(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr ProductUpdatePolicyById(const FRequest_ProductUpdatePolicyById& Request, const FDelegate_ProductUpdatePolicyById& Delegate = FDelegate_ProductUpdatePolicyById(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnOrgProductCreatePolicyResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductCreatePolicy Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnOrgProductDeletePolicyByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductDeletePolicyById Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnOrgProductGetAllPoliciesResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductGetAllPolicies Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnOrgProductGetPolicyByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductGetPolicyById Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnOrgProductUpdatePolicyByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductUpdatePolicyById Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnProductCreatePolicyResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ProductCreatePolicy Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnProductDeletePolicyByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ProductDeletePolicyById Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnProductGetAllPoliciesResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ProductGetAllPolicies Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnProductGetPolicyByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ProductGetPolicyById Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnProductUpdatePolicyByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ProductUpdatePolicyById Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Create Policy
 *
 * Create a new policy, requires policies:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductCreatePolicy : public FRequest
{
    FRequest_OrgProductCreatePolicy();
    virtual ~FRequest_OrgProductCreatePolicy() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    FRHAPI_DevPolicyRequest PolicyRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductCreatePolicy : public FResponse
{
    FResponse_OrgProductCreatePolicy(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductCreatePolicy() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPolicyResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductCreatePolicy
{
    typedef FRequest_OrgProductCreatePolicy Request;
    typedef FResponse_OrgProductCreatePolicy Response;
    typedef FDelegate_OrgProductCreatePolicy Delegate;
    typedef FPoliciesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductCreatePolicy(InRequest, InDelegate, Priority); }
};

/* Delete Policy By Id
 *
 * Delete a policy by ID, requires policies:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductDeletePolicyById : public FRequest
{
    FRequest_OrgProductDeletePolicyById();
    virtual ~FRequest_OrgProductDeletePolicyById() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Policy ID */
    FGuid PolicyId;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductDeletePolicyById : public FResponse
{
    FResponse_OrgProductDeletePolicyById(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductDeletePolicyById() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevJsonValue Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductDeletePolicyById
{
    typedef FRequest_OrgProductDeletePolicyById Request;
    typedef FResponse_OrgProductDeletePolicyById Response;
    typedef FDelegate_OrgProductDeletePolicyById Delegate;
    typedef FPoliciesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductDeletePolicyById(InRequest, InDelegate, Priority); }
};

/* Get All Policies
 *
 * Get all policies for a product, requires policies:config:view permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductGetAllPolicies : public FRequest
{
    FRequest_OrgProductGetAllPolicies();
    virtual ~FRequest_OrgProductGetAllPolicies() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductGetAllPolicies : public FResponse
{
    FResponse_OrgProductGetAllPolicies(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductGetAllPolicies() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPolicyListResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductGetAllPolicies
{
    typedef FRequest_OrgProductGetAllPolicies Request;
    typedef FResponse_OrgProductGetAllPolicies Response;
    typedef FDelegate_OrgProductGetAllPolicies Delegate;
    typedef FPoliciesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductGetAllPolicies(InRequest, InDelegate, Priority); }
};

/* Get Policy By Id
 *
 * Get a policy by ID, requires policies:config:view permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductGetPolicyById : public FRequest
{
    FRequest_OrgProductGetPolicyById();
    virtual ~FRequest_OrgProductGetPolicyById() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Policy ID */
    FGuid PolicyId;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductGetPolicyById : public FResponse
{
    FResponse_OrgProductGetPolicyById(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductGetPolicyById() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPolicyResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductGetPolicyById
{
    typedef FRequest_OrgProductGetPolicyById Request;
    typedef FResponse_OrgProductGetPolicyById Response;
    typedef FDelegate_OrgProductGetPolicyById Delegate;
    typedef FPoliciesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductGetPolicyById(InRequest, InDelegate, Priority); }
};

/* Update Policy By Id
 *
 * Update a policy by ID, requires policies:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductUpdatePolicyById : public FRequest
{
    FRequest_OrgProductUpdatePolicyById();
    virtual ~FRequest_OrgProductUpdatePolicyById() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Policy ID */
    FGuid PolicyId;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    FRHAPI_DevPolicyRequest PolicyRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductUpdatePolicyById : public FResponse
{
    FResponse_OrgProductUpdatePolicyById(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductUpdatePolicyById() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPolicyResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductUpdatePolicyById
{
    typedef FRequest_OrgProductUpdatePolicyById Request;
    typedef FResponse_OrgProductUpdatePolicyById Response;
    typedef FDelegate_OrgProductUpdatePolicyById Delegate;
    typedef FPoliciesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductUpdatePolicyById(InRequest, InDelegate, Priority); }
};

/* Create Policy
 *
 * Create a new policy, requires policies:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_ProductCreatePolicy : public FRequest
{
    FRequest_ProductCreatePolicy();
    virtual ~FRequest_ProductCreatePolicy() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Product ID */
    FGuid ProductId;
    FRHAPI_DevPolicyRequest PolicyRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_ProductCreatePolicy : public FResponse
{
    FResponse_ProductCreatePolicy(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_ProductCreatePolicy() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPolicyResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_ProductCreatePolicy
{
    typedef FRequest_ProductCreatePolicy Request;
    typedef FResponse_ProductCreatePolicy Response;
    typedef FDelegate_ProductCreatePolicy Delegate;
    typedef FPoliciesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.ProductCreatePolicy(InRequest, InDelegate, Priority); }
};

/* Delete Policy By Id
 *
 * Delete a policy by ID, requires policies:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_ProductDeletePolicyById : public FRequest
{
    FRequest_ProductDeletePolicyById();
    virtual ~FRequest_ProductDeletePolicyById() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Policy ID */
    FGuid PolicyId;
    /* Product ID */
    FGuid ProductId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_ProductDeletePolicyById : public FResponse
{
    FResponse_ProductDeletePolicyById(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_ProductDeletePolicyById() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevJsonValue Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_ProductDeletePolicyById
{
    typedef FRequest_ProductDeletePolicyById Request;
    typedef FResponse_ProductDeletePolicyById Response;
    typedef FDelegate_ProductDeletePolicyById Delegate;
    typedef FPoliciesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.ProductDeletePolicyById(InRequest, InDelegate, Priority); }
};

/* Get All Policies
 *
 * Get all policies for a product, requires policies:config:view permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_ProductGetAllPolicies : public FRequest
{
    FRequest_ProductGetAllPolicies();
    virtual ~FRequest_ProductGetAllPolicies() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Product ID */
    FGuid ProductId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_ProductGetAllPolicies : public FResponse
{
    FResponse_ProductGetAllPolicies(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_ProductGetAllPolicies() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPolicyListResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_ProductGetAllPolicies
{
    typedef FRequest_ProductGetAllPolicies Request;
    typedef FResponse_ProductGetAllPolicies Response;
    typedef FDelegate_ProductGetAllPolicies Delegate;
    typedef FPoliciesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.ProductGetAllPolicies(InRequest, InDelegate, Priority); }
};

/* Get Policy By Id
 *
 * Get a policy by ID, requires policies:config:view permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_ProductGetPolicyById : public FRequest
{
    FRequest_ProductGetPolicyById();
    virtual ~FRequest_ProductGetPolicyById() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Policy ID */
    FGuid PolicyId;
    /* Product ID */
    FGuid ProductId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_ProductGetPolicyById : public FResponse
{
    FResponse_ProductGetPolicyById(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_ProductGetPolicyById() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPolicyResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_ProductGetPolicyById
{
    typedef FRequest_ProductGetPolicyById Request;
    typedef FResponse_ProductGetPolicyById Response;
    typedef FDelegate_ProductGetPolicyById Delegate;
    typedef FPoliciesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.ProductGetPolicyById(InRequest, InDelegate, Priority); }
};

/* Update Policy By Id
 *
 * Update a policy by ID, requires policies:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_ProductUpdatePolicyById : public FRequest
{
    FRequest_ProductUpdatePolicyById();
    virtual ~FRequest_ProductUpdatePolicyById() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Policy ID */
    FGuid PolicyId;
    /* Product ID */
    FGuid ProductId;
    FRHAPI_DevPolicyRequest PolicyRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_ProductUpdatePolicyById : public FResponse
{
    FResponse_ProductUpdatePolicyById(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_ProductUpdatePolicyById() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPolicyResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_ProductUpdatePolicyById
{
    typedef FRequest_ProductUpdatePolicyById Request;
    typedef FResponse_ProductUpdatePolicyById Response;
    typedef FDelegate_ProductUpdatePolicyById Delegate;
    typedef FPoliciesAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.ProductUpdatePolicyById(InRequest, InDelegate, Priority); }
};


}
