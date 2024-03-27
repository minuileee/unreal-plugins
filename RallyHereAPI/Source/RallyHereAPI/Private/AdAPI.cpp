// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "AdAPI.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIHttpRequester.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereAPI
{

FAdAPI::FAdAPI() : FAPI()
{
	Url = TEXT("http://localhost");
	Name = FName(TEXT("Ad"));
}

FAdAPI::~FAdAPI() {}

FHttpRequestPtr FAdAPI::BeginNewSession(const FRequest_BeginNewSession& Request, const FDelegate_BeginNewSession& Delegate /*= FDelegate_BeginNewSession()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
	ResponseDelegate.BindRaw(this, &FAdAPI::OnBeginNewSessionResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FAdAPI::OnBeginNewSessionResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_BeginNewSession Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindRaw(this, &FAdAPI::OnBeginNewSessionResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_BeginNewSession Response{ RequestMetadata };
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

FRequest_BeginNewSession::FRequest_BeginNewSession()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
	RequestMetadata.CreateTimestamp = FDateTime::Now();
}

FName FRequest_BeginNewSession::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/ad/v1/session"));
	return Path;
}

FString FRequest_BeginNewSession::ComputePath() const
{
	FString Path = GetSimplifiedPath().ToString();
	return Path;
}

bool FRequest_BeginNewSession::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Header parameters
	if (XHzAdApiToken.IsSet())
	{
		HttpRequest->SetHeader(TEXT("x-hz-ad-api-token"), XHzAdApiToken.GetValue());
	}

	if (!AuthContext)
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_BeginNewSession - missing auth context"));
		return false;
	}
	if (!AuthContext->AddBearerToken(HttpRequest))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_BeginNewSession - failed to add bearer token"));
		return false;
	}

	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
	{
		// Body parameters
		FString JsonBody;
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, BodyBeginNewSession);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_BeginNewSession - Body parameter (FRHAPI_BodyBeginNewSession) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_BeginNewSession - Body parameter (FRHAPI_BodyBeginNewSession) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_BeginNewSession - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

FString FResponse_BeginNewSession::GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const
{
	switch ((int)InHttpResponseCode)
	{
	case 200:
		return TEXT("Successful Response");
	case 403:
		return TEXT("Forbidden");
	case 422:
		return TEXT("Validation Error");
	case 500:
		return TEXT("Internal Server Error");
	}
	
	return FResponse::GetHttpResponseCodeDescription(InHttpResponseCode);
}

bool FResponse_BeginNewSession::ParseHeaders()
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
	if (const FString* Val = HeadersMap.Find(TEXT("x-hz-ad-api-token")))
	{
		XHzAdApiToken = *Val;
	}
	return bParsedAllRequiredHeaders;
}

bool FResponse_BeginNewSession::TryGetContentFor200(FRHAPI_JsonValue& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

/* Provide this token to future requests for the same user to make their requests faster (as a new token doesn't need to be generated) */
TOptional<FString> FResponse_BeginNewSession::GetHeader200_XHzAdApiToken() const
{
	if (HttpResponse)
	{
		FString HeaderVal = HttpResponse->GetHeader(TEXT("x-hz-ad-api-token"));
		if (!HeaderVal.IsEmpty())
		{
			return FromHeaderString<FString>(HeaderVal);
		}
	}
	return TOptional<FString>{};
}

bool FResponse_BeginNewSession::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_BeginNewSession::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

/* Provide this token to future requests for the same user to make their requests faster (as a new token doesn't need to be generated) */
TOptional<FString> FResponse_BeginNewSession::GetHeader500_XHzAdApiToken() const
{
	if (HttpResponse)
	{
		FString HeaderVal = HttpResponse->GetHeader(TEXT("x-hz-ad-api-token"));
		if (!HeaderVal.IsEmpty())
		{
			return FromHeaderString<FString>(HeaderVal);
		}
	}
	return TOptional<FString>{};
}

bool FResponse_BeginNewSession::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_BeginNewSession::FResponse_BeginNewSession(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_BeginNewSession::Name = TEXT("BeginNewSession");

FHttpRequestPtr FAdAPI::FindOpportunities(const FRequest_FindOpportunities& Request, const FDelegate_FindOpportunities& Delegate /*= FDelegate_FindOpportunities()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
	ResponseDelegate.BindRaw(this, &FAdAPI::OnFindOpportunitiesResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FAdAPI::OnFindOpportunitiesResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_FindOpportunities Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindRaw(this, &FAdAPI::OnFindOpportunitiesResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_FindOpportunities Response{ RequestMetadata };
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

FRequest_FindOpportunities::FRequest_FindOpportunities()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
	RequestMetadata.CreateTimestamp = FDateTime::Now();
}

FName FRequest_FindOpportunities::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/ad/v1/opportunity"));
	return Path;
}

FString FRequest_FindOpportunities::ComputePath() const
{
	FString Path = GetSimplifiedPath().ToString();
	return Path;
}

bool FRequest_FindOpportunities::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Header parameters
	if (XHzAdApiToken.IsSet())
	{
		HttpRequest->SetHeader(TEXT("x-hz-ad-api-token"), XHzAdApiToken.GetValue());
	}

	if (!AuthContext)
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_FindOpportunities - missing auth context"));
		return false;
	}
	if (!AuthContext->AddBearerToken(HttpRequest))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_FindOpportunities - failed to add bearer token"));
		return false;
	}

	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
	{
		// Body parameters
		FString JsonBody;
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, BodyFindOpportunities);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_FindOpportunities - Body parameter (FRHAPI_BodyFindOpportunities) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_FindOpportunities - Body parameter (FRHAPI_BodyFindOpportunities) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_FindOpportunities - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

FString FResponse_FindOpportunities::GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const
{
	switch ((int)InHttpResponseCode)
	{
	case 200:
		return TEXT("Successful Response");
	case 403:
		return TEXT("Forbidden");
	case 422:
		return TEXT("Validation Error");
	case 500:
		return TEXT("Internal Server Error");
	}
	
	return FResponse::GetHttpResponseCodeDescription(InHttpResponseCode);
}

bool FResponse_FindOpportunities::ParseHeaders()
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
	if (const FString* Val = HeadersMap.Find(TEXT("x-hz-ad-api-token")))
	{
		XHzAdApiToken = *Val;
	}
	return bParsedAllRequiredHeaders;
}

bool FResponse_FindOpportunities::TryGetContentFor200(FRHAPI_AdOpportunities& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

/* Provide this token to future requests for the same user to make their requests faster (as a new token doesn't need to be generated) */
TOptional<FString> FResponse_FindOpportunities::GetHeader200_XHzAdApiToken() const
{
	if (HttpResponse)
	{
		FString HeaderVal = HttpResponse->GetHeader(TEXT("x-hz-ad-api-token"));
		if (!HeaderVal.IsEmpty())
		{
			return FromHeaderString<FString>(HeaderVal);
		}
	}
	return TOptional<FString>{};
}

bool FResponse_FindOpportunities::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_FindOpportunities::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

/* Provide this token to future requests for the same user to make their requests faster (as a new token doesn't need to be generated) */
TOptional<FString> FResponse_FindOpportunities::GetHeader500_XHzAdApiToken() const
{
	if (HttpResponse)
	{
		FString HeaderVal = HttpResponse->GetHeader(TEXT("x-hz-ad-api-token"));
		if (!HeaderVal.IsEmpty())
		{
			return FromHeaderString<FString>(HeaderVal);
		}
	}
	return TOptional<FString>{};
}

bool FResponse_FindOpportunities::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_FindOpportunities::FResponse_FindOpportunities(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_FindOpportunities::Name = TEXT("FindOpportunities");

FHttpRequestPtr FAdAPI::UnityAdWatched(const FRequest_UnityAdWatched& Request, const FDelegate_UnityAdWatched& Delegate /*= FDelegate_UnityAdWatched()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
	ResponseDelegate.BindRaw(this, &FAdAPI::OnUnityAdWatchedResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FAdAPI::OnUnityAdWatchedResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UnityAdWatched Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindRaw(this, &FAdAPI::OnUnityAdWatchedResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_UnityAdWatched Response{ RequestMetadata };
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

FRequest_UnityAdWatched::FRequest_UnityAdWatched()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
	RequestMetadata.CreateTimestamp = FDateTime::Now();
}

FName FRequest_UnityAdWatched::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/ad/v1/unity/ad/watched"));
	return Path;
}

FString FRequest_UnityAdWatched::ComputePath() const
{
	FString Path = GetSimplifiedPath().ToString();
	TArray<FString> QueryParams;
	QueryParams.Add(FString(TEXT("productid=")) + ToUrlString(Productid));
	QueryParams.Add(FString(TEXT("sid=")) + ToUrlString(Sid));
	QueryParams.Add(FString(TEXT("oid=")) + ToUrlString(Oid));
	QueryParams.Add(FString(TEXT("hmac=")) + ToUrlString(Hmac));
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

bool FRequest_UnityAdWatched::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("text/plain"), TEXT("application/json") };

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
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_UnityAdWatched - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

FString FResponse_UnityAdWatched::GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const
{
	switch ((int)InHttpResponseCode)
	{
	case 200:
		return TEXT("Successful Response");
	case 422:
		return TEXT("Validation Error");
	}
	
	return FResponse::GetHttpResponseCodeDescription(InHttpResponseCode);
}

bool FResponse_UnityAdWatched::TryGetContentFor200(FString& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_UnityAdWatched::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_UnityAdWatched::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_UnityAdWatched::FResponse_UnityAdWatched(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_UnityAdWatched::Name = TEXT("UnityAdWatched");

FHttpRequestPtr FAdAPI::UnityMediationAdWatched(const FRequest_UnityMediationAdWatched& Request, const FDelegate_UnityMediationAdWatched& Delegate /*= FDelegate_UnityMediationAdWatched()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
	ResponseDelegate.BindRaw(this, &FAdAPI::OnUnityMediationAdWatchedResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FAdAPI::OnUnityMediationAdWatchedResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UnityMediationAdWatched Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindRaw(this, &FAdAPI::OnUnityMediationAdWatchedResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_UnityMediationAdWatched Response{ RequestMetadata };
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

FRequest_UnityMediationAdWatched::FRequest_UnityMediationAdWatched()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
	RequestMetadata.CreateTimestamp = FDateTime::Now();
}

FName FRequest_UnityMediationAdWatched::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/ad/v1/unity/mediation/watched"));
	return Path;
}

FString FRequest_UnityMediationAdWatched::ComputePath() const
{
	FString Path = GetSimplifiedPath().ToString();
	TArray<FString> QueryParams;
	QueryParams.Add(FString(TEXT("customized_data=")) + ToUrlString(CustomizedData));
	QueryParams.Add(FString(TEXT("userId=")) + ToUrlString(UserId));
	QueryParams.Add(FString(TEXT("eventId=")) + ToUrlString(EventId));
	QueryParams.Add(FString(TEXT("timestamp=")) + ToUrlString(Timestamp));
	QueryParams.Add(FString(TEXT("signature=")) + ToUrlString(Signature));
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

bool FRequest_UnityMediationAdWatched::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("text/plain"), TEXT("application/json") };

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
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_UnityMediationAdWatched - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

FString FResponse_UnityMediationAdWatched::GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const
{
	switch ((int)InHttpResponseCode)
	{
	case 200:
		return TEXT("Successful Response");
	case 422:
		return TEXT("Validation Error");
	}
	
	return FResponse::GetHttpResponseCodeDescription(InHttpResponseCode);
}

bool FResponse_UnityMediationAdWatched::TryGetContentFor200(FString& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_UnityMediationAdWatched::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_UnityMediationAdWatched::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_UnityMediationAdWatched::FResponse_UnityMediationAdWatched(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_UnityMediationAdWatched::Name = TEXT("UnityMediationAdWatched");

FHttpRequestPtr FAdAPI::UpdateOpportunityById(const FRequest_UpdateOpportunityById& Request, const FDelegate_UpdateOpportunityById& Delegate /*= FDelegate_UpdateOpportunityById()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
	ResponseDelegate.BindRaw(this, &FAdAPI::OnUpdateOpportunityByIdResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FAdAPI::OnUpdateOpportunityByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UpdateOpportunityById Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindRaw(this, &FAdAPI::OnUpdateOpportunityByIdResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_UpdateOpportunityById Response{ RequestMetadata };
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

FRequest_UpdateOpportunityById::FRequest_UpdateOpportunityById()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
	RequestMetadata.CreateTimestamp = FDateTime::Now();
}

FName FRequest_UpdateOpportunityById::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/ad/v1/opportunity/{opportunity_id}"));
	return Path;
}

FString FRequest_UpdateOpportunityById::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
		{ TEXT("opportunity_id"), ToStringFormatArg(OpportunityId) }
	};

	FString Path = FString::Format(TEXT("/ad/v1/opportunity/{opportunity_id}"), PathParams);

	return Path;
}

bool FRequest_UpdateOpportunityById::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Header parameters
	if (XHzAdApiToken.IsSet())
	{
		HttpRequest->SetHeader(TEXT("x-hz-ad-api-token"), XHzAdApiToken.GetValue());
	}

	if (!AuthContext)
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_UpdateOpportunityById - missing auth context"));
		return false;
	}
	if (!AuthContext->AddBearerToken(HttpRequest))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_UpdateOpportunityById - failed to add bearer token"));
		return false;
	}

	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
	{
		// Body parameters
		FString JsonBody;
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, BodyUpdateOpportunityById);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_UpdateOpportunityById - Body parameter (FRHAPI_BodyUpdateOpportunityById) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_UpdateOpportunityById - Body parameter (FRHAPI_BodyUpdateOpportunityById) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_UpdateOpportunityById - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

FString FResponse_UpdateOpportunityById::GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const
{
	switch ((int)InHttpResponseCode)
	{
	case 200:
		return TEXT("Successful Response");
	case 403:
		return TEXT("Forbidden");
	case 422:
		return TEXT("Validation Error");
	case 500:
		return TEXT("Internal Server Error");
	}
	
	return FResponse::GetHttpResponseCodeDescription(InHttpResponseCode);
}

bool FResponse_UpdateOpportunityById::ParseHeaders()
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
	if (const FString* Val = HeadersMap.Find(TEXT("x-hz-ad-api-token")))
	{
		XHzAdApiToken = *Val;
	}
	return bParsedAllRequiredHeaders;
}

bool FResponse_UpdateOpportunityById::TryGetContentFor200(FRHAPI_JsonValue& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

/* Provide this token to future requests for the same user to make their requests faster (as a new token doesn't need to be generated) */
TOptional<FString> FResponse_UpdateOpportunityById::GetHeader200_XHzAdApiToken() const
{
	if (HttpResponse)
	{
		FString HeaderVal = HttpResponse->GetHeader(TEXT("x-hz-ad-api-token"));
		if (!HeaderVal.IsEmpty())
		{
			return FromHeaderString<FString>(HeaderVal);
		}
	}
	return TOptional<FString>{};
}

bool FResponse_UpdateOpportunityById::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_UpdateOpportunityById::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

/* Provide this token to future requests for the same user to make their requests faster (as a new token doesn't need to be generated) */
TOptional<FString> FResponse_UpdateOpportunityById::GetHeader500_XHzAdApiToken() const
{
	if (HttpResponse)
	{
		FString HeaderVal = HttpResponse->GetHeader(TEXT("x-hz-ad-api-token"));
		if (!HeaderVal.IsEmpty())
		{
			return FromHeaderString<FString>(HeaderVal);
		}
	}
	return TOptional<FString>{};
}

bool FResponse_UpdateOpportunityById::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_UpdateOpportunityById::FResponse_UpdateOpportunityById(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_UpdateOpportunityById::Name = TEXT("UpdateOpportunityById");


}
