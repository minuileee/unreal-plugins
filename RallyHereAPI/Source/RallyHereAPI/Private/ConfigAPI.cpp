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

	// create the http request and tracking structure
	TSharedPtr<FRallyHereAPIHttpRequestData> RequestData = MakeShared<FRallyHereAPIHttpRequestData>(CreateHttpRequest(Request), AsShared(), Priority);
	RequestData->HttpRequest->SetURL(*(Url + Request.ComputePath()));

	// add headers to tracker
	for(const auto& It : AdditionalHeaderParams)
	{
		RequestData->HttpRequest->SetHeader(It.Key, It.Value);
	}

	// setup http request from custom request object
	if (!Request.SetupHttpRequest(RequestData->HttpRequest))
	{
		return nullptr;
	}
	
	// allow a delegate to modify the http request (such as binding custom handling delegates)
	Request.OnModifyRequest().Broadcast(Request, RequestData->HttpRequest);
	
	// update request metadata flags just before we store it in the tracking object
	FRequestMetadata Metadata = Request.GetRequestMetadata();
	Request.SetMetadataFlags(Metadata);

	// store metadata in tracking object (last place used by request)
	RequestData->SetMetadata(Metadata);

	// bind response handler
	FHttpRequestCompleteDelegate ResponseDelegate;
	ResponseDelegate.BindSP(this, &FConfigAPI::OnGetAppSettingsAllResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	// submit request to http system
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
	: FRequest()
{
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.SimplifiedPathWithVerb = GetSimplifiedPathWithVerb();
}

FName FRequest_GetAppSettingsAll::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/config/v1/kv"));
	return Path;
}

FName FRequest_GetAppSettingsAll::GetSimplifiedPathWithVerb() const
{
	static FName PathWithVerb = FName(*FString::Printf(TEXT("GET %s"), *GetSimplifiedPath().ToString()));
	return PathWithVerb;
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
	if (IfMatch.IsSet())
	{
		HttpRequest->SetHeader(TEXT("if-match"), IfMatch.GetValue());
	}

	if (!AuthContext && !bDisableAuthRequirement)
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAppSettingsAll - missing auth context"));
		return false;
	}
	if (AuthContext && !AuthContext->AddBearerToken(HttpRequest) && !bDisableAuthRequirement)
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
	case 412:
		return TEXT("Content has changed since the ETag was provided");
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

bool FResponse_GetAppSettingsAll::TryGetContentFor200(FRHAPI_KVsResponseV1& OutContent) const
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

	// create the http request and tracking structure
	TSharedPtr<FRallyHereAPIHttpRequestData> RequestData = MakeShared<FRallyHereAPIHttpRequestData>(CreateHttpRequest(Request), AsShared(), Priority);
	RequestData->HttpRequest->SetURL(*(Url + Request.ComputePath()));

	// add headers to tracker
	for(const auto& It : AdditionalHeaderParams)
	{
		RequestData->HttpRequest->SetHeader(It.Key, It.Value);
	}

	// setup http request from custom request object
	if (!Request.SetupHttpRequest(RequestData->HttpRequest))
	{
		return nullptr;
	}
	
	// allow a delegate to modify the http request (such as binding custom handling delegates)
	Request.OnModifyRequest().Broadcast(Request, RequestData->HttpRequest);
	
	// update request metadata flags just before we store it in the tracking object
	FRequestMetadata Metadata = Request.GetRequestMetadata();
	Request.SetMetadataFlags(Metadata);

	// store metadata in tracking object (last place used by request)
	RequestData->SetMetadata(Metadata);

	// bind response handler
	FHttpRequestCompleteDelegate ResponseDelegate;
	ResponseDelegate.BindSP(this, &FConfigAPI::OnGetAppSettingsClientResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	// submit request to http system
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
	: FRequest()
{
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.SimplifiedPathWithVerb = GetSimplifiedPathWithVerb();
}

FName FRequest_GetAppSettingsClient::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/config/v1/app_settings/client"));
	return Path;
}

FName FRequest_GetAppSettingsClient::GetSimplifiedPathWithVerb() const
{
	static FName PathWithVerb = FName(*FString::Printf(TEXT("GET %s"), *GetSimplifiedPath().ToString()));
	return PathWithVerb;
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
	if (IfMatch.IsSet())
	{
		HttpRequest->SetHeader(TEXT("if-match"), IfMatch.GetValue());
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
	case 412:
		return TEXT("Content has changed since the ETag was provided");
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

bool FResponse_GetAppSettingsClient::TryGetContentFor200(TArray<FRHAPI_KVV1>& OutContent) const
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

	// create the http request and tracking structure
	TSharedPtr<FRallyHereAPIHttpRequestData> RequestData = MakeShared<FRallyHereAPIHttpRequestData>(CreateHttpRequest(Request), AsShared(), Priority);
	RequestData->HttpRequest->SetURL(*(Url + Request.ComputePath()));

	// add headers to tracker
	for(const auto& It : AdditionalHeaderParams)
	{
		RequestData->HttpRequest->SetHeader(It.Key, It.Value);
	}

	// setup http request from custom request object
	if (!Request.SetupHttpRequest(RequestData->HttpRequest))
	{
		return nullptr;
	}
	
	// allow a delegate to modify the http request (such as binding custom handling delegates)
	Request.OnModifyRequest().Broadcast(Request, RequestData->HttpRequest);
	
	// update request metadata flags just before we store it in the tracking object
	FRequestMetadata Metadata = Request.GetRequestMetadata();
	Request.SetMetadataFlags(Metadata);

	// store metadata in tracking object (last place used by request)
	RequestData->SetMetadata(Metadata);

	// bind response handler
	FHttpRequestCompleteDelegate ResponseDelegate;
	ResponseDelegate.BindSP(this, &FConfigAPI::OnGetAppSettingsServerResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	// submit request to http system
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
	: FRequest()
{
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.SimplifiedPathWithVerb = GetSimplifiedPathWithVerb();
}

FName FRequest_GetAppSettingsServer::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/config/v1/app_settings/server"));
	return Path;
}

FName FRequest_GetAppSettingsServer::GetSimplifiedPathWithVerb() const
{
	static FName PathWithVerb = FName(*FString::Printf(TEXT("GET %s"), *GetSimplifiedPath().ToString()));
	return PathWithVerb;
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
	if (IfMatch.IsSet())
	{
		HttpRequest->SetHeader(TEXT("if-match"), IfMatch.GetValue());
	}

	if (!AuthContext && !bDisableAuthRequirement)
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAppSettingsServer - missing auth context"));
		return false;
	}
	if (AuthContext && !AuthContext->AddBearerToken(HttpRequest) && !bDisableAuthRequirement)
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
		return TEXT(" Error Codes: - &#x60;auth_invalid_key_id&#x60; - Invalid Authorization - Invalid Key ID in Access Token - &#x60;auth_invalid_version&#x60; - Invalid Authorization - version - &#x60;auth_malformed_access&#x60; - Invalid Authorization - malformed access token - &#x60;auth_not_jwt&#x60; - Invalid Authorization - &#x60;auth_token_expired&#x60; - Token is expired - &#x60;auth_token_format&#x60; - Invalid Authorization - {} - &#x60;auth_token_invalid_claim&#x60; - Token contained invalid claim value: {} - &#x60;auth_token_sig_invalid&#x60; - Token Signature is invalid - &#x60;auth_token_unknown&#x60; - Failed to parse token - &#x60;insufficient_permissions&#x60; - Insufficient Permissions ");
	case 412:
		return TEXT("Content has changed since the ETag was provided");
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

bool FResponse_GetAppSettingsServer::TryGetContentFor200(TArray<FRHAPI_KVV1>& OutContent) const
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

FHttpRequestPtr FConfigAPI::GetKvsV2(const FRequest_GetKvsV2& Request, const FDelegate_GetKvsV2& Delegate /*= FDelegate_GetKvsV2()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
{
	if (!IsValid())
		return nullptr;

	// create the http request and tracking structure
	TSharedPtr<FRallyHereAPIHttpRequestData> RequestData = MakeShared<FRallyHereAPIHttpRequestData>(CreateHttpRequest(Request), AsShared(), Priority);
	RequestData->HttpRequest->SetURL(*(Url + Request.ComputePath()));

	// add headers to tracker
	for(const auto& It : AdditionalHeaderParams)
	{
		RequestData->HttpRequest->SetHeader(It.Key, It.Value);
	}

	// setup http request from custom request object
	if (!Request.SetupHttpRequest(RequestData->HttpRequest))
	{
		return nullptr;
	}
	
	// allow a delegate to modify the http request (such as binding custom handling delegates)
	Request.OnModifyRequest().Broadcast(Request, RequestData->HttpRequest);
	
	// update request metadata flags just before we store it in the tracking object
	FRequestMetadata Metadata = Request.GetRequestMetadata();
	Request.SetMetadataFlags(Metadata);

	// store metadata in tracking object (last place used by request)
	RequestData->SetMetadata(Metadata);

	// bind response handler
	FHttpRequestCompleteDelegate ResponseDelegate;
	ResponseDelegate.BindSP(this, &FConfigAPI::OnGetKvsV2Response, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	// submit request to http system
	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FConfigAPI::OnGetKvsV2Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetKvsV2 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindSP(this, &FConfigAPI::OnGetKvsV2Response, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_GetKvsV2 Response{ RequestMetadata };
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

FRequest_GetKvsV2::FRequest_GetKvsV2()
	: FRequest()
{
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.SimplifiedPathWithVerb = GetSimplifiedPathWithVerb();
}

FName FRequest_GetKvsV2::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/config/v2/kv"));
	return Path;
}

FName FRequest_GetKvsV2::GetSimplifiedPathWithVerb() const
{
	static FName PathWithVerb = FName(*FString::Printf(TEXT("GET %s"), *GetSimplifiedPath().ToString()));
	return PathWithVerb;
}

FString FRequest_GetKvsV2::ComputePath() const
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

bool FRequest_GetKvsV2::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Header parameters
	if (IfNoneMatch.IsSet())
	{
		HttpRequest->SetHeader(TEXT("if-none-match"), IfNoneMatch.GetValue());
	}
	if (IfMatch.IsSet())
	{
		HttpRequest->SetHeader(TEXT("if-match"), IfMatch.GetValue());
	}

	if (!AuthContext && !bDisableAuthRequirement)
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetKvsV2 - missing auth context"));
		return false;
	}
	if (AuthContext && !AuthContext->AddBearerToken(HttpRequest) && !bDisableAuthRequirement)
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetKvsV2 - failed to add bearer token"));
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
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetKvsV2 - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

FString FResponse_GetKvsV2::GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const
{
	switch ((int)InHttpResponseCode)
	{
	case 200:
		return TEXT("Successful Response");
	case 304:
		return TEXT("Content still has the same etag and has not changed");
	case 412:
		return TEXT("Content has changed since the ETag was provided");
	case 422:
		return TEXT("Validation Error");
	}
	
	return FResponse::GetHttpResponseCodeDescription(InHttpResponseCode);
}

bool FResponse_GetKvsV2::ParseHeaders()
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

bool FResponse_GetKvsV2::TryGetContentFor200(FRHAPI_KVsResponseV2& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

/* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
TOptional<FString> FResponse_GetKvsV2::GetHeader200_ETag() const
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

bool FResponse_GetKvsV2::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetKvsV2::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetKvsV2::FResponse_GetKvsV2(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetKvsV2::Name = TEXT("GetKvsV2");


}
