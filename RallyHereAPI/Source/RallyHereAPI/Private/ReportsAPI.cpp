// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "ReportsAPI.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIHttpRequester.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereAPI
{

FReportsAPI::FReportsAPI() : FAPI()
{
	Url = TEXT("http://localhost");
	Name = FName(TEXT("Reports"));
}

FReportsAPI::~FReportsAPI() {}

FHttpRequestPtr FReportsAPI::CreateReportForTargetPlayerUuid(const FRequest_CreateReportForTargetPlayerUuid& Request, const FDelegate_CreateReportForTargetPlayerUuid& Delegate /*= FDelegate_CreateReportForTargetPlayerUuid()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
	ResponseDelegate.BindRaw(this, &FReportsAPI::OnCreateReportForTargetPlayerUuidResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FReportsAPI::OnCreateReportForTargetPlayerUuidResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_CreateReportForTargetPlayerUuid Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindRaw(this, &FReportsAPI::OnCreateReportForTargetPlayerUuidResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_CreateReportForTargetPlayerUuid Response{ RequestMetadata };
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

FRequest_CreateReportForTargetPlayerUuid::FRequest_CreateReportForTargetPlayerUuid()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
}

FName FRequest_CreateReportForTargetPlayerUuid::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/sanctions/v2/player/{player_uuid}/reports"));
	return Path;
}

FString FRequest_CreateReportForTargetPlayerUuid::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
		{ TEXT("player_uuid"), ToStringFormatArg(PlayerUuid) }
	};

	FString Path = FString::Format(TEXT("/sanctions/v2/player/{player_uuid}/reports"), PathParams);

	return Path;
}

bool FRequest_CreateReportForTargetPlayerUuid::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	if (!AuthContext)
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_CreateReportForTargetPlayerUuid - missing auth context"));
		return false;
	}
	if (!AuthContext->AddBearerToken(HttpRequest))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_CreateReportForTargetPlayerUuid - failed to add bearer token"));
		return false;
	}

	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
	{
		// Body parameters
		FString JsonBody;
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, PlayerReportCreate);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_CreateReportForTargetPlayerUuid - Body parameter (FRHAPI_PlayerReportCreate) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_CreateReportForTargetPlayerUuid - Body parameter (FRHAPI_PlayerReportCreate) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_CreateReportForTargetPlayerUuid - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

void FResponse_CreateReportForTargetPlayerUuid::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	FResponse::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successful Response"));
		break;
	case 400:
		SetResponseString(TEXT(" Error Codes: - source_player_required - Source Player must be provided in request or with a user token "));
		break;
	case 403:
		SetResponseString(TEXT(" Error Codes: - insufficient_permissions - Insufficient Permissions - auth_malformed_access - Invalid Authorization - malformed access token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization - auth_invalid_version - Invalid Authorization - version - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_unknown - Failed to parse token - auth_token_invalid_claim - Token contained invalid claim value: {} "));
		break;
	case 404:
		SetResponseString(TEXT(" Error Codes: - player_not_found - Player {id} not found "));
		break;
	case 422:
		SetResponseString(TEXT("Validation Error"));
		break;
	}
}

bool FResponse_CreateReportForTargetPlayerUuid::TryGetContentFor200(FRHAPI_PlayerReport& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_CreateReportForTargetPlayerUuid::TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_CreateReportForTargetPlayerUuid::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_CreateReportForTargetPlayerUuid::TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_CreateReportForTargetPlayerUuid::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_CreateReportForTargetPlayerUuid::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_CreateReportForTargetPlayerUuid::FResponse_CreateReportForTargetPlayerUuid(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_CreateReportForTargetPlayerUuid::Name = TEXT("CreateReportForTargetPlayerUuid");

FHttpRequestPtr FReportsAPI::GetReportsForTargetPlayerUuid(const FRequest_GetReportsForTargetPlayerUuid& Request, const FDelegate_GetReportsForTargetPlayerUuid& Delegate /*= FDelegate_GetReportsForTargetPlayerUuid()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
	ResponseDelegate.BindRaw(this, &FReportsAPI::OnGetReportsForTargetPlayerUuidResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FReportsAPI::OnGetReportsForTargetPlayerUuidResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetReportsForTargetPlayerUuid Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindRaw(this, &FReportsAPI::OnGetReportsForTargetPlayerUuidResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_GetReportsForTargetPlayerUuid Response{ RequestMetadata };
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

FRequest_GetReportsForTargetPlayerUuid::FRequest_GetReportsForTargetPlayerUuid()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
}

FName FRequest_GetReportsForTargetPlayerUuid::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/sanctions/v2/player/{player_uuid}/reports"));
	return Path;
}

FString FRequest_GetReportsForTargetPlayerUuid::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
		{ TEXT("player_uuid"), ToStringFormatArg(PlayerUuid) }
	};

	FString Path = FString::Format(TEXT("/sanctions/v2/player/{player_uuid}/reports"), PathParams);

	TArray<FString> QueryParams;
	if(Cursor.IsSet())
	{
		QueryParams.Add(FString(TEXT("cursor=")) + ToUrlString(Cursor.GetValue()));
	}
	if(PageSize.IsSet())
	{
		QueryParams.Add(FString(TEXT("page_size=")) + ToUrlString(PageSize.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

bool FRequest_GetReportsForTargetPlayerUuid::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	if (!AuthContext)
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetReportsForTargetPlayerUuid - missing auth context"));
		return false;
	}
	if (!AuthContext->AddBearerToken(HttpRequest))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetReportsForTargetPlayerUuid - failed to add bearer token"));
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
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetReportsForTargetPlayerUuid - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

void FResponse_GetReportsForTargetPlayerUuid::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	FResponse::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successful Response"));
		break;
	case 403:
		SetResponseString(TEXT(" Error Codes: - insufficient_permissions - Insufficient Permissions - auth_malformed_access - Invalid Authorization - malformed access token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization - auth_invalid_version - Invalid Authorization - version - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_unknown - Failed to parse token - auth_token_invalid_claim - Token contained invalid claim value: {} "));
		break;
	case 404:
		SetResponseString(TEXT(" Error Codes: - player_not_found - Player {id} not found "));
		break;
	case 422:
		SetResponseString(TEXT("Validation Error"));
		break;
	}
}

bool FResponse_GetReportsForTargetPlayerUuid::TryGetContentFor200(FRHAPI_PlayerReportList& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetReportsForTargetPlayerUuid::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetReportsForTargetPlayerUuid::TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetReportsForTargetPlayerUuid::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetReportsForTargetPlayerUuid::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetReportsForTargetPlayerUuid::FResponse_GetReportsForTargetPlayerUuid(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetReportsForTargetPlayerUuid::Name = TEXT("GetReportsForTargetPlayerUuid");

FHttpRequestPtr FReportsAPI::GetReportsForTargetPlayerUuidSelf(const FRequest_GetReportsForTargetPlayerUuidSelf& Request, const FDelegate_GetReportsForTargetPlayerUuidSelf& Delegate /*= FDelegate_GetReportsForTargetPlayerUuidSelf()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
	ResponseDelegate.BindRaw(this, &FReportsAPI::OnGetReportsForTargetPlayerUuidSelfResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FReportsAPI::OnGetReportsForTargetPlayerUuidSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetReportsForTargetPlayerUuidSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindRaw(this, &FReportsAPI::OnGetReportsForTargetPlayerUuidSelfResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_GetReportsForTargetPlayerUuidSelf Response{ RequestMetadata };
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

FRequest_GetReportsForTargetPlayerUuidSelf::FRequest_GetReportsForTargetPlayerUuidSelf()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
}

FName FRequest_GetReportsForTargetPlayerUuidSelf::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/sanctions/v2/player/me/reports"));
	return Path;
}

FString FRequest_GetReportsForTargetPlayerUuidSelf::ComputePath() const
{
	FString Path = GetSimplifiedPath().ToString();
	TArray<FString> QueryParams;
	if(Cursor.IsSet())
	{
		QueryParams.Add(FString(TEXT("cursor=")) + ToUrlString(Cursor.GetValue()));
	}
	if(PageSize.IsSet())
	{
		QueryParams.Add(FString(TEXT("page_size=")) + ToUrlString(PageSize.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

bool FRequest_GetReportsForTargetPlayerUuidSelf::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	if (!AuthContext)
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetReportsForTargetPlayerUuidSelf - missing auth context"));
		return false;
	}
	if (!AuthContext->AddBearerToken(HttpRequest))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetReportsForTargetPlayerUuidSelf - failed to add bearer token"));
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
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetReportsForTargetPlayerUuidSelf - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

void FResponse_GetReportsForTargetPlayerUuidSelf::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	FResponse::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successful Response"));
		break;
	case 403:
		SetResponseString(TEXT(" Error Codes: - insufficient_permissions - Insufficient Permissions - auth_malformed_access - Invalid Authorization - malformed access token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization - auth_invalid_version - Invalid Authorization - version - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_unknown - Failed to parse token - auth_token_invalid_claim - Token contained invalid claim value: {} "));
		break;
	case 404:
		SetResponseString(TEXT(" Error Codes: - player_not_found - Player {id} not found "));
		break;
	case 422:
		SetResponseString(TEXT("Validation Error"));
		break;
	}
}

bool FResponse_GetReportsForTargetPlayerUuidSelf::TryGetContentFor200(FRHAPI_PlayerReportList& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetReportsForTargetPlayerUuidSelf::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetReportsForTargetPlayerUuidSelf::TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetReportsForTargetPlayerUuidSelf::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetReportsForTargetPlayerUuidSelf::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetReportsForTargetPlayerUuidSelf::FResponse_GetReportsForTargetPlayerUuidSelf(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetReportsForTargetPlayerUuidSelf::Name = TEXT("GetReportsForTargetPlayerUuidSelf");

FHttpRequestPtr FReportsAPI::GetReportsFromSourcePlayerUuid(const FRequest_GetReportsFromSourcePlayerUuid& Request, const FDelegate_GetReportsFromSourcePlayerUuid& Delegate /*= FDelegate_GetReportsFromSourcePlayerUuid()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
	ResponseDelegate.BindRaw(this, &FReportsAPI::OnGetReportsFromSourcePlayerUuidResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FReportsAPI::OnGetReportsFromSourcePlayerUuidResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetReportsFromSourcePlayerUuid Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindRaw(this, &FReportsAPI::OnGetReportsFromSourcePlayerUuidResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_GetReportsFromSourcePlayerUuid Response{ RequestMetadata };
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

FRequest_GetReportsFromSourcePlayerUuid::FRequest_GetReportsFromSourcePlayerUuid()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
}

FName FRequest_GetReportsFromSourcePlayerUuid::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/sanctions/v2/player/{player_uuid}/sent-reports"));
	return Path;
}

FString FRequest_GetReportsFromSourcePlayerUuid::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
		{ TEXT("player_uuid"), ToStringFormatArg(PlayerUuid) }
	};

	FString Path = FString::Format(TEXT("/sanctions/v2/player/{player_uuid}/sent-reports"), PathParams);

	TArray<FString> QueryParams;
	if(Cursor.IsSet())
	{
		QueryParams.Add(FString(TEXT("cursor=")) + ToUrlString(Cursor.GetValue()));
	}
	if(PageSize.IsSet())
	{
		QueryParams.Add(FString(TEXT("page_size=")) + ToUrlString(PageSize.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

bool FRequest_GetReportsFromSourcePlayerUuid::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	if (!AuthContext)
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetReportsFromSourcePlayerUuid - missing auth context"));
		return false;
	}
	if (!AuthContext->AddBearerToken(HttpRequest))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetReportsFromSourcePlayerUuid - failed to add bearer token"));
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
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetReportsFromSourcePlayerUuid - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

void FResponse_GetReportsFromSourcePlayerUuid::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	FResponse::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successful Response"));
		break;
	case 403:
		SetResponseString(TEXT(" Error Codes: - insufficient_permissions - Insufficient Permissions - auth_malformed_access - Invalid Authorization - malformed access token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization - auth_invalid_version - Invalid Authorization - version - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_unknown - Failed to parse token - auth_token_invalid_claim - Token contained invalid claim value: {} "));
		break;
	case 404:
		SetResponseString(TEXT(" Error Codes: - player_not_found - Player {id} not found "));
		break;
	case 422:
		SetResponseString(TEXT("Validation Error"));
		break;
	}
}

bool FResponse_GetReportsFromSourcePlayerUuid::TryGetContentFor200(FRHAPI_PlayerReportList& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetReportsFromSourcePlayerUuid::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetReportsFromSourcePlayerUuid::TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetReportsFromSourcePlayerUuid::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetReportsFromSourcePlayerUuid::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetReportsFromSourcePlayerUuid::FResponse_GetReportsFromSourcePlayerUuid(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetReportsFromSourcePlayerUuid::Name = TEXT("GetReportsFromSourcePlayerUuid");

FHttpRequestPtr FReportsAPI::GetReportsFromSourcePlayerUuidSelf(const FRequest_GetReportsFromSourcePlayerUuidSelf& Request, const FDelegate_GetReportsFromSourcePlayerUuidSelf& Delegate /*= FDelegate_GetReportsFromSourcePlayerUuidSelf()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
	ResponseDelegate.BindRaw(this, &FReportsAPI::OnGetReportsFromSourcePlayerUuidSelfResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FReportsAPI::OnGetReportsFromSourcePlayerUuidSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetReportsFromSourcePlayerUuidSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindRaw(this, &FReportsAPI::OnGetReportsFromSourcePlayerUuidSelfResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_GetReportsFromSourcePlayerUuidSelf Response{ RequestMetadata };
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

FRequest_GetReportsFromSourcePlayerUuidSelf::FRequest_GetReportsFromSourcePlayerUuidSelf()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
}

FName FRequest_GetReportsFromSourcePlayerUuidSelf::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/sanctions/v2/player/me/sent-reports"));
	return Path;
}

FString FRequest_GetReportsFromSourcePlayerUuidSelf::ComputePath() const
{
	FString Path = GetSimplifiedPath().ToString();
	TArray<FString> QueryParams;
	if(Cursor.IsSet())
	{
		QueryParams.Add(FString(TEXT("cursor=")) + ToUrlString(Cursor.GetValue()));
	}
	if(PageSize.IsSet())
	{
		QueryParams.Add(FString(TEXT("page_size=")) + ToUrlString(PageSize.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

bool FRequest_GetReportsFromSourcePlayerUuidSelf::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	if (!AuthContext)
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetReportsFromSourcePlayerUuidSelf - missing auth context"));
		return false;
	}
	if (!AuthContext->AddBearerToken(HttpRequest))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetReportsFromSourcePlayerUuidSelf - failed to add bearer token"));
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
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetReportsFromSourcePlayerUuidSelf - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

void FResponse_GetReportsFromSourcePlayerUuidSelf::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	FResponse::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successful Response"));
		break;
	case 403:
		SetResponseString(TEXT(" Error Codes: - insufficient_permissions - Insufficient Permissions - auth_malformed_access - Invalid Authorization - malformed access token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization - auth_invalid_version - Invalid Authorization - version - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_unknown - Failed to parse token - auth_token_invalid_claim - Token contained invalid claim value: {} "));
		break;
	case 404:
		SetResponseString(TEXT(" Error Codes: - player_not_found - Player {id} not found "));
		break;
	case 422:
		SetResponseString(TEXT("Validation Error"));
		break;
	}
}

bool FResponse_GetReportsFromSourcePlayerUuidSelf::TryGetContentFor200(FRHAPI_PlayerReportList& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetReportsFromSourcePlayerUuidSelf::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetReportsFromSourcePlayerUuidSelf::TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetReportsFromSourcePlayerUuidSelf::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetReportsFromSourcePlayerUuidSelf::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetReportsFromSourcePlayerUuidSelf::FResponse_GetReportsFromSourcePlayerUuidSelf(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetReportsFromSourcePlayerUuidSelf::Name = TEXT("GetReportsFromSourcePlayerUuidSelf");


}
