// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "BlockedV2API.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIHttpRequester.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereAPI
{

FBlockedV2API::FBlockedV2API() : FAPI()
{
    Url = TEXT("http://localhost");
    Name = FName(TEXT("BlockedV2"));
}

FBlockedV2API::~FBlockedV2API() {}

FHttpRequestPtr FBlockedV2API::BlockV2(const FRequest_BlockV2& Request, const FDelegate_BlockV2& Delegate /*= FDelegate_BlockV2()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
    ResponseDelegate.BindRaw(this, &FBlockedV2API::OnBlockV2Response, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FBlockedV2API::OnBlockV2Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_BlockV2 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FBlockedV2API::OnBlockV2Response, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_BlockV2 Response{ RequestMetadata };
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

FRequest_BlockV2::FRequest_BlockV2()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_BlockV2::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/friends/v2/player/{player_uuid}/block/{other_player_uuid}"));
    return Path;
}

FString FRequest_BlockV2::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("player_uuid"), ToStringFormatArg(PlayerUuid) },
        { TEXT("other_player_uuid"), ToStringFormatArg(OtherPlayerUuid) }
    };

    FString Path = FString::Format(TEXT("/friends/v2/player/{player_uuid}/block/{other_player_uuid}"), PathParams);

    return Path;
}

bool FRequest_BlockV2::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("PUT"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_BlockV2 - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_BlockV2 - failed to add bearer token"));
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_BlockV2 - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_BlockV2::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 400:
        SetResponseString(TEXT("Bad Request"));
        break;
    case 403:
        SetResponseString(TEXT("Forbidden"));
        break;
    case 409:
        SetResponseString(TEXT("Conflict"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_BlockV2::TryGetContentFor200(FRHAPI_BlockedPlayer& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_BlockV2::TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_BlockV2::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_BlockV2::TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_BlockV2::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_BlockV2::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_BlockV2::FResponse_BlockV2(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_BlockV2::Name = TEXT("BlockV2");

FHttpRequestPtr FBlockedV2API::GetBlockedListForPlayerV2(const FRequest_GetBlockedListForPlayerV2& Request, const FDelegate_GetBlockedListForPlayerV2& Delegate /*= FDelegate_GetBlockedListForPlayerV2()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
    ResponseDelegate.BindRaw(this, &FBlockedV2API::OnGetBlockedListForPlayerV2Response, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FBlockedV2API::OnGetBlockedListForPlayerV2Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetBlockedListForPlayerV2 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FBlockedV2API::OnGetBlockedListForPlayerV2Response, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_GetBlockedListForPlayerV2 Response{ RequestMetadata };
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

FRequest_GetBlockedListForPlayerV2::FRequest_GetBlockedListForPlayerV2()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_GetBlockedListForPlayerV2::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/friends/v2/player/{player_uuid}/block"));
    return Path;
}

FString FRequest_GetBlockedListForPlayerV2::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("player_uuid"), ToStringFormatArg(PlayerUuid) }
    };

    FString Path = FString::Format(TEXT("/friends/v2/player/{player_uuid}/block"), PathParams);

    TArray<FString> QueryParams;
    if(Page.IsSet())
    {
        QueryParams.Add(FString(TEXT("page=")) + ToUrlString(Page.GetValue()));
    }
    if(Limit.IsSet())
    {
        QueryParams.Add(FString(TEXT("limit=")) + ToUrlString(Limit.GetValue()));
    }
    Path += TCHAR('?');
    Path += FString::Join(QueryParams, TEXT("&"));

    return Path;
}

bool FRequest_GetBlockedListForPlayerV2::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    // Header parameters
    if (IfNoneMatch.IsSet())
    {
        HttpRequest->SetHeader(TEXT("if-none-match"), IfNoneMatch.GetValue());
    }

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetBlockedListForPlayerV2 - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetBlockedListForPlayerV2 - failed to add bearer token"));
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetBlockedListForPlayerV2 - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetBlockedListForPlayerV2::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 304:
        SetResponseString(TEXT("Content still has the same etag and has not changed"));
        break;
    case 400:
        SetResponseString(TEXT("Bad Request"));
        break;
    case 403:
        SetResponseString(TEXT("Forbidden"));
        break;
    case 409:
        SetResponseString(TEXT("Conflict"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_GetBlockedListForPlayerV2::ParseHeaders()
{
    // The IHttpBase::GetHeader function doesn't distinguish between missing and empty, so we need to parse ourselves
    TMap<FString, FString> HeadersMap;
    for (const auto& HeaderStr : HttpResponse->GetAllHeaders())
    {
        int32 index;
        if (HeaderStr.FindChar(TEXT(':'), index))
        {
            HeadersMap.Add(HeaderStr.Mid(0, index), HeaderStr.Mid(index + 1));
        }
    }
    bool bParsedAllRequiredHeaders = true;
    if (const FString* Val = HeadersMap.Find(TEXT("ETag")))
    {
        ETag = *Val;
    }
    return bParsedAllRequiredHeaders;
}

bool FResponse_GetBlockedListForPlayerV2::TryGetContentFor200(FRHAPI_BlockedList& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_GetBlockedListForPlayerV2::TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_GetBlockedListForPlayerV2::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_GetBlockedListForPlayerV2::TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_GetBlockedListForPlayerV2::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_GetBlockedListForPlayerV2::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetBlockedListForPlayerV2::FResponse_GetBlockedListForPlayerV2(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetBlockedListForPlayerV2::Name = TEXT("GetBlockedListForPlayerV2");

FHttpRequestPtr FBlockedV2API::GetBlockedV2(const FRequest_GetBlockedV2& Request, const FDelegate_GetBlockedV2& Delegate /*= FDelegate_GetBlockedV2()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
    ResponseDelegate.BindRaw(this, &FBlockedV2API::OnGetBlockedV2Response, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FBlockedV2API::OnGetBlockedV2Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetBlockedV2 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FBlockedV2API::OnGetBlockedV2Response, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_GetBlockedV2 Response{ RequestMetadata };
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

FRequest_GetBlockedV2::FRequest_GetBlockedV2()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_GetBlockedV2::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/friends/v2/player/{player_uuid}/block/{other_player_uuid}"));
    return Path;
}

FString FRequest_GetBlockedV2::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("player_uuid"), ToStringFormatArg(PlayerUuid) },
        { TEXT("other_player_uuid"), ToStringFormatArg(OtherPlayerUuid) }
    };

    FString Path = FString::Format(TEXT("/friends/v2/player/{player_uuid}/block/{other_player_uuid}"), PathParams);

    return Path;
}

bool FRequest_GetBlockedV2::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetBlockedV2 - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetBlockedV2 - failed to add bearer token"));
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetBlockedV2 - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetBlockedV2::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 400:
        SetResponseString(TEXT("Bad Request"));
        break;
    case 403:
        SetResponseString(TEXT("Forbidden"));
        break;
    case 409:
        SetResponseString(TEXT("Conflict"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_GetBlockedV2::TryGetContentFor200(FRHAPI_BlockedPlayer& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_GetBlockedV2::TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_GetBlockedV2::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_GetBlockedV2::TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_GetBlockedV2::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_GetBlockedV2::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetBlockedV2::FResponse_GetBlockedV2(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetBlockedV2::Name = TEXT("GetBlockedV2");

FHttpRequestPtr FBlockedV2API::UnblockV2(const FRequest_UnblockV2& Request, const FDelegate_UnblockV2& Delegate /*= FDelegate_UnblockV2()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
    ResponseDelegate.BindRaw(this, &FBlockedV2API::OnUnblockV2Response, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FBlockedV2API::OnUnblockV2Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UnblockV2 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FBlockedV2API::OnUnblockV2Response, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_UnblockV2 Response{ RequestMetadata };
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

FRequest_UnblockV2::FRequest_UnblockV2()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_UnblockV2::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/friends/v2/player/{player_uuid}/block/{other_player_uuid}"));
    return Path;
}

FString FRequest_UnblockV2::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("player_uuid"), ToStringFormatArg(PlayerUuid) },
        { TEXT("other_player_uuid"), ToStringFormatArg(OtherPlayerUuid) }
    };

    FString Path = FString::Format(TEXT("/friends/v2/player/{player_uuid}/block/{other_player_uuid}"), PathParams);

    return Path;
}

bool FRequest_UnblockV2::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("DELETE"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_UnblockV2 - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_UnblockV2 - failed to add bearer token"));
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_UnblockV2 - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_UnblockV2::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 204:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 400:
        SetResponseString(TEXT("Bad Request"));
        break;
    case 403:
        SetResponseString(TEXT("Forbidden"));
        break;
    case 409:
        SetResponseString(TEXT("Conflict"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_UnblockV2::TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_UnblockV2::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_UnblockV2::TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_UnblockV2::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
    return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_UnblockV2::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return true;
}

FResponse_UnblockV2::FResponse_UnblockV2(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_UnblockV2::Name = TEXT("UnblockV2");


}
