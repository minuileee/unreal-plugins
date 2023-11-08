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
#include "DevClientRequest.h"
#include "DevClientResponse.h"
#include "DevClientsListResponse.h"
#include "DevHTTPValidationError.h"
#include "Misc/TVariant.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_OrgProductCreateClient;
struct FResponse_OrgProductCreateClient;
struct FRequest_OrgProductDeleteClientById;
struct FResponse_OrgProductDeleteClientById;
struct FRequest_OrgProductGetAllClients;
struct FResponse_OrgProductGetAllClients;
struct FRequest_OrgProductGetClientById;
struct FResponse_OrgProductGetClientById;
struct FRequest_OrgProductUpdateClientById;
struct FResponse_OrgProductUpdateClientById;
struct FRequest_ProductCreateClient;
struct FResponse_ProductCreateClient;
struct FRequest_ProductDeleteClientById;
struct FResponse_ProductDeleteClientById;
struct FRequest_ProductGetAllClients;
struct FResponse_ProductGetAllClients;
struct FRequest_ProductGetClientById;
struct FResponse_ProductGetClientById;
struct FRequest_ProductUpdateClientById;
struct FResponse_ProductUpdateClientById;

DECLARE_DELEGATE_OneParam(FDelegate_OrgProductCreateClient, const FResponse_OrgProductCreateClient&);
DECLARE_DELEGATE_OneParam(FDelegate_OrgProductDeleteClientById, const FResponse_OrgProductDeleteClientById&);
DECLARE_DELEGATE_OneParam(FDelegate_OrgProductGetAllClients, const FResponse_OrgProductGetAllClients&);
DECLARE_DELEGATE_OneParam(FDelegate_OrgProductGetClientById, const FResponse_OrgProductGetClientById&);
DECLARE_DELEGATE_OneParam(FDelegate_OrgProductUpdateClientById, const FResponse_OrgProductUpdateClientById&);
DECLARE_DELEGATE_OneParam(FDelegate_ProductCreateClient, const FResponse_ProductCreateClient&);
DECLARE_DELEGATE_OneParam(FDelegate_ProductDeleteClientById, const FResponse_ProductDeleteClientById&);
DECLARE_DELEGATE_OneParam(FDelegate_ProductGetAllClients, const FResponse_ProductGetAllClients&);
DECLARE_DELEGATE_OneParam(FDelegate_ProductGetClientById, const FResponse_ProductGetClientById&);
DECLARE_DELEGATE_OneParam(FDelegate_ProductUpdateClientById, const FResponse_ProductUpdateClientById&);

class RALLYHEREDEVELOPERAPI_API FClientsAPI : public FAPI
{
public:
    FClientsAPI();
    virtual ~FClientsAPI();

    FHttpRequestPtr OrgProductCreateClient(const FRequest_OrgProductCreateClient& Request, const FDelegate_OrgProductCreateClient& Delegate = FDelegate_OrgProductCreateClient(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr OrgProductDeleteClientById(const FRequest_OrgProductDeleteClientById& Request, const FDelegate_OrgProductDeleteClientById& Delegate = FDelegate_OrgProductDeleteClientById(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr OrgProductGetAllClients(const FRequest_OrgProductGetAllClients& Request, const FDelegate_OrgProductGetAllClients& Delegate = FDelegate_OrgProductGetAllClients(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr OrgProductGetClientById(const FRequest_OrgProductGetClientById& Request, const FDelegate_OrgProductGetClientById& Delegate = FDelegate_OrgProductGetClientById(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr OrgProductUpdateClientById(const FRequest_OrgProductUpdateClientById& Request, const FDelegate_OrgProductUpdateClientById& Delegate = FDelegate_OrgProductUpdateClientById(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr ProductCreateClient(const FRequest_ProductCreateClient& Request, const FDelegate_ProductCreateClient& Delegate = FDelegate_ProductCreateClient(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr ProductDeleteClientById(const FRequest_ProductDeleteClientById& Request, const FDelegate_ProductDeleteClientById& Delegate = FDelegate_ProductDeleteClientById(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr ProductGetAllClients(const FRequest_ProductGetAllClients& Request, const FDelegate_ProductGetAllClients& Delegate = FDelegate_ProductGetAllClients(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr ProductGetClientById(const FRequest_ProductGetClientById& Request, const FDelegate_ProductGetClientById& Delegate = FDelegate_ProductGetClientById(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr ProductUpdateClientById(const FRequest_ProductUpdateClientById& Request, const FDelegate_ProductUpdateClientById& Delegate = FDelegate_ProductUpdateClientById(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnOrgProductCreateClientResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductCreateClient Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnOrgProductDeleteClientByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductDeleteClientById Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnOrgProductGetAllClientsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductGetAllClients Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnOrgProductGetClientByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductGetClientById Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnOrgProductUpdateClientByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductUpdateClientById Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnProductCreateClientResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ProductCreateClient Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnProductDeleteClientByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ProductDeleteClientById Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnProductGetAllClientsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ProductGetAllClients Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnProductGetClientByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ProductGetClientById Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnProductUpdateClientByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ProductUpdateClientById Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Create Client
 *
 * Create a client, requires clients:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductCreateClient : public FRequest
{
    FRequest_OrgProductCreateClient();
    virtual ~FRequest_OrgProductCreateClient() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    FRHAPI_DevClientRequest ClientRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductCreateClient : public FResponse
{
    FResponse_OrgProductCreateClient(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductCreateClient() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevClientResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductCreateClient
{
    typedef FRequest_OrgProductCreateClient Request;
    typedef FResponse_OrgProductCreateClient Response;
    typedef FDelegate_OrgProductCreateClient Delegate;
    typedef FClientsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductCreateClient(InRequest, InDelegate, Priority); }
};

/* Delete Client By Id
 *
 * Delete a client by ID, requires clients:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductDeleteClientById : public FRequest
{
    FRequest_OrgProductDeleteClientById();
    virtual ~FRequest_OrgProductDeleteClientById() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Client ID */
    FGuid ClientId;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductDeleteClientById : public FResponse
{
    FResponse_OrgProductDeleteClientById(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductDeleteClientById() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevJsonValue Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductDeleteClientById
{
    typedef FRequest_OrgProductDeleteClientById Request;
    typedef FResponse_OrgProductDeleteClientById Response;
    typedef FDelegate_OrgProductDeleteClientById Delegate;
    typedef FClientsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductDeleteClientById(InRequest, InDelegate, Priority); }
};

/* Get All Clients
 *
 * Get all clients for a product, requires clients:config:view permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductGetAllClients : public FRequest
{
    FRequest_OrgProductGetAllClients();
    virtual ~FRequest_OrgProductGetAllClients() = default;
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

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductGetAllClients : public FResponse
{
    FResponse_OrgProductGetAllClients(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductGetAllClients() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevClientsListResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductGetAllClients
{
    typedef FRequest_OrgProductGetAllClients Request;
    typedef FResponse_OrgProductGetAllClients Response;
    typedef FDelegate_OrgProductGetAllClients Delegate;
    typedef FClientsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductGetAllClients(InRequest, InDelegate, Priority); }
};

/* Get Client By Id
 *
 * Get a client by ID, requires clients:config:view permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductGetClientById : public FRequest
{
    FRequest_OrgProductGetClientById();
    virtual ~FRequest_OrgProductGetClientById() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Client ID */
    FGuid ClientId;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductGetClientById : public FResponse
{
    FResponse_OrgProductGetClientById(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductGetClientById() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevClientResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductGetClientById
{
    typedef FRequest_OrgProductGetClientById Request;
    typedef FResponse_OrgProductGetClientById Response;
    typedef FDelegate_OrgProductGetClientById Delegate;
    typedef FClientsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductGetClientById(InRequest, InDelegate, Priority); }
};

/* Update Client By Id
 *
 * Update a client by ID, requires clients:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductUpdateClientById : public FRequest
{
    FRequest_OrgProductUpdateClientById();
    virtual ~FRequest_OrgProductUpdateClientById() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Client ID */
    FGuid ClientId;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    FRHAPI_DevClientRequest ClientRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductUpdateClientById : public FResponse
{
    FResponse_OrgProductUpdateClientById(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductUpdateClientById() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevClientResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductUpdateClientById
{
    typedef FRequest_OrgProductUpdateClientById Request;
    typedef FResponse_OrgProductUpdateClientById Response;
    typedef FDelegate_OrgProductUpdateClientById Delegate;
    typedef FClientsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductUpdateClientById(InRequest, InDelegate, Priority); }
};

/* Create Client
 *
 * Create a client, requires clients:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_ProductCreateClient : public FRequest
{
    FRequest_ProductCreateClient();
    virtual ~FRequest_ProductCreateClient() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Product ID */
    FGuid ProductId;
    FRHAPI_DevClientRequest ClientRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_ProductCreateClient : public FResponse
{
    FResponse_ProductCreateClient(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_ProductCreateClient() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevClientResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_ProductCreateClient
{
    typedef FRequest_ProductCreateClient Request;
    typedef FResponse_ProductCreateClient Response;
    typedef FDelegate_ProductCreateClient Delegate;
    typedef FClientsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.ProductCreateClient(InRequest, InDelegate, Priority); }
};

/* Delete Client By Id
 *
 * Delete a client by ID, requires clients:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_ProductDeleteClientById : public FRequest
{
    FRequest_ProductDeleteClientById();
    virtual ~FRequest_ProductDeleteClientById() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Client ID */
    FGuid ClientId;
    /* Product ID */
    FGuid ProductId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_ProductDeleteClientById : public FResponse
{
    FResponse_ProductDeleteClientById(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_ProductDeleteClientById() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevJsonValue Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_ProductDeleteClientById
{
    typedef FRequest_ProductDeleteClientById Request;
    typedef FResponse_ProductDeleteClientById Response;
    typedef FDelegate_ProductDeleteClientById Delegate;
    typedef FClientsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.ProductDeleteClientById(InRequest, InDelegate, Priority); }
};

/* Get All Clients
 *
 * Get all clients for a product, requires clients:config:view permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_ProductGetAllClients : public FRequest
{
    FRequest_ProductGetAllClients();
    virtual ~FRequest_ProductGetAllClients() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Product ID */
    FGuid ProductId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_ProductGetAllClients : public FResponse
{
    FResponse_ProductGetAllClients(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_ProductGetAllClients() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevClientsListResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_ProductGetAllClients
{
    typedef FRequest_ProductGetAllClients Request;
    typedef FResponse_ProductGetAllClients Response;
    typedef FDelegate_ProductGetAllClients Delegate;
    typedef FClientsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.ProductGetAllClients(InRequest, InDelegate, Priority); }
};

/* Get Client By Id
 *
 * Get a client by ID, requires clients:config:view permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_ProductGetClientById : public FRequest
{
    FRequest_ProductGetClientById();
    virtual ~FRequest_ProductGetClientById() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Client ID */
    FGuid ClientId;
    /* Product ID */
    FGuid ProductId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_ProductGetClientById : public FResponse
{
    FResponse_ProductGetClientById(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_ProductGetClientById() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevClientResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_ProductGetClientById
{
    typedef FRequest_ProductGetClientById Request;
    typedef FResponse_ProductGetClientById Response;
    typedef FDelegate_ProductGetClientById Delegate;
    typedef FClientsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.ProductGetClientById(InRequest, InDelegate, Priority); }
};

/* Update Client By Id
 *
 * Update a client by ID, requires clients:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_ProductUpdateClientById : public FRequest
{
    FRequest_ProductUpdateClientById();
    virtual ~FRequest_ProductUpdateClientById() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Client ID */
    FGuid ClientId;
    /* Product ID */
    FGuid ProductId;
    FRHAPI_DevClientRequest ClientRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_ProductUpdateClientById : public FResponse
{
    FResponse_ProductUpdateClientById(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_ProductUpdateClientById() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevClientResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_ProductUpdateClientById
{
    typedef FRequest_ProductUpdateClientById Request;
    typedef FResponse_ProductUpdateClientById Response;
    typedef FDelegate_ProductUpdateClientById Delegate;
    typedef FClientsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.ProductUpdateClientById(InRequest, InDelegate, Priority); }
};


}
