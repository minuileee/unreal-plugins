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
#include "OffsetReset.h"
#include "HTTPValidationError.h"
#include "HzApiErrorModel.h"
#include "Notification.h"
#include "NotificationCreateResult.h"
#include "NotificationCreates.h"
#include "Notifications.h"

namespace RallyHereAPI
{
using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

struct FRequest_PlayerCreateNotification;
struct FResponse_PlayerCreateNotification;
struct FRequest_PlayerGetNotificationById;
struct FResponse_PlayerGetNotificationById;
struct FRequest_PlayerGetNotificationByIdSelf;
struct FResponse_PlayerGetNotificationByIdSelf;
struct FRequest_PlayerGetNotificationsPage;
struct FResponse_PlayerGetNotificationsPage;
struct FRequest_PlayerGetNotificationsPageSelf;
struct FResponse_PlayerGetNotificationsPageSelf;
struct FRequest_PlayerLongPollForNotifications;
struct FResponse_PlayerLongPollForNotifications;
struct FRequest_PlayerLongPollForNotificationsSelf;
struct FResponse_PlayerLongPollForNotificationsSelf;

DECLARE_DELEGATE_OneParam(FDelegate_PlayerCreateNotification, const FResponse_PlayerCreateNotification&);
DECLARE_DELEGATE_OneParam(FDelegate_PlayerGetNotificationById, const FResponse_PlayerGetNotificationById&);
DECLARE_DELEGATE_OneParam(FDelegate_PlayerGetNotificationByIdSelf, const FResponse_PlayerGetNotificationByIdSelf&);
DECLARE_DELEGATE_OneParam(FDelegate_PlayerGetNotificationsPage, const FResponse_PlayerGetNotificationsPage&);
DECLARE_DELEGATE_OneParam(FDelegate_PlayerGetNotificationsPageSelf, const FResponse_PlayerGetNotificationsPageSelf&);
DECLARE_DELEGATE_OneParam(FDelegate_PlayerLongPollForNotifications, const FResponse_PlayerLongPollForNotifications&);
DECLARE_DELEGATE_OneParam(FDelegate_PlayerLongPollForNotificationsSelf, const FResponse_PlayerLongPollForNotificationsSelf&);

class RALLYHEREAPI_API FPlayerNotificationAPI : public FAPI
{
public:
    FPlayerNotificationAPI();
    virtual ~FPlayerNotificationAPI();

    FHttpRequestPtr PlayerCreateNotification(const FRequest_PlayerCreateNotification& Request, const FDelegate_PlayerCreateNotification& Delegate = FDelegate_PlayerCreateNotification());
    FHttpRequestPtr PlayerGetNotificationById(const FRequest_PlayerGetNotificationById& Request, const FDelegate_PlayerGetNotificationById& Delegate = FDelegate_PlayerGetNotificationById());
    FHttpRequestPtr PlayerGetNotificationByIdSelf(const FRequest_PlayerGetNotificationByIdSelf& Request, const FDelegate_PlayerGetNotificationByIdSelf& Delegate = FDelegate_PlayerGetNotificationByIdSelf());
    FHttpRequestPtr PlayerGetNotificationsPage(const FRequest_PlayerGetNotificationsPage& Request, const FDelegate_PlayerGetNotificationsPage& Delegate = FDelegate_PlayerGetNotificationsPage());
    FHttpRequestPtr PlayerGetNotificationsPageSelf(const FRequest_PlayerGetNotificationsPageSelf& Request, const FDelegate_PlayerGetNotificationsPageSelf& Delegate = FDelegate_PlayerGetNotificationsPageSelf());
    FHttpRequestPtr PlayerLongPollForNotifications(const FRequest_PlayerLongPollForNotifications& Request, const FDelegate_PlayerLongPollForNotifications& Delegate = FDelegate_PlayerLongPollForNotifications());
    FHttpRequestPtr PlayerLongPollForNotificationsSelf(const FRequest_PlayerLongPollForNotificationsSelf& Request, const FDelegate_PlayerLongPollForNotificationsSelf& Delegate = FDelegate_PlayerLongPollForNotificationsSelf());

private:
    void OnPlayerCreateNotificationResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerCreateNotification Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry);
    void OnPlayerGetNotificationByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerGetNotificationById Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry);
    void OnPlayerGetNotificationByIdSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerGetNotificationByIdSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry);
    void OnPlayerGetNotificationsPageResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerGetNotificationsPage Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry);
    void OnPlayerGetNotificationsPageSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerGetNotificationsPageSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry);
    void OnPlayerLongPollForNotificationsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerLongPollForNotifications Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry);
    void OnPlayerLongPollForNotificationsSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerLongPollForNotificationsSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry);

};

/* Create Notification
 *
 * Create new notification for client.  Requires permission to create for a different client
*/
struct RALLYHEREAPI_API FRequest_PlayerCreateNotification : public FRequest
{
    FRequest_PlayerCreateNotification();
    virtual ~FRequest_PlayerCreateNotification() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FString GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid PlayerUuid;
    FRHAPI_NotificationCreates NotificationCreates;
};

struct RALLYHEREAPI_API FResponse_PlayerCreateNotification : public FResponse
{
    FResponse_PlayerCreateNotification(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_PlayerCreateNotification() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_NotificationCreateResult Content;

};

struct RALLYHEREAPI_API Traits_PlayerCreateNotification
{
    typedef FRequest_PlayerCreateNotification Request;
    typedef FResponse_PlayerCreateNotification Response;
    typedef FDelegate_PlayerCreateNotification Delegate;
    typedef FPlayerNotificationAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate()) { return InAPI.PlayerCreateNotification(InRequest, InDelegate); }
};

/* Get Notification By Id
 *
 * Retrieve a single notification by id  This version can be used for arbitrary clients with permission
*/
struct RALLYHEREAPI_API FRequest_PlayerGetNotificationById : public FRequest
{
    FRequest_PlayerGetNotificationById();
    virtual ~FRequest_PlayerGetNotificationById() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FString GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FString NotificationId;
    FGuid PlayerUuid;
};

struct RALLYHEREAPI_API FResponse_PlayerGetNotificationById : public FResponse
{
    FResponse_PlayerGetNotificationById(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_PlayerGetNotificationById() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_Notification Content;

};

struct RALLYHEREAPI_API Traits_PlayerGetNotificationById
{
    typedef FRequest_PlayerGetNotificationById Request;
    typedef FResponse_PlayerGetNotificationById Response;
    typedef FDelegate_PlayerGetNotificationById Delegate;
    typedef FPlayerNotificationAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate()) { return InAPI.PlayerGetNotificationById(InRequest, InDelegate); }
};

/* Get Notification By Id Self
 *
 * Retrieve a single notification by id
*/
struct RALLYHEREAPI_API FRequest_PlayerGetNotificationByIdSelf : public FRequest
{
    FRequest_PlayerGetNotificationByIdSelf();
    virtual ~FRequest_PlayerGetNotificationByIdSelf() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FString GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FString NotificationId;
};

struct RALLYHEREAPI_API FResponse_PlayerGetNotificationByIdSelf : public FResponse
{
    FResponse_PlayerGetNotificationByIdSelf(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_PlayerGetNotificationByIdSelf() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_Notification Content;

};

struct RALLYHEREAPI_API Traits_PlayerGetNotificationByIdSelf
{
    typedef FRequest_PlayerGetNotificationByIdSelf Request;
    typedef FResponse_PlayerGetNotificationByIdSelf Response;
    typedef FDelegate_PlayerGetNotificationByIdSelf Delegate;
    typedef FPlayerNotificationAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate()) { return InAPI.PlayerGetNotificationByIdSelf(InRequest, InDelegate); }
};

/* Get Notifications Page
 *
 * Get recent notifications ordered from the newest to the oldest.  It is important stress that this endpoint returns notifications in reverse order from a stream of notifications. The first notification returned from this will be the newest one we can find, and older ones will be further down the page (or on later pages).  This API is useful for displaying a list of the most recent notifications to the user, only requesting further pages when the user requests a bigger list.  Client are expected to poll this endpoint regularly.  This version can be used for arbitrary clients with permission
*/
struct RALLYHEREAPI_API FRequest_PlayerGetNotificationsPage : public FRequest
{
    FRequest_PlayerGetNotificationsPage();
    virtual ~FRequest_PlayerGetNotificationsPage() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FString GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid PlayerUuid;
    TOptional<int32> PageSize;
    /* Return results starting at this index (inclusive).  If none provided then will start at the latest notification.  You cannot depend on the format of this string, and it must be considered opaque */
    TOptional<FString> StartAt;
    /* All notifications including and before this (chronologically) provided id will be ignored when returning results.  You cannot depend on the format of this string, and it must be considered opaque */
    TOptional<FString> ExcludeBefore;
    /* If you provide the ETag that matches the current ETag for this content, will return a 304 response - indicating that the content has not changed */
    TOptional<FString> IfNoneMatch;
};

struct RALLYHEREAPI_API FResponse_PlayerGetNotificationsPage : public FResponse
{
    FResponse_PlayerGetNotificationsPage(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_PlayerGetNotificationsPage() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_Notifications Content;

};

struct RALLYHEREAPI_API Traits_PlayerGetNotificationsPage
{
    typedef FRequest_PlayerGetNotificationsPage Request;
    typedef FResponse_PlayerGetNotificationsPage Response;
    typedef FDelegate_PlayerGetNotificationsPage Delegate;
    typedef FPlayerNotificationAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate()) { return InAPI.PlayerGetNotificationsPage(InRequest, InDelegate); }
};

/* Get Notifications Page Self
 *
 * Get recent notifications ordered from the newest to the oldest.  It is important stress that this endpoint returns notifications in reverse order from a stream of notifications. The first notification returned from this will be the newest one we can find, and older ones will be further down the page (or on later pages).  This API is useful for displaying a list of the most recent notifications to the user, only requesting further pages when the user requests a bigger list.  Client are expected to poll this endpoint regularly.
*/
struct RALLYHEREAPI_API FRequest_PlayerGetNotificationsPageSelf : public FRequest
{
    FRequest_PlayerGetNotificationsPageSelf();
    virtual ~FRequest_PlayerGetNotificationsPageSelf() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FString GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    TOptional<int32> PageSize;
    /* Return results starting at this index (inclusive).  If none provided then will start at the latest notification.  You cannot depend on the format of this string, and it must be considered opaque */
    TOptional<FString> StartAt;
    /* All notifications including and before this (chronologically) provided id will be ignored when returning results.  You cannot depend on the format of this string, and it must be considered opaque */
    TOptional<FString> ExcludeBefore;
    /* If you provide the ETag that matches the current ETag for this content, will return a 304 response - indicating that the content has not changed */
    TOptional<FString> IfNoneMatch;
};

struct RALLYHEREAPI_API FResponse_PlayerGetNotificationsPageSelf : public FResponse
{
    FResponse_PlayerGetNotificationsPageSelf(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_PlayerGetNotificationsPageSelf() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_Notifications Content;

};

struct RALLYHEREAPI_API Traits_PlayerGetNotificationsPageSelf
{
    typedef FRequest_PlayerGetNotificationsPageSelf Request;
    typedef FResponse_PlayerGetNotificationsPageSelf Response;
    typedef FDelegate_PlayerGetNotificationsPageSelf Delegate;
    typedef FPlayerNotificationAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate()) { return InAPI.PlayerGetNotificationsPageSelf(InRequest, InDelegate); }
};

/* Long Poll For Notifications
 *
 * This endpoint will return notifications newer than &#x60;exclude_before&#x60;.  This endpoint returns notifications from earlier to newer, which is the opposite of the paging API.  This operation is a long-poll.  That means we will keep the connection open until we get any notification or until the passed in deadline (to the best of our ability).  Once one of these happens, we will return the notifications found.  This version can be used for arbitrary clients with permission
*/
struct RALLYHEREAPI_API FRequest_PlayerLongPollForNotifications : public FRequest
{
    FRequest_PlayerLongPollForNotifications();
    virtual ~FRequest_PlayerLongPollForNotifications() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FString GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid PlayerUuid;
    /* Max number of entries to return at one time */
    TOptional<int32> MaxPageSize;
    /* All notifications including and before this (chronologically) provided id will be ignored when returning results.  You cannot depend on the format of this string, and it must be considered opaque */
    TOptional<FString> ExcludeBefore;
    /* When `exclude_before` is not found or not given, begin streaming messages from the earliest available, or the latest */
    TOptional<ERHAPI_OffsetReset> OffsetResetStrategy;
    /* We will try to the best of our ability to return by this deadline, even when we have no notifications.  Value should be in seconds */
    TOptional<int32> Deadline;
};

struct RALLYHEREAPI_API FResponse_PlayerLongPollForNotifications : public FResponse
{
    FResponse_PlayerLongPollForNotifications(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_PlayerLongPollForNotifications() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_Notifications Content;

};

struct RALLYHEREAPI_API Traits_PlayerLongPollForNotifications
{
    typedef FRequest_PlayerLongPollForNotifications Request;
    typedef FResponse_PlayerLongPollForNotifications Response;
    typedef FDelegate_PlayerLongPollForNotifications Delegate;
    typedef FPlayerNotificationAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate()) { return InAPI.PlayerLongPollForNotifications(InRequest, InDelegate); }
};

/* Long Poll For Notifications Self
 *
 * This endpoint will return notifications newer than &#x60;exclude_before&#x60;.  This endpoint returns notifications from earlier to newer, which is the opposite of the paging API.  This operation is a long-poll.  That means we will keep the connection open until we get any notification or until the passed in deadline (to the best of our ability).  Once one of these happens, we will return the notifications found.
*/
struct RALLYHEREAPI_API FRequest_PlayerLongPollForNotificationsSelf : public FRequest
{
    FRequest_PlayerLongPollForNotificationsSelf();
    virtual ~FRequest_PlayerLongPollForNotificationsSelf() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FString GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Max number of entries to return at one time */
    TOptional<int32> MaxPageSize;
    /* All notifications including and before this (chronologically) provided id will be ignored when returning results.  You cannot depend on the format of this string, and it must be considered opaque */
    TOptional<FString> ExcludeBefore;
    /* When `exclude_before` is not found or not given, begin streaming messages from the earliest available, or the latest */
    TOptional<ERHAPI_OffsetReset> OffsetResetStrategy;
    /* We will try to the best of our ability to return by this deadline, even when we have no notifications.  Value should be in seconds */
    TOptional<int32> Deadline;
};

struct RALLYHEREAPI_API FResponse_PlayerLongPollForNotificationsSelf : public FResponse
{
    FResponse_PlayerLongPollForNotificationsSelf(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_PlayerLongPollForNotificationsSelf() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_Notifications Content;

};

struct RALLYHEREAPI_API Traits_PlayerLongPollForNotificationsSelf
{
    typedef FRequest_PlayerLongPollForNotificationsSelf Request;
    typedef FResponse_PlayerLongPollForNotificationsSelf Response;
    typedef FDelegate_PlayerLongPollForNotificationsSelf Delegate;
    typedef FPlayerNotificationAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate()) { return InAPI.PlayerLongPollForNotificationsSelf(InRequest, InDelegate); }
};


}
