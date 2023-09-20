// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "SandboxConfigGameConfigAPI.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIAuthContext.h"
#include "RallyHereDeveloperAPIHttpRequester.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereDeveloperAPI
{

FSandboxConfigGameConfigAPI::FSandboxConfigGameConfigAPI() : FAPI()
{
    Url = TEXT("/api");
    Name = FName(TEXT("SandboxConfigGameConfig"));
}

FSandboxConfigGameConfigAPI::~FSandboxConfigGameConfigAPI() {}

FHttpRequestPtr FSandboxConfigGameConfigAPI::GetSandboxGameConfig(const FRequest_GetSandboxGameConfig& Request, const FDelegate_GetSandboxGameConfig& Delegate /*= FDelegate_GetSandboxGameConfig()*/, int32 Priority /*= DefaultRallyHereDeveloperAPIPriority*/)
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
    ResponseDelegate.BindRaw(this, &FSandboxConfigGameConfigAPI::OnGetSandboxGameConfigResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereDeveloperAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FSandboxConfigGameConfigAPI::OnGetSandboxGameConfigResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetSandboxGameConfig Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FSandboxConfigGameConfigAPI::OnGetSandboxGameConfigResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_GetSandboxGameConfig Response{ RequestMetadata };
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

FRequest_GetSandboxGameConfig::FRequest_GetSandboxGameConfig()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_GetSandboxGameConfig::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/v1/sandbox/{sandbox_identifier}/game-config"));
    return Path;
}

FString FRequest_GetSandboxGameConfig::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("sandbox_identifier"), ToStringFormatArg(SandboxIdentifier) }
    };

    FString Path = FString::Format(TEXT("/v1/sandbox/{sandbox_identifier}/game-config"), PathParams);

    return Path;
}

bool FRequest_GetSandboxGameConfig::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetSandboxGameConfig - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetSandboxGameConfig - failed to add bearer token"));
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
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetSandboxGameConfig - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetSandboxGameConfig::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_GetSandboxGameConfig::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetSandboxGameConfig::FResponse_GetSandboxGameConfig(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetSandboxGameConfig::Name = TEXT("GetSandboxGameConfig");

FHttpRequestPtr FSandboxConfigGameConfigAPI::UpdateSandboxGameConfig(const FRequest_UpdateSandboxGameConfig& Request, const FDelegate_UpdateSandboxGameConfig& Delegate /*= FDelegate_UpdateSandboxGameConfig()*/, int32 Priority /*= DefaultRallyHereDeveloperAPIPriority*/)
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
    ResponseDelegate.BindRaw(this, &FSandboxConfigGameConfigAPI::OnUpdateSandboxGameConfigResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereDeveloperAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FSandboxConfigGameConfigAPI::OnUpdateSandboxGameConfigResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UpdateSandboxGameConfig Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FSandboxConfigGameConfigAPI::OnUpdateSandboxGameConfigResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_UpdateSandboxGameConfig Response{ RequestMetadata };
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

FRequest_UpdateSandboxGameConfig::FRequest_UpdateSandboxGameConfig()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_UpdateSandboxGameConfig::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/v1/sandbox/{sandbox_identifier}/game-config"));
    return Path;
}

FString FRequest_UpdateSandboxGameConfig::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("sandbox_identifier"), ToStringFormatArg(SandboxIdentifier) }
    };

    FString Path = FString::Format(TEXT("/v1/sandbox/{sandbox_identifier}/game-config"), PathParams);

    return Path;
}

bool FRequest_UpdateSandboxGameConfig::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = { TEXT("application/json") };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("PUT"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_UpdateSandboxGameConfig - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_UpdateSandboxGameConfig - failed to add bearer token"));
        return false;
    }

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
        // Body parameters
        FString JsonBody;
        TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

        WriteJsonValue(Writer, Body);
        Writer->Close();

        HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
        HttpRequest->SetContentAsString(JsonBody);
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_UpdateSandboxGameConfig - Body parameter (body) was ignored, not supported in multipart form"));
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_UpdateSandboxGameConfig - Body parameter (body) was ignored, not supported in urlencoded requests"));
    }
    else
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_UpdateSandboxGameConfig - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_UpdateSandboxGameConfig::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_UpdateSandboxGameConfig::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_UpdateSandboxGameConfig::FResponse_UpdateSandboxGameConfig(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_UpdateSandboxGameConfig::Name = TEXT("UpdateSandboxGameConfig");


}
