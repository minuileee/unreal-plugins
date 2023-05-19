// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIHelpers.h"
#include "BlockedListV1.h"
#include "BlockedPlayerV1.h"
#include "HTTPValidationError.h"
#include "HzApiErrorModel.h"

namespace RallyHereAPI
{
using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

struct FRequest_Block;
struct FResponse_Block;
struct FRequest_GetBlocked;
struct FResponse_GetBlocked;
struct FRequest_GetBlockedListForPlayer;
struct FResponse_GetBlockedListForPlayer;
struct FRequest_Unblock;
struct FResponse_Unblock;

DECLARE_DELEGATE_OneParam(FDelegate_Block, const FResponse_Block&);
DECLARE_DELEGATE_OneParam(FDelegate_GetBlocked, const FResponse_GetBlocked&);
DECLARE_DELEGATE_OneParam(FDelegate_GetBlockedListForPlayer, const FResponse_GetBlockedListForPlayer&);
DECLARE_DELEGATE_OneParam(FDelegate_Unblock, const FResponse_Unblock&);

class RALLYHEREAPI_API FBlockedV1API : public FAPI
{
public:
    FBlockedV1API();
    virtual ~FBlockedV1API();

    FHttpRequestPtr Block(const FRequest_Block& Request, const FDelegate_Block& Delegate = FDelegate_Block());
    FHttpRequestPtr GetBlocked(const FRequest_GetBlocked& Request, const FDelegate_GetBlocked& Delegate = FDelegate_GetBlocked());
    FHttpRequestPtr GetBlockedListForPlayer(const FRequest_GetBlockedListForPlayer& Request, const FDelegate_GetBlockedListForPlayer& Delegate = FDelegate_GetBlockedListForPlayer());
    FHttpRequestPtr Unblock(const FRequest_Unblock& Request, const FDelegate_Unblock& Delegate = FDelegate_Unblock());

private:
    void OnBlockResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_Block Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry);
    void OnGetBlockedResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetBlocked Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry);
    void OnGetBlockedListForPlayerResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetBlockedListForPlayer Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry);
    void OnUnblockResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_Unblock Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry);

};

/* Block
 *
 * Block the other Player. There is a max number of Players that can be blocked per Player.                     The limit can determined using [this API](/#/Configuration%20V1/get_friends_and_block_limits).                     &lt;br/&gt;&lt;br /&gt;Permissions Required: friend:block_list:write
*/
struct RALLYHEREAPI_API FRequest_Block : public FRequest
{
    FRequest_Block();
    virtual ~FRequest_Block() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FString GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    int32 PlayerId = 0;
    int32 OtherPlayerId = 0;
};

struct RALLYHEREAPI_API FResponse_Block : public FResponse
{
    FResponse_Block(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_Block() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_BlockedPlayerV1 Content;

};

struct RALLYHEREAPI_API Traits_Block
{
    typedef FRequest_Block Request;
    typedef FResponse_Block Response;
    typedef FDelegate_Block Delegate;
    typedef FBlockedV1API API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate()) { return InAPI.Block(InRequest, InDelegate); }
};

/* Get Blocked
 *
 * Get the Blocked Player&lt;br/&gt;&lt;br /&gt;Permissions Required: friend:block_list:read
*/
struct RALLYHEREAPI_API FRequest_GetBlocked : public FRequest
{
    FRequest_GetBlocked();
    virtual ~FRequest_GetBlocked() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FString GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    int32 PlayerId = 0;
    int32 OtherPlayerId = 0;
};

struct RALLYHEREAPI_API FResponse_GetBlocked : public FResponse
{
    FResponse_GetBlocked(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetBlocked() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_BlockedPlayerV1 Content;

};

struct RALLYHEREAPI_API Traits_GetBlocked
{
    typedef FRequest_GetBlocked Request;
    typedef FResponse_GetBlocked Response;
    typedef FDelegate_GetBlocked Delegate;
    typedef FBlockedV1API API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate()) { return InAPI.GetBlocked(InRequest, InDelegate); }
};

/* Get Blocked List For Player
 *
 * Fetch the blocked list for the Player. &lt;br /&gt;&lt;br /&gt;                         &lt;b&gt;Note:&lt;/b&gt; This API supports etags and will return the etag header when with the response.                          Clients can utilize the &lt;i&gt;if-none-match&lt;/i&gt; header to avoid having to reload the response if it has not changed.                          &lt;br/&gt;&lt;br /&gt;Permissions Required: friend:block_list:read
*/
struct RALLYHEREAPI_API FRequest_GetBlockedListForPlayer : public FRequest
{
    FRequest_GetBlockedListForPlayer();
    virtual ~FRequest_GetBlockedListForPlayer() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FString GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    int32 PlayerId = 0;
    TOptional<int32> Page;
    TOptional<int32> Limit;
    /* If you provide the ETag that matches the current ETag for this resource, a 304 response will be return - indicating that the resource has not changed. */
    TOptional<FString> IfNoneMatch;
};

struct RALLYHEREAPI_API FResponse_GetBlockedListForPlayer : public FResponse
{
    FResponse_GetBlockedListForPlayer(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetBlockedListForPlayer() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    bool ParseHeaders() override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_BlockedListV1 Content;
    // Headers
    /* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
    TOptional<FString> ETag;
};

struct RALLYHEREAPI_API Traits_GetBlockedListForPlayer
{
    typedef FRequest_GetBlockedListForPlayer Request;
    typedef FResponse_GetBlockedListForPlayer Response;
    typedef FDelegate_GetBlockedListForPlayer Delegate;
    typedef FBlockedV1API API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate()) { return InAPI.GetBlockedListForPlayer(InRequest, InDelegate); }
};

/* Unblock
 *
 * Unblock the other Player&lt;br/&gt;&lt;br /&gt;Permissions Required: friend:block_list:write
*/
struct RALLYHEREAPI_API FRequest_Unblock : public FRequest
{
    FRequest_Unblock();
    virtual ~FRequest_Unblock() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FString GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    int32 PlayerId = 0;
    int32 OtherPlayerId = 0;
};

struct RALLYHEREAPI_API FResponse_Unblock : public FResponse
{
    FResponse_Unblock(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_Unblock() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    

};

struct RALLYHEREAPI_API Traits_Unblock
{
    typedef FRequest_Unblock Request;
    typedef FResponse_Unblock Response;
    typedef FDelegate_Unblock Delegate;
    typedef FBlockedV1API API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate()) { return InAPI.Unblock(InRequest, InDelegate); }
};


}
