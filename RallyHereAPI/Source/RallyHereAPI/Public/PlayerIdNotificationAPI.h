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

struct FRequest_PlayeridCreateNotification;
struct FResponse_PlayeridCreateNotification;
struct FRequest_PlayeridGetNotificationById;
struct FResponse_PlayeridGetNotificationById;
struct FRequest_PlayeridGetNotificationByIdSelf;
struct FResponse_PlayeridGetNotificationByIdSelf;
struct FRequest_PlayeridGetNotificationsPage;
struct FResponse_PlayeridGetNotificationsPage;
struct FRequest_PlayeridGetNotificationsPageSelf;
struct FResponse_PlayeridGetNotificationsPageSelf;
struct FRequest_PlayeridLongPollForNotifications;
struct FResponse_PlayeridLongPollForNotifications;
struct FRequest_PlayeridLongPollForNotificationsSelf;
struct FResponse_PlayeridLongPollForNotificationsSelf;

DECLARE_DELEGATE_OneParam(FDelegate_PlayeridCreateNotification, const FResponse_PlayeridCreateNotification&);
DECLARE_DELEGATE_OneParam(FDelegate_PlayeridGetNotificationById, const FResponse_PlayeridGetNotificationById&);
DECLARE_DELEGATE_OneParam(FDelegate_PlayeridGetNotificationByIdSelf, const FResponse_PlayeridGetNotificationByIdSelf&);
DECLARE_DELEGATE_OneParam(FDelegate_PlayeridGetNotificationsPage, const FResponse_PlayeridGetNotificationsPage&);
DECLARE_DELEGATE_OneParam(FDelegate_PlayeridGetNotificationsPageSelf, const FResponse_PlayeridGetNotificationsPageSelf&);
DECLARE_DELEGATE_OneParam(FDelegate_PlayeridLongPollForNotifications, const FResponse_PlayeridLongPollForNotifications&);
DECLARE_DELEGATE_OneParam(FDelegate_PlayeridLongPollForNotificationsSelf, const FResponse_PlayeridLongPollForNotificationsSelf&);

class RALLYHEREAPI_API FPlayerIdNotificationAPI : public FAPI
{
public:
    FPlayerIdNotificationAPI();
    virtual ~FPlayerIdNotificationAPI();

    FHttpRequestPtr PlayeridCreateNotification(const FRequest_PlayeridCreateNotification& Request, const FDelegate_PlayeridCreateNotification& Delegate = FDelegate_PlayeridCreateNotification(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr PlayeridGetNotificationById(const FRequest_PlayeridGetNotificationById& Request, const FDelegate_PlayeridGetNotificationById& Delegate = FDelegate_PlayeridGetNotificationById(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr PlayeridGetNotificationByIdSelf(const FRequest_PlayeridGetNotificationByIdSelf& Request, const FDelegate_PlayeridGetNotificationByIdSelf& Delegate = FDelegate_PlayeridGetNotificationByIdSelf(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr PlayeridGetNotificationsPage(const FRequest_PlayeridGetNotificationsPage& Request, const FDelegate_PlayeridGetNotificationsPage& Delegate = FDelegate_PlayeridGetNotificationsPage(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr PlayeridGetNotificationsPageSelf(const FRequest_PlayeridGetNotificationsPageSelf& Request, const FDelegate_PlayeridGetNotificationsPageSelf& Delegate = FDelegate_PlayeridGetNotificationsPageSelf(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr PlayeridLongPollForNotifications(const FRequest_PlayeridLongPollForNotifications& Request, const FDelegate_PlayeridLongPollForNotifications& Delegate = FDelegate_PlayeridLongPollForNotifications(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr PlayeridLongPollForNotificationsSelf(const FRequest_PlayeridLongPollForNotificationsSelf& Request, const FDelegate_PlayeridLongPollForNotificationsSelf& Delegate = FDelegate_PlayeridLongPollForNotificationsSelf(), int32 Priority = DefaultRallyHereAPIPriority);

private:
    void OnPlayeridCreateNotificationResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayeridCreateNotification Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnPlayeridGetNotificationByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayeridGetNotificationById Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnPlayeridGetNotificationByIdSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayeridGetNotificationByIdSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnPlayeridGetNotificationsPageResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayeridGetNotificationsPage Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnPlayeridGetNotificationsPageSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayeridGetNotificationsPageSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnPlayeridLongPollForNotificationsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayeridLongPollForNotifications Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnPlayeridLongPollForNotificationsSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayeridLongPollForNotificationsSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Create Notification
 *
 * Create new notification for client.  Requires permission to create for a different client
 * 
 * Requires permissions: Any of `notification:playerid:*`, `notification:playerid:write`
*/
struct RALLYHEREAPI_API FRequest_PlayeridCreateNotification : public FRequest
{
    FRequest_PlayeridCreateNotification();
    virtual ~FRequest_PlayeridCreateNotification() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    int32 PlayerId = 0;
    FRHAPI_NotificationCreates NotificationCreates;
};

struct RALLYHEREAPI_API FResponse_PlayeridCreateNotification : public FResponse
{
    FResponse_PlayeridCreateNotification(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_PlayeridCreateNotification() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_NotificationCreateResult Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_NotificationCreateResult& OutContent) const;

    /* Response 400
     Error Codes: - bad_id - Passed client id is not a valid id 
    */
    bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 403
     Error Codes: - auth_token_invalid_claim - Token contained invalid claim value: {} - auth_invalid_version - Invalid Authorization - version - insufficient_permissions - Insufficient Permissions - auth_token_sig_invalid - Token Signature is invalid - auth_malformed_access - Invalid Authorization - malformed access token - auth_token_expired - Token is expired - auth_not_jwt - Invalid Authorization - auth_token_unknown - Failed to parse token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_token_format - Invalid Authorization - {} 
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_PlayeridCreateNotification
{
    typedef FRequest_PlayeridCreateNotification Request;
    typedef FResponse_PlayeridCreateNotification Response;
    typedef FDelegate_PlayeridCreateNotification Delegate;
    typedef FPlayerIdNotificationAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.PlayeridCreateNotification(InRequest, InDelegate, Priority); }
};

/* Get Notification By Id
 *
 * Retrieve a single notification by id
 * 
 * This version can be used for any client provided its id (with proper permissions)
 * 
 * Requires permissions: Any of `notification:playerid:*`,`notification:playerid:read`
*/
struct RALLYHEREAPI_API FRequest_PlayeridGetNotificationById : public FRequest
{
    FRequest_PlayeridGetNotificationById();
    virtual ~FRequest_PlayeridGetNotificationById() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FString NotificationId;
    int32 PlayerId = 0;
};

struct RALLYHEREAPI_API FResponse_PlayeridGetNotificationById : public FResponse
{
    FResponse_PlayeridGetNotificationById(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_PlayeridGetNotificationById() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_Notification Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_Notification& OutContent) const;

    /* Response 400
     Error Codes: - bad_id - Passed client id is not a valid id 
    */
    bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 403
     Error Codes: - auth_token_invalid_claim - Token contained invalid claim value: {} - auth_invalid_version - Invalid Authorization - version - insufficient_permissions - Insufficient Permissions - auth_token_sig_invalid - Token Signature is invalid - auth_malformed_access - Invalid Authorization - malformed access token - auth_token_expired - Token is expired - auth_not_jwt - Invalid Authorization - auth_token_unknown - Failed to parse token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_token_format - Invalid Authorization - {} 
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 404
     Error Codes: - resource_not_found - Notification could not be found 
    */
    bool TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_PlayeridGetNotificationById
{
    typedef FRequest_PlayeridGetNotificationById Request;
    typedef FResponse_PlayeridGetNotificationById Response;
    typedef FDelegate_PlayeridGetNotificationById Delegate;
    typedef FPlayerIdNotificationAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.PlayeridGetNotificationById(InRequest, InDelegate, Priority); }
};

/* Get Notification By Id Self
 *
 * Retrieve a single notification by id
 * 
 * Requires permissions: Any of `notification:playerid:*`,`notification:playerid:read`
*/
struct RALLYHEREAPI_API FRequest_PlayeridGetNotificationByIdSelf : public FRequest
{
    FRequest_PlayeridGetNotificationByIdSelf();
    virtual ~FRequest_PlayeridGetNotificationByIdSelf() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FString NotificationId;
};

struct RALLYHEREAPI_API FResponse_PlayeridGetNotificationByIdSelf : public FResponse
{
    FResponse_PlayeridGetNotificationByIdSelf(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_PlayeridGetNotificationByIdSelf() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_Notification Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_Notification& OutContent) const;

    /* Response 400
     Error Codes: - bad_id - Passed client id is not a valid id 
    */
    bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 403
     Error Codes: - auth_token_invalid_claim - Token contained invalid claim value: {} - auth_invalid_version - Invalid Authorization - version - insufficient_permissions - Insufficient Permissions - auth_token_sig_invalid - Token Signature is invalid - auth_malformed_access - Invalid Authorization - malformed access token - auth_token_expired - Token is expired - auth_not_jwt - Invalid Authorization - auth_token_unknown - Failed to parse token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_token_format - Invalid Authorization - {} 
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 404
     Error Codes: - resource_not_found - Notification could not be found 
    */
    bool TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_PlayeridGetNotificationByIdSelf
{
    typedef FRequest_PlayeridGetNotificationByIdSelf Request;
    typedef FResponse_PlayeridGetNotificationByIdSelf Response;
    typedef FDelegate_PlayeridGetNotificationByIdSelf Delegate;
    typedef FPlayerIdNotificationAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.PlayeridGetNotificationByIdSelf(InRequest, InDelegate, Priority); }
};

/* Get Notifications Page
 *
 * Get recent notifications ordered from the newest to the oldest.
 * 
 * It is important to stress that this endpoint returns notifications in reverse order compared to the streaming API.
 * The first notification returned from this will be the newest one we can find, and older ones will be further down
 * the page (or on later pages).
 * 
 * This API is useful for displaying a list of the most recent notifications to the user, only requesting further
 * pages when the user requests a bigger list.
 * 
 * Client are expected to poll this endpoint regularly.
 * 
 * This version can be used for any client provided its id (with proper permissions)
 * 
 * Requires permissions: Any of `notification:playerid:*`,`notification:playerid:read`
*/
struct RALLYHEREAPI_API FRequest_PlayeridGetNotificationsPage : public FRequest
{
    FRequest_PlayeridGetNotificationsPage();
    virtual ~FRequest_PlayeridGetNotificationsPage() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    int32 PlayerId = 0;
    TOptional<int32> PageSize;
    /* Return results starting at this index (inclusive).  If none provided then will start at the latest notification.  You cannot depend on the format of this string, and it must be considered opaque */
    TOptional<FString> StartAt;
    /* All notifications including and before this (chronologically) provided id will be ignored when returning results.  You cannot depend on the format of this string, and it must be considered opaque */
    TOptional<FString> ExcludeBefore;
    /* If you provide the ETag that matches the current ETag for this content, will return a 304 response - indicating that the content has not changed */
    TOptional<FString> IfNoneMatch;
};

struct RALLYHEREAPI_API FResponse_PlayeridGetNotificationsPage : public FResponse
{
    FResponse_PlayeridGetNotificationsPage(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_PlayeridGetNotificationsPage() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_Notifications Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_Notifications& OutContent) const;

    /* Response 304
    Not Modified
    */

    /* Response 400
     Error Codes: - bad_id - Passed client id is not a valid id 
    */
    bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 403
     Error Codes: - auth_token_invalid_claim - Token contained invalid claim value: {} - auth_invalid_version - Invalid Authorization - version - insufficient_permissions - Insufficient Permissions - auth_token_sig_invalid - Token Signature is invalid - auth_malformed_access - Invalid Authorization - malformed access token - auth_token_expired - Token is expired - auth_not_jwt - Invalid Authorization - auth_token_unknown - Failed to parse token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_token_format - Invalid Authorization - {} 
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_PlayeridGetNotificationsPage
{
    typedef FRequest_PlayeridGetNotificationsPage Request;
    typedef FResponse_PlayeridGetNotificationsPage Response;
    typedef FDelegate_PlayeridGetNotificationsPage Delegate;
    typedef FPlayerIdNotificationAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.PlayeridGetNotificationsPage(InRequest, InDelegate, Priority); }
};

/* Get Notifications Page Self
 *
 * Get recent notifications ordered from the newest to the oldest.
 * 
 * It is important to stress that this endpoint returns notifications in reverse order compared to the streaming API.
 * The first notification returned from this will be the newest one we can find, and older ones will be further down
 * the page (or on later pages).
 * 
 * This API is useful for displaying a list of the most recent notifications to the user, only requesting further
 * pages when the user requests a bigger list.
 * 
 * Client are expected to poll this endpoint regularly.
 * 
 * Requires permissions: Any of `notification:playerid:*`,`notification:playerid:read`
*/
struct RALLYHEREAPI_API FRequest_PlayeridGetNotificationsPageSelf : public FRequest
{
    FRequest_PlayeridGetNotificationsPageSelf();
    virtual ~FRequest_PlayeridGetNotificationsPageSelf() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
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

struct RALLYHEREAPI_API FResponse_PlayeridGetNotificationsPageSelf : public FResponse
{
    FResponse_PlayeridGetNotificationsPageSelf(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_PlayeridGetNotificationsPageSelf() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_Notifications Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_Notifications& OutContent) const;

    /* Response 304
    Not Modified
    */

    /* Response 400
     Error Codes: - bad_id - Passed client id is not a valid id 
    */
    bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 403
     Error Codes: - auth_token_invalid_claim - Token contained invalid claim value: {} - auth_invalid_version - Invalid Authorization - version - insufficient_permissions - Insufficient Permissions - auth_token_sig_invalid - Token Signature is invalid - auth_malformed_access - Invalid Authorization - malformed access token - auth_token_expired - Token is expired - auth_not_jwt - Invalid Authorization - auth_token_unknown - Failed to parse token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_token_format - Invalid Authorization - {} 
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_PlayeridGetNotificationsPageSelf
{
    typedef FRequest_PlayeridGetNotificationsPageSelf Request;
    typedef FResponse_PlayeridGetNotificationsPageSelf Response;
    typedef FDelegate_PlayeridGetNotificationsPageSelf Delegate;
    typedef FPlayerIdNotificationAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.PlayeridGetNotificationsPageSelf(InRequest, InDelegate, Priority); }
};

/* Long Poll For Notifications
 *
 * This endpoint will return notifications newer than `exclude_before`.  This endpoint returns notifications
 * from older to newer, which is the opposite of the paging API.  The returned `cursor` value can be used as
 * `exclude_before` in subsequent polls to ensure you only receive new notifications.
 * 
 * This operation is a long-poll.  That means we will keep the connection open until we get any notification
 * or until the passed in deadline (to the best of our ability).  Once one of these happens, we will return
 * the notifications found.
 * 
 * This version can be used for any client provided its id (with proper permissions)
 * 
 * Requires permissions: Any of `notification:playerid:*`,`notification:playerid:read`
*/
struct RALLYHEREAPI_API FRequest_PlayeridLongPollForNotifications : public FRequest
{
    FRequest_PlayeridLongPollForNotifications();
    virtual ~FRequest_PlayeridLongPollForNotifications() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    int32 PlayerId = 0;
    /* Max number of entries to return at one time */
    TOptional<int32> MaxPageSize;
    /* All notifications including and before this (chronologically) provided id will be ignored when returning results.  You cannot depend on the format of this string, and it must be considered opaque */
    TOptional<FString> ExcludeBefore;
    /* When `exclude_before` is not found in the stream or not given, begin streaming messages from the earliest/latest message */
    TOptional<ERHAPI_OffsetReset> OffsetResetStrategy;
    /* We will try to the best of our ability to return by this deadline, even when we have no notifications.  Value should be in seconds */
    TOptional<int32> Deadline;
};

struct RALLYHEREAPI_API FResponse_PlayeridLongPollForNotifications : public FResponse
{
    FResponse_PlayeridLongPollForNotifications(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_PlayeridLongPollForNotifications() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_Notifications Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_Notifications& OutContent) const;

    /* Response 400
     Error Codes: - bad_id - Passed client id is not a valid id 
    */
    bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 403
     Error Codes: - auth_token_invalid_claim - Token contained invalid claim value: {} - auth_invalid_version - Invalid Authorization - version - insufficient_permissions - Insufficient Permissions - auth_token_sig_invalid - Token Signature is invalid - auth_malformed_access - Invalid Authorization - malformed access token - auth_token_expired - Token is expired - auth_not_jwt - Invalid Authorization - auth_token_unknown - Failed to parse token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_token_format - Invalid Authorization - {} 
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_PlayeridLongPollForNotifications
{
    typedef FRequest_PlayeridLongPollForNotifications Request;
    typedef FResponse_PlayeridLongPollForNotifications Response;
    typedef FDelegate_PlayeridLongPollForNotifications Delegate;
    typedef FPlayerIdNotificationAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.PlayeridLongPollForNotifications(InRequest, InDelegate, Priority); }
};

/* Long Poll For Notifications Self
 *
 * This endpoint will return notifications newer than `exclude_before`.  This endpoint returns notifications
 * from older to newer, which is the opposite of the paging API.  The returned `cursor` value can be used as
 * `exclude_before` in subsequent polls to ensure you only receive new notifications.
 * 
 * This operation is a long-poll.  That means we will keep the connection open until we get any notification
 * or until the passed in deadline (to the best of our ability).  Once one of these happens, we will return
 * the notifications found.
 * 
 * Requires permissions: Any of `notification:playerid:*`,`notification:playerid:read`
*/
struct RALLYHEREAPI_API FRequest_PlayeridLongPollForNotificationsSelf : public FRequest
{
    FRequest_PlayeridLongPollForNotificationsSelf();
    virtual ~FRequest_PlayeridLongPollForNotificationsSelf() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Max number of entries to return at one time */
    TOptional<int32> MaxPageSize;
    /* All notifications including and before this (chronologically) provided id will be ignored when returning results.  You cannot depend on the format of this string, and it must be considered opaque */
    TOptional<FString> ExcludeBefore;
    /* When `exclude_before` is not found in the stream or not given, begin streaming messages from the earliest/latest message */
    TOptional<ERHAPI_OffsetReset> OffsetResetStrategy;
    /* We will try to the best of our ability to return by this deadline, even when we have no notifications.  Value should be in seconds */
    TOptional<int32> Deadline;
};

struct RALLYHEREAPI_API FResponse_PlayeridLongPollForNotificationsSelf : public FResponse
{
    FResponse_PlayeridLongPollForNotificationsSelf(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_PlayeridLongPollForNotificationsSelf() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_Notifications Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_Notifications& OutContent) const;

    /* Response 400
     Error Codes: - bad_id - Passed client id is not a valid id 
    */
    bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 403
     Error Codes: - auth_token_invalid_claim - Token contained invalid claim value: {} - auth_invalid_version - Invalid Authorization - version - insufficient_permissions - Insufficient Permissions - auth_token_sig_invalid - Token Signature is invalid - auth_malformed_access - Invalid Authorization - malformed access token - auth_token_expired - Token is expired - auth_not_jwt - Invalid Authorization - auth_token_unknown - Failed to parse token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_token_format - Invalid Authorization - {} 
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_PlayeridLongPollForNotificationsSelf
{
    typedef FRequest_PlayeridLongPollForNotificationsSelf Request;
    typedef FResponse_PlayeridLongPollForNotificationsSelf Response;
    typedef FDelegate_PlayeridLongPollForNotificationsSelf Delegate;
    typedef FPlayerIdNotificationAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.PlayeridLongPollForNotificationsSelf(InRequest, InDelegate, Priority); }
};


}
