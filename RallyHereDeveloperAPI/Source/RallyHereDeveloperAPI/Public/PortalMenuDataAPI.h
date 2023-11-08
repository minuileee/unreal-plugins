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
#include "DevMenuData.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_GetMenuData;
struct FResponse_GetMenuData;
struct FRequest_GetMenuDataUserFromToken;
struct FResponse_GetMenuDataUserFromToken;

DECLARE_DELEGATE_OneParam(FDelegate_GetMenuData, const FResponse_GetMenuData&);
DECLARE_DELEGATE_OneParam(FDelegate_GetMenuDataUserFromToken, const FResponse_GetMenuDataUserFromToken&);

class RALLYHEREDEVELOPERAPI_API FPortalMenuDataAPI : public FAPI
{
public:
    FPortalMenuDataAPI();
    virtual ~FPortalMenuDataAPI();

    FHttpRequestPtr GetMenuData(const FRequest_GetMenuData& Request, const FDelegate_GetMenuData& Delegate = FDelegate_GetMenuData(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetMenuDataUserFromToken(const FRequest_GetMenuDataUserFromToken& Request, const FDelegate_GetMenuDataUserFromToken& Delegate = FDelegate_GetMenuDataUserFromToken(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnGetMenuDataResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetMenuData Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetMenuDataUserFromTokenResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetMenuDataUserFromToken Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Get Menu Data

*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetMenuData : public FRequest
{
    FRequest_GetMenuData();
    virtual ~FRequest_GetMenuData() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Account ID */
    FGuid AccountId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetMenuData : public FResponse
{
    FResponse_GetMenuData(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetMenuData() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevMenuData Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetMenuData
{
    typedef FRequest_GetMenuData Request;
    typedef FResponse_GetMenuData Response;
    typedef FDelegate_GetMenuData Delegate;
    typedef FPortalMenuDataAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetMenuData(InRequest, InDelegate, Priority); }
};

/* Get Menu Data User From Token

*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetMenuDataUserFromToken : public FRequest
{
    FRequest_GetMenuDataUserFromToken();
    virtual ~FRequest_GetMenuDataUserFromToken() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetMenuDataUserFromToken : public FResponse
{
    FResponse_GetMenuDataUserFromToken(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetMenuDataUserFromToken() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevMenuData Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetMenuDataUserFromToken
{
    typedef FRequest_GetMenuDataUserFromToken Request;
    typedef FResponse_GetMenuDataUserFromToken Response;
    typedef FDelegate_GetMenuDataUserFromToken Delegate;
    typedef FPortalMenuDataAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetMenuDataUserFromToken(InRequest, InDelegate, Priority); }
};


}
