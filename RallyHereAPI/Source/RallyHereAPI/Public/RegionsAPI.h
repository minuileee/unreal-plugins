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
#include "HTTPValidationError.h"
#include "HzApiErrorModel.h"
#include "RegionsResponse.h"

namespace RallyHereAPI
{
using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

struct FRequest_GetAllRegions;
struct FResponse_GetAllRegions;

DECLARE_DELEGATE_OneParam(FDelegate_GetAllRegions, const FResponse_GetAllRegions&);

class RALLYHEREAPI_API FRegionsAPI : public FAPI
{
public:
	FRegionsAPI();
	virtual ~FRegionsAPI();

	FHttpRequestPtr GetAllRegions(const FRequest_GetAllRegions& Request, const FDelegate_GetAllRegions& Delegate = FDelegate_GetAllRegions(), int32 Priority = DefaultRallyHereAPIPriority);

private:
	void OnGetAllRegionsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAllRegions Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Get All Regions
 *
 * Get all of the enabled regions and their configuration
 * 
 * Required Permissions:
 * 
 * - For any player (including themselves) any of: `session:*`, `session:read:config`
 * 
 * 
 * 
 * Required Session Permissions: None
*/
struct RALLYHEREAPI_API FRequest_GetAllRegions : public FRequest
{
	FRequest_GetAllRegions();
	virtual ~FRequest_GetAllRegions() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
	TOptional<int32> Cursor;
	TOptional<int32> PageSize;
};

struct RALLYHEREAPI_API FResponse_GetAllRegions : public FResponse
{
	FResponse_GetAllRegions(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GetAllRegions() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_RegionsResponse Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_RegionsResponse& OutContent) const;

	/* Response 403
	Forbidden
	*/
	bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

	/* Response 422
	Validation Error
	*/
	bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetAllRegions
{
	typedef FRequest_GetAllRegions Request;
	typedef FResponse_GetAllRegions Response;
	typedef FDelegate_GetAllRegions Delegate;
	typedef FRegionsAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->GetAllRegions(InRequest, InDelegate, Priority); }
};


}
