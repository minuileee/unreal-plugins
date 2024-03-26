// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "InstanceNotificationAPI.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIHttpRequester.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereAPI
{

FInstanceNotificationAPI::FInstanceNotificationAPI() : FAPI()
{
	Url = TEXT("http://localhost");
	Name = FName(TEXT("InstanceNotification"));
}

FInstanceNotificationAPI::~FInstanceNotificationAPI() {}

FHttpRequestPtr FInstanceNotificationAPI::InstanceCreateNotification(const FRequest_InstanceCreateNotification& Request, const FDelegate_InstanceCreateNotification& Delegate /*= FDelegate_InstanceCreateNotification()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
	ResponseDelegate.BindRaw(this, &FInstanceNotificationAPI::OnInstanceCreateNotificationResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FInstanceNotificationAPI::OnInstanceCreateNotificationResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_InstanceCreateNotification Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindRaw(this, &FInstanceNotificationAPI::OnInstanceCreateNotificationResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_InstanceCreateNotification Response{ RequestMetadata };
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

FRequest_InstanceCreateNotification::FRequest_InstanceCreateNotification()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
}

FName FRequest_InstanceCreateNotification::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/notification/v1/instance/{instance_id}/notification"));
	return Path;
}

FString FRequest_InstanceCreateNotification::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
		{ TEXT("instance_id"), ToStringFormatArg(InstanceId) }
	};

	FString Path = FString::Format(TEXT("/notification/v1/instance/{instance_id}/notification"), PathParams);

	return Path;
}

bool FRequest_InstanceCreateNotification::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	if (!AuthContext)
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_InstanceCreateNotification - missing auth context"));
		return false;
	}
	if (!AuthContext->AddBearerToken(HttpRequest))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_InstanceCreateNotification - failed to add bearer token"));
		return false;
	}

	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
	{
		// Body parameters
		FString JsonBody;
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, NotificationCreates);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_InstanceCreateNotification - Body parameter (FRHAPI_NotificationCreates) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_InstanceCreateNotification - Body parameter (FRHAPI_NotificationCreates) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_InstanceCreateNotification - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

void FResponse_InstanceCreateNotification::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	FResponse::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successful Response"));
		break;
	case 400:
		SetResponseString(TEXT(" Error Codes: - bad_id - Passed client id is not a valid id "));
		break;
	case 403:
		SetResponseString(TEXT(" Error Codes: - insufficient_permissions - Insufficient Permissions - auth_token_unknown - Failed to parse token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_invalid_version - Invalid Authorization - version - auth_token_invalid_claim - Token contained invalid claim value: {} - auth_malformed_access - Invalid Authorization - malformed access token - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization "));
		break;
	case 409:
		SetResponseString(TEXT(" Error Codes: - too_many_listening_to_single_client - An enumeration. "));
		break;
	case 422:
		SetResponseString(TEXT("Validation Error"));
		break;
	case 503:
		SetResponseString(TEXT(" Error Codes: - connection_limit_reached - An enumeration. "));
		break;
	}
}

bool FResponse_InstanceCreateNotification::TryGetContentFor200(FRHAPI_NotificationCreateResult& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceCreateNotification::TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceCreateNotification::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceCreateNotification::TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceCreateNotification::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceCreateNotification::TryGetContentFor503(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceCreateNotification::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_InstanceCreateNotification::FResponse_InstanceCreateNotification(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_InstanceCreateNotification::Name = TEXT("InstanceCreateNotification");

FHttpRequestPtr FInstanceNotificationAPI::InstanceGetNotificationById(const FRequest_InstanceGetNotificationById& Request, const FDelegate_InstanceGetNotificationById& Delegate /*= FDelegate_InstanceGetNotificationById()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
	ResponseDelegate.BindRaw(this, &FInstanceNotificationAPI::OnInstanceGetNotificationByIdResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FInstanceNotificationAPI::OnInstanceGetNotificationByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_InstanceGetNotificationById Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindRaw(this, &FInstanceNotificationAPI::OnInstanceGetNotificationByIdResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_InstanceGetNotificationById Response{ RequestMetadata };
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

FRequest_InstanceGetNotificationById::FRequest_InstanceGetNotificationById()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
}

FName FRequest_InstanceGetNotificationById::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/notification/v1/instance/{instance_id}/notification/{notification_id}"));
	return Path;
}

FString FRequest_InstanceGetNotificationById::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
		{ TEXT("notification_id"), ToStringFormatArg(NotificationId) },
		{ TEXT("instance_id"), ToStringFormatArg(InstanceId) }
	};

	FString Path = FString::Format(TEXT("/notification/v1/instance/{instance_id}/notification/{notification_id}"), PathParams);

	return Path;
}

bool FRequest_InstanceGetNotificationById::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	if (!AuthContext)
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_InstanceGetNotificationById - missing auth context"));
		return false;
	}
	if (!AuthContext->AddBearerToken(HttpRequest))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_InstanceGetNotificationById - failed to add bearer token"));
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
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_InstanceGetNotificationById - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

void FResponse_InstanceGetNotificationById::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	FResponse::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successful Response"));
		break;
	case 400:
		SetResponseString(TEXT(" Error Codes: - bad_id - Passed client id is not a valid id "));
		break;
	case 403:
		SetResponseString(TEXT(" Error Codes: - insufficient_permissions - Insufficient Permissions - auth_token_unknown - Failed to parse token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_invalid_version - Invalid Authorization - version - auth_token_invalid_claim - Token contained invalid claim value: {} - auth_malformed_access - Invalid Authorization - malformed access token - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization "));
		break;
	case 404:
		SetResponseString(TEXT(" Error Codes: - resource_not_found - Notification could not be found "));
		break;
	case 409:
		SetResponseString(TEXT(" Error Codes: - too_many_listening_to_single_client - An enumeration. "));
		break;
	case 422:
		SetResponseString(TEXT("Validation Error"));
		break;
	case 503:
		SetResponseString(TEXT(" Error Codes: - connection_limit_reached - An enumeration. "));
		break;
	}
}

bool FResponse_InstanceGetNotificationById::TryGetContentFor200(FRHAPI_Notification& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceGetNotificationById::TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceGetNotificationById::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceGetNotificationById::TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceGetNotificationById::TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceGetNotificationById::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceGetNotificationById::TryGetContentFor503(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceGetNotificationById::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_InstanceGetNotificationById::FResponse_InstanceGetNotificationById(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_InstanceGetNotificationById::Name = TEXT("InstanceGetNotificationById");

FHttpRequestPtr FInstanceNotificationAPI::InstanceGetNotificationsPage(const FRequest_InstanceGetNotificationsPage& Request, const FDelegate_InstanceGetNotificationsPage& Delegate /*= FDelegate_InstanceGetNotificationsPage()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
	ResponseDelegate.BindRaw(this, &FInstanceNotificationAPI::OnInstanceGetNotificationsPageResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FInstanceNotificationAPI::OnInstanceGetNotificationsPageResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_InstanceGetNotificationsPage Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindRaw(this, &FInstanceNotificationAPI::OnInstanceGetNotificationsPageResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_InstanceGetNotificationsPage Response{ RequestMetadata };
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

FRequest_InstanceGetNotificationsPage::FRequest_InstanceGetNotificationsPage()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
}

FName FRequest_InstanceGetNotificationsPage::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/notification/v1/instance/{instance_id}/notification"));
	return Path;
}

FString FRequest_InstanceGetNotificationsPage::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
		{ TEXT("instance_id"), ToStringFormatArg(InstanceId) }
	};

	FString Path = FString::Format(TEXT("/notification/v1/instance/{instance_id}/notification"), PathParams);

	TArray<FString> QueryParams;
	if(PageSize.IsSet())
	{
		QueryParams.Add(FString(TEXT("page_size=")) + ToUrlString(PageSize.GetValue()));
	}
	if(StartAt.IsSet())
	{
		QueryParams.Add(FString(TEXT("start_at=")) + ToUrlString(StartAt.GetValue()));
	}
	if(ExcludeBefore.IsSet())
	{
		QueryParams.Add(FString(TEXT("exclude_before=")) + ToUrlString(ExcludeBefore.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

bool FRequest_InstanceGetNotificationsPage::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_InstanceGetNotificationsPage - missing auth context"));
		return false;
	}
	if (!AuthContext->AddBearerToken(HttpRequest))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_InstanceGetNotificationsPage - failed to add bearer token"));
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
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_InstanceGetNotificationsPage - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

void FResponse_InstanceGetNotificationsPage::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	FResponse::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successful Response"));
		break;
	case 304:
		SetResponseString(TEXT("Not Modified"));
		break;
	case 400:
		SetResponseString(TEXT(" Error Codes: - bad_id - Passed client id is not a valid id "));
		break;
	case 403:
		SetResponseString(TEXT(" Error Codes: - insufficient_permissions - Insufficient Permissions - auth_token_unknown - Failed to parse token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_invalid_version - Invalid Authorization - version - auth_token_invalid_claim - Token contained invalid claim value: {} - auth_malformed_access - Invalid Authorization - malformed access token - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization "));
		break;
	case 409:
		SetResponseString(TEXT(" Error Codes: - too_many_listening_to_single_client - An enumeration. "));
		break;
	case 422:
		SetResponseString(TEXT("Validation Error"));
		break;
	case 503:
		SetResponseString(TEXT(" Error Codes: - connection_limit_reached - An enumeration. "));
		break;
	}
}

bool FResponse_InstanceGetNotificationsPage::TryGetContentFor200(FRHAPI_Notifications& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceGetNotificationsPage::TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceGetNotificationsPage::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceGetNotificationsPage::TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceGetNotificationsPage::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceGetNotificationsPage::TryGetContentFor503(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceGetNotificationsPage::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_InstanceGetNotificationsPage::FResponse_InstanceGetNotificationsPage(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_InstanceGetNotificationsPage::Name = TEXT("InstanceGetNotificationsPage");

FHttpRequestPtr FInstanceNotificationAPI::InstanceLongPollForNotifications(const FRequest_InstanceLongPollForNotifications& Request, const FDelegate_InstanceLongPollForNotifications& Delegate /*= FDelegate_InstanceLongPollForNotifications()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
	ResponseDelegate.BindRaw(this, &FInstanceNotificationAPI::OnInstanceLongPollForNotificationsResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FInstanceNotificationAPI::OnInstanceLongPollForNotificationsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_InstanceLongPollForNotifications Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindRaw(this, &FInstanceNotificationAPI::OnInstanceLongPollForNotificationsResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_InstanceLongPollForNotifications Response{ RequestMetadata };
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

FRequest_InstanceLongPollForNotifications::FRequest_InstanceLongPollForNotifications()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
}

FName FRequest_InstanceLongPollForNotifications::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/notification/v1/instance/{instance_id}/stream/notification/lp"));
	return Path;
}

FString FRequest_InstanceLongPollForNotifications::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
		{ TEXT("instance_id"), ToStringFormatArg(InstanceId) }
	};

	FString Path = FString::Format(TEXT("/notification/v1/instance/{instance_id}/stream/notification/lp"), PathParams);

	TArray<FString> QueryParams;
	if(MaxPageSize.IsSet())
	{
		QueryParams.Add(FString(TEXT("max_page_size=")) + ToUrlString(MaxPageSize.GetValue()));
	}
	if(ExcludeBefore.IsSet())
	{
		QueryParams.Add(FString(TEXT("exclude_before=")) + ToUrlString(ExcludeBefore.GetValue()));
	}
	if(OffsetResetStrategy.IsSet())
	{
		QueryParams.Add(FString(TEXT("offset_reset_strategy=")) + ToUrlString(OffsetResetStrategy.GetValue()));
	}
	if(Deadline.IsSet())
	{
		QueryParams.Add(FString(TEXT("deadline=")) + ToUrlString(Deadline.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

bool FRequest_InstanceLongPollForNotifications::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	if (!AuthContext)
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_InstanceLongPollForNotifications - missing auth context"));
		return false;
	}
	if (!AuthContext->AddBearerToken(HttpRequest))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_InstanceLongPollForNotifications - failed to add bearer token"));
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
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_InstanceLongPollForNotifications - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

void FResponse_InstanceLongPollForNotifications::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	FResponse::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successful Response"));
		break;
	case 400:
		SetResponseString(TEXT(" Error Codes: - bad_id - Passed client id is not a valid id "));
		break;
	case 403:
		SetResponseString(TEXT(" Error Codes: - insufficient_permissions - Insufficient Permissions - auth_token_unknown - Failed to parse token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_invalid_version - Invalid Authorization - version - auth_token_invalid_claim - Token contained invalid claim value: {} - auth_malformed_access - Invalid Authorization - malformed access token - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization "));
		break;
	case 409:
		SetResponseString(TEXT(" Error Codes: - too_many_listening_to_single_client - An enumeration. "));
		break;
	case 422:
		SetResponseString(TEXT("Validation Error"));
		break;
	case 503:
		SetResponseString(TEXT(" Error Codes: - connection_limit_reached - An enumeration. "));
		break;
	}
}

bool FResponse_InstanceLongPollForNotifications::TryGetContentFor200(FRHAPI_Notifications& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceLongPollForNotifications::TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceLongPollForNotifications::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceLongPollForNotifications::TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceLongPollForNotifications::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceLongPollForNotifications::TryGetContentFor503(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = GetJsonResponse();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_InstanceLongPollForNotifications::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_InstanceLongPollForNotifications::FResponse_InstanceLongPollForNotifications(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_InstanceLongPollForNotifications::Name = TEXT("InstanceLongPollForNotifications");


}
