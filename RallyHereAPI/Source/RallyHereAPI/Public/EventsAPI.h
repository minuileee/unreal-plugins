// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIHelpers.h"
#include "EventList.h"
#include "EventParamsSchemaResponse.h"
#include "HTTPValidationError.h"
#include "HzApiErrorModel.h"
#include "PostGameEventsResponse.h"

namespace RallyHereAPI
{
using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

struct FRequest_GetAllEventSchema;
struct FResponse_GetAllEventSchema;
struct FRequest_ReceiveEventsV1;
struct FResponse_ReceiveEventsV1;

DECLARE_DELEGATE_OneParam(FDelegate_GetAllEventSchema, const FResponse_GetAllEventSchema&);
DECLARE_DELEGATE_OneParam(FDelegate_ReceiveEventsV1, const FResponse_ReceiveEventsV1&);

class RALLYHEREAPI_API FEventsAPI : public FAPI
{
public:
	FEventsAPI();
	virtual ~FEventsAPI();

	FHttpRequestPtr GetAllEventSchema(const FRequest_GetAllEventSchema& Request, const FDelegate_GetAllEventSchema& Delegate = FDelegate_GetAllEventSchema(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr ReceiveEventsV1(const FRequest_ReceiveEventsV1& Request, const FDelegate_ReceiveEventsV1& Delegate = FDelegate_ReceiveEventsV1(), int32 Priority = DefaultRallyHereAPIPriority);

private:
	void OnGetAllEventSchemaResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAllEventSchema Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnReceiveEventsV1Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ReceiveEventsV1 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Get All Event Schema
 *
 * get all rh standard event and custom event params schema
*/
struct RALLYHEREAPI_API FRequest_GetAllEventSchema : public FRequest
{
	FRequest_GetAllEventSchema();
	virtual ~FRequest_GetAllEventSchema() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;

};

struct RALLYHEREAPI_API FResponse_GetAllEventSchema : public FResponse
{
	FResponse_GetAllEventSchema(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GetAllEventSchema() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_EventParamsSchemaResponse Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_EventParamsSchemaResponse& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetAllEventSchema
{
	typedef FRequest_GetAllEventSchema Request;
	typedef FResponse_GetAllEventSchema Response;
	typedef FDelegate_GetAllEventSchema Delegate;
	typedef FEventsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->GetAllEventSchema(InRequest, InDelegate, Priority); }
};

/* Receive Events V1
 *
 * Post game events, return number of events being posted to Event Hub
*/
struct RALLYHEREAPI_API FRequest_ReceiveEventsV1 : public FRequest
{
	FRequest_ReceiveEventsV1();
	virtual ~FRequest_ReceiveEventsV1() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;

	FRHAPI_EventList EventList;
};

struct RALLYHEREAPI_API FResponse_ReceiveEventsV1 : public FResponse
{
	FResponse_ReceiveEventsV1(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_ReceiveEventsV1() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_PostGameEventsResponse Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_PostGameEventsResponse& OutContent) const;

	/* Response 207
	 Error Codes: - events_multi_results - Some of the events from the request failed to process, and uploaded to deadletter blob storage 
	*/
	bool TryGetContentFor207(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 400
	 Error Codes: - events_all_failed - All of events from the request failed to process, and uploaded to deadletter blob storage - event_lists_invalid - The input eventLists is invalid, failed pydantic validation - event_unsupported - Event name is not known - event_denied - Events of that name are currently denied - event_duplicated - Event has the same event_uuid as an event already received - event_params_invalid - The event_params failed validation against the jsonschema defined for the type/version.  See response description for more details.  
	*/
	bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 404
	 Error Codes: - event_schema_invalid - event_params jsonschema is empty, failed to load from developer-api - event_schema_not_found - The jsonschema is invalid and could not be used to validate the event_params value.  See response description for more details. 
	*/
	bool TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_ReceiveEventsV1
{
	typedef FRequest_ReceiveEventsV1 Request;
	typedef FResponse_ReceiveEventsV1 Response;
	typedef FDelegate_ReceiveEventsV1 Delegate;
	typedef FEventsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->ReceiveEventsV1(InRequest, InDelegate, Priority); }
};


}
