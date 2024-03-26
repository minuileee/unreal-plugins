// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "EventsAPI.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIHttpRequester.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereAPI
{

FEventsAPI::FEventsAPI() : FAPI()
{
	Url = TEXT("http://localhost");
	Name = FName(TEXT("Events"));
}

FEventsAPI::~FEventsAPI() {}

FHttpRequestPtr FEventsAPI::GetAllEventSchema(const FRequest_GetAllEventSchema& Request, const FDelegate_GetAllEventSchema& Delegate /*= FDelegate_GetAllEventSchema()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
	ResponseDelegate.BindRaw(this, &FEventsAPI::OnGetAllEventSchemaResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FEventsAPI::OnGetAllEventSchemaResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAllEventSchema Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindRaw(this, &FEventsAPI::OnGetAllEventSchemaResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_GetAllEventSchema Response{ RequestMetadata };
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

FRequest_GetAllEventSchema::FRequest_GetAllEventSchema()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
}

FName FRequest_GetAllEventSchema::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/events/v1/event-params-schema"));
	return Path;
}

FString FRequest_GetAllEventSchema::ComputePath() const
{
	FString Path = GetSimplifiedPath().ToString();
	return Path;
}

bool FRequest_GetAllEventSchema::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

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
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAllEventSchema - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

void FResponse_GetAllEventSchema::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	FResponse::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successful Response"));
		break;
	}
}

bool FResponse_GetAllEventSchema::TryGetContentFor200(FRHAPI_EventParamsSchemaResponse& OutContent) const
{
	return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_GetAllEventSchema::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetAllEventSchema::FResponse_GetAllEventSchema(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetAllEventSchema::Name = TEXT("GetAllEventSchema");

FHttpRequestPtr FEventsAPI::ReceiveEventsV1(const FRequest_ReceiveEventsV1& Request, const FDelegate_ReceiveEventsV1& Delegate /*= FDelegate_ReceiveEventsV1()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
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
	ResponseDelegate.BindRaw(this, &FEventsAPI::OnReceiveEventsV1Response, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
	RequestData->SetDelegate(ResponseDelegate);

	auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
	if (HttpRequester)
	{
		HttpRequester->EnqueueHttpRequest(RequestData);
	}
	return RequestData->HttpRequest;
}

void FEventsAPI::OnReceiveEventsV1Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ReceiveEventsV1 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
	FHttpRequestCompleteDelegate ResponseDelegate;

	if (AuthContextForRetry)
	{
		// An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
		// So, we set the callback to use a null context for the retry
		ResponseDelegate.BindRaw(this, &FEventsAPI::OnReceiveEventsV1Response, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
	}

	FResponse_ReceiveEventsV1 Response{ RequestMetadata };
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

FRequest_ReceiveEventsV1::FRequest_ReceiveEventsV1()
{
	RequestMetadata.Identifier = FGuid::NewGuid();
	RequestMetadata.SimplifiedPath = GetSimplifiedPath();
	RequestMetadata.RetryCount = 0;
}

FName FRequest_ReceiveEventsV1::GetSimplifiedPath() const
{
	static FName Path = FName(TEXT("/events/v1/events"));
	return Path;
}

FString FRequest_ReceiveEventsV1::ComputePath() const
{
	FString Path = GetSimplifiedPath().ToString();
	return Path;
}

bool FRequest_ReceiveEventsV1::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
	{
		// Body parameters
		FString JsonBody;
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, EventList);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_ReceiveEventsV1 - Body parameter (FRHAPI_EventList) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_ReceiveEventsV1 - Body parameter (FRHAPI_EventList) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_ReceiveEventsV1 - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
		return false;
	}

	return true;
}

void FResponse_ReceiveEventsV1::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	FResponse::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Successful Response"));
		break;
	case 207:
		SetResponseString(TEXT(" Error Codes: - events_multi_results - Some of the events from the request failed to process, and uploaded to deadletter blob storage "));
		break;
	case 400:
		SetResponseString(TEXT(" Error Codes: - events_all_failed - All of events from the request failed to process, and uploaded to deadletter blob storage - event_lists_invalid - The input eventLists is invalid, failed pydantic validation - event_unsupported - Event name is not known - event_denied - Events of that name are currently denied - event_duplicated - Event has the same event_uuid as an event already received - event_params_invalid - The event_params failed validation against the jsonschema defined for the type/version.  See response description for more details.  "));
		break;
	case 404:
		SetResponseString(TEXT(" Error Codes: - event_schema_invalid - event_params jsonschema is empty, failed to load from developer-api - event_schema_not_found - The jsonschema is invalid and could not be used to validate the event_params value.  See response description for more details. "));
		break;
	case 422:
		SetResponseString(TEXT("Validation Error"));
		break;
	}
}

bool FResponse_ReceiveEventsV1::TryGetContentFor200(FRHAPI_PostGameEventsResponse& OutContent) const
{
	return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_ReceiveEventsV1::TryGetContentFor207(FRHAPI_HzApiErrorModel& OutContent) const
{
	return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_ReceiveEventsV1::TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const
{
	return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_ReceiveEventsV1::TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const
{
	return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_ReceiveEventsV1::TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const
{
	return TryGetJsonValue(ResponseJson, OutContent);
}

bool FResponse_ReceiveEventsV1::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FResponse_ReceiveEventsV1::FResponse_ReceiveEventsV1(FRequestMetadata InRequestMetadata) :
	FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_ReceiveEventsV1::Name = TEXT("ReceiveEventsV1");


}
