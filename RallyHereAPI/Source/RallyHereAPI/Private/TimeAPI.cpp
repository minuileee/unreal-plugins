// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "TimeAPI.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIHttpRequester.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereAPI
{

FTimeAPI::FTimeAPI() : FAPI()
{
    Url = TEXT("http://localhost");
    Name = FName(TEXT("Time"));
}

FTimeAPI::~FTimeAPI() {}

FHttpRequestPtr FTimeAPI::GetUtcTime(const FRequest_GetUtcTime& Request, const FDelegate_GetUtcTime& Delegate /*= FDelegate_GetUtcTime()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
{
    if (!IsValid())
        return nullptr;

    TSharedPtr<FRallyHereAPIHttpRequestData> RequestData = MakeShared<FRallyHereAPIHttpRequestData>(CreateHttpRequest(Request), *this, Priority);
    RequestData->HttpRequest->SetURL(*(Url + Request.ComputePath()));

    for(const auto& It : AdditionalHeaderParams)
    {
        RequestData->HttpRequest->SetHeader(It.Key, It.Value);
    }

    if (!Request.SetupHttpRequest(RequestData->HttpRequest))
    {
        return nullptr;
    }

    RequestData->SetMetadata(Request.GetRequestMetadata());

    FHttpRequestCompleteDelegate ResponseDelegate;
    ResponseDelegate.BindRaw(this, &FTimeAPI::OnGetUtcTimeResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FTimeAPI::OnGetUtcTimeResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetUtcTime Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FTimeAPI::OnGetUtcTimeResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_GetUtcTime Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response, ResponseDelegate, RequestMetadata, Priority);

    {
        SCOPED_NAMED_EVENT(RallyHere_BroadcastRequestCompleted, FColor::Purple);
        OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    }

    if (!bWillRetryWithRefreshedAuth)
    {
        SCOPED_NAMED_EVENT(RallyHere_ExecuteDelegate, FColor::Purple);
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_GetUtcTime::FRequest_GetUtcTime()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_GetUtcTime::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/config/v1/time/utc"));
    return Path;
}

FString FRequest_GetUtcTime::ComputePath() const
{
    FString Path = GetSimplifiedPath().ToString();
    return Path;
}

bool FRequest_GetUtcTime::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetUtcTime - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetUtcTime::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    }
}

bool FResponse_GetUtcTime::TryGetContentFor200(FDateTime& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_GetUtcTime::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetUtcTime::FResponse_GetUtcTime(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetUtcTime::Name = TEXT("GetUtcTime");


}
