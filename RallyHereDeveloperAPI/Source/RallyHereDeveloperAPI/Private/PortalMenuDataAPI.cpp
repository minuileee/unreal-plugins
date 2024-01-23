// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "PortalMenuDataAPI.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIAuthContext.h"
#include "RallyHereDeveloperAPIHttpRequester.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereDeveloperAPI
{

FPortalMenuDataAPI::FPortalMenuDataAPI() : FAPI()
{
    Url = TEXT("/api");
    Name = FName(TEXT("PortalMenuData"));
}

FPortalMenuDataAPI::~FPortalMenuDataAPI() {}

FHttpRequestPtr FPortalMenuDataAPI::GetMenuData(const FRequest_GetMenuData& Request, const FDelegate_GetMenuData& Delegate /*= FDelegate_GetMenuData()*/, int32 Priority /*= DefaultRallyHereDeveloperAPIPriority*/)
{
    if (!IsValid())
        return nullptr;

    TSharedPtr<FRallyHereDeveloperAPIHttpRequestData> RequestData = MakeShared<FRallyHereDeveloperAPIHttpRequestData>(CreateHttpRequest(Request), *this, Priority);
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
    ResponseDelegate.BindRaw(this, &FPortalMenuDataAPI::OnGetMenuDataResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereDeveloperAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FPortalMenuDataAPI::OnGetMenuDataResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetMenuData Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FPortalMenuDataAPI::OnGetMenuDataResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_GetMenuData Response{ RequestMetadata };
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

FRequest_GetMenuData::FRequest_GetMenuData()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_GetMenuData::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/v1/menu-data/{account_id}"));
    return Path;
}

FString FRequest_GetMenuData::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = {
        { TEXT("account_id"), ToStringFormatArg(AccountId) }
    };

    FString Path = FString::Format(TEXT("/v1/menu-data/{account_id}"), PathParams);

    return Path;
}

bool FRequest_GetMenuData::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetMenuData - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetMenuData - failed to add bearer token"));
        return false;
    }

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
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetMenuData - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetMenuData::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_GetMenuData::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetMenuData::FResponse_GetMenuData(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetMenuData::Name = TEXT("GetMenuData");

FHttpRequestPtr FPortalMenuDataAPI::GetMenuDataUserFromToken(const FRequest_GetMenuDataUserFromToken& Request, const FDelegate_GetMenuDataUserFromToken& Delegate /*= FDelegate_GetMenuDataUserFromToken()*/, int32 Priority /*= DefaultRallyHereDeveloperAPIPriority*/)
{
    if (!IsValid())
        return nullptr;

    TSharedPtr<FRallyHereDeveloperAPIHttpRequestData> RequestData = MakeShared<FRallyHereDeveloperAPIHttpRequestData>(CreateHttpRequest(Request), *this, Priority);
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
    ResponseDelegate.BindRaw(this, &FPortalMenuDataAPI::OnGetMenuDataUserFromTokenResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereDeveloperAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FPortalMenuDataAPI::OnGetMenuDataUserFromTokenResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetMenuDataUserFromToken Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FPortalMenuDataAPI::OnGetMenuDataUserFromTokenResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_GetMenuDataUserFromToken Response{ RequestMetadata };
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

FRequest_GetMenuDataUserFromToken::FRequest_GetMenuDataUserFromToken()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_GetMenuDataUserFromToken::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/v1/menu-data"));
    return Path;
}

FString FRequest_GetMenuDataUserFromToken::ComputePath() const
{
    FString Path = GetSimplifiedPath().ToString();
    return Path;
}

bool FRequest_GetMenuDataUserFromToken::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetMenuDataUserFromToken - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetMenuDataUserFromToken - failed to add bearer token"));
        return false;
    }

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
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetMenuDataUserFromToken - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetMenuDataUserFromToken::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    }
}

bool FResponse_GetMenuDataUserFromToken::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetMenuDataUserFromToken::FResponse_GetMenuDataUserFromToken(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetMenuDataUserFromToken::Name = TEXT("GetMenuDataUserFromToken");


}
