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
#include "AuditResponse.h"
#include "HTTPValidationError.h"
#include "HzApiErrorModel.h"
#include "SessionEventCreateRequest.h"

namespace RallyHereAPI
{
using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

struct FRequest_CreateSessionAudit;
struct FResponse_CreateSessionAudit;
struct FRequest_GetSessionAudit;
struct FResponse_GetSessionAudit;

DECLARE_DELEGATE_OneParam(FDelegate_CreateSessionAudit, const FResponse_CreateSessionAudit&);
DECLARE_DELEGATE_OneParam(FDelegate_GetSessionAudit, const FResponse_GetSessionAudit&);

class RALLYHEREAPI_API FSessionAuditAPI : public FAPI
{
public:
	FSessionAuditAPI();
	virtual ~FSessionAuditAPI();

	FHttpRequestPtr CreateSessionAudit(const FRequest_CreateSessionAudit& Request, const FDelegate_CreateSessionAudit& Delegate = FDelegate_CreateSessionAudit(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr GetSessionAudit(const FRequest_GetSessionAudit& Request, const FDelegate_GetSessionAudit& Delegate = FDelegate_GetSessionAudit(), int32 Priority = DefaultRallyHereAPIPriority);

private:
	void OnCreateSessionAuditResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_CreateSessionAudit Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnGetSessionAuditResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetSessionAudit Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Create Session Audit
 *
 * Create an audit event in the log for this session.
 * Internal session operations will create new events that are accessible from the get request.
 * 
 * Player clients and instances are expected to create events here when something occurs on their clients that is
 * relevant.
 * 
 * Required Permissions:
 * 
 * - For any player (including themselves) any of: `session-audit:update:all`, `session:*`
 * 
 * 
 * 
 * Required Session Permissions: None
*/
struct RALLYHEREAPI_API FRequest_CreateSessionAudit : public FRequest
{
	FRequest_CreateSessionAudit();
	virtual ~FRequest_CreateSessionAudit() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FString SessionId;
	FRHAPI_SessionEventCreateRequest SessionEventCreateRequest;
};

struct RALLYHEREAPI_API FResponse_CreateSessionAudit : public FResponse
{
	FResponse_CreateSessionAudit(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_CreateSessionAudit() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

	FRHAPI_JsonValue Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_JsonValue& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 404
	Session doesn't exist.  See error code for more info
	*/
	bool TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_CreateSessionAudit
{
	typedef FRequest_CreateSessionAudit Request;
	typedef FResponse_CreateSessionAudit Response;
	typedef FDelegate_CreateSessionAudit Delegate;
	typedef FSessionAuditAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.CreateSessionAudit(InRequest, InDelegate, Priority); }
};

/* Get Session Audit
 *
 * Get all audit events for a specific session or player. Empty list means there is no audit history.
 * 
 * Required Permissions:
 * 
 * - For any player (including themselves) any of: `session-audit:read:all`, `session:*`
 * 
 * 
 * 
 * Required Session Permissions: None
*/
struct RALLYHEREAPI_API FRequest_GetSessionAudit : public FRequest
{
	FRequest_GetSessionAudit();
	virtual ~FRequest_GetSessionAudit() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	TOptional<FString> SessionId;
	TOptional<FGuid> PlayerUuid;
	TOptional<int32> PageNum;
	TOptional<int32> PageSize;
};

struct RALLYHEREAPI_API FResponse_GetSessionAudit : public FResponse
{
	FResponse_GetSessionAudit(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GetSessionAudit() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

	FRHAPI_AuditResponse Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_AuditResponse& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetSessionAudit
{
	typedef FRequest_GetSessionAudit Request;
	typedef FResponse_GetSessionAudit Response;
	typedef FDelegate_GetSessionAudit Delegate;
	typedef FSessionAuditAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.GetSessionAudit(InRequest, InDelegate, Priority); }
};


}
