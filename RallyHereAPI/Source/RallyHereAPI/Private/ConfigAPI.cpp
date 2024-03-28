// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "ConfigAPI.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIHttpRequester.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereAPI
{

FConfigAPI::FConfigAPI() : FAPI()
{
	Url = TEXT("http://localhost");
	Name = FName(TEXT("Config"));
}

FConfigAPI::~FConfigAPI() {}

FHttpRequestPtr FConfigAPI::GetAppSettingsAll(const FRequest_GetAppSettingsAll& Request, const FDelegate_GetAppSettingsAll& Delegate /*= FDelegate_GetAppSettingsAll()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
{
	if (!IsValid())
		return nullptr;

	TSharedPtr<FRallyHereAPIHttpRequestData> RequestData = MakeShared<FRallyHereAPIHttpRequestData>(CreateHttpRequest(Request), AsShared(), Priority);
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
	ResponseDelegate.BindSP(this, &FConfigAPI::OnGetAppSettingsAllResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FConfigAPI::OnGetAppSettingsAllResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAppSettingsAll Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindSP(this, &FConfigAPI::OnGetAppSettingsAllResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_GetAppSettingsAll Response{ RequestMetadata };
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

FRequest_GetAppSettingsAll::FRequest_GetAppSettingsAll()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
}

FName FRequest_GetAppSettingsAll::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/config/v1/kv"));
	return Path;
}

FString FRequest_GetAppSettingsAll::ComputePath() const
{
	FString Path = GetSimplifiedPath().ToString();
	TArray<FString> QueryParams;
	if(KeysToInclude.IsSet())
	{
		QueryParams.Add(FString(TEXT("keys_to_include=")) + CollectionToUrlString_multi(KeysToInclude.GetValue(), TEXT("keys_to_include")));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

bool FRequest_GetAppSettingsAll::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAppSettingsAll - missing auth context"));
		return false;
	}
	if (!AuthContext->AddBearerToken(HttpRequest))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAppSettingsAll - failed to add bearer token"));
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
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAppSettingsAll - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

FString FResponse_GetAppSettingsAll::GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const
{
	switch ((int)InHttpResponseCode)
	{
	case 200:
		return TEXT("Successful Response");
	case 304:
		return TEXT("Content still has the same etag and has not changed");
	case 422:
		return TEXT("Validation Error");
	}
	
	return FResponse::GetHttpResponseCodeDescription(InHttpResponseCode);
}

bool FResponse_GetAppSettingsAll::ParseHeaders()
{
	// The IHttpBase::GetHeader function doesn't distinguish between missing and empty, so we need to parse ourselves
	TMap<FString, FString> HeadersMap;
	for (const auto& HeaderStr : HttpResponse->GetAllHeaders())
	{
		int32 index;
		if (HeaderStr.FindChar(TEXT(':'), index))
		{
			// if there is a space after the colon, skip it
			HeadersMap.Add(HeaderStr.Mid(0, index), HeaderStr.Mid(index + 1).TrimStartAndEnd());
		}
	}
	bool bParsedAllRequiredHeaders = true;
	if (const FString* Val = HeadersMap.Find(TEXT("ETag")))
	{
		ETag = *Val;
	}
	return bParsedAllRequiredHeaders;
}

bool FResponse_GetAppSettingsAll::TryGetContentFor200(FRHAPI_KVsResponse& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

/* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
TOptional<FString> FResponse_GetAppSettingsAll::GetHeader200_ETag() const
{
	if (HttpResponse)
	{
		FString HeaderVal = HttpResponse->GetHeader(TEXT("ETag"));
		if (!HeaderVal.IsEmpty())
		{
			return FromHeaderString<FString>(HeaderVal);
		}
	}
	return TOptional<FString>{};
}

bool FResponse_GetAppSettingsAll::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetAppSettingsAll::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetAppSettingsAll::FResponse_GetAppSettingsAll(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetAppSettingsAll::Name = TEXT("GetAppSettingsAll");

FHttpRequestPtr FConfigAPI::GetAppSettingsClient(const FRequest_GetAppSettingsClient& Request, const FDelegate_GetAppSettingsClient& Delegate /*= FDelegate_GetAppSettingsClient()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
{
	if (!IsValid())
		return nullptr;

	TSharedPtr<FRallyHereAPIHttpRequestData> RequestData = MakeShared<FRallyHereAPIHttpRequestData>(CreateHttpRequest(Request), AsShared(), Priority);
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
	ResponseDelegate.BindSP(this, &FConfigAPI::OnGetAppSettingsClientResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FConfigAPI::OnGetAppSettingsClientResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAppSettingsClient Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindSP(this, &FConfigAPI::OnGetAppSettingsClientResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_GetAppSettingsClient Response{ RequestMetadata };
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

FRequest_GetAppSettingsClient::FRequest_GetAppSettingsClient()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
}

FName FRequest_GetAppSettingsClient::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/config/v1/app_settings/client"));
	return Path;
}

FString FRequest_GetAppSettingsClient::ComputePath() const
{
	FString Path = GetSimplifiedPath().ToString();
	return Path;
}

bool FRequest_GetAppSettingsClient::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Header parameters
	if (IfNoneMatch.IsSet())
	{
		HttpRequest->SetHeader(TEXT("if-none-match"), IfNoneMatch.GetValue());
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
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAppSettingsClient - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

FString FResponse_GetAppSettingsClient::GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const
{
	switch ((int)InHttpResponseCode)
	{
	case 200:
		return TEXT("Successful Response");
	case 304:
		return TEXT("Content still has the same etag and has not changed");
	case 422:
		return TEXT("Validation Error");
	}
	
	return FResponse::GetHttpResponseCodeDescription(InHttpResponseCode);
}

bool FResponse_GetAppSettingsClient::ParseHeaders()
{
	// The IHttpBase::GetHeader function doesn't distinguish between missing and empty, so we need to parse ourselves
	TMap<FString, FString> HeadersMap;
	for (const auto& HeaderStr : HttpResponse->GetAllHeaders())
	{
		int32 index;
		if (HeaderStr.FindChar(TEXT(':'), index))
		{
			// if there is a space after the colon, skip it
			HeadersMap.Add(HeaderStr.Mid(0, index), HeaderStr.Mid(index + 1).TrimStartAndEnd());
		}
	}
	bool bParsedAllRequiredHeaders = true;
	if (const FString* Val = HeadersMap.Find(TEXT("ETag")))
	{
		ETag = *Val;
	}
	return bParsedAllRequiredHeaders;
}

bool FResponse_GetAppSettingsClient::TryGetContentFor200(TArray<FRHAPI_AppSetting>& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

/* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
TOptional<FString> FResponse_GetAppSettingsClient::GetHeader200_ETag() const
{
	if (HttpResponse)
	{
		FString HeaderVal = HttpResponse->GetHeader(TEXT("ETag"));
		if (!HeaderVal.IsEmpty())
		{
			return FromHeaderString<FString>(HeaderVal);
		}
	}
	return TOptional<FString>{};
}

bool FResponse_GetAppSettingsClient::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetAppSettingsClient::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetAppSettingsClient::FResponse_GetAppSettingsClient(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetAppSettingsClient::Name = TEXT("GetAppSettingsClient");

FHttpRequestPtr FConfigAPI::GetAppSettingsServer(const FRequest_GetAppSettingsServer& Request, const FDelegate_GetAppSettingsServer& Delegate /*= FDelegate_GetAppSettingsServer()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
{
	if (!IsValid())
		return nullptr;

	TSharedPtr<FRallyHereAPIHttpRequestData> RequestData = MakeShared<FRallyHereAPIHttpRequestData>(CreateHttpRequest(Request), AsShared(), Priority);
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
	ResponseDelegate.BindSP(this, &FConfigAPI::OnGetAppSettingsServerResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FConfigAPI::OnGetAppSettingsServerResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAppSettingsServer Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindSP(this, &FConfigAPI::OnGetAppSettingsServerResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_GetAppSettingsServer Response{ RequestMetadata };
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

FRequest_GetAppSettingsServer::FRequest_GetAppSettingsServer()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
}

FName FRequest_GetAppSettingsServer::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/config/v1/app_settings/server"));
	return Path;
}

FString FRequest_GetAppSettingsServer::ComputePath() const
{
	FString Path = GetSimplifiedPath().ToString();
	return Path;
}

bool FRequest_GetAppSettingsServer::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAppSettingsServer - missing auth context"));
		return false;
	}
	if (!AuthContext->AddBearerToken(HttpRequest))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAppSettingsServer - failed to add bearer token"));
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
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAppSettingsServer - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

FString FResponse_GetAppSettingsServer::GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const
{
	switch ((int)InHttpResponseCode)
	{
	case 200:
		return TEXT("Successful Response");
	case 304:
		return TEXT("Content still has the same etag and has not changed");
	case 403:
		return TEXT("Forbidden");
	case 422:
		return TEXT("Validation Error");
	}
	
	return FResponse::GetHttpResponseCodeDescription(InHttpResponseCode);
}

bool FResponse_GetAppSettingsServer::ParseHeaders()
{
	// The IHttpBase::GetHeader function doesn't distinguish between missing and empty, so we need to parse ourselves
	TMap<FString, FString> HeadersMap;
	for (const auto& HeaderStr : HttpResponse->GetAllHeaders())
	{
		int32 index;
		if (HeaderStr.FindChar(TEXT(':'), index))
		{
			// if there is a space after the colon, skip it
			HeadersMap.Add(HeaderStr.Mid(0, index), HeaderStr.Mid(index + 1).TrimStartAndEnd());
		}
	}
	bool bParsedAllRequiredHeaders = true;
	if (const FString* Val = HeadersMap.Find(TEXT("ETag")))
	{
		ETag = *Val;
	}
	return bParsedAllRequiredHeaders;
}

bool FResponse_GetAppSettingsServer::TryGetContentFor200(TArray<FRHAPI_AppSetting>& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

/* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
TOptional<FString> FResponse_GetAppSettingsServer::GetHeader200_ETag() const
{
	if (HttpResponse)
	{
		FString HeaderVal = HttpResponse->GetHeader(TEXT("ETag"));
		if (!HeaderVal.IsEmpty())
		{
			return FromHeaderString<FString>(HeaderVal);
		}
	}
	return TOptional<FString>{};
}

bool FResponse_GetAppSettingsServer::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetAppSettingsServer::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetAppSettingsServer::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetAppSettingsServer::FResponse_GetAppSettingsServer(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetAppSettingsServer::Name = TEXT("GetAppSettingsServer");


}
