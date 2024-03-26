// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "ConfigurationV1API.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIHttpRequester.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereAPI
{

FConfigurationV1API::FConfigurationV1API() : FAPI()
{
	Url = TEXT("http://localhost");
	Name = FName(TEXT("ConfigurationV1"));
}

FConfigurationV1API::~FConfigurationV1API() {}

FHttpRequestPtr FConfigurationV1API::GetFriendsAndBlockLimits(const FRequest_GetFriendsAndBlockLimits& Request, const FDelegate_GetFriendsAndBlockLimits& Delegate /*= FDelegate_GetFriendsAndBlockLimits()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
	ResponseDelegate.BindRaw(this, &FConfigurationV1API::OnGetFriendsAndBlockLimitsResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FConfigurationV1API::OnGetFriendsAndBlockLimitsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetFriendsAndBlockLimits Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindRaw(this, &FConfigurationV1API::OnGetFriendsAndBlockLimitsResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_GetFriendsAndBlockLimits Response{ RequestMetadata };
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

FRequest_GetFriendsAndBlockLimits::FRequest_GetFriendsAndBlockLimits()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
}

FName FRequest_GetFriendsAndBlockLimits::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/friends/v1/configuration"));
	return Path;
}

FString FRequest_GetFriendsAndBlockLimits::ComputePath() const
{
	FString Path = GetSimplifiedPath().ToString();
	return Path;
}

bool FRequest_GetFriendsAndBlockLimits::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	if (!AuthContext)
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetFriendsAndBlockLimits - missing auth context"));
		return false;
	}
	if (!AuthContext->AddBearerToken(HttpRequest))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetFriendsAndBlockLimits - failed to add bearer token"));
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
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetFriendsAndBlockLimits - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

void FResponse_GetFriendsAndBlockLimits::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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
	}
}

bool FResponse_GetFriendsAndBlockLimits::TryGetContentFor200(FRHAPI_FriendsApiConfig& OutContent) const
{
	return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_GetFriendsAndBlockLimits::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
	return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_GetFriendsAndBlockLimits::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetFriendsAndBlockLimits::FResponse_GetFriendsAndBlockLimits(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetFriendsAndBlockLimits::Name = TEXT("GetFriendsAndBlockLimits");


}
