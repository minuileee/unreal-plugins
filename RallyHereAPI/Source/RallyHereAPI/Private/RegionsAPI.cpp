// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RegionsAPI.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIHttpRequester.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereAPI
{

FRegionsAPI::FRegionsAPI() : FAPI()
{
	Url = TEXT("http://localhost");
	Name = FName(TEXT("Regions"));
}

FRegionsAPI::~FRegionsAPI() {}

FHttpRequestPtr FRegionsAPI::GetAllRegions(const FRequest_GetAllRegions& Request, const FDelegate_GetAllRegions& Delegate /*= FDelegate_GetAllRegions()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
	ResponseDelegate.BindRaw(this, &FRegionsAPI::OnGetAllRegionsResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FRegionsAPI::OnGetAllRegionsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAllRegions Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindRaw(this, &FRegionsAPI::OnGetAllRegionsResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_GetAllRegions Response{ RequestMetadata };
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

FRequest_GetAllRegions::FRequest_GetAllRegions()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
}

FName FRequest_GetAllRegions::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/session/v1/regions"));
	return Path;
}

FString FRequest_GetAllRegions::ComputePath() const
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

bool FRequest_GetAllRegions::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	if (!AuthContext)
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAllRegions - missing auth context"));
		return false;
	}
	if (!AuthContext->AddBearerToken(HttpRequest))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAllRegions - failed to add bearer token"));
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
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAllRegions - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

FString FResponse_GetAllRegions::GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const
{
	switch ((int)InHttpResponseCode)
	{
	case 200:
		return TEXT("Successful Response");
	case 403:
		return TEXT("Forbidden");
	case 422:
		return TEXT("Validation Error");
	}
	
	return FResponse::GetHttpResponseCodeDescription(InHttpResponseCode);
}

bool FResponse_GetAllRegions::TryGetContentFor200(FRHAPI_RegionsResponse& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetAllRegions::TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetAllRegions::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
	const auto* JsonResponse = TryGetPayload<JsonPayloadType>();
	if (JsonResponse != nullptr)
	{
		return TryGetJsonValue(*JsonResponse, OutContent);
	}
	return false;
}

bool FResponse_GetAllRegions::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetAllRegions::FResponse_GetAllRegions(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetAllRegions::Name = TEXT("GetAllRegions");


}
