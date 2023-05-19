// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIHelpers.h"

namespace RallyHereAPI
{
using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

struct FRequest_GetUtcTime;
struct FResponse_GetUtcTime;

DECLARE_DELEGATE_OneParam(FDelegate_GetUtcTime, const FResponse_GetUtcTime&);

class RALLYHEREAPI_API FTimeAPI : public FAPI
{
public:
    FTimeAPI();
    virtual ~FTimeAPI();

    FHttpRequestPtr GetUtcTime(const FRequest_GetUtcTime& Request, const FDelegate_GetUtcTime& Delegate = FDelegate_GetUtcTime());

private:
    void OnGetUtcTimeResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetUtcTime Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry);

};

/* Get Utc Time
 *
 * Returns the current UTC time for use by the game client. Allows a game client with a incorrect local time to compare against the API&#39;s time and create a offset to act upon.
*/
struct RALLYHEREAPI_API FRequest_GetUtcTime : public FRequest
{
    FRequest_GetUtcTime();
    virtual ~FRequest_GetUtcTime() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FString GetSimplifiedPath() const override;

};

struct RALLYHEREAPI_API FResponse_GetUtcTime : public FResponse
{
    FResponse_GetUtcTime(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetUtcTime() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FDateTime Content;

};

struct RALLYHEREAPI_API Traits_GetUtcTime
{
    typedef FRequest_GetUtcTime Request;
    typedef FResponse_GetUtcTime Response;
    typedef FDelegate_GetUtcTime Delegate;
    typedef FTimeAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate()) { return InAPI.GetUtcTime(InRequest, InDelegate); }
};


}
