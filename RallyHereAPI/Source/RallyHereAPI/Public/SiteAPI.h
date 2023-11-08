// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIHelpers.h"
#include "HzApiErrorModel.h"
#include "SiteSettings.h"

namespace RallyHereAPI
{
using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

struct FRequest_GetSiteSettings;
struct FResponse_GetSiteSettings;

DECLARE_DELEGATE_OneParam(FDelegate_GetSiteSettings, const FResponse_GetSiteSettings&);

class RALLYHEREAPI_API FSiteAPI : public FAPI
{
public:
    FSiteAPI();
    virtual ~FSiteAPI();

    FHttpRequestPtr GetSiteSettings(const FRequest_GetSiteSettings& Request, const FDelegate_GetSiteSettings& Delegate = FDelegate_GetSiteSettings(), int32 Priority = DefaultRallyHereAPIPriority);

private:
    void OnGetSiteSettingsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetSiteSettings Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Get Site Settings
 *
 * Returns a list of all the enabled Sites/Regions.
 *             Deprecated as this endpoint has moved to the session api.
*/
struct RALLYHEREAPI_API FRequest_GetSiteSettings : public FRequest
{
    FRequest_GetSiteSettings();
    virtual ~FRequest_GetSiteSettings() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
};

struct RALLYHEREAPI_API FResponse_GetSiteSettings : public FResponse
{
    FResponse_GetSiteSettings(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetSiteSettings() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    TArray<FRHAPI_SiteSettings> Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(TArray<FRHAPI_SiteSettings>& OutContent) const;

    /* Response 403
    Forbidden
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetSiteSettings
{
    typedef FRequest_GetSiteSettings Request;
    typedef FResponse_GetSiteSettings Response;
    typedef FDelegate_GetSiteSettings Delegate;
    typedef FSiteAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.GetSiteSettings(InRequest, InDelegate, Priority); }
};


}
