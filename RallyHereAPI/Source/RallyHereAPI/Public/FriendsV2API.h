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
#include "FriendRelationship.h"
#include "Friends.h"
#include "FriendsList.h"
#include "HTTPValidationError.h"
#include "HzApiErrorModel.h"
#include "Notes.h"

namespace RallyHereAPI
{
using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

struct FRequest_AddFriendV2;
struct FResponse_AddFriendV2;
struct FRequest_AddNotesV2;
struct FResponse_AddNotesV2;
struct FRequest_DeleteFriendV2;
struct FResponse_DeleteFriendV2;
struct FRequest_DeleteFriendsV2;
struct FResponse_DeleteFriendsV2;
struct FRequest_DeleteNotesV2;
struct FResponse_DeleteNotesV2;
struct FRequest_GetFriendRelationshipV2;
struct FResponse_GetFriendRelationshipV2;
struct FRequest_GetFriendsListForPlayerV2;
struct FResponse_GetFriendsListForPlayerV2;

DECLARE_DELEGATE_OneParam(FDelegate_AddFriendV2, const FResponse_AddFriendV2&);
DECLARE_DELEGATE_OneParam(FDelegate_AddNotesV2, const FResponse_AddNotesV2&);
DECLARE_DELEGATE_OneParam(FDelegate_DeleteFriendV2, const FResponse_DeleteFriendV2&);
DECLARE_DELEGATE_OneParam(FDelegate_DeleteFriendsV2, const FResponse_DeleteFriendsV2&);
DECLARE_DELEGATE_OneParam(FDelegate_DeleteNotesV2, const FResponse_DeleteNotesV2&);
DECLARE_DELEGATE_OneParam(FDelegate_GetFriendRelationshipV2, const FResponse_GetFriendRelationshipV2&);
DECLARE_DELEGATE_OneParam(FDelegate_GetFriendsListForPlayerV2, const FResponse_GetFriendsListForPlayerV2&);

class RALLYHEREAPI_API FFriendsV2API : public FAPI
{
public:
    FFriendsV2API();
    virtual ~FFriendsV2API();

    FHttpRequestPtr AddFriendV2(const FRequest_AddFriendV2& Request, const FDelegate_AddFriendV2& Delegate = FDelegate_AddFriendV2(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr AddNotesV2(const FRequest_AddNotesV2& Request, const FDelegate_AddNotesV2& Delegate = FDelegate_AddNotesV2(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr DeleteFriendV2(const FRequest_DeleteFriendV2& Request, const FDelegate_DeleteFriendV2& Delegate = FDelegate_DeleteFriendV2(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr DeleteFriendsV2(const FRequest_DeleteFriendsV2& Request, const FDelegate_DeleteFriendsV2& Delegate = FDelegate_DeleteFriendsV2(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr DeleteNotesV2(const FRequest_DeleteNotesV2& Request, const FDelegate_DeleteNotesV2& Delegate = FDelegate_DeleteNotesV2(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr GetFriendRelationshipV2(const FRequest_GetFriendRelationshipV2& Request, const FDelegate_GetFriendRelationshipV2& Delegate = FDelegate_GetFriendRelationshipV2(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr GetFriendsListForPlayerV2(const FRequest_GetFriendsListForPlayerV2& Request, const FDelegate_GetFriendsListForPlayerV2& Delegate = FDelegate_GetFriendsListForPlayerV2(), int32 Priority = DefaultRallyHereAPIPriority);

private:
    void OnAddFriendV2Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_AddFriendV2 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnAddNotesV2Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_AddNotesV2 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnDeleteFriendV2Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_DeleteFriendV2 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnDeleteFriendsV2Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_DeleteFriendsV2 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnDeleteNotesV2Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_DeleteNotesV2 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetFriendRelationshipV2Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetFriendRelationshipV2 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetFriendsListForPlayerV2Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetFriendsListForPlayerV2 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Add Friend V2
 *
 * Modify the friend&#39;s relationship status with the other Player. There is a max number of friends that can be added for a Player.                     The limit can determined using [this API](/#/Configuration%20V1/get_friends_and_block_limits). This API allows you optionally update                      the player&#39;s notes for the other player. If you do not want to update or set the notes when adding the other player, then do not                      include a body.&lt;br /&gt;&lt;br /&gt;                     &lt;b&gt;Note:&lt;/b&gt; This API supports etags and will return the etag header when with the response and will match the etag value                      provided when [fetching Friend Relationship between these two players](/#/Friends%20V1/get_friend_relationship). &lt;b&gt;It is highly                      recommended to provide the etag value with the &lt;i&gt; if-match &lt;/i&gt; header to avoid lost updates.                      &lt;br/&gt;&lt;br /&gt;Permissions Required: friend:friend_list:write
*/
struct RALLYHEREAPI_API FRequest_AddFriendV2 : public FRequest
{
    FRequest_AddFriendV2();
    virtual ~FRequest_AddFriendV2() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid PlayerUuid;
    FGuid OtherPlayerUuid;
    /* If you provide the ETag that does not matches the current ETag for this resource, a 412 response will be return - indicating that the resource has changed. */
    TOptional<FString> IfMatch;
    TOptional<FRHAPI_Notes> Notes;
};

struct RALLYHEREAPI_API FResponse_AddFriendV2 : public FResponse
{
    FResponse_AddFriendV2(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_AddFriendV2() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    bool ParseHeaders() override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_FriendRelationship Content;
    // Headers
    /* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
    TOptional<FString> ETag;
};

struct RALLYHEREAPI_API Traits_AddFriendV2
{
    typedef FRequest_AddFriendV2 Request;
    typedef FResponse_AddFriendV2 Response;
    typedef FDelegate_AddFriendV2 Delegate;
    typedef FFriendsV2API API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.AddFriendV2(InRequest, InDelegate, Priority); }
};

/* Add Notes V2
 *
 * Update Player&#39;s notes on the other player. Players can only add notes for players they have relationship&#39;s with.                      The notes will be removed when the relationship is ended.                     &lt;br/&gt;&lt;br /&gt;Permissions Required: friend:friend_list:write
*/
struct RALLYHEREAPI_API FRequest_AddNotesV2 : public FRequest
{
    FRequest_AddNotesV2();
    virtual ~FRequest_AddNotesV2() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid PlayerUuid;
    FGuid OtherPlayerUuid;
    FRHAPI_Notes Notes;
    /* If you provide the ETag that does not matches the current ETag for this resource, a 412 response will be return - indicating that the resource has changed. */
    TOptional<FString> IfMatch;
};

struct RALLYHEREAPI_API FResponse_AddNotesV2 : public FResponse
{
    FResponse_AddNotesV2(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_AddNotesV2() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    bool ParseHeaders() override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_FriendRelationship Content;
    // Headers
    /* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
    TOptional<FString> ETag;
};

struct RALLYHEREAPI_API Traits_AddNotesV2
{
    typedef FRequest_AddNotesV2 Request;
    typedef FResponse_AddNotesV2 Response;
    typedef FDelegate_AddNotesV2 Delegate;
    typedef FFriendsV2API API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.AddNotesV2(InRequest, InDelegate, Priority); }
};

/* Delete Friend V2
 *
 * Remove the friend&#39;s relationship status with the other Player.                      This should be used for declining Friend requests, deleting sent Friends Requests, and deleting Friends &lt;br /&gt;&lt;br /&gt;                     &lt;b&gt;Note:&lt;/b&gt; This API supports etags and will return the etag header when with the response and will match the etag value                      provided when [fetching Friend Relationship between these two players](#/Friends V1/get_friend_relationship). &lt;b&gt;It is highly                      recommended to provide the etag value with the &lt;i&gt; if-match &lt;/i&gt; header to avoid lost updates.                      &lt;br/&gt;&lt;br /&gt;Permissions Required: friend:friend_list:write
*/
struct RALLYHEREAPI_API FRequest_DeleteFriendV2 : public FRequest
{
    FRequest_DeleteFriendV2();
    virtual ~FRequest_DeleteFriendV2() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid PlayerUuid;
    FGuid OtherPlayerUuid;
    /* If you provide the ETag that does not matches the current ETag for this resource, a 412 response will be return - indicating that the resource has changed. */
    TOptional<FString> IfMatch;
};

struct RALLYHEREAPI_API FResponse_DeleteFriendV2 : public FResponse
{
    FResponse_DeleteFriendV2(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_DeleteFriendV2() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    bool ParseHeaders() override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    
    // Headers
    /* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
    TOptional<FString> ETag;
};

struct RALLYHEREAPI_API Traits_DeleteFriendV2
{
    typedef FRequest_DeleteFriendV2 Request;
    typedef FResponse_DeleteFriendV2 Response;
    typedef FDelegate_DeleteFriendV2 Delegate;
    typedef FFriendsV2API API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.DeleteFriendV2(InRequest, InDelegate, Priority); }
};

/* Delete Friends V2
 *
 * Remove the friend&#39;s relationship status with the other players
*/
struct RALLYHEREAPI_API FRequest_DeleteFriendsV2 : public FRequest
{
    FRequest_DeleteFriendsV2();
    virtual ~FRequest_DeleteFriendsV2() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid PlayerUuid;
    FRHAPI_Friends Friends;
};

struct RALLYHEREAPI_API FResponse_DeleteFriendsV2 : public FResponse
{
    FResponse_DeleteFriendsV2(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_DeleteFriendsV2() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    

};

struct RALLYHEREAPI_API Traits_DeleteFriendsV2
{
    typedef FRequest_DeleteFriendsV2 Request;
    typedef FResponse_DeleteFriendsV2 Response;
    typedef FDelegate_DeleteFriendsV2 Delegate;
    typedef FFriendsV2API API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.DeleteFriendsV2(InRequest, InDelegate, Priority); }
};

/* Delete Notes V2
 *
 * Remove the Player&#39;s notes on the other player. Players can only add notes for players they have relationship&#39;s with.                      The notes will be removed when the relationship is ended.                     &lt;br/&gt;&lt;br /&gt;Permissions Required: {FriendPermissions.FRIEND_LIST_WRITE}
*/
struct RALLYHEREAPI_API FRequest_DeleteNotesV2 : public FRequest
{
    FRequest_DeleteNotesV2();
    virtual ~FRequest_DeleteNotesV2() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid PlayerUuid;
    FGuid OtherPlayerUuid;
    /* If you provide the ETag that does not matches the current ETag for this resource, a 412 response will be return - indicating that the resource has changed. */
    TOptional<FString> IfMatch;
};

struct RALLYHEREAPI_API FResponse_DeleteNotesV2 : public FResponse
{
    FResponse_DeleteNotesV2(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_DeleteNotesV2() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    

};

struct RALLYHEREAPI_API Traits_DeleteNotesV2
{
    typedef FRequest_DeleteNotesV2 Request;
    typedef FResponse_DeleteNotesV2 Response;
    typedef FDelegate_DeleteNotesV2 Delegate;
    typedef FFriendsV2API API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.DeleteNotesV2(InRequest, InDelegate, Priority); }
};

/* Get Friend Relationship V2
 *
 * Get the relationship status with the other Player. &lt;br /&gt; &lt;br /&gt;                     &lt;b&gt;Note:&lt;/b&gt; This API supports etags and will return the etag header when with the response.                      Clients and then utilize the &lt;i&gt;if-none-match&lt;/i&gt; header to avoid having to reload the response if                      it has not changed or to use it to modify the relationship without loosing updates.                      &lt;br/&gt;&lt;br /&gt;Permissions Required: friend:friend_list:read
*/
struct RALLYHEREAPI_API FRequest_GetFriendRelationshipV2 : public FRequest
{
    FRequest_GetFriendRelationshipV2();
    virtual ~FRequest_GetFriendRelationshipV2() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid PlayerUuid;
    FGuid OtherPlayerUuid;
    /* If you provide the ETag that matches the current ETag for this resource, a 304 response will be return - indicating that the resource has not changed. */
    TOptional<FString> IfNoneMatch;
};

struct RALLYHEREAPI_API FResponse_GetFriendRelationshipV2 : public FResponse
{
    FResponse_GetFriendRelationshipV2(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetFriendRelationshipV2() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    bool ParseHeaders() override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_FriendRelationship Content;
    // Headers
    /* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
    TOptional<FString> ETag;
};

struct RALLYHEREAPI_API Traits_GetFriendRelationshipV2
{
    typedef FRequest_GetFriendRelationshipV2 Request;
    typedef FResponse_GetFriendRelationshipV2 Response;
    typedef FDelegate_GetFriendRelationshipV2 Delegate;
    typedef FFriendsV2API API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.GetFriendRelationshipV2(InRequest, InDelegate, Priority); }
};

/* Get Friends List For Player V2
 *
 * Fetch the friend&#39;s list for the Player and their relationship status with those friends. &lt;br /&gt;&lt;br /&gt;                     &lt;b&gt;Note:&lt;/b&gt; This API supports etags and will return the etag header when with the response.                      Clients can utilize the &lt;i&gt;if-none-match&lt;/i&gt; header to avoid having to reload the response if it has not changed.
*/
struct RALLYHEREAPI_API FRequest_GetFriendsListForPlayerV2 : public FRequest
{
    FRequest_GetFriendsListForPlayerV2();
    virtual ~FRequest_GetFriendsListForPlayerV2() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid PlayerUuid;
    TOptional<int32> Page;
    TOptional<int32> Limit;
    /* If you provide the ETag that matches the current ETag for this resource, a 304 response will be return - indicating that the resource has not changed. */
    TOptional<FString> IfNoneMatch;
};

struct RALLYHEREAPI_API FResponse_GetFriendsListForPlayerV2 : public FResponse
{
    FResponse_GetFriendsListForPlayerV2(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetFriendsListForPlayerV2() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    bool ParseHeaders() override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_FriendsList Content;
    // Headers
    /* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
    TOptional<FString> ETag;
};

struct RALLYHEREAPI_API Traits_GetFriendsListForPlayerV2
{
    typedef FRequest_GetFriendsListForPlayerV2 Request;
    typedef FResponse_GetFriendsListForPlayerV2 Response;
    typedef FDelegate_GetFriendsListForPlayerV2 Delegate;
    typedef FFriendsV2API API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.GetFriendsListForPlayerV2(InRequest, InDelegate, Priority); }
};


}
