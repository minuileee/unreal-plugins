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

struct FRequest_PlayerCreateNotification;
struct FResponse_PlayerCreateNotification;
struct FRequest_PlayerCreateNotificationSelf;
struct FResponse_PlayerCreateNotificationSelf;
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
DECLARE_DELEGATE_OneParam(FDelegate_PlayerCreateNotificationSelf, const FResponse_PlayerCreateNotificationSelf&);
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

    FHttpRequestPtr PlayerCreateNotification(const FRequest_PlayerCreateNotification& Request, const FDelegate_PlayerCreateNotification& Delegate = FDelegate_PlayerCreateNotification(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr PlayerCreateNotificationSelf(const FRequest_PlayerCreateNotificationSelf& Request, const FDelegate_PlayerCreateNotificationSelf& Delegate = FDelegate_PlayerCreateNotificationSelf(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr PlayerGetNotificationById(const FRequest_PlayerGetNotificationById& Request, const FDelegate_PlayerGetNotificationById& Delegate = FDelegate_PlayerGetNotificationById(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr PlayerGetNotificationByIdSelf(const FRequest_PlayerGetNotificationByIdSelf& Request, const FDelegate_PlayerGetNotificationByIdSelf& Delegate = FDelegate_PlayerGetNotificationByIdSelf(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr PlayerGetNotificationsPage(const FRequest_PlayerGetNotificationsPage& Request, const FDelegate_PlayerGetNotificationsPage& Delegate = FDelegate_PlayerGetNotificationsPage(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr PlayerGetNotificationsPageSelf(const FRequest_PlayerGetNotificationsPageSelf& Request, const FDelegate_PlayerGetNotificationsPageSelf& Delegate = FDelegate_PlayerGetNotificationsPageSelf(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr PlayerLongPollForNotifications(const FRequest_PlayerLongPollForNotifications& Request, const FDelegate_PlayerLongPollForNotifications& Delegate = FDelegate_PlayerLongPollForNotifications(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr PlayerLongPollForNotificationsSelf(const FRequest_PlayerLongPollForNotificationsSelf& Request, const FDelegate_PlayerLongPollForNotificationsSelf& Delegate = FDelegate_PlayerLongPollForNotificationsSelf(), int32 Priority = DefaultRallyHereAPIPriority);

private:
    void OnPlayerCreateNotificationResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerCreateNotification Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnPlayerCreateNotificationSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerCreateNotificationSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnPlayerGetNotificationByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerGetNotificationById Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnPlayerGetNotificationByIdSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerGetNotificationByIdSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnPlayerGetNotificationsPageResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerGetNotificationsPage Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnPlayerGetNotificationsPageSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerGetNotificationsPageSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnPlayerLongPollForNotificationsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerLongPollForNotifications Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnPlayerLongPollForNotificationsSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerLongPollForNotificationsSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Create Notification
 *
 * Create new notification for client.  Requires permission to create for a different client
 * 
 * Required Permissions:
 * 
 * - For any player (including themselves) any of: `notification:player:write`, `notification:player:*`
 * 
 * - For the player themselves any of: `notification:player:self:*`, `notification:player:self:write`
*/
struct RALLYHEREAPI_API FRequest_PlayerCreateNotification : public FRequest
{
    FRequest_PlayerCreateNotification();
    virtual ~FRequest_PlayerCreateNotification() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
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
     Error Codes: - insufficient_permissions - Insufficient Permissions - auth_token_unknown - Failed to parse token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_invalid_version - Invalid Authorization - version - auth_token_invalid_claim - Token contained invalid claim value: {} - auth_malformed_access - Invalid Authorization - malformed access token - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization 
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 409
     Error Codes: - too_many_listening_to_single_client - An enumeration. 
    */
    bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

    /* Response 503
     Error Codes: - connection_limit_reached - An enumeration. 
    */
    bool TryGetContentFor503(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_PlayerCreateNotification
{
    typedef FRequest_PlayerCreateNotification Request;
    typedef FResponse_PlayerCreateNotification Response;
    typedef FDelegate_PlayerCreateNotification Delegate;
    typedef FPlayerNotificationAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.PlayerCreateNotification(InRequest, InDelegate, Priority); }
};

/* Create Notification Self
 *
 * Create new notification for client.
 * Required Permissions:
 * 
 * - For any player (including themselves) any of: `notification:player:self:*`, `notification:player:write`, `notification:player:*`, `notification:player:self:write`
*/
struct RALLYHEREAPI_API FRequest_PlayerCreateNotificationSelf : public FRequest
{
    FRequest_PlayerCreateNotificationSelf();
    virtual ~FRequest_PlayerCreateNotificationSelf() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FRHAPI_NotificationCreates NotificationCreates;
};

struct RALLYHEREAPI_API FResponse_PlayerCreateNotificationSelf : public FResponse
{
    FResponse_PlayerCreateNotificationSelf(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_PlayerCreateNotificationSelf() = default;
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
     Error Codes: - insufficient_permissions - Insufficient Permissions - auth_token_unknown - Failed to parse token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_invalid_version - Invalid Authorization - version - auth_token_invalid_claim - Token contained invalid claim value: {} - auth_malformed_access - Invalid Authorization - malformed access token - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization 
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 409
     Error Codes: - too_many_listening_to_single_client - An enumeration. 
    */
    bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

    /* Response 503
     Error Codes: - connection_limit_reached - An enumeration. 
    */
    bool TryGetContentFor503(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_PlayerCreateNotificationSelf
{
    typedef FRequest_PlayerCreateNotificationSelf Request;
    typedef FResponse_PlayerCreateNotificationSelf Response;
    typedef FDelegate_PlayerCreateNotificationSelf Delegate;
    typedef FPlayerNotificationAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.PlayerCreateNotificationSelf(InRequest, InDelegate, Priority); }
};

/* Get Notification By Id
 *
 * Retrieve a single notification by id
 * 
 * This version can be used for any client provided its id (with proper permissions)
 * 
 * Required Permissions:
 * 
 * - For any player (including themselves) any of: `notification:player:*`, `notification:player:read`
 * 
 * - For the player themselves any of: `notification:player:self:*`, `notification:player:self:read`
*/
struct RALLYHEREAPI_API FRequest_PlayerGetNotificationById : public FRequest
{
    FRequest_PlayerGetNotificationById();
    virtual ~FRequest_PlayerGetNotificationById() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
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
     Error Codes: - insufficient_permissions - Insufficient Permissions - auth_token_unknown - Failed to parse token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_invalid_version - Invalid Authorization - version - auth_token_invalid_claim - Token contained invalid claim value: {} - auth_malformed_access - Invalid Authorization - malformed access token - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization 
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 404
     Error Codes: - resource_not_found - Notification could not be found 
    */
    bool TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 409
     Error Codes: - too_many_listening_to_single_client - An enumeration. 
    */
    bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

    /* Response 503
     Error Codes: - connection_limit_reached - An enumeration. 
    */
    bool TryGetContentFor503(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_PlayerGetNotificationById
{
    typedef FRequest_PlayerGetNotificationById Request;
    typedef FResponse_PlayerGetNotificationById Response;
    typedef FDelegate_PlayerGetNotificationById Delegate;
    typedef FPlayerNotificationAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.PlayerGetNotificationById(InRequest, InDelegate, Priority); }
};

/* Get Notification By Id Self
 *
 * Retrieve a single notification by id
 * 
 * Required Permissions:
 * 
 * - For any player (including themselves) any of: `notification:player:self:*`, `notification:player:*`, `notification:player:self:read`, `notification:player:read`
*/
struct RALLYHEREAPI_API FRequest_PlayerGetNotificationByIdSelf : public FRequest
{
    FRequest_PlayerGetNotificationByIdSelf();
    virtual ~FRequest_PlayerGetNotificationByIdSelf() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
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
     Error Codes: - insufficient_permissions - Insufficient Permissions - auth_token_unknown - Failed to parse token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_invalid_version - Invalid Authorization - version - auth_token_invalid_claim - Token contained invalid claim value: {} - auth_malformed_access - Invalid Authorization - malformed access token - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization 
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 404
     Error Codes: - resource_not_found - Notification could not be found 
    */
    bool TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 409
     Error Codes: - too_many_listening_to_single_client - An enumeration. 
    */
    bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

    /* Response 503
     Error Codes: - connection_limit_reached - An enumeration. 
    */
    bool TryGetContentFor503(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_PlayerGetNotificationByIdSelf
{
    typedef FRequest_PlayerGetNotificationByIdSelf Request;
    typedef FResponse_PlayerGetNotificationByIdSelf Response;
    typedef FDelegate_PlayerGetNotificationByIdSelf Delegate;
    typedef FPlayerNotificationAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.PlayerGetNotificationByIdSelf(InRequest, InDelegate, Priority); }
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
 * Required Permissions:
 * 
 * - For any player (including themselves) any of: `notification:player:*`, `notification:player:read`
 * 
 * - For the player themselves any of: `notification:player:self:*`, `notification:player:self:read`
*/
struct RALLYHEREAPI_API FRequest_PlayerGetNotificationsPage : public FRequest
{
    FRequest_PlayerGetNotificationsPage();
    virtual ~FRequest_PlayerGetNotificationsPage() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
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
     Error Codes: - insufficient_permissions - Insufficient Permissions - auth_token_unknown - Failed to parse token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_invalid_version - Invalid Authorization - version - auth_token_invalid_claim - Token contained invalid claim value: {} - auth_malformed_access - Invalid Authorization - malformed access token - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization 
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 409
     Error Codes: - too_many_listening_to_single_client - An enumeration. 
    */
    bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

    /* Response 503
     Error Codes: - connection_limit_reached - An enumeration. 
    */
    bool TryGetContentFor503(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_PlayerGetNotificationsPage
{
    typedef FRequest_PlayerGetNotificationsPage Request;
    typedef FResponse_PlayerGetNotificationsPage Response;
    typedef FDelegate_PlayerGetNotificationsPage Delegate;
    typedef FPlayerNotificationAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.PlayerGetNotificationsPage(InRequest, InDelegate, Priority); }
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
 * Required Permissions:
 * 
 * - For any player (including themselves) any of: `notification:player:self:*`, `notification:player:*`, `notification:player:self:read`, `notification:player:read`
*/
struct RALLYHEREAPI_API FRequest_PlayerGetNotificationsPageSelf : public FRequest
{
    FRequest_PlayerGetNotificationsPageSelf();
    virtual ~FRequest_PlayerGetNotificationsPageSelf() = default;
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

struct RALLYHEREAPI_API FResponse_PlayerGetNotificationsPageSelf : public FResponse
{
    FResponse_PlayerGetNotificationsPageSelf(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_PlayerGetNotificationsPageSelf() = default;
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
     Error Codes: - insufficient_permissions - Insufficient Permissions - auth_token_unknown - Failed to parse token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_invalid_version - Invalid Authorization - version - auth_token_invalid_claim - Token contained invalid claim value: {} - auth_malformed_access - Invalid Authorization - malformed access token - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization 
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 409
     Error Codes: - too_many_listening_to_single_client - An enumeration. 
    */
    bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

    /* Response 503
     Error Codes: - connection_limit_reached - An enumeration. 
    */
    bool TryGetContentFor503(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_PlayerGetNotificationsPageSelf
{
    typedef FRequest_PlayerGetNotificationsPageSelf Request;
    typedef FResponse_PlayerGetNotificationsPageSelf Response;
    typedef FDelegate_PlayerGetNotificationsPageSelf Delegate;
    typedef FPlayerNotificationAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.PlayerGetNotificationsPageSelf(InRequest, InDelegate, Priority); }
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
 * Required Permissions:
 * 
 * - For any player (including themselves) any of: `notification:player:*`, `notification:player:read`
 * 
 * - For the player themselves any of: `notification:player:self:*`, `notification:player:self:read`
*/
struct RALLYHEREAPI_API FRequest_PlayerLongPollForNotifications : public FRequest
{
    FRequest_PlayerLongPollForNotifications();
    virtual ~FRequest_PlayerLongPollForNotifications() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid PlayerUuid;
    /* Max number of entries to return at one time */
    TOptional<int32> MaxPageSize;
    /* All notifications including and before this (chronologically) provided id will be ignored when returning results.  You cannot depend on the format of this string, and it must be considered opaque */
    TOptional<FString> ExcludeBefore;
    /* When `exclude_before` is not found in the stream or not given, begin streaming messages from the earliest/latest message */
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
     Error Codes: - insufficient_permissions - Insufficient Permissions - auth_token_unknown - Failed to parse token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_invalid_version - Invalid Authorization - version - auth_token_invalid_claim - Token contained invalid claim value: {} - auth_malformed_access - Invalid Authorization - malformed access token - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization 
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 409
     Error Codes: - too_many_listening_to_single_client - An enumeration. 
    */
    bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

    /* Response 503
     Error Codes: - connection_limit_reached - An enumeration. 
    */
    bool TryGetContentFor503(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_PlayerLongPollForNotifications
{
    typedef FRequest_PlayerLongPollForNotifications Request;
    typedef FResponse_PlayerLongPollForNotifications Response;
    typedef FDelegate_PlayerLongPollForNotifications Delegate;
    typedef FPlayerNotificationAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.PlayerLongPollForNotifications(InRequest, InDelegate, Priority); }
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
 * Required Permissions:
 * 
 * - For any player (including themselves) any of: `notification:player:self:*`, `notification:player:*`, `notification:player:self:read`, `notification:player:read`
*/
struct RALLYHEREAPI_API FRequest_PlayerLongPollForNotificationsSelf : public FRequest
{
    FRequest_PlayerLongPollForNotificationsSelf();
    virtual ~FRequest_PlayerLongPollForNotificationsSelf() = default;
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

struct RALLYHEREAPI_API FResponse_PlayerLongPollForNotificationsSelf : public FResponse
{
    FResponse_PlayerLongPollForNotificationsSelf(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_PlayerLongPollForNotificationsSelf() = default;
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
     Error Codes: - insufficient_permissions - Insufficient Permissions - auth_token_unknown - Failed to parse token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_invalid_version - Invalid Authorization - version - auth_token_invalid_claim - Token contained invalid claim value: {} - auth_malformed_access - Invalid Authorization - malformed access token - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization 
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 409
     Error Codes: - too_many_listening_to_single_client - An enumeration. 
    */
    bool TryGetContentFor409(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

    /* Response 503
     Error Codes: - connection_limit_reached - An enumeration. 
    */
    bool TryGetContentFor503(FRHAPI_HzApiErrorModel& OutContent) const;

};

struct RALLYHEREAPI_API Traits_PlayerLongPollForNotificationsSelf
{
    typedef FRequest_PlayerLongPollForNotificationsSelf Request;
    typedef FResponse_PlayerLongPollForNotificationsSelf Response;
    typedef FDelegate_PlayerLongPollForNotificationsSelf Delegate;
    typedef FPlayerNotificationAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.PlayerLongPollForNotificationsSelf(InRequest, InDelegate, Priority); }
};


}
