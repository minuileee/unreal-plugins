// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "DiscoveryAPI.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIAuthContext.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereAPI
{

FDiscoveryAPI::FDiscoveryAPI() : FAPI()
{
    Url = TEXT("http://localhost");
    Name = TEXT("Discovery");
}

FDiscoveryAPI::~FDiscoveryAPI() {}

FHttpRequestPtr FDiscoveryAPI::GetDiscovery(const FRequest_GetDiscovery& Request, const FDelegate_GetDiscovery& Delegate /*= FDelegate_GetDiscovery()*/)
{
    if (!IsValid())
        return nullptr;

    FHttpRequestRef HttpRequest = CreateHttpRequest(Request);
    HttpRequest->SetURL(*(Url + Request.ComputePath()));

    for(const auto& It : AdditionalHeaderParams)
    {
        HttpRequest->SetHeader(It.Key, It.Value);
    }

    if (!Request.SetupHttpRequest(HttpRequest))
    {
        return nullptr;
    }
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FDiscoveryAPI::OnGetDiscoveryResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext());
    HttpRequest->ProcessRequest();
    OnRequestStarted().Broadcast(Request.GetRequestMetadata(), HttpRequest);
    return HttpRequest;
}

void FDiscoveryAPI::OnGetDiscoveryResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetDiscovery Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry)
{
    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        HttpRequest->OnProcessRequestComplete().BindRaw(this, &FDiscoveryAPI::OnGetDiscoveryResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>());
    }

    FResponse_GetDiscovery Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response);
    OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    if (!bWillRetryWithRefreshedAuth)
    {
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_GetDiscovery::FRequest_GetDiscovery()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
}

FString FRequest_GetDiscovery::GetSimplifiedPath() const
{
    return FString(TEXT("/config/v1/discovery"));
}

FString FRequest_GetDiscovery::ComputePath() const
{
    FString Path = GetSimplifiedPath();
    return Path;
}

bool FRequest_GetDiscovery::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
    }
    else
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetDiscovery - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetDiscovery::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    }
}

bool FResponse_GetDiscovery::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetDiscovery::FResponse_GetDiscovery(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetDiscovery::Name = TEXT("GetDiscovery");


}
