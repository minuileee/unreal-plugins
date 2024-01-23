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
#include "DevPermissionResponse.h"
#include "DevPermissionsListResponse.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_GetAllPermissions;
struct FResponse_GetAllPermissions;
struct FRequest_GetPermissionById;
struct FResponse_GetPermissionById;

DECLARE_DELEGATE_OneParam(FDelegate_GetAllPermissions, const FResponse_GetAllPermissions&);
DECLARE_DELEGATE_OneParam(FDelegate_GetPermissionById, const FResponse_GetPermissionById&);

class RALLYHEREDEVELOPERAPI_API FPermissionsAPI : public FAPI
{
public:
    FPermissionsAPI();
    virtual ~FPermissionsAPI();

    FHttpRequestPtr GetAllPermissions(const FRequest_GetAllPermissions& Request, const FDelegate_GetAllPermissions& Delegate = FDelegate_GetAllPermissions(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetPermissionById(const FRequest_GetPermissionById& Request, const FDelegate_GetPermissionById& Delegate = FDelegate_GetPermissionById(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnGetAllPermissionsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAllPermissions Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetPermissionByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetPermissionById Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Get All Permissions
 *
 * Get all permissions, requires global admin permissions
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetAllPermissions : public FRequest
{
    FRequest_GetAllPermissions();
    virtual ~FRequest_GetAllPermissions() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;

};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetAllPermissions : public FResponse
{
    FResponse_GetAllPermissions(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetAllPermissions() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPermissionsListResponse Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevPermissionsListResponse& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetAllPermissions
{
    typedef FRequest_GetAllPermissions Request;
    typedef FResponse_GetAllPermissions Response;
    typedef FDelegate_GetAllPermissions Delegate;
    typedef FPermissionsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetAllPermissions(InRequest, InDelegate, Priority); }
};

/* Get Permission By Id
 *
 * Get a permission by ID, requires global admin permissions
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetPermissionById : public FRequest
{
    FRequest_GetPermissionById();
    virtual ~FRequest_GetPermissionById() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;

    /* Permission ID */
    FString PermissionId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetPermissionById : public FResponse
{
    FResponse_GetPermissionById(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetPermissionById() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPermissionResponse Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevPermissionResponse& OutContent) const;

    /* Response 404
    Not Found
    */

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetPermissionById
{
    typedef FRequest_GetPermissionById Request;
    typedef FResponse_GetPermissionById Response;
    typedef FDelegate_GetPermissionById Delegate;
    typedef FPermissionsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetPermissionById(InRequest, InDelegate, Priority); }
};


}
