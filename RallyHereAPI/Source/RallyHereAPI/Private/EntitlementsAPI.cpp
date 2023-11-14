// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "EntitlementsAPI.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIHttpRequester.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereAPI
{

FEntitlementsAPI::FEntitlementsAPI() : FAPI()
{
    Url = TEXT("http://localhost");
    Name = FName(TEXT("Entitlements"));
}

FEntitlementsAPI::~FEntitlementsAPI() {}

FHttpRequestPtr FEntitlementsAPI::ProcessPlatformEntitlementForMe(const FRequest_ProcessPlatformEntitlementForMe& Request, const FDelegate_ProcessPlatformEntitlementForMe& Delegate /*= FDelegate_ProcessPlatformEntitlementForMe()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
    ResponseDelegate.BindRaw(this, &FEntitlementsAPI::OnProcessPlatformEntitlementForMeResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FEntitlementsAPI::OnProcessPlatformEntitlementForMeResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ProcessPlatformEntitlementForMe Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FEntitlementsAPI::OnProcessPlatformEntitlementForMeResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_ProcessPlatformEntitlementForMe Response{ RequestMetadata };
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

FRequest_ProcessPlatformEntitlementForMe::FRequest_ProcessPlatformEntitlementForMe()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_ProcessPlatformEntitlementForMe::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/inventory/v2/player/me/entitlement"));
    return Path;
}

FString FRequest_ProcessPlatformEntitlementForMe::ComputePath() const
{
    FString Path = GetSimplifiedPath().ToString();
    return Path;
}

bool FRequest_ProcessPlatformEntitlementForMe::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = { TEXT("application/json") };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("POST"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_ProcessPlatformEntitlementForMe - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_ProcessPlatformEntitlementForMe - failed to add bearer token"));
        return false;
    }

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
        // Body parameters
        FString JsonBody;
        TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

        WriteJsonValue(Writer, PlatformEntitlementProcessRequest);
        Writer->Close();

        HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
        HttpRequest->SetContentAsString(JsonBody);
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_ProcessPlatformEntitlementForMe - Body parameter (FRHAPI_PlatformEntitlementProcessRequest) was ignored, not supported in multipart form"));
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_ProcessPlatformEntitlementForMe - Body parameter (FRHAPI_PlatformEntitlementProcessRequest) was ignored, not supported in urlencoded requests"));
    }
    else
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_ProcessPlatformEntitlementForMe - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_ProcessPlatformEntitlementForMe::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 403:
        SetResponseString(TEXT("Forbidden"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_ProcessPlatformEntitlementForMe::TryGetContentFor200(FRHAPI_PlatformEntitlementProcessResult& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_ProcessPlatformEntitlementForMe::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_ProcessPlatformEntitlementForMe::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_ProcessPlatformEntitlementForMe::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_ProcessPlatformEntitlementForMe::FResponse_ProcessPlatformEntitlementForMe(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_ProcessPlatformEntitlementForMe::Name = TEXT("ProcessPlatformEntitlementForMe");

FHttpRequestPtr FEntitlementsAPI::ProcessPlatformEntitlementsByPlayerUuid(const FRequest_ProcessPlatformEntitlementsByPlayerUuid& Request, const FDelegate_ProcessPlatformEntitlementsByPlayerUuid& Delegate /*= FDelegate_ProcessPlatformEntitlementsByPlayerUuid()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
    ResponseDelegate.BindRaw(this, &FEntitlementsAPI::OnProcessPlatformEntitlementsByPlayerUuidResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FEntitlementsAPI::OnProcessPlatformEntitlementsByPlayerUuidResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ProcessPlatformEntitlementsByPlayerUuid Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FEntitlementsAPI::OnProcessPlatformEntitlementsByPlayerUuidResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_ProcessPlatformEntitlementsByPlayerUuid Response{ RequestMetadata };
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

FRequest_ProcessPlatformEntitlementsByPlayerUuid::FRequest_ProcessPlatformEntitlementsByPlayerUuid()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_ProcessPlatformEntitlementsByPlayerUuid::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/inventory/v2/player/{player_uuid}/entitlement"));
    return Path;
}

FString FRequest_ProcessPlatformEntitlementsByPlayerUuid::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("player_uuid"), ToStringFormatArg(PlayerUuid) }
    };

    FString Path = FString::Format(TEXT("/inventory/v2/player/{player_uuid}/entitlement"), PathParams);

    return Path;
}

bool FRequest_ProcessPlatformEntitlementsByPlayerUuid::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = { TEXT("application/json") };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("POST"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_ProcessPlatformEntitlementsByPlayerUuid - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_ProcessPlatformEntitlementsByPlayerUuid - failed to add bearer token"));
        return false;
    }

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
        // Body parameters
        FString JsonBody;
        TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

        WriteJsonValue(Writer, PlatformEntitlementProcessRequest);
        Writer->Close();

        HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
        HttpRequest->SetContentAsString(JsonBody);
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_ProcessPlatformEntitlementsByPlayerUuid - Body parameter (FRHAPI_PlatformEntitlementProcessRequest) was ignored, not supported in multipart form"));
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_ProcessPlatformEntitlementsByPlayerUuid - Body parameter (FRHAPI_PlatformEntitlementProcessRequest) was ignored, not supported in urlencoded requests"));
    }
    else
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_ProcessPlatformEntitlementsByPlayerUuid - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_ProcessPlatformEntitlementsByPlayerUuid::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 403:
        SetResponseString(TEXT("Forbidden"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_ProcessPlatformEntitlementsByPlayerUuid::TryGetContentFor200(FRHAPI_PlatformEntitlementProcessResult& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_ProcessPlatformEntitlementsByPlayerUuid::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_ProcessPlatformEntitlementsByPlayerUuid::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_ProcessPlatformEntitlementsByPlayerUuid::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_ProcessPlatformEntitlementsByPlayerUuid::FResponse_ProcessPlatformEntitlementsByPlayerUuid(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_ProcessPlatformEntitlementsByPlayerUuid::Name = TEXT("ProcessPlatformEntitlementsByPlayerUuid");

FHttpRequestPtr FEntitlementsAPI::RetrieveEntitlementsByPlayerUuid(const FRequest_RetrieveEntitlementsByPlayerUuid& Request, const FDelegate_RetrieveEntitlementsByPlayerUuid& Delegate /*= FDelegate_RetrieveEntitlementsByPlayerUuid()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
    ResponseDelegate.BindRaw(this, &FEntitlementsAPI::OnRetrieveEntitlementsByPlayerUuidResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FEntitlementsAPI::OnRetrieveEntitlementsByPlayerUuidResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_RetrieveEntitlementsByPlayerUuid Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FEntitlementsAPI::OnRetrieveEntitlementsByPlayerUuidResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_RetrieveEntitlementsByPlayerUuid Response{ RequestMetadata };
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

FRequest_RetrieveEntitlementsByPlayerUuid::FRequest_RetrieveEntitlementsByPlayerUuid()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_RetrieveEntitlementsByPlayerUuid::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/inventory/v2/player/{player_uuid}/entitlement/request/{request_id}"));
    return Path;
}

FString FRequest_RetrieveEntitlementsByPlayerUuid::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("player_uuid"), ToStringFormatArg(PlayerUuid) },
        { TEXT("request_id"), ToStringFormatArg(RequestId) }
    };

    FString Path = FString::Format(TEXT("/inventory/v2/player/{player_uuid}/entitlement/request/{request_id}"), PathParams);

    return Path;
}

bool FRequest_RetrieveEntitlementsByPlayerUuid::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_RetrieveEntitlementsByPlayerUuid - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_RetrieveEntitlementsByPlayerUuid - failed to add bearer token"));
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_RetrieveEntitlementsByPlayerUuid - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_RetrieveEntitlementsByPlayerUuid::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 403:
        SetResponseString(TEXT("Forbidden"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_RetrieveEntitlementsByPlayerUuid::TryGetContentFor200(FRHAPI_PlatformEntitlementProcessResult& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_RetrieveEntitlementsByPlayerUuid::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_RetrieveEntitlementsByPlayerUuid::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_RetrieveEntitlementsByPlayerUuid::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_RetrieveEntitlementsByPlayerUuid::FResponse_RetrieveEntitlementsByPlayerUuid(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_RetrieveEntitlementsByPlayerUuid::Name = TEXT("RetrieveEntitlementsByPlayerUuid");

FHttpRequestPtr FEntitlementsAPI::RetrieveEntitlementsForMe(const FRequest_RetrieveEntitlementsForMe& Request, const FDelegate_RetrieveEntitlementsForMe& Delegate /*= FDelegate_RetrieveEntitlementsForMe()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
    ResponseDelegate.BindRaw(this, &FEntitlementsAPI::OnRetrieveEntitlementsForMeResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FEntitlementsAPI::OnRetrieveEntitlementsForMeResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_RetrieveEntitlementsForMe Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FEntitlementsAPI::OnRetrieveEntitlementsForMeResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_RetrieveEntitlementsForMe Response{ RequestMetadata };
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

FRequest_RetrieveEntitlementsForMe::FRequest_RetrieveEntitlementsForMe()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_RetrieveEntitlementsForMe::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/inventory/v2/player/me/entitlement/request/{request_id}"));
    return Path;
}

FString FRequest_RetrieveEntitlementsForMe::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("request_id"), ToStringFormatArg(RequestId) }
    };

    FString Path = FString::Format(TEXT("/inventory/v2/player/me/entitlement/request/{request_id}"), PathParams);

    return Path;
}

bool FRequest_RetrieveEntitlementsForMe::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_RetrieveEntitlementsForMe - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_RetrieveEntitlementsForMe - failed to add bearer token"));
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_RetrieveEntitlementsForMe - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_RetrieveEntitlementsForMe::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 403:
        SetResponseString(TEXT("Forbidden"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_RetrieveEntitlementsForMe::TryGetContentFor200(FRHAPI_PlatformEntitlementProcessResult& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_RetrieveEntitlementsForMe::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_RetrieveEntitlementsForMe::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_RetrieveEntitlementsForMe::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_RetrieveEntitlementsForMe::FResponse_RetrieveEntitlementsForMe(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_RetrieveEntitlementsForMe::Name = TEXT("RetrieveEntitlementsForMe");


}
