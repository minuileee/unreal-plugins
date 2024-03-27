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
#include "HzApiErrorModel.h"
#include "MarketingCampaigns.h"

namespace RallyHereAPI
{
using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

struct FRequest_GetMarketingCampaigns;
struct FResponse_GetMarketingCampaigns;

DECLARE_DELEGATE_OneParam(FDelegate_GetMarketingCampaigns, const FResponse_GetMarketingCampaigns&);

class RALLYHEREAPI_API FMarketingAPI : public FAPI
{
public:
	FMarketingAPI();
	virtual ~FMarketingAPI();

	FHttpRequestPtr GetMarketingCampaigns(const FRequest_GetMarketingCampaigns& Request, const FDelegate_GetMarketingCampaigns& Delegate = FDelegate_GetMarketingCampaigns(), int32 Priority = DefaultRallyHereAPIPriority);

private:
	void OnGetMarketingCampaignsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetMarketingCampaigns Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Get Marketing Campaigns
 *
 * Get all marketing campaigns. There is currently no way to add Market Campaigns via API. Reach out to your Rally Here representative to add a new campaign.
*/
struct RALLYHEREAPI_API FRequest_GetMarketingCampaigns : public FRequest
{
	FRequest_GetMarketingCampaigns();
	virtual ~FRequest_GetMarketingCampaigns() = default;
	bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
	FString ComputePath() const override;
	FName GetSimplifiedPath() const override;
	TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

	TSharedPtr<FAuthContext> AuthContext;
};

struct RALLYHEREAPI_API FResponse_GetMarketingCampaigns : public FResponse
{
	FResponse_GetMarketingCampaigns(FRequestMetadata InRequestMetadata);
	virtual ~FResponse_GetMarketingCampaigns() = default;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const override;

	FRHAPI_MarketingCampaigns Content;


	// Manual Response Helpers
	/* Response 200
	Successful Response
	*/
	bool TryGetContentFor200(FRHAPI_MarketingCampaigns& OutContent) const;

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

struct RALLYHEREAPI_API Traits_GetMarketingCampaigns
{
	typedef FRequest_GetMarketingCampaigns Request;
	typedef FResponse_GetMarketingCampaigns Response;
	typedef FDelegate_GetMarketingCampaigns Delegate;
	typedef FMarketingAPI API;
	static FString Name;

	static FHttpRequestPtr DoCall(TSharedRef<API> InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI->GetMarketingCampaigns(InRequest, InDelegate, Priority); }
};


}
