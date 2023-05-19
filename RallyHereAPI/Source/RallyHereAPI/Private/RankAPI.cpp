// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RankAPI.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIAuthContext.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereAPI
{

FRankAPI::FRankAPI() : FAPI()
{
    Url = TEXT("http://localhost");
    Name = TEXT("Rank");
}

FRankAPI::~FRankAPI() {}

FHttpRequestPtr FRankAPI::GetAllPlayerUuidRating(const FRequest_GetAllPlayerUuidRating& Request, const FDelegate_GetAllPlayerUuidRating& Delegate /*= FDelegate_GetAllPlayerUuidRating()*/)
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
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FRankAPI::OnGetAllPlayerUuidRatingResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext());
    HttpRequest->ProcessRequest();
    OnRequestStarted().Broadcast(Request.GetRequestMetadata(), HttpRequest);
    return HttpRequest;
}

void FRankAPI::OnGetAllPlayerUuidRatingResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAllPlayerUuidRating Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry)
{
    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        HttpRequest->OnProcessRequestComplete().BindRaw(this, &FRankAPI::OnGetAllPlayerUuidRatingResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>());
    }

    FResponse_GetAllPlayerUuidRating Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response);
    OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    if (!bWillRetryWithRefreshedAuth)
    {
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_GetAllPlayerUuidRating::FRequest_GetAllPlayerUuidRating()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
}

FString FRequest_GetAllPlayerUuidRating::GetSimplifiedPath() const
{
    return FString(TEXT("/rank/v1/player/uuid/{player_uuid}/rank"));
}

FString FRequest_GetAllPlayerUuidRating::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("player_uuid"), ToStringFormatArg(PlayerUuid) }
    };

    FString Path = FString::Format(TEXT("/rank/v1/player/uuid/{player_uuid}/rank"), PathParams);

    return Path;
}

bool FRequest_GetAllPlayerUuidRating::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAllPlayerUuidRating - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAllPlayerUuidRating - failed to add bearer token"));
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAllPlayerUuidRating - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetAllPlayerUuidRating::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_GetAllPlayerUuidRating::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetAllPlayerUuidRating::FResponse_GetAllPlayerUuidRating(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetAllPlayerUuidRating::Name = TEXT("GetAllPlayerUuidRating");

FHttpRequestPtr FRankAPI::GetPlayerUuidRating(const FRequest_GetPlayerUuidRating& Request, const FDelegate_GetPlayerUuidRating& Delegate /*= FDelegate_GetPlayerUuidRating()*/)
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
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FRankAPI::OnGetPlayerUuidRatingResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext());
    HttpRequest->ProcessRequest();
    OnRequestStarted().Broadcast(Request.GetRequestMetadata(), HttpRequest);
    return HttpRequest;
}

void FRankAPI::OnGetPlayerUuidRatingResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetPlayerUuidRating Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry)
{
    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        HttpRequest->OnProcessRequestComplete().BindRaw(this, &FRankAPI::OnGetPlayerUuidRatingResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>());
    }

    FResponse_GetPlayerUuidRating Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response);
    OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    if (!bWillRetryWithRefreshedAuth)
    {
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_GetPlayerUuidRating::FRequest_GetPlayerUuidRating()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
}

FString FRequest_GetPlayerUuidRating::GetSimplifiedPath() const
{
    return FString(TEXT("/rank/v1/player/uuid/{player_uuid}/rank/{ranking_type_id}"));
}

FString FRequest_GetPlayerUuidRating::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("player_uuid"), ToStringFormatArg(PlayerUuid) },
        { TEXT("ranking_type_id"), ToStringFormatArg(RankingTypeId) }
    };

    FString Path = FString::Format(TEXT("/rank/v1/player/uuid/{player_uuid}/rank/{ranking_type_id}"), PathParams);

    return Path;
}

bool FRequest_GetPlayerUuidRating::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetPlayerUuidRating - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetPlayerUuidRating - failed to add bearer token"));
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetPlayerUuidRating - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetPlayerUuidRating::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_GetPlayerUuidRating::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetPlayerUuidRating::FResponse_GetPlayerUuidRating(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetPlayerUuidRating::Name = TEXT("GetPlayerUuidRating");

FHttpRequestPtr FRankAPI::UpdatePlayerUuidRating(const FRequest_UpdatePlayerUuidRating& Request, const FDelegate_UpdatePlayerUuidRating& Delegate /*= FDelegate_UpdatePlayerUuidRating()*/)
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
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FRankAPI::OnUpdatePlayerUuidRatingResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext());
    HttpRequest->ProcessRequest();
    OnRequestStarted().Broadcast(Request.GetRequestMetadata(), HttpRequest);
    return HttpRequest;
}

void FRankAPI::OnUpdatePlayerUuidRatingResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UpdatePlayerUuidRating Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry)
{
    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        HttpRequest->OnProcessRequestComplete().BindRaw(this, &FRankAPI::OnUpdatePlayerUuidRatingResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>());
    }

    FResponse_UpdatePlayerUuidRating Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response);
    OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    if (!bWillRetryWithRefreshedAuth)
    {
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_UpdatePlayerUuidRating::FRequest_UpdatePlayerUuidRating()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
}

FString FRequest_UpdatePlayerUuidRating::GetSimplifiedPath() const
{
    return FString(TEXT("/rank/v1/player/uuid/{player_uuid}/rank/{rank_id}"));
}

FString FRequest_UpdatePlayerUuidRating::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("player_uuid"), ToStringFormatArg(PlayerUuid) },
        { TEXT("rank_id"), ToStringFormatArg(RankId) }
    };

    FString Path = FString::Format(TEXT("/rank/v1/player/uuid/{player_uuid}/rank/{rank_id}"), PathParams);

    return Path;
}

bool FRequest_UpdatePlayerUuidRating::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = { TEXT("application/json") };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("POST"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_UpdatePlayerUuidRating - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_UpdatePlayerUuidRating - failed to add bearer token"));
        return false;
    }

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
        // Body parameters
        FString JsonBody;
        TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

        WriteJsonValue(Writer, PlayerRatingUpdateRequest);
        Writer->Close();

        HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
        HttpRequest->SetContentAsString(JsonBody);
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_UpdatePlayerUuidRating - Body parameter (FRHAPI_PlayerRatingUpdateRequest) was ignored, not supported in multipart form"));
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_UpdatePlayerUuidRating - Body parameter (FRHAPI_PlayerRatingUpdateRequest) was ignored, not supported in urlencoded requests"));
    }
    else
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_UpdatePlayerUuidRating - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_UpdatePlayerUuidRating::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_UpdatePlayerUuidRating::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_UpdatePlayerUuidRating::FResponse_UpdatePlayerUuidRating(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_UpdatePlayerUuidRating::Name = TEXT("UpdatePlayerUuidRating");

FHttpRequestPtr FRankAPI::UpdateRatingsTrueskillV1(const FRequest_UpdateRatingsTrueskillV1& Request, const FDelegate_UpdateRatingsTrueskillV1& Delegate /*= FDelegate_UpdateRatingsTrueskillV1()*/)
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
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FRankAPI::OnUpdateRatingsTrueskillV1Response, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext());
    HttpRequest->ProcessRequest();
    OnRequestStarted().Broadcast(Request.GetRequestMetadata(), HttpRequest);
    return HttpRequest;
}

void FRankAPI::OnUpdateRatingsTrueskillV1Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UpdateRatingsTrueskillV1 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry)
{
    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        HttpRequest->OnProcessRequestComplete().BindRaw(this, &FRankAPI::OnUpdateRatingsTrueskillV1Response, Delegate, RequestMetadata, TSharedPtr<FAuthContext>());
    }

    FResponse_UpdateRatingsTrueskillV1 Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response);
    OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    if (!bWillRetryWithRefreshedAuth)
    {
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_UpdateRatingsTrueskillV1::FRequest_UpdateRatingsTrueskillV1()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
}

FString FRequest_UpdateRatingsTrueskillV1::GetSimplifiedPath() const
{
    return FString(TEXT("/rank/v1/rank/trueskill-v1"));
}

FString FRequest_UpdateRatingsTrueskillV1::ComputePath() const
{
    FString Path = GetSimplifiedPath();
    return Path;
}

bool FRequest_UpdateRatingsTrueskillV1::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = { TEXT("application/json") };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("POST"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_UpdateRatingsTrueskillV1 - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_UpdateRatingsTrueskillV1 - failed to add bearer token"));
        return false;
    }

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
        // Body parameters
        FString JsonBody;
        TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

        WriteJsonValue(Writer, TrueskillV1UpdateRequest);
        Writer->Close();

        HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
        HttpRequest->SetContentAsString(JsonBody);
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_UpdateRatingsTrueskillV1 - Body parameter (FRHAPI_TrueskillV1UpdateRequest) was ignored, not supported in multipart form"));
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_UpdateRatingsTrueskillV1 - Body parameter (FRHAPI_TrueskillV1UpdateRequest) was ignored, not supported in urlencoded requests"));
    }
    else
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_UpdateRatingsTrueskillV1 - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_UpdateRatingsTrueskillV1::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_UpdateRatingsTrueskillV1::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_UpdateRatingsTrueskillV1::FResponse_UpdateRatingsTrueskillV1(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_UpdateRatingsTrueskillV1::Name = TEXT("UpdateRatingsTrueskillV1");


}
