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
#include "Portal.h"
#include "HTTPValidationError.h"
#include "HzApiErrorModel.h"

namespace RallyHereAPI
{
using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

struct FRequest_ProcessKeyEntitlements;
struct FResponse_ProcessKeyEntitlements;
struct FRequest_ProcessKeyEntitlementsPlayerUuid;
struct FResponse_ProcessKeyEntitlementsPlayerUuid;
struct FRequest_ProcessKeyEntitlementsSelf;
struct FResponse_ProcessKeyEntitlementsSelf;
struct FRequest_ProcessPlayerUuidEntitlementsSelf;
struct FResponse_ProcessPlayerUuidEntitlementsSelf;

DECLARE_DELEGATE_OneParam(FDelegate_ProcessKeyEntitlements, const FResponse_ProcessKeyEntitlements&);
DECLARE_DELEGATE_OneParam(FDelegate_ProcessKeyEntitlementsPlayerUuid, const FResponse_ProcessKeyEntitlementsPlayerUuid&);
DECLARE_DELEGATE_OneParam(FDelegate_ProcessKeyEntitlementsSelf, const FResponse_ProcessKeyEntitlementsSelf&);
DECLARE_DELEGATE_OneParam(FDelegate_ProcessPlayerUuidEntitlementsSelf, const FResponse_ProcessPlayerUuidEntitlementsSelf&);

class RALLYHEREAPI_API FKeyEntitlementsAPI : public FAPI
{
public:
	FKeyEntitlementsAPI();
	virtual ~FKeyEntitlementsAPI();

	FHttpRequestPtr ProcessKeyEntitlements(const FRequest_ProcessKeyEntitlements& Request, const FDelegate_ProcessKeyEntitlements& Delegate = FDelegate_ProcessKeyEntitlements(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr ProcessKeyEntitlementsPlayerUuid(const FRequest_ProcessKeyEntitlementsPlayerUuid& Request, const FDelegate_ProcessKeyEntitlementsPlayerUuid& Delegate = FDelegate_ProcessKeyEntitlementsPlayerUuid(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr ProcessKeyEntitlementsSelf(const FRequest_ProcessKeyEntitlementsSelf& Request, const FDelegate_ProcessKeyEntitlementsSelf& Delegate = FDelegate_ProcessKeyEntitlementsSelf(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr ProcessPlayerUuidEntitlementsSelf(const FRequest_ProcessPlayerUuidEntitlementsSelf& Request, const FDelegate_ProcessPlayerUuidEntitlementsSelf& Delegate = FDelegate_ProcessPlayerUuidEntitlementsSelf(), int32 Priority = DefaultRallyHereAPIPriority);

private:
	void OnProcessKeyEntitlementsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ProcessKeyEntitlements Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnProcessKeyEntitlementsPlayerUuidResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ProcessKeyEntitlementsPlayerUuid Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnProcessKeyEntitlementsSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ProcessKeyEntitlementsSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnProcessPlayerUuidEntitlementsSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ProcessPlayerUuidEntitlementsSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Process Key Entitlements
 *
 * Process entitlements for the given player with the given portal. The end result will consume entitlements from the Platform and grant unclaimed Key Claims to the player.
*/
struct RALLYHEREAPI_API FRequest_ProcessKeyEntitlements : public FRequest
{
	FRequest_ProcessKeyEntitlements();
	virtual ~FRequest_ProcessKeyEntitlements() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	int32 PlayerId = 0;
	ERHAPI_Portal PortalId;
};

struct RALLYHEREAPI_API FResponse_ProcessKeyEntitlements : public FResponse
{
	FResponse_ProcessKeyEntitlements(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_ProcessKeyEntitlements() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_JsonValue Content;


	// Manual Response Helpers
	/* Response 202
	Successful Response
	*/
	bool TryGetContentFor202(FRHAPI_JsonValue& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 409
	Conflict
	*/
	bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_ProcessKeyEntitlements
{
	typedef FRequest_ProcessKeyEntitlements Request;
	typedef FResponse_ProcessKeyEntitlements Response;
	typedef FDelegate_ProcessKeyEntitlements Delegate;
	typedef FKeyEntitlementsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->ProcessKeyEntitlements(InRequest, InDelegate, Priority); }
};

/* Process Key Entitlements Player Uuid
 *
 * Process entitlements for the given player with the given portal. The end result will consume entitlements from the Platform and grant unclaimed Key Claims to the player.
*/
struct RALLYHEREAPI_API FRequest_ProcessKeyEntitlementsPlayerUuid : public FRequest
{
	FRequest_ProcessKeyEntitlementsPlayerUuid();
	virtual ~FRequest_ProcessKeyEntitlementsPlayerUuid() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FGuid PlayerUuid;
	ERHAPI_Portal PortalId;
};

struct RALLYHEREAPI_API FResponse_ProcessKeyEntitlementsPlayerUuid : public FResponse
{
	FResponse_ProcessKeyEntitlementsPlayerUuid(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_ProcessKeyEntitlementsPlayerUuid() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_JsonValue Content;


	// Manual Response Helpers
	/* Response 202
	Successful Response
	*/
	bool TryGetContentFor202(FRHAPI_JsonValue& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 409
	Conflict
	*/
	bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_ProcessKeyEntitlementsPlayerUuid
{
	typedef FRequest_ProcessKeyEntitlementsPlayerUuid Request;
	typedef FResponse_ProcessKeyEntitlementsPlayerUuid Response;
	typedef FDelegate_ProcessKeyEntitlementsPlayerUuid Delegate;
	typedef FKeyEntitlementsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->ProcessKeyEntitlementsPlayerUuid(InRequest, InDelegate, Priority); }
};

/* Process Key Entitlements Self
 *
 * Process entitlements for the given player with the given portal. The end result will consume entitlements from the Platform and grant unclaimed Key Claims to the player.
*/
struct RALLYHEREAPI_API FRequest_ProcessKeyEntitlementsSelf : public FRequest
{
	FRequest_ProcessKeyEntitlementsSelf();
	virtual ~FRequest_ProcessKeyEntitlementsSelf() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	ERHAPI_Portal PortalId;
};

struct RALLYHEREAPI_API FResponse_ProcessKeyEntitlementsSelf : public FResponse
{
	FResponse_ProcessKeyEntitlementsSelf(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_ProcessKeyEntitlementsSelf() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_JsonValue Content;


	// Manual Response Helpers
	/* Response 202
	Successful Response
	*/
	bool TryGetContentFor202(FRHAPI_JsonValue& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 409
	Conflict
	*/
	bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_ProcessKeyEntitlementsSelf
{
	typedef FRequest_ProcessKeyEntitlementsSelf Request;
	typedef FResponse_ProcessKeyEntitlementsSelf Response;
	typedef FDelegate_ProcessKeyEntitlementsSelf Delegate;
	typedef FKeyEntitlementsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->ProcessKeyEntitlementsSelf(InRequest, InDelegate, Priority); }
};

/* Process Player Uuid Entitlements Self
 *
 * Process entitlements for the current player with the given Platform. The end result will consume entitlements from the Platform and grant unclaimed Key Claims to the player.
*/
struct RALLYHEREAPI_API FRequest_ProcessPlayerUuidEntitlementsSelf : public FRequest
{
	FRequest_ProcessPlayerUuidEntitlementsSelf();
	virtual ~FRequest_ProcessPlayerUuidEntitlementsSelf() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	ERHAPI_Portal PortalId;
};

struct RALLYHEREAPI_API FResponse_ProcessPlayerUuidEntitlementsSelf : public FResponse
{
	FResponse_ProcessPlayerUuidEntitlementsSelf(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_ProcessPlayerUuidEntitlementsSelf() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_JsonValue Content;


	// Manual Response Helpers
	/* Response 202
	Successful Response
	*/
	bool TryGetContentFor202(FRHAPI_JsonValue& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 409
	Conflict
	*/
	bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_ProcessPlayerUuidEntitlementsSelf
{
	typedef FRequest_ProcessPlayerUuidEntitlementsSelf Request;
	typedef FResponse_ProcessPlayerUuidEntitlementsSelf Response;
	typedef FDelegate_ProcessPlayerUuidEntitlementsSelf Delegate;
	typedef FKeyEntitlementsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->ProcessPlayerUuidEntitlementsSelf(InRequest, InDelegate, Priority); }
};


}
