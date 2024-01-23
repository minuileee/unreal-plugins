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
#include "DevProduct.h"
#include "DevProductRequest.h"
#include "DevProductUpdateRequest.h"
#include "Misc/TVariant.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_CreateProduct;
struct FResponse_CreateProduct;
struct FRequest_DeleteProduct;
struct FResponse_DeleteProduct;
struct FRequest_GetOrgProduct;
struct FResponse_GetOrgProduct;
struct FRequest_GetOrgProducts;
struct FResponse_GetOrgProducts;
struct FRequest_UpdateProduct;
struct FResponse_UpdateProduct;

DECLARE_DELEGATE_OneParam(FDelegate_CreateProduct, const FResponse_CreateProduct&);
DECLARE_DELEGATE_OneParam(FDelegate_DeleteProduct, const FResponse_DeleteProduct&);
DECLARE_DELEGATE_OneParam(FDelegate_GetOrgProduct, const FResponse_GetOrgProduct&);
DECLARE_DELEGATE_OneParam(FDelegate_GetOrgProducts, const FResponse_GetOrgProducts&);
DECLARE_DELEGATE_OneParam(FDelegate_UpdateProduct, const FResponse_UpdateProduct&);

class RALLYHEREDEVELOPERAPI_API FProductAPI : public FAPI
{
public:
    FProductAPI();
    virtual ~FProductAPI();

    FHttpRequestPtr CreateProduct(const FRequest_CreateProduct& Request, const FDelegate_CreateProduct& Delegate = FDelegate_CreateProduct(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr DeleteProduct(const FRequest_DeleteProduct& Request, const FDelegate_DeleteProduct& Delegate = FDelegate_DeleteProduct(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetOrgProduct(const FRequest_GetOrgProduct& Request, const FDelegate_GetOrgProduct& Delegate = FDelegate_GetOrgProduct(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetOrgProducts(const FRequest_GetOrgProducts& Request, const FDelegate_GetOrgProducts& Delegate = FDelegate_GetOrgProducts(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr UpdateProduct(const FRequest_UpdateProduct& Request, const FDelegate_UpdateProduct& Delegate = FDelegate_UpdateProduct(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnCreateProductResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_CreateProduct Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnDeleteProductResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_DeleteProduct Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetOrgProductResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetOrgProduct Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetOrgProductsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetOrgProducts Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnUpdateProductResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UpdateProduct Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Create Product
 *
 * Create a product for an organization, requires org:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_CreateProduct : public FRequest
{
    FRequest_CreateProduct();
    virtual ~FRequest_CreateProduct() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    FRHAPI_DevProductRequest ProductRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_CreateProduct : public FResponse
{
    FResponse_CreateProduct(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_CreateProduct() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevProduct Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevProduct& OutContent) const;

    /* Response 404
    Not Found
    */

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_CreateProduct
{
    typedef FRequest_CreateProduct Request;
    typedef FResponse_CreateProduct Response;
    typedef FDelegate_CreateProduct Delegate;
    typedef FProductAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.CreateProduct(InRequest, InDelegate, Priority); }
};

/* Delete Product
 *
 * Delete a product by ID or short name, requires product:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_DeleteProduct : public FRequest
{
    FRequest_DeleteProduct();
    virtual ~FRequest_DeleteProduct() = default;
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

struct RALLYHEREDEVELOPERAPI_API FResponse_DeleteProduct : public FResponse
{
    FResponse_DeleteProduct(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_DeleteProduct() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevJsonValue Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevJsonValue& OutContent) const;

    /* Response 404
    Not Found
    */

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_DeleteProduct
{
    typedef FRequest_DeleteProduct Request;
    typedef FResponse_DeleteProduct Response;
    typedef FDelegate_DeleteProduct Delegate;
    typedef FProductAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.DeleteProduct(InRequest, InDelegate, Priority); }
};

/* Get Org Product
 *
 * Get a product by ID or short name, requires product:config:view | product:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetOrgProduct : public FRequest
{
    FRequest_GetOrgProduct();
    virtual ~FRequest_GetOrgProduct() = default;
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

struct RALLYHEREDEVELOPERAPI_API FResponse_GetOrgProduct : public FResponse
{
    FResponse_GetOrgProduct(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetOrgProduct() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevProduct Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevProduct& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetOrgProduct
{
    typedef FRequest_GetOrgProduct Request;
    typedef FResponse_GetOrgProduct Response;
    typedef FDelegate_GetOrgProduct Delegate;
    typedef FProductAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetOrgProduct(InRequest, InDelegate, Priority); }
};

/* Get Org Products
 *
 * Get all products for an organization, requires org:config:view permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetOrgProducts : public FRequest
{
    FRequest_GetOrgProducts();
    virtual ~FRequest_GetOrgProducts() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetOrgProducts : public FResponse
{
    FResponse_GetOrgProducts(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetOrgProducts() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    TArray<FRHAPI_DevProduct> Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(TArray<FRHAPI_DevProduct>& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetOrgProducts
{
    typedef FRequest_GetOrgProducts Request;
    typedef FResponse_GetOrgProducts Response;
    typedef FDelegate_GetOrgProducts Delegate;
    typedef FProductAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetOrgProducts(InRequest, InDelegate, Priority); }
};

/* Update Product
 *
 * Update a product by ID or short name, requires product:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_UpdateProduct : public FRequest
{
    FRequest_UpdateProduct();
    virtual ~FRequest_UpdateProduct() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    FRHAPI_DevProductUpdateRequest ProductUpdateRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_UpdateProduct : public FResponse
{
    FResponse_UpdateProduct(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_UpdateProduct() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevProduct Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevProduct& OutContent) const;

    /* Response 404
    Not Found
    */

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_UpdateProduct
{
    typedef FRequest_UpdateProduct Request;
    typedef FResponse_UpdateProduct Response;
    typedef FDelegate_UpdateProduct Delegate;
    typedef FProductAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.UpdateProduct(InRequest, InDelegate, Priority); }
};


}
