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
#include "DevDatacenterContract.h"
#include "DevDatacenterContractCreate.h"
#include "DevDatacenterContractUpdate.h"
#include "DevDatacenterContractVersionsAndTransactions.h"
#include "DevHTTPValidationError.h"
#include "DevHostVersionsAndTransactions.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_CreateC;
struct FResponse_CreateC;
struct FRequest_GetAllCs;
struct FResponse_GetAllCs;
struct FRequest_GetC;
struct FResponse_GetC;
struct FRequest_GetCPriorHosts;
struct FResponse_GetCPriorHosts;
struct FRequest_GetContractVersions;
struct FResponse_GetContractVersions;
struct FRequest_UpdateC;
struct FResponse_UpdateC;

DECLARE_DELEGATE_OneParam(FDelegate_CreateC, const FResponse_CreateC&);
DECLARE_DELEGATE_OneParam(FDelegate_GetAllCs, const FResponse_GetAllCs&);
DECLARE_DELEGATE_OneParam(FDelegate_GetC, const FResponse_GetC&);
DECLARE_DELEGATE_OneParam(FDelegate_GetCPriorHosts, const FResponse_GetCPriorHosts&);
DECLARE_DELEGATE_OneParam(FDelegate_GetContractVersions, const FResponse_GetContractVersions&);
DECLARE_DELEGATE_OneParam(FDelegate_UpdateC, const FResponse_UpdateC&);

class RALLYHEREDEVELOPERAPI_API FArmadaContractAPI : public FAPI
{
public:
    FArmadaContractAPI();
    virtual ~FArmadaContractAPI();

    FHttpRequestPtr CreateC(const FRequest_CreateC& Request, const FDelegate_CreateC& Delegate = FDelegate_CreateC(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetAllCs(const FRequest_GetAllCs& Request, const FDelegate_GetAllCs& Delegate = FDelegate_GetAllCs(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetC(const FRequest_GetC& Request, const FDelegate_GetC& Delegate = FDelegate_GetC(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetCPriorHosts(const FRequest_GetCPriorHosts& Request, const FDelegate_GetCPriorHosts& Delegate = FDelegate_GetCPriorHosts(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetContractVersions(const FRequest_GetContractVersions& Request, const FDelegate_GetContractVersions& Delegate = FDelegate_GetContractVersions(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr UpdateC(const FRequest_UpdateC& Request, const FDelegate_UpdateC& Delegate = FDelegate_UpdateC(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnCreateCResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_CreateC Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetAllCsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAllCs Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetCResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetC Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetCPriorHostsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetCPriorHosts Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetContractVersionsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetContractVersions Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnUpdateCResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UpdateC Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Create C
 *
 * Create a contract
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_CreateC : public FRequest
{
    FRequest_CreateC();
    virtual ~FRequest_CreateC() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FRHAPI_DevDatacenterContractCreate DatacenterContractCreate;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_CreateC : public FResponse
{
    FResponse_CreateC(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_CreateC() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevDatacenterContract Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevDatacenterContract& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_CreateC
{
    typedef FRequest_CreateC Request;
    typedef FResponse_CreateC Response;
    typedef FDelegate_CreateC Delegate;
    typedef FArmadaContractAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.CreateC(InRequest, InDelegate, Priority); }
};

/* Get All Cs
 *
 * Get all contracts
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetAllCs : public FRequest
{
    FRequest_GetAllCs();
    virtual ~FRequest_GetAllCs() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetAllCs : public FResponse
{
    FResponse_GetAllCs(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetAllCs() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    TArray<FRHAPI_DevDatacenterContract> Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(TArray<FRHAPI_DevDatacenterContract>& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetAllCs
{
    typedef FRequest_GetAllCs Request;
    typedef FResponse_GetAllCs Response;
    typedef FDelegate_GetAllCs Delegate;
    typedef FArmadaContractAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetAllCs(InRequest, InDelegate, Priority); }
};

/* Get C
 *
 * Get a contract
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetC : public FRequest
{
    FRequest_GetC();
    virtual ~FRequest_GetC() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* The contract ID */
    FGuid CId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetC : public FResponse
{
    FResponse_GetC(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetC() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevDatacenterContract Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevDatacenterContract& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetC
{
    typedef FRequest_GetC Request;
    typedef FResponse_GetC Response;
    typedef FDelegate_GetC Delegate;
    typedef FArmadaContractAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetC(InRequest, InDelegate, Priority); }
};

/* Get C Prior Hosts
 *
 * Get all prior hosts for this contract
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetCPriorHosts : public FRequest
{
    FRequest_GetCPriorHosts();
    virtual ~FRequest_GetCPriorHosts() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* The contract ID */
    FGuid CId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetCPriorHosts : public FResponse
{
    FResponse_GetCPriorHosts(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetCPriorHosts() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevHostVersionsAndTransactions Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevHostVersionsAndTransactions& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetCPriorHosts
{
    typedef FRequest_GetCPriorHosts Request;
    typedef FResponse_GetCPriorHosts Response;
    typedef FDelegate_GetCPriorHosts Delegate;
    typedef FArmadaContractAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetCPriorHosts(InRequest, InDelegate, Priority); }
};

/* Get Contract Versions
 *
 * Get all version history for a contract
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetContractVersions : public FRequest
{
    FRequest_GetContractVersions();
    virtual ~FRequest_GetContractVersions() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* The contract ID */
    FGuid CId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetContractVersions : public FResponse
{
    FResponse_GetContractVersions(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetContractVersions() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevDatacenterContractVersionsAndTransactions Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevDatacenterContractVersionsAndTransactions& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetContractVersions
{
    typedef FRequest_GetContractVersions Request;
    typedef FResponse_GetContractVersions Response;
    typedef FDelegate_GetContractVersions Delegate;
    typedef FArmadaContractAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetContractVersions(InRequest, InDelegate, Priority); }
};

/* Update C
 *
 * Update a contract
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_UpdateC : public FRequest
{
    FRequest_UpdateC();
    virtual ~FRequest_UpdateC() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* The contract ID */
    FGuid CId;
    FRHAPI_DevDatacenterContractUpdate DatacenterContractUpdate;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_UpdateC : public FResponse
{
    FResponse_UpdateC(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_UpdateC() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevDatacenterContract Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevDatacenterContract& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_UpdateC
{
    typedef FRequest_UpdateC Request;
    typedef FResponse_UpdateC Response;
    typedef FDelegate_UpdateC Delegate;
    typedef FArmadaContractAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.UpdateC(InRequest, InDelegate, Priority); }
};


}