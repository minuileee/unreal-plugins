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
#include "FriendRelationshipV1.h"
#include "FriendsListV1.h"
#include "FriendsV1.h"
#include "HTTPValidationError.h"
#include "HzApiErrorModel.h"
#include "Notes.h"

namespace RallyHereAPI
{
using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

struct FRequest_AddFriend;
struct FResponse_AddFriend;
struct FRequest_AddNotes;
struct FResponse_AddNotes;
struct FRequest_DeleteFriend;
struct FResponse_DeleteFriend;
struct FRequest_DeleteFriends;
struct FResponse_DeleteFriends;
struct FRequest_DeleteNotes;
struct FResponse_DeleteNotes;
struct FRequest_GetFriendRelationship;
struct FResponse_GetFriendRelationship;
struct FRequest_GetFriendsListForPlayer;
struct FResponse_GetFriendsListForPlayer;

DECLARE_DELEGATE_OneParam(FDelegate_AddFriend, const FResponse_AddFriend&);
DECLARE_DELEGATE_OneParam(FDelegate_AddNotes, const FResponse_AddNotes&);
DECLARE_DELEGATE_OneParam(FDelegate_DeleteFriend, const FResponse_DeleteFriend&);
DECLARE_DELEGATE_OneParam(FDelegate_DeleteFriends, const FResponse_DeleteFriends&);
DECLARE_DELEGATE_OneParam(FDelegate_DeleteNotes, const FResponse_DeleteNotes&);
DECLARE_DELEGATE_OneParam(FDelegate_GetFriendRelationship, const FResponse_GetFriendRelationship&);
DECLARE_DELEGATE_OneParam(FDelegate_GetFriendsListForPlayer, const FResponse_GetFriendsListForPlayer&);

class RALLYHEREAPI_API FFriendsV1API : public FAPI
{
public:
    FFriendsV1API();
    virtual ~FFriendsV1API();

    FHttpRequestPtr AddFriend(const FRequest_AddFriend& Request, const FDelegate_AddFriend& Delegate = FDelegate_AddFriend(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr AddNotes(const FRequest_AddNotes& Request, const FDelegate_AddNotes& Delegate = FDelegate_AddNotes(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr DeleteFriend(const FRequest_DeleteFriend& Request, const FDelegate_DeleteFriend& Delegate = FDelegate_DeleteFriend(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr DeleteFriends(const FRequest_DeleteFriends& Request, const FDelegate_DeleteFriends& Delegate = FDelegate_DeleteFriends(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr DeleteNotes(const FRequest_DeleteNotes& Request, const FDelegate_DeleteNotes& Delegate = FDelegate_DeleteNotes(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr GetFriendRelationship(const FRequest_GetFriendRelationship& Request, const FDelegate_GetFriendRelationship& Delegate = FDelegate_GetFriendRelationship(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr GetFriendsListForPlayer(const FRequest_GetFriendsListForPlayer& Request, const FDelegate_GetFriendsListForPlayer& Delegate = FDelegate_GetFriendsListForPlayer(), int32 Priority = DefaultRallyHereAPIPriority);

private:
    void OnAddFriendResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_AddFriend Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnAddNotesResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_AddNotes Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnDeleteFriendResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_DeleteFriend Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnDeleteFriendsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_DeleteFriends Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnDeleteNotesResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_DeleteNotes Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetFriendRelationshipResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetFriendRelationship Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetFriendsListForPlayerResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetFriendsListForPlayer Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Add Friend
 *
 * Modify the friend&#39;s relationship status with the other Player. There is a max number of friends that can be added for a Player.                 The limit can determined using [this API](/#/Configuration%20V1/get_friends_and_block_limits). This API allows you optionally update                  the player&#39;s notes for the other player. If you do not want to update or set the notes when adding the other player, then do not                  include a body.&lt;br /&gt;&lt;br /&gt; &lt;b&gt;Note:&lt;/b&gt; This API supports etags and will return the etag header when with the response and will match the etag value                  provided when [fetching Friend Relationship between these two players](/#/Friends%20V1/get_friend_relationship). &lt;b&gt;It is highly                  recommended to provide the etag value with the &lt;i&gt; if-match &lt;/i&gt; header to avoid lost updates.                  &lt;br/&gt;&lt;br /&gt;Permissions Required: friend:friend_list:write
*/
struct RALLYHEREAPI_API FRequest_AddFriend : public FRequest
{
    FRequest_AddFriend();
    virtual ~FRequest_AddFriend() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    int32 PlayerId = 0;
    int32 OtherPlayerId = 0;
    /* If you provide the ETag that matches the current ETag for this resource, a 304 response will be return - indicating that the resource has not changed. */
    TOptional<FString> IfMatch;
    TOptional<FRHAPI_Notes> Notes;
};

struct RALLYHEREAPI_API FResponse_AddFriend : public FResponse
{
    FResponse_AddFriend(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_AddFriend() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    bool ParseHeaders() override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_FriendRelationshipV1 Content;
    // Headers
    /* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
    TOptional<FString> ETag;
    bool TryGetContentFor200(FRHAPI_FriendRelationshipV1& OutContent) const;
    bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;
};

struct RALLYHEREAPI_API Traits_AddFriend
{
    typedef FRequest_AddFriend Request;
    typedef FResponse_AddFriend Response;
    typedef FDelegate_AddFriend Delegate;
    typedef FFriendsV1API API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.AddFriend(InRequest, InDelegate, Priority); }
};

/* Add Notes
 *
 * Update Player&#39;s notes on the other player. Players can only add notes for players they have relationship&#39;s with.      The notes will be removed when the relationship is ended.     &lt;br/&gt;&lt;br /&gt;Permissions Required: friend:friend_list:write
*/
struct RALLYHEREAPI_API FRequest_AddNotes : public FRequest
{
    FRequest_AddNotes();
    virtual ~FRequest_AddNotes() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    int32 PlayerId = 0;
    int32 OtherPlayerId = 0;
    FRHAPI_Notes Notes;
    /* If you provide the ETag that does not matches the current ETag for this resource, a 412 response will be return - indicating that the resource has changed. */
    TOptional<FString> IfMatch;
};

struct RALLYHEREAPI_API FResponse_AddNotes : public FResponse
{
    FResponse_AddNotes(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_AddNotes() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    bool ParseHeaders() override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_FriendRelationshipV1 Content;
    // Headers
    /* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
    TOptional<FString> ETag;
    bool TryGetContentFor200(FRHAPI_FriendRelationshipV1& OutContent) const;
    bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;
};

struct RALLYHEREAPI_API Traits_AddNotes
{
    typedef FRequest_AddNotes Request;
    typedef FResponse_AddNotes Response;
    typedef FDelegate_AddNotes Delegate;
    typedef FFriendsV1API API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.AddNotes(InRequest, InDelegate, Priority); }
};

/* Delete Friend
 *
 * Remove the friend&#39;s relationship status with the other Player.                  This should be used for declining Friend requests, deleting sent Friends Requests, and deleting Friends &lt;br /&gt;&lt;br /&gt;                 &lt;b&gt;Note:&lt;/b&gt; This API supports etags and will return the etag header when with the response and will match the etag value                  provided when [fetching Friend Relationship between these two players](#/Friends V1/get_friend_relationship). &lt;b&gt;It is highly                  recommended to provide the etag value with the &lt;i&gt; if-match &lt;/i&gt; header to avoid lost updates.                  &lt;br/&gt;&lt;br /&gt;Permissions Required: friend:friend_list:write
*/
struct RALLYHEREAPI_API FRequest_DeleteFriend : public FRequest
{
    FRequest_DeleteFriend();
    virtual ~FRequest_DeleteFriend() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    int32 PlayerId = 0;
    int32 OtherPlayerId = 0;
    /* If you provide the ETag that does not matches the current ETag for this resource, a 412 response will be return - indicating that the resource has changed. */
    TOptional<FString> IfMatch;
};

struct RALLYHEREAPI_API FResponse_DeleteFriend : public FResponse
{
    FResponse_DeleteFriend(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_DeleteFriend() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    bool ParseHeaders() override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    
    // Headers
    /* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
    TOptional<FString> ETag;
    bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;
};

struct RALLYHEREAPI_API Traits_DeleteFriend
{
    typedef FRequest_DeleteFriend Request;
    typedef FResponse_DeleteFriend Response;
    typedef FDelegate_DeleteFriend Delegate;
    typedef FFriendsV1API API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.DeleteFriend(InRequest, InDelegate, Priority); }
};

/* Delete Friends
 *
 * Remove the friend&#39;s relationship status with the other players &lt;br/&gt;&lt;br /&gt;Permissions Required: friend:friend_list:write
*/
struct RALLYHEREAPI_API FRequest_DeleteFriends : public FRequest
{
    FRequest_DeleteFriends();
    virtual ~FRequest_DeleteFriends() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    int32 PlayerId = 0;
    FRHAPI_FriendsV1 FriendsV1;
};

struct RALLYHEREAPI_API FResponse_DeleteFriends : public FResponse
{
    FResponse_DeleteFriends(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_DeleteFriends() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    

    bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;
};

struct RALLYHEREAPI_API Traits_DeleteFriends
{
    typedef FRequest_DeleteFriends Request;
    typedef FResponse_DeleteFriends Response;
    typedef FDelegate_DeleteFriends Delegate;
    typedef FFriendsV1API API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.DeleteFriends(InRequest, InDelegate, Priority); }
};

/* Delete Notes
 *
 * Remove the Player&#39;s notes on the other player. Players can only add notes for players they have relationship&#39;s with.      The notes will be removed when the relationship is ended.     &lt;br/&gt;&lt;br /&gt;Permissions Required: friend:friend_list:write
*/
struct RALLYHEREAPI_API FRequest_DeleteNotes : public FRequest
{
    FRequest_DeleteNotes();
    virtual ~FRequest_DeleteNotes() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    int32 PlayerId = 0;
    int32 OtherPlayerId = 0;
    /* If you provide the ETag that does not matches the current ETag for this resource, a 412 response will be return - indicating that the resource has changed. */
    TOptional<FString> IfMatch;
};

struct RALLYHEREAPI_API FResponse_DeleteNotes : public FResponse
{
    FResponse_DeleteNotes(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_DeleteNotes() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    

    bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;
};

struct RALLYHEREAPI_API Traits_DeleteNotes
{
    typedef FRequest_DeleteNotes Request;
    typedef FResponse_DeleteNotes Response;
    typedef FDelegate_DeleteNotes Delegate;
    typedef FFriendsV1API API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.DeleteNotes(InRequest, InDelegate, Priority); }
};

/* Get Friend Relationship
 *
 * Get the relationship status with the other Player. &lt;br /&gt; &lt;br /&gt;                 &lt;b&gt;Note:&lt;/b&gt; This API supports etags and will return the etag header when with the response.                  Clients can utilize the &lt;i&gt;if-none-match&lt;/i&gt; header to avoid having to reload the response if                  it has not changed or to use it to modify the relationship without loosing updates.                  &lt;br/&gt;&lt;br /&gt;Permissions Required: friend:friend_list:read
*/
struct RALLYHEREAPI_API FRequest_GetFriendRelationship : public FRequest
{
    FRequest_GetFriendRelationship();
    virtual ~FRequest_GetFriendRelationship() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    int32 PlayerId = 0;
    int32 OtherPlayerId = 0;
    /* If you provide the ETag that matches the current ETag for this resource, a 304 response will be return - indicating that the resource has not changed. */
    TOptional<FString> IfNoneMatch;
};

struct RALLYHEREAPI_API FResponse_GetFriendRelationship : public FResponse
{
    FResponse_GetFriendRelationship(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetFriendRelationship() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    bool ParseHeaders() override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_FriendRelationshipV1 Content;
    // Headers
    /* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
    TOptional<FString> ETag;
    bool TryGetContentFor200(FRHAPI_FriendRelationshipV1& OutContent) const;
    bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;
};

struct RALLYHEREAPI_API Traits_GetFriendRelationship
{
    typedef FRequest_GetFriendRelationship Request;
    typedef FResponse_GetFriendRelationship Response;
    typedef FDelegate_GetFriendRelationship Delegate;
    typedef FFriendsV1API API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.GetFriendRelationship(InRequest, InDelegate, Priority); }
};

/* Get Friends List For Player
 *
 * Fetch the friend&#39;s list for the Player and their relationship status with those friends. &lt;br /&gt;&lt;br /&gt;                 &lt;b&gt;Note:&lt;/b&gt; This API supports etags and will return the etag header when with the response.                  Clients and then utilize the &lt;i&gt;if-none-match&lt;/i&gt; header to avoid having to reload the response if it has not changed.                  &lt;br/&gt;&lt;br /&gt;Permissions Required: friend:friend_list:read
*/
struct RALLYHEREAPI_API FRequest_GetFriendsListForPlayer : public FRequest
{
    FRequest_GetFriendsListForPlayer();
    virtual ~FRequest_GetFriendsListForPlayer() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    int32 PlayerId = 0;
    TOptional<int32> Page;
    TOptional<int32> Limit;
    /* If you provide the ETag that matches the current ETag for this resource, a 304 response will be return - indicating that the resource has not changed. */
    TOptional<FString> IfNoneMatch;
};

struct RALLYHEREAPI_API FResponse_GetFriendsListForPlayer : public FResponse
{
    FResponse_GetFriendsListForPlayer(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetFriendsListForPlayer() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    bool ParseHeaders() override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_FriendsListV1 Content;
    // Headers
    /* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
    TOptional<FString> ETag;
    bool TryGetContentFor200(FRHAPI_FriendsListV1& OutContent) const;
    bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;
};

struct RALLYHEREAPI_API Traits_GetFriendsListForPlayer
{
    typedef FRequest_GetFriendsListForPlayer Request;
    typedef FResponse_GetFriendsListForPlayer Response;
    typedef FDelegate_GetFriendsListForPlayer Delegate;
    typedef FFriendsV1API API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.GetFriendsListForPlayer(InRequest, InDelegate, Priority); }
};


}
