// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "FriendsV1API.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIAuthContext.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereAPI
{

FFriendsV1API::FFriendsV1API() : FAPI()
{
    Url = TEXT("http://localhost");
    Name = TEXT("FriendsV1");
}

FFriendsV1API::~FFriendsV1API() {}

FHttpRequestPtr FFriendsV1API::AddFriend(const FRequest_AddFriend& Request, const FDelegate_AddFriend& Delegate /*= FDelegate_AddFriend()*/)
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
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FFriendsV1API::OnAddFriendResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext());
    HttpRequest->ProcessRequest();
    OnRequestStarted().Broadcast(Request.GetRequestMetadata(), HttpRequest);
    return HttpRequest;
}

void FFriendsV1API::OnAddFriendResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_AddFriend Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry)
{
    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        HttpRequest->OnProcessRequestComplete().BindRaw(this, &FFriendsV1API::OnAddFriendResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>());
    }

    FResponse_AddFriend Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response);
    OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    if (!bWillRetryWithRefreshedAuth)
    {
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_AddFriend::FRequest_AddFriend()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
}

FString FRequest_AddFriend::GetSimplifiedPath() const
{
    return FString(TEXT("/friends/v1/player/{player_id}/friend/{other_player_id}"));
}

FString FRequest_AddFriend::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("player_id"), ToStringFormatArg(PlayerId) },
        { TEXT("other_player_id"), ToStringFormatArg(OtherPlayerId) }
    };

    FString Path = FString::Format(TEXT("/friends/v1/player/{player_id}/friend/{other_player_id}"), PathParams);

    return Path;
}

bool FRequest_AddFriend::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = { TEXT("application/json") };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("PUT"));

    // Header parameters
    if (IfMatch.IsSet())
    {
        HttpRequest->SetHeader(TEXT("if-match"), IfMatch.GetValue());
    }

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_AddFriend - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_AddFriend - failed to add bearer token"));
        return false;
    }

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
        // Body parameters
        FString JsonBody;
        TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

        if (Notes.IsSet())
        {
            WriteJsonValue(Writer, Notes.GetValue());
        }
        Writer->Close();

        HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
        HttpRequest->SetContentAsString(JsonBody);
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_AddFriend - Body parameter (FRHAPI_Notes) was ignored, not supported in multipart form"));
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_AddFriend - Body parameter (FRHAPI_Notes) was ignored, not supported in urlencoded requests"));
    }
    else
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_AddFriend - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_AddFriend::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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
    case 412:
        SetResponseString(TEXT("The resource&#39;s Etag does not match the Etag provided. Get the Etag from the Get request and try again"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_AddFriend::ParseHeaders()
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

bool FResponse_AddFriend::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_AddFriend::FResponse_AddFriend(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_AddFriend::Name = TEXT("AddFriend");

FHttpRequestPtr FFriendsV1API::AddNotes(const FRequest_AddNotes& Request, const FDelegate_AddNotes& Delegate /*= FDelegate_AddNotes()*/)
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
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FFriendsV1API::OnAddNotesResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext());
    HttpRequest->ProcessRequest();
    OnRequestStarted().Broadcast(Request.GetRequestMetadata(), HttpRequest);
    return HttpRequest;
}

void FFriendsV1API::OnAddNotesResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_AddNotes Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry)
{
    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        HttpRequest->OnProcessRequestComplete().BindRaw(this, &FFriendsV1API::OnAddNotesResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>());
    }

    FResponse_AddNotes Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response);
    OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    if (!bWillRetryWithRefreshedAuth)
    {
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_AddNotes::FRequest_AddNotes()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
}

FString FRequest_AddNotes::GetSimplifiedPath() const
{
    return FString(TEXT("/friends/v1/player/{player_id}/friend/{other_player_id}/notes"));
}

FString FRequest_AddNotes::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("player_id"), ToStringFormatArg(PlayerId) },
        { TEXT("other_player_id"), ToStringFormatArg(OtherPlayerId) }
    };

    FString Path = FString::Format(TEXT("/friends/v1/player/{player_id}/friend/{other_player_id}/notes"), PathParams);

    return Path;
}

bool FRequest_AddNotes::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = { TEXT("application/json") };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("PUT"));

    // Header parameters
    if (IfMatch.IsSet())
    {
        HttpRequest->SetHeader(TEXT("if-match"), IfMatch.GetValue());
    }

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_AddNotes - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_AddNotes - failed to add bearer token"));
        return false;
    }

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
        // Body parameters
        FString JsonBody;
        TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

        WriteJsonValue(Writer, Notes);
        Writer->Close();

        HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
        HttpRequest->SetContentAsString(JsonBody);
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_AddNotes - Body parameter (FRHAPI_Notes) was ignored, not supported in multipart form"));
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_AddNotes - Body parameter (FRHAPI_Notes) was ignored, not supported in urlencoded requests"));
    }
    else
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_AddNotes - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_AddNotes::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_AddNotes::ParseHeaders()
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

bool FResponse_AddNotes::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_AddNotes::FResponse_AddNotes(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_AddNotes::Name = TEXT("AddNotes");

FHttpRequestPtr FFriendsV1API::DeleteFriend(const FRequest_DeleteFriend& Request, const FDelegate_DeleteFriend& Delegate /*= FDelegate_DeleteFriend()*/)
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
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FFriendsV1API::OnDeleteFriendResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext());
    HttpRequest->ProcessRequest();
    OnRequestStarted().Broadcast(Request.GetRequestMetadata(), HttpRequest);
    return HttpRequest;
}

void FFriendsV1API::OnDeleteFriendResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_DeleteFriend Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry)
{
    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        HttpRequest->OnProcessRequestComplete().BindRaw(this, &FFriendsV1API::OnDeleteFriendResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>());
    }

    FResponse_DeleteFriend Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response);
    OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    if (!bWillRetryWithRefreshedAuth)
    {
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_DeleteFriend::FRequest_DeleteFriend()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
}

FString FRequest_DeleteFriend::GetSimplifiedPath() const
{
    return FString(TEXT("/friends/v1/player/{player_id}/friend/{other_player_id}"));
}

FString FRequest_DeleteFriend::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("player_id"), ToStringFormatArg(PlayerId) },
        { TEXT("other_player_id"), ToStringFormatArg(OtherPlayerId) }
    };

    FString Path = FString::Format(TEXT("/friends/v1/player/{player_id}/friend/{other_player_id}"), PathParams);

    return Path;
}

bool FRequest_DeleteFriend::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("DELETE"));

    // Header parameters
    if (IfMatch.IsSet())
    {
        HttpRequest->SetHeader(TEXT("if-match"), IfMatch.GetValue());
    }

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_DeleteFriend - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_DeleteFriend - failed to add bearer token"));
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_DeleteFriend - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_DeleteFriend::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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
    case 412:
        SetResponseString(TEXT("The resource&#39;s Etag does not match the Etag provided. Get the Etag from the Get request and try again"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_DeleteFriend::ParseHeaders()
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

bool FResponse_DeleteFriend::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return true;
}

FResponse_DeleteFriend::FResponse_DeleteFriend(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_DeleteFriend::Name = TEXT("DeleteFriend");

FHttpRequestPtr FFriendsV1API::DeleteFriends(const FRequest_DeleteFriends& Request, const FDelegate_DeleteFriends& Delegate /*= FDelegate_DeleteFriends()*/)
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
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FFriendsV1API::OnDeleteFriendsResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext());
    HttpRequest->ProcessRequest();
    OnRequestStarted().Broadcast(Request.GetRequestMetadata(), HttpRequest);
    return HttpRequest;
}

void FFriendsV1API::OnDeleteFriendsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_DeleteFriends Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry)
{
    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        HttpRequest->OnProcessRequestComplete().BindRaw(this, &FFriendsV1API::OnDeleteFriendsResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>());
    }

    FResponse_DeleteFriends Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response);
    OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    if (!bWillRetryWithRefreshedAuth)
    {
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_DeleteFriends::FRequest_DeleteFriends()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
}

FString FRequest_DeleteFriends::GetSimplifiedPath() const
{
    return FString(TEXT("/friends/v1/player/{player_id}/friend"));
}

FString FRequest_DeleteFriends::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("player_id"), ToStringFormatArg(PlayerId) }
    };

    FString Path = FString::Format(TEXT("/friends/v1/player/{player_id}/friend"), PathParams);

    return Path;
}

bool FRequest_DeleteFriends::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = { TEXT("application/json") };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("DELETE"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_DeleteFriends - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_DeleteFriends - failed to add bearer token"));
        return false;
    }

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
        // Body parameters
        FString JsonBody;
        TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

        WriteJsonValue(Writer, FriendsV1);
        Writer->Close();

        HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
        HttpRequest->SetContentAsString(JsonBody);
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_DeleteFriends - Body parameter (FRHAPI_FriendsV1) was ignored, not supported in multipart form"));
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_DeleteFriends - Body parameter (FRHAPI_FriendsV1) was ignored, not supported in urlencoded requests"));
    }
    else
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_DeleteFriends - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_DeleteFriends::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_DeleteFriends::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return true;
}

FResponse_DeleteFriends::FResponse_DeleteFriends(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_DeleteFriends::Name = TEXT("DeleteFriends");

FHttpRequestPtr FFriendsV1API::DeleteNotes(const FRequest_DeleteNotes& Request, const FDelegate_DeleteNotes& Delegate /*= FDelegate_DeleteNotes()*/)
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
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FFriendsV1API::OnDeleteNotesResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext());
    HttpRequest->ProcessRequest();
    OnRequestStarted().Broadcast(Request.GetRequestMetadata(), HttpRequest);
    return HttpRequest;
}

void FFriendsV1API::OnDeleteNotesResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_DeleteNotes Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry)
{
    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        HttpRequest->OnProcessRequestComplete().BindRaw(this, &FFriendsV1API::OnDeleteNotesResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>());
    }

    FResponse_DeleteNotes Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response);
    OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    if (!bWillRetryWithRefreshedAuth)
    {
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_DeleteNotes::FRequest_DeleteNotes()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
}

FString FRequest_DeleteNotes::GetSimplifiedPath() const
{
    return FString(TEXT("/friends/v1/player/{player_id}/friend/{other_player_id}/notes"));
}

FString FRequest_DeleteNotes::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("player_id"), ToStringFormatArg(PlayerId) },
        { TEXT("other_player_id"), ToStringFormatArg(OtherPlayerId) }
    };

    FString Path = FString::Format(TEXT("/friends/v1/player/{player_id}/friend/{other_player_id}/notes"), PathParams);

    return Path;
}

bool FRequest_DeleteNotes::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("DELETE"));

    // Header parameters
    if (IfMatch.IsSet())
    {
        HttpRequest->SetHeader(TEXT("if-match"), IfMatch.GetValue());
    }

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_DeleteNotes - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_DeleteNotes - failed to add bearer token"));
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_DeleteNotes - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_DeleteNotes::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_DeleteNotes::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return true;
}

FResponse_DeleteNotes::FResponse_DeleteNotes(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_DeleteNotes::Name = TEXT("DeleteNotes");

FHttpRequestPtr FFriendsV1API::GetFriendRelationship(const FRequest_GetFriendRelationship& Request, const FDelegate_GetFriendRelationship& Delegate /*= FDelegate_GetFriendRelationship()*/)
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
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FFriendsV1API::OnGetFriendRelationshipResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext());
    HttpRequest->ProcessRequest();
    OnRequestStarted().Broadcast(Request.GetRequestMetadata(), HttpRequest);
    return HttpRequest;
}

void FFriendsV1API::OnGetFriendRelationshipResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetFriendRelationship Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry)
{
    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        HttpRequest->OnProcessRequestComplete().BindRaw(this, &FFriendsV1API::OnGetFriendRelationshipResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>());
    }

    FResponse_GetFriendRelationship Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response);
    OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    if (!bWillRetryWithRefreshedAuth)
    {
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_GetFriendRelationship::FRequest_GetFriendRelationship()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
}

FString FRequest_GetFriendRelationship::GetSimplifiedPath() const
{
    return FString(TEXT("/friends/v1/player/{player_id}/friend/{other_player_id}"));
}

FString FRequest_GetFriendRelationship::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("player_id"), ToStringFormatArg(PlayerId) },
        { TEXT("other_player_id"), ToStringFormatArg(OtherPlayerId) }
    };

    FString Path = FString::Format(TEXT("/friends/v1/player/{player_id}/friend/{other_player_id}"), PathParams);

    return Path;
}

bool FRequest_GetFriendRelationship::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetFriendRelationship - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetFriendRelationship - failed to add bearer token"));
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetFriendRelationship - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetFriendRelationship::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_GetFriendRelationship::ParseHeaders()
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

bool FResponse_GetFriendRelationship::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetFriendRelationship::FResponse_GetFriendRelationship(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetFriendRelationship::Name = TEXT("GetFriendRelationship");

FHttpRequestPtr FFriendsV1API::GetFriendsListForPlayer(const FRequest_GetFriendsListForPlayer& Request, const FDelegate_GetFriendsListForPlayer& Delegate /*= FDelegate_GetFriendsListForPlayer()*/)
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
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FFriendsV1API::OnGetFriendsListForPlayerResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext());
    HttpRequest->ProcessRequest();
    OnRequestStarted().Broadcast(Request.GetRequestMetadata(), HttpRequest);
    return HttpRequest;
}

void FFriendsV1API::OnGetFriendsListForPlayerResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetFriendsListForPlayer Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry)
{
    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        HttpRequest->OnProcessRequestComplete().BindRaw(this, &FFriendsV1API::OnGetFriendsListForPlayerResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>());
    }

    FResponse_GetFriendsListForPlayer Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response);
    OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    if (!bWillRetryWithRefreshedAuth)
    {
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_GetFriendsListForPlayer::FRequest_GetFriendsListForPlayer()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
}

FString FRequest_GetFriendsListForPlayer::GetSimplifiedPath() const
{
    return FString(TEXT("/friends/v1/player/{player_id}/friend"));
}

FString FRequest_GetFriendsListForPlayer::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("player_id"), ToStringFormatArg(PlayerId) }
    };

    FString Path = FString::Format(TEXT("/friends/v1/player/{player_id}/friend"), PathParams);

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

bool FRequest_GetFriendsListForPlayer::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetFriendsListForPlayer - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetFriendsListForPlayer - failed to add bearer token"));
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetFriendsListForPlayer - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetFriendsListForPlayer::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_GetFriendsListForPlayer::ParseHeaders()
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

bool FResponse_GetFriendsListForPlayer::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetFriendsListForPlayer::FResponse_GetFriendsListForPlayer(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetFriendsListForPlayer::Name = TEXT("GetFriendsListForPlayer");


}
