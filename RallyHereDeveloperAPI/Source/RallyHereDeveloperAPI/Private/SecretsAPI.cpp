// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "SecretsAPI.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIAuthContext.h"
#include "RallyHereDeveloperAPIHttpRequester.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereDeveloperAPI
{

FSecretsAPI::FSecretsAPI() : FAPI()
{
    Url = TEXT("/api");
    Name = FName(TEXT("Secrets"));
}

FSecretsAPI::~FSecretsAPI() {}

FHttpRequestPtr FSecretsAPI::UnwrapSecret(const FRequest_UnwrapSecret& Request, const FDelegate_UnwrapSecret& Delegate /*= FDelegate_UnwrapSecret()*/, int32 Priority /*= DefaultRallyHereDeveloperAPIPriority*/)
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
    ResponseDelegate.BindRaw(this, &FSecretsAPI::OnUnwrapSecretResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereDeveloperAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FSecretsAPI::OnUnwrapSecretResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UnwrapSecret Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FSecretsAPI::OnUnwrapSecretResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_UnwrapSecret Response{ RequestMetadata };
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

FRequest_UnwrapSecret::FRequest_UnwrapSecret()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_UnwrapSecret::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/v1/secret/unwrap/{token}"));
    return Path;
}

FString FRequest_UnwrapSecret::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("token"), ToStringFormatArg(Token) }
    };

    FString Path = FString::Format(TEXT("/v1/secret/unwrap/{token}"), PathParams);

    return Path;
}

bool FRequest_UnwrapSecret::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_UnwrapSecret - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_UnwrapSecret - failed to add bearer token"));
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
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_UnwrapSecret - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_UnwrapSecret::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 404:
        SetResponseString(TEXT("Not Found"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_UnwrapSecret::TryGetContentFor200(FRHAPI_DevJsonValue& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_UnwrapSecret::TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_UnwrapSecret::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_UnwrapSecret::FResponse_UnwrapSecret(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_UnwrapSecret::Name = TEXT("UnwrapSecret");

FHttpRequestPtr FSecretsAPI::WrapSecret(const FRequest_WrapSecret& Request, const FDelegate_WrapSecret& Delegate /*= FDelegate_WrapSecret()*/, int32 Priority /*= DefaultRallyHereDeveloperAPIPriority*/)
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
    ResponseDelegate.BindRaw(this, &FSecretsAPI::OnWrapSecretResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereDeveloperAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FSecretsAPI::OnWrapSecretResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_WrapSecret Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FSecretsAPI::OnWrapSecretResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_WrapSecret Response{ RequestMetadata };
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

FRequest_WrapSecret::FRequest_WrapSecret()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_WrapSecret::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/v1/secret/wrap"));
    return Path;
}

FString FRequest_WrapSecret::ComputePath() const
{
    FString Path = GetSimplifiedPath().ToString();
    return Path;
}

bool FRequest_WrapSecret::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = { TEXT("application/json") };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("POST"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_WrapSecret - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_WrapSecret - failed to add bearer token"));
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
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_WrapSecret - Body parameter (body) was ignored, not supported in multipart form"));
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_WrapSecret - Body parameter (body) was ignored, not supported in urlencoded requests"));
    }
    else
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_WrapSecret - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_WrapSecret::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 404:
        SetResponseString(TEXT("Not Found"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_WrapSecret::TryGetContentFor200(FRHAPI_DevJsonValue& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_WrapSecret::TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_WrapSecret::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_WrapSecret::FResponse_WrapSecret(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_WrapSecret::Name = TEXT("WrapSecret");


}