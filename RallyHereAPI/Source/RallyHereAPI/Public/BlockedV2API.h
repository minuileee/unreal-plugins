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
#include "BlockedList.h"
#include "BlockedPlayer.h"
#include "HTTPValidationError.h"
#include "HzApiErrorModel.h"

namespace RallyHereAPI
{
using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

struct FRequest_BlockV2;
struct FResponse_BlockV2;
struct FRequest_GetBlockedListForPlayerV2;
struct FResponse_GetBlockedListForPlayerV2;
struct FRequest_GetBlockedV2;
struct FResponse_GetBlockedV2;
struct FRequest_UnblockV2;
struct FResponse_UnblockV2;

DECLARE_DELEGATE_OneParam(FDelegate_BlockV2, const FResponse_BlockV2&);
DECLARE_DELEGATE_OneParam(FDelegate_GetBlockedListForPlayerV2, const FResponse_GetBlockedListForPlayerV2&);
DECLARE_DELEGATE_OneParam(FDelegate_GetBlockedV2, const FResponse_GetBlockedV2&);
DECLARE_DELEGATE_OneParam(FDelegate_UnblockV2, const FResponse_UnblockV2&);

class RALLYHEREAPI_API FBlockedV2API : public FAPI
{
public:
	FBlockedV2API();
	virtual ~FBlockedV2API();

	FHttpRequestPtr BlockV2(const FRequest_BlockV2& Request, const FDelegate_BlockV2& Delegate = FDelegate_BlockV2(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr GetBlockedListForPlayerV2(const FRequest_GetBlockedListForPlayerV2& Request, const FDelegate_GetBlockedListForPlayerV2& Delegate = FDelegate_GetBlockedListForPlayerV2(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr GetBlockedV2(const FRequest_GetBlockedV2& Request, const FDelegate_GetBlockedV2& Delegate = FDelegate_GetBlockedV2(), int32 Priority = DefaultRallyHereAPIPriority);
	FHttpRequestPtr UnblockV2(const FRequest_UnblockV2& Request, const FDelegate_UnblockV2& Delegate = FDelegate_UnblockV2(), int32 Priority = DefaultRallyHereAPIPriority);

private:
	void OnBlockV2Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_BlockV2 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnGetBlockedListForPlayerV2Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetBlockedListForPlayerV2 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnGetBlockedV2Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetBlockedV2 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
	void OnUnblockV2Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UnblockV2 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Block V2
 *
 * Block the other Player. There is a max number of Players that can be blocked per Player.
 *                     The limit can determined using [this API](/#/Configuration%20V1/get_friends_and_block_limits).
 *                     <br/><br />Permissions Required: friend:block_list:write
*/
struct RALLYHEREAPI_API FRequest_BlockV2 : public FRequest
{
	FRequest_BlockV2();
	virtual ~FRequest_BlockV2() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	FName GetSimplifiedPathWithVerb() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FGuid PlayerUuid;
	FGuid OtherPlayerUuid;
};

struct RALLYHEREAPI_API FResponse_BlockV2 : public FResponse
{
	FResponse_BlockV2(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_BlockV2() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_BlockedPlayer Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_BlockedPlayer& OutContent) const;

	/* Response 400
	Bad Request
	*/
	bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;

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

struct RALLYHEREAPI_API Traits_BlockV2
{
	typedef FRequest_BlockV2 Request;
	typedef FResponse_BlockV2 Response;
	typedef FDelegate_BlockV2 Delegate;
	typedef FBlockedV2API API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->BlockV2(InRequest, InDelegate, Priority); }
};

/* Get Blocked List For Player V2
 *
 * Fetch the blocked list for the Player. <br /><br />
 *                         <b>Note:</b> This API supports etags and will return the etag header when with the response. 
 *                         Clients can utilize the <i>if-none-match</i> header to avoid having to reload the response if it has not changed.
 *                         <br/><br />Permissions Required: friend:block_list:read
*/
struct RALLYHEREAPI_API FRequest_GetBlockedListForPlayerV2 : public FRequest
{
	FRequest_GetBlockedListForPlayerV2();
	virtual ~FRequest_GetBlockedListForPlayerV2() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	FName GetSimplifiedPathWithVerb() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FGuid PlayerUuid;
	TOptional<int32> Page;
	TOptional<int32> Limit;
	/* If you provide the ETag that matches the current ETag for this resource, a 304 response will be return - indicating that the resource has not changed. */
	TOptional<FString> IfNoneMatch;
};

struct RALLYHEREAPI_API FResponse_GetBlockedListForPlayerV2 : public FResponse
{
	FResponse_GetBlockedListForPlayerV2(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GetBlockedListForPlayerV2() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	bool ParseHeaders() override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_BlockedList Content;
	// Headers
	/* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
	TOptional<FString> ETag;

	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_BlockedList& OutContent) const;
	/* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
	TOptional<FString> GetHeader200_ETag() const;

	/* Response 304
	Content still has the same etag and has not changed
	*/

	/* Response 400
	Bad Request
	*/
	bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;

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

struct RALLYHEREAPI_API Traits_GetBlockedListForPlayerV2
{
	typedef FRequest_GetBlockedListForPlayerV2 Request;
	typedef FResponse_GetBlockedListForPlayerV2 Response;
	typedef FDelegate_GetBlockedListForPlayerV2 Delegate;
	typedef FBlockedV2API API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->GetBlockedListForPlayerV2(InRequest, InDelegate, Priority); }
};

/* Get Blocked V2
 *
 * Get the Blocked Player <br/><br />Permissions Required: friend:block_list:read
*/
struct RALLYHEREAPI_API FRequest_GetBlockedV2 : public FRequest
{
	FRequest_GetBlockedV2();
	virtual ~FRequest_GetBlockedV2() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	FName GetSimplifiedPathWithVerb() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FGuid PlayerUuid;
	FGuid OtherPlayerUuid;
};

struct RALLYHEREAPI_API FResponse_GetBlockedV2 : public FResponse
{
	FResponse_GetBlockedV2(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GetBlockedV2() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_BlockedPlayer Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_BlockedPlayer& OutContent) const;

	/* Response 400
	Bad Request
	*/
	bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;

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

struct RALLYHEREAPI_API Traits_GetBlockedV2
{
	typedef FRequest_GetBlockedV2 Request;
	typedef FResponse_GetBlockedV2 Response;
	typedef FDelegate_GetBlockedV2 Delegate;
	typedef FBlockedV2API API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->GetBlockedV2(InRequest, InDelegate, Priority); }
};

/* Unblock V2
 *
 * Unblock the other Player <br/><br />Permissions Required: friend:block_list:write
*/
struct RALLYHEREAPI_API FRequest_UnblockV2 : public FRequest
{
	FRequest_UnblockV2();
	virtual ~FRequest_UnblockV2() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	FName GetSimplifiedPathWithVerb() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	FGuid PlayerUuid;
	FGuid OtherPlayerUuid;
};

struct RALLYHEREAPI_API FResponse_UnblockV2 : public FResponse
{
	FResponse_UnblockV2(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_UnblockV2() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	


	// Manual Response Helpers
	/* Response 204
	Successful Response
	*/

	/* Response 400
	Bad Request
	*/
	bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;

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

struct RALLYHEREAPI_API Traits_UnblockV2
{
	typedef FRequest_UnblockV2 Request;
	typedef FResponse_UnblockV2 Response;
	typedef FDelegate_UnblockV2 Delegate;
	typedef FBlockedV2API API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->UnblockV2(InRequest, InDelegate, Priority); }
};


}
