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
#include "ClaimKeyRequest.h"
#include "HTTPValidationError.h"
#include "HzApiErrorModel.h"
#include "KeyClaim.h"
#include "KeyClaims.h"

namespace RallyHereAPI
{
using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

struct FRequest_ClaimPlayerUuidUnclaimedKeyClaim;
struct FResponse_ClaimPlayerUuidUnclaimedKeyClaim;
struct FRequest_ClaimPlayerUuidUnclaimedKeyClaimForMe;
struct FResponse_ClaimPlayerUuidUnclaimedKeyClaimForMe;
struct FRequest_ClaimUnclaimedKeyClaim;
struct FResponse_ClaimUnclaimedKeyClaim;
struct FRequest_ClaimUnclaimedKeyClaimForMe;
struct FResponse_ClaimUnclaimedKeyClaimForMe;
struct FRequest_GetKeyClaim;
struct FResponse_GetKeyClaim;
struct FRequest_GetKeyClaimForMe;
struct FResponse_GetKeyClaimForMe;
struct FRequest_GetKeyClaims;
struct FResponse_GetKeyClaims;
struct FRequest_GetKeyClaimsForMe;
struct FResponse_GetKeyClaimsForMe;
struct FRequest_GetKeyClaimsForMyUuid;
struct FResponse_GetKeyClaimsForMyUuid;
struct FRequest_GetPlayerUuidKeyClaim;
struct FResponse_GetPlayerUuidKeyClaim;
struct FRequest_GetPlayerUuidKeyClaimSelf;
struct FResponse_GetPlayerUuidKeyClaimSelf;
struct FRequest_GetPlayerUuidKeyClaims;
struct FResponse_GetPlayerUuidKeyClaims;

DECLARE_DELEGATE_OneParam(FDelegate_ClaimPlayerUuidUnclaimedKeyClaim, const FResponse_ClaimPlayerUuidUnclaimedKeyClaim&);
DECLARE_DELEGATE_OneParam(FDelegate_ClaimPlayerUuidUnclaimedKeyClaimForMe, const FResponse_ClaimPlayerUuidUnclaimedKeyClaimForMe&);
DECLARE_DELEGATE_OneParam(FDelegate_ClaimUnclaimedKeyClaim, const FResponse_ClaimUnclaimedKeyClaim&);
DECLARE_DELEGATE_OneParam(FDelegate_ClaimUnclaimedKeyClaimForMe, const FResponse_ClaimUnclaimedKeyClaimForMe&);
DECLARE_DELEGATE_OneParam(FDelegate_GetKeyClaim, const FResponse_GetKeyClaim&);
DECLARE_DELEGATE_OneParam(FDelegate_GetKeyClaimForMe, const FResponse_GetKeyClaimForMe&);
DECLARE_DELEGATE_OneParam(FDelegate_GetKeyClaims, const FResponse_GetKeyClaims&);
DECLARE_DELEGATE_OneParam(FDelegate_GetKeyClaimsForMe, const FResponse_GetKeyClaimsForMe&);
DECLARE_DELEGATE_OneParam(FDelegate_GetKeyClaimsForMyUuid, const FResponse_GetKeyClaimsForMyUuid&);
DECLARE_DELEGATE_OneParam(FDelegate_GetPlayerUuidKeyClaim, const FResponse_GetPlayerUuidKeyClaim&);
DECLARE_DELEGATE_OneParam(FDelegate_GetPlayerUuidKeyClaimSelf, const FResponse_GetPlayerUuidKeyClaimSelf&);
DECLARE_DELEGATE_OneParam(FDelegate_GetPlayerUuidKeyClaims, const FResponse_GetPlayerUuidKeyClaims&);

class RALLYHEREAPI_API FKeyClaimsAPI : public FAPI
{
public:
	FKeyClaimsAPI();
	virtual ~FKeyClaimsAPI();

	FHttpRequestPtr ClaimPlayerUuidUnclaimedKeyClaim(const FRequest_ClaimPlayerUuidUnclaimedKeyClaim& Request, const FDelegate_ClaimPlayerUuidUnclaimedKeyClaim& Delegate = FDelegate_ClaimPlayerUuidUnclaimedKeyClaim(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr ClaimPlayerUuidUnclaimedKeyClaimForMe(const FRequest_ClaimPlayerUuidUnclaimedKeyClaimForMe& Request, const FDelegate_ClaimPlayerUuidUnclaimedKeyClaimForMe& Delegate = FDelegate_ClaimPlayerUuidUnclaimedKeyClaimForMe(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr ClaimUnclaimedKeyClaim(const FRequest_ClaimUnclaimedKeyClaim& Request, const FDelegate_ClaimUnclaimedKeyClaim& Delegate = FDelegate_ClaimUnclaimedKeyClaim(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr ClaimUnclaimedKeyClaimForMe(const FRequest_ClaimUnclaimedKeyClaimForMe& Request, const FDelegate_ClaimUnclaimedKeyClaimForMe& Delegate = FDelegate_ClaimUnclaimedKeyClaimForMe(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr GetKeyClaim(const FRequest_GetKeyClaim& Request, const FDelegate_GetKeyClaim& Delegate = FDelegate_GetKeyClaim(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr GetKeyClaimForMe(const FRequest_GetKeyClaimForMe& Request, const FDelegate_GetKeyClaimForMe& Delegate = FDelegate_GetKeyClaimForMe(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr GetKeyClaims(const FRequest_GetKeyClaims& Request, const FDelegate_GetKeyClaims& Delegate = FDelegate_GetKeyClaims(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr GetKeyClaimsForMe(const FRequest_GetKeyClaimsForMe& Request, const FDelegate_GetKeyClaimsForMe& Delegate = FDelegate_GetKeyClaimsForMe(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr GetKeyClaimsForMyUuid(const FRequest_GetKeyClaimsForMyUuid& Request, const FDelegate_GetKeyClaimsForMyUuid& Delegate = FDelegate_GetKeyClaimsForMyUuid(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr GetPlayerUuidKeyClaim(const FRequest_GetPlayerUuidKeyClaim& Request, const FDelegate_GetPlayerUuidKeyClaim& Delegate = FDelegate_GetPlayerUuidKeyClaim(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr GetPlayerUuidKeyClaimSelf(const FRequest_GetPlayerUuidKeyClaimSelf& Request, const FDelegate_GetPlayerUuidKeyClaimSelf& Delegate = FDelegate_GetPlayerUuidKeyClaimSelf(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr GetPlayerUuidKeyClaims(const FRequest_GetPlayerUuidKeyClaims& Request, const FDelegate_GetPlayerUuidKeyClaims& Delegate = FDelegate_GetPlayerUuidKeyClaims(), int32 Priority = DefaultRallyHereAPIPriority);

private:
	void OnClaimPlayerUuidUnclaimedKeyClaimResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ClaimPlayerUuidUnclaimedKeyClaim Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnClaimPlayerUuidUnclaimedKeyClaimForMeResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ClaimPlayerUuidUnclaimedKeyClaimForMe Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnClaimUnclaimedKeyClaimResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ClaimUnclaimedKeyClaim Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnClaimUnclaimedKeyClaimForMeResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ClaimUnclaimedKeyClaimForMe Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnGetKeyClaimResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetKeyClaim Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnGetKeyClaimForMeResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetKeyClaimForMe Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnGetKeyClaimsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetKeyClaims Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnGetKeyClaimsForMeResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetKeyClaimsForMe Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnGetKeyClaimsForMyUuidResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetKeyClaimsForMyUuid Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnGetPlayerUuidKeyClaimResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetPlayerUuidKeyClaim Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnGetPlayerUuidKeyClaimSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetPlayerUuidKeyClaimSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnGetPlayerUuidKeyClaimsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetPlayerUuidKeyClaims Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Claim Player Uuid Unclaimed Key Claim
 *
 * Claim the Key Claim by uuid for the given player. The external_key will be set to a value if any key matching the external_key_type is available.
*/
struct RALLYHEREAPI_API FRequest_ClaimPlayerUuidUnclaimedKeyClaim : public FRequest
{
	FRequest_ClaimPlayerUuidUnclaimedKeyClaim();
	virtual ~FRequest_ClaimPlayerUuidUnclaimedKeyClaim() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FGuid PlayerUuid;
	FGuid KeyClaimUuid;
	FRHAPI_ClaimKeyRequest ClaimKeyRequest;
};

struct RALLYHEREAPI_API FResponse_ClaimPlayerUuidUnclaimedKeyClaim : public FResponse
{
	FResponse_ClaimPlayerUuidUnclaimedKeyClaim(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_ClaimPlayerUuidUnclaimedKeyClaim() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_KeyClaim Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_KeyClaim& OutContent) const;

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

	/* Response 500
	Internal Server Error
	*/
	bool TryGetContentFor500(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_ClaimPlayerUuidUnclaimedKeyClaim
{
	typedef FRequest_ClaimPlayerUuidUnclaimedKeyClaim Request;
	typedef FResponse_ClaimPlayerUuidUnclaimedKeyClaim Response;
	typedef FDelegate_ClaimPlayerUuidUnclaimedKeyClaim Delegate;
	typedef FKeyClaimsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->ClaimPlayerUuidUnclaimedKeyClaim(InRequest, InDelegate, Priority); }
};

/* Claim Player Uuid Unclaimed Key Claim For Me
 *
 * Claim the Key Claim by uuid for the current player. The external_key will be set to a value if any key matching the external_key_type is available.
*/
struct RALLYHEREAPI_API FRequest_ClaimPlayerUuidUnclaimedKeyClaimForMe : public FRequest
{
	FRequest_ClaimPlayerUuidUnclaimedKeyClaimForMe();
	virtual ~FRequest_ClaimPlayerUuidUnclaimedKeyClaimForMe() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FGuid KeyClaimUuid;
	FRHAPI_ClaimKeyRequest ClaimKeyRequest;
};

struct RALLYHEREAPI_API FResponse_ClaimPlayerUuidUnclaimedKeyClaimForMe : public FResponse
{
	FResponse_ClaimPlayerUuidUnclaimedKeyClaimForMe(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_ClaimPlayerUuidUnclaimedKeyClaimForMe() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_KeyClaim Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_KeyClaim& OutContent) const;

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

	/* Response 500
	Internal Server Error
	*/
	bool TryGetContentFor500(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_ClaimPlayerUuidUnclaimedKeyClaimForMe
{
	typedef FRequest_ClaimPlayerUuidUnclaimedKeyClaimForMe Request;
	typedef FResponse_ClaimPlayerUuidUnclaimedKeyClaimForMe Response;
	typedef FDelegate_ClaimPlayerUuidUnclaimedKeyClaimForMe Delegate;
	typedef FKeyClaimsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->ClaimPlayerUuidUnclaimedKeyClaimForMe(InRequest, InDelegate, Priority); }
};

/* Claim Unclaimed Key Claim
 *
 * Claim the Key Claim by uuid for the given player. The external_key will be set to a value if any key matching the external_key_type is available.
*/
struct RALLYHEREAPI_API FRequest_ClaimUnclaimedKeyClaim : public FRequest
{
	FRequest_ClaimUnclaimedKeyClaim();
	virtual ~FRequest_ClaimUnclaimedKeyClaim() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	int32 PlayerId = 0;
	FGuid KeyClaimUuid;
	FRHAPI_ClaimKeyRequest ClaimKeyRequest;
};

struct RALLYHEREAPI_API FResponse_ClaimUnclaimedKeyClaim : public FResponse
{
	FResponse_ClaimUnclaimedKeyClaim(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_ClaimUnclaimedKeyClaim() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_KeyClaim Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_KeyClaim& OutContent) const;

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

	/* Response 500
	Internal Server Error
	*/
	bool TryGetContentFor500(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_ClaimUnclaimedKeyClaim
{
	typedef FRequest_ClaimUnclaimedKeyClaim Request;
	typedef FResponse_ClaimUnclaimedKeyClaim Response;
	typedef FDelegate_ClaimUnclaimedKeyClaim Delegate;
	typedef FKeyClaimsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->ClaimUnclaimedKeyClaim(InRequest, InDelegate, Priority); }
};

/* Claim Unclaimed Key Claim For Me
 *
 * Claim the Key Claim by uuid for the current player. The external_key will be set to a value if any key matching the external_key_type is available.
*/
struct RALLYHEREAPI_API FRequest_ClaimUnclaimedKeyClaimForMe : public FRequest
{
	FRequest_ClaimUnclaimedKeyClaimForMe();
	virtual ~FRequest_ClaimUnclaimedKeyClaimForMe() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FGuid KeyClaimUuid;
	FRHAPI_ClaimKeyRequest ClaimKeyRequest;
};

struct RALLYHEREAPI_API FResponse_ClaimUnclaimedKeyClaimForMe : public FResponse
{
	FResponse_ClaimUnclaimedKeyClaimForMe(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_ClaimUnclaimedKeyClaimForMe() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_KeyClaim Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_KeyClaim& OutContent) const;

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

	/* Response 500
	Internal Server Error
	*/
	bool TryGetContentFor500(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_ClaimUnclaimedKeyClaimForMe
{
	typedef FRequest_ClaimUnclaimedKeyClaimForMe Request;
	typedef FResponse_ClaimUnclaimedKeyClaimForMe Response;
	typedef FDelegate_ClaimUnclaimedKeyClaimForMe Delegate;
	typedef FKeyClaimsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->ClaimUnclaimedKeyClaimForMe(InRequest, InDelegate, Priority); }
};

/* Get Key Claim
 *
 * Get Key Claim by uuid for the given player.
*/
struct RALLYHEREAPI_API FRequest_GetKeyClaim : public FRequest
{
	FRequest_GetKeyClaim();
	virtual ~FRequest_GetKeyClaim() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	int32 PlayerId = 0;
	FGuid KeyClaimUuid;
};

struct RALLYHEREAPI_API FResponse_GetKeyClaim : public FResponse
{
	FResponse_GetKeyClaim(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GetKeyClaim() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_KeyClaim Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_KeyClaim& OutContent) const;

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

	/* Response 500
	Internal Server Error
	*/
	bool TryGetContentFor500(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetKeyClaim
{
	typedef FRequest_GetKeyClaim Request;
	typedef FResponse_GetKeyClaim Response;
	typedef FDelegate_GetKeyClaim Delegate;
	typedef FKeyClaimsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->GetKeyClaim(InRequest, InDelegate, Priority); }
};

/* Get Key Claim For Me
 *
 * Get Key Claim by uuid for the current player.
*/
struct RALLYHEREAPI_API FRequest_GetKeyClaimForMe : public FRequest
{
	FRequest_GetKeyClaimForMe();
	virtual ~FRequest_GetKeyClaimForMe() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FGuid KeyClaimUuid;
};

struct RALLYHEREAPI_API FResponse_GetKeyClaimForMe : public FResponse
{
	FResponse_GetKeyClaimForMe(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GetKeyClaimForMe() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_KeyClaim Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_KeyClaim& OutContent) const;

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

	/* Response 500
	Internal Server Error
	*/
	bool TryGetContentFor500(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetKeyClaimForMe
{
	typedef FRequest_GetKeyClaimForMe Request;
	typedef FResponse_GetKeyClaimForMe Response;
	typedef FDelegate_GetKeyClaimForMe Delegate;
	typedef FKeyClaimsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->GetKeyClaimForMe(InRequest, InDelegate, Priority); }
};

/* Get Key Claims
 *
 * Get All Key Claims for all external Key campaigns for the given player.
*/
struct RALLYHEREAPI_API FRequest_GetKeyClaims : public FRequest
{
	FRequest_GetKeyClaims();
	virtual ~FRequest_GetKeyClaims() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	int32 PlayerId = 0;
};

struct RALLYHEREAPI_API FResponse_GetKeyClaims : public FResponse
{
	FResponse_GetKeyClaims(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GetKeyClaims() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_KeyClaims Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_KeyClaims& OutContent) const;

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

	/* Response 500
	Internal Server Error
	*/
	bool TryGetContentFor500(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetKeyClaims
{
	typedef FRequest_GetKeyClaims Request;
	typedef FResponse_GetKeyClaims Response;
	typedef FDelegate_GetKeyClaims Delegate;
	typedef FKeyClaimsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->GetKeyClaims(InRequest, InDelegate, Priority); }
};

/* Get Key Claims For Me
 *
 * Get All Key Claims for all external Key campaigns for the current player.
*/
struct RALLYHEREAPI_API FRequest_GetKeyClaimsForMe : public FRequest
{
	FRequest_GetKeyClaimsForMe();
	virtual ~FRequest_GetKeyClaimsForMe() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
};

struct RALLYHEREAPI_API FResponse_GetKeyClaimsForMe : public FResponse
{
	FResponse_GetKeyClaimsForMe(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GetKeyClaimsForMe() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_KeyClaims Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_KeyClaims& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 409
	Conflict
	*/
	bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 500
	Internal Server Error
	*/
	bool TryGetContentFor500(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetKeyClaimsForMe
{
	typedef FRequest_GetKeyClaimsForMe Request;
	typedef FResponse_GetKeyClaimsForMe Response;
	typedef FDelegate_GetKeyClaimsForMe Delegate;
	typedef FKeyClaimsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->GetKeyClaimsForMe(InRequest, InDelegate, Priority); }
};

/* Get Key Claims For My Uuid
 *
 * Get All Key Claims for all external Key campaigns for the current player.
*/
struct RALLYHEREAPI_API FRequest_GetKeyClaimsForMyUuid : public FRequest
{
	FRequest_GetKeyClaimsForMyUuid();
	virtual ~FRequest_GetKeyClaimsForMyUuid() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
};

struct RALLYHEREAPI_API FResponse_GetKeyClaimsForMyUuid : public FResponse
{
	FResponse_GetKeyClaimsForMyUuid(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GetKeyClaimsForMyUuid() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_KeyClaims Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_KeyClaims& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 409
	Conflict
	*/
	bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 500
	Internal Server Error
	*/
	bool TryGetContentFor500(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetKeyClaimsForMyUuid
{
	typedef FRequest_GetKeyClaimsForMyUuid Request;
	typedef FResponse_GetKeyClaimsForMyUuid Response;
	typedef FDelegate_GetKeyClaimsForMyUuid Delegate;
	typedef FKeyClaimsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->GetKeyClaimsForMyUuid(InRequest, InDelegate, Priority); }
};

/* Get Player Uuid Key Claim
 *
 * Get Key Claim by uuid for the given player.
*/
struct RALLYHEREAPI_API FRequest_GetPlayerUuidKeyClaim : public FRequest
{
	FRequest_GetPlayerUuidKeyClaim();
	virtual ~FRequest_GetPlayerUuidKeyClaim() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FGuid PlayerUuid;
	FGuid KeyClaimUuid;
};

struct RALLYHEREAPI_API FResponse_GetPlayerUuidKeyClaim : public FResponse
{
	FResponse_GetPlayerUuidKeyClaim(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GetPlayerUuidKeyClaim() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_KeyClaim Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_KeyClaim& OutContent) const;

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

	/* Response 500
	Internal Server Error
	*/
	bool TryGetContentFor500(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetPlayerUuidKeyClaim
{
	typedef FRequest_GetPlayerUuidKeyClaim Request;
	typedef FResponse_GetPlayerUuidKeyClaim Response;
	typedef FDelegate_GetPlayerUuidKeyClaim Delegate;
	typedef FKeyClaimsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->GetPlayerUuidKeyClaim(InRequest, InDelegate, Priority); }
};

/* Get Player Uuid Key Claim Self
 *
 * Get Key Claim by uuid for the current player.
*/
struct RALLYHEREAPI_API FRequest_GetPlayerUuidKeyClaimSelf : public FRequest
{
	FRequest_GetPlayerUuidKeyClaimSelf();
	virtual ~FRequest_GetPlayerUuidKeyClaimSelf() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FGuid KeyClaimUuid;
};

struct RALLYHEREAPI_API FResponse_GetPlayerUuidKeyClaimSelf : public FResponse
{
	FResponse_GetPlayerUuidKeyClaimSelf(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GetPlayerUuidKeyClaimSelf() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_KeyClaim Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_KeyClaim& OutContent) const;

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

	/* Response 500
	Internal Server Error
	*/
	bool TryGetContentFor500(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetPlayerUuidKeyClaimSelf
{
	typedef FRequest_GetPlayerUuidKeyClaimSelf Request;
	typedef FResponse_GetPlayerUuidKeyClaimSelf Response;
	typedef FDelegate_GetPlayerUuidKeyClaimSelf Delegate;
	typedef FKeyClaimsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->GetPlayerUuidKeyClaimSelf(InRequest, InDelegate, Priority); }
};

/* Get Player Uuid Key Claims
 *
 * Get All Key Claims for all external Key campaigns for the given player.
*/
struct RALLYHEREAPI_API FRequest_GetPlayerUuidKeyClaims : public FRequest
{
	FRequest_GetPlayerUuidKeyClaims();
	virtual ~FRequest_GetPlayerUuidKeyClaims() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FGuid PlayerUuid;
};

struct RALLYHEREAPI_API FResponse_GetPlayerUuidKeyClaims : public FResponse
{
	FResponse_GetPlayerUuidKeyClaims(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GetPlayerUuidKeyClaims() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_KeyClaims Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_KeyClaims& OutContent) const;

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

	/* Response 500
	Internal Server Error
	*/
	bool TryGetContentFor500(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetPlayerUuidKeyClaims
{
	typedef FRequest_GetPlayerUuidKeyClaims Request;
	typedef FResponse_GetPlayerUuidKeyClaims Response;
	typedef FDelegate_GetPlayerUuidKeyClaims Delegate;
	typedef FKeyClaimsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->GetPlayerUuidKeyClaims(InRequest, InDelegate, Priority); }
};


}
