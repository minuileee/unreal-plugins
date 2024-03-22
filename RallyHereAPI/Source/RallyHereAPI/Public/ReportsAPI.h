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
#include "PlayerReport.h"
#include "PlayerReportCreate.h"
#include "PlayerReportList.h"

namespace RallyHereAPI
{
using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

struct FRequest_CreateReportForTargetPlayerUuid;
struct FResponse_CreateReportForTargetPlayerUuid;
struct FRequest_GetReportsForTargetPlayerUuid;
struct FResponse_GetReportsForTargetPlayerUuid;
struct FRequest_GetReportsForTargetPlayerUuidSelf;
struct FResponse_GetReportsForTargetPlayerUuidSelf;
struct FRequest_GetReportsFromSourcePlayerUuid;
struct FResponse_GetReportsFromSourcePlayerUuid;
struct FRequest_GetReportsFromSourcePlayerUuidSelf;
struct FResponse_GetReportsFromSourcePlayerUuidSelf;

DECLARE_DELEGATE_OneParam(FDelegate_CreateReportForTargetPlayerUuid, const FResponse_CreateReportForTargetPlayerUuid&);
DECLARE_DELEGATE_OneParam(FDelegate_GetReportsForTargetPlayerUuid, const FResponse_GetReportsForTargetPlayerUuid&);
DECLARE_DELEGATE_OneParam(FDelegate_GetReportsForTargetPlayerUuidSelf, const FResponse_GetReportsForTargetPlayerUuidSelf&);
DECLARE_DELEGATE_OneParam(FDelegate_GetReportsFromSourcePlayerUuid, const FResponse_GetReportsFromSourcePlayerUuid&);
DECLARE_DELEGATE_OneParam(FDelegate_GetReportsFromSourcePlayerUuidSelf, const FResponse_GetReportsFromSourcePlayerUuidSelf&);

class RALLYHEREAPI_API FReportsAPI : public FAPI
{
public:
    FReportsAPI();
    virtual ~FReportsAPI();

    FHttpRequestPtr CreateReportForTargetPlayerUuid(const FRequest_CreateReportForTargetPlayerUuid& Request, const FDelegate_CreateReportForTargetPlayerUuid& Delegate = FDelegate_CreateReportForTargetPlayerUuid(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr GetReportsForTargetPlayerUuid(const FRequest_GetReportsForTargetPlayerUuid& Request, const FDelegate_GetReportsForTargetPlayerUuid& Delegate = FDelegate_GetReportsForTargetPlayerUuid(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr GetReportsForTargetPlayerUuidSelf(const FRequest_GetReportsForTargetPlayerUuidSelf& Request, const FDelegate_GetReportsForTargetPlayerUuidSelf& Delegate = FDelegate_GetReportsForTargetPlayerUuidSelf(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr GetReportsFromSourcePlayerUuid(const FRequest_GetReportsFromSourcePlayerUuid& Request, const FDelegate_GetReportsFromSourcePlayerUuid& Delegate = FDelegate_GetReportsFromSourcePlayerUuid(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr GetReportsFromSourcePlayerUuidSelf(const FRequest_GetReportsFromSourcePlayerUuidSelf& Request, const FDelegate_GetReportsFromSourcePlayerUuidSelf& Delegate = FDelegate_GetReportsFromSourcePlayerUuidSelf(), int32 Priority = DefaultRallyHereAPIPriority);

private:
    void OnCreateReportForTargetPlayerUuidResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_CreateReportForTargetPlayerUuid Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetReportsForTargetPlayerUuidResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetReportsForTargetPlayerUuid Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetReportsForTargetPlayerUuidSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetReportsForTargetPlayerUuidSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetReportsFromSourcePlayerUuidResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetReportsFromSourcePlayerUuid Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetReportsFromSourcePlayerUuidSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetReportsFromSourcePlayerUuidSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Create Report For Target Player Uuid
 *
 * Create a new report for a target player
 * Required Permissions:
 * If `source_player_uuid` is not provided, or is the same as the active player: any of: `sanction:report:create:any`, `sanction:*`, `sanction:report:create:self`
 * Otherwise: any of: `sanction:report:create:any`, `sanction:*`
*/
struct RALLYHEREAPI_API FRequest_CreateReportForTargetPlayerUuid : public FRequest
{
    FRequest_CreateReportForTargetPlayerUuid();
    virtual ~FRequest_CreateReportForTargetPlayerUuid() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid PlayerUuid;
    FRHAPI_PlayerReportCreate PlayerReportCreate;
};

struct RALLYHEREAPI_API FResponse_CreateReportForTargetPlayerUuid : public FResponse
{
    FResponse_CreateReportForTargetPlayerUuid(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_CreateReportForTargetPlayerUuid() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_PlayerReport Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_PlayerReport& OutContent) const;

    /* Response 400
     Error Codes: - source_player_required - Source Player must be provided in request or with a user token 
    */
    bool TryGetContentFor400(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 403
     Error Codes: - insufficient_permissions - Insufficient Permissions - auth_malformed_access - Invalid Authorization - malformed access token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization - auth_invalid_version - Invalid Authorization - version - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_unknown - Failed to parse token - auth_token_invalid_claim - Token contained invalid claim value: {} 
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 404
     Error Codes: - player_not_found - Player {id} not found 
    */
    bool TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_CreateReportForTargetPlayerUuid
{
    typedef FRequest_CreateReportForTargetPlayerUuid Request;
    typedef FResponse_CreateReportForTargetPlayerUuid Response;
    typedef FDelegate_CreateReportForTargetPlayerUuid Delegate;
    typedef FReportsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.CreateReportForTargetPlayerUuid(InRequest, InDelegate, Priority); }
};

/* Get Reports For Target Player Uuid
 *
 * Get reports for a target player
 * Required Permissions:
 * 
 * - For any player (including themselves) any of: `sanction:report:read:target-any`, `sanction:*`
 * 
 * - For the player themselves : `sanction:report:read:target-self`
 * 
 * Source players will be empty without the Required Permissions:
 * 
 * - For any player (including themselves) any of: `sanction:report:read:source-any`, `sanction:*`
 * 
 * - For the player themselves : `sanction:report:read:source-self`
*/
struct RALLYHEREAPI_API FRequest_GetReportsForTargetPlayerUuid : public FRequest
{
    FRequest_GetReportsForTargetPlayerUuid();
    virtual ~FRequest_GetReportsForTargetPlayerUuid() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid PlayerUuid;
    /* Pass this on subsequent calls to iterate forwards.  Null/missing value indicates the first page */
    TOptional<FString> Cursor;
    TOptional<int32> PageSize;
};

struct RALLYHEREAPI_API FResponse_GetReportsForTargetPlayerUuid : public FResponse
{
    FResponse_GetReportsForTargetPlayerUuid(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetReportsForTargetPlayerUuid() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_PlayerReportList Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_PlayerReportList& OutContent) const;

    /* Response 403
     Error Codes: - insufficient_permissions - Insufficient Permissions - auth_malformed_access - Invalid Authorization - malformed access token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization - auth_invalid_version - Invalid Authorization - version - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_unknown - Failed to parse token - auth_token_invalid_claim - Token contained invalid claim value: {} 
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 404
     Error Codes: - player_not_found - Player {id} not found 
    */
    bool TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetReportsForTargetPlayerUuid
{
    typedef FRequest_GetReportsForTargetPlayerUuid Request;
    typedef FResponse_GetReportsForTargetPlayerUuid Response;
    typedef FDelegate_GetReportsForTargetPlayerUuid Delegate;
    typedef FReportsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.GetReportsForTargetPlayerUuid(InRequest, InDelegate, Priority); }
};

/* Get Reports For Target Player Uuid Self
 *
 * Get reports for a target player
 * Required Permissions:
 * 
 * - For any player (including themselves) any of: `sanction:report:read:target-any`, `sanction:*`
 * 
 * - For the player themselves : `sanction:report:read:target-self`
 * 
 * Source players will be empty without the Required Permissions:
 * 
 * - For any player (including themselves) any of: `sanction:report:read:source-any`, `sanction:*`
 * 
 * - For the player themselves : `sanction:report:read:source-self`
*/
struct RALLYHEREAPI_API FRequest_GetReportsForTargetPlayerUuidSelf : public FRequest
{
    FRequest_GetReportsForTargetPlayerUuidSelf();
    virtual ~FRequest_GetReportsForTargetPlayerUuidSelf() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Pass this on subsequent calls to iterate forwards.  Null/missing value indicates the first page */
    TOptional<FString> Cursor;
    TOptional<int32> PageSize;
};

struct RALLYHEREAPI_API FResponse_GetReportsForTargetPlayerUuidSelf : public FResponse
{
    FResponse_GetReportsForTargetPlayerUuidSelf(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetReportsForTargetPlayerUuidSelf() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_PlayerReportList Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_PlayerReportList& OutContent) const;

    /* Response 403
     Error Codes: - insufficient_permissions - Insufficient Permissions - auth_malformed_access - Invalid Authorization - malformed access token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization - auth_invalid_version - Invalid Authorization - version - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_unknown - Failed to parse token - auth_token_invalid_claim - Token contained invalid claim value: {} 
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 404
     Error Codes: - player_not_found - Player {id} not found 
    */
    bool TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetReportsForTargetPlayerUuidSelf
{
    typedef FRequest_GetReportsForTargetPlayerUuidSelf Request;
    typedef FResponse_GetReportsForTargetPlayerUuidSelf Response;
    typedef FDelegate_GetReportsForTargetPlayerUuidSelf Delegate;
    typedef FReportsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.GetReportsForTargetPlayerUuidSelf(InRequest, InDelegate, Priority); }
};

/* Get Reports From Source Player Uuid
 *
 * Get reports from a source player
 * Required Permissions:
 * 
 * - For any player (including themselves) any of: `sanction:report:read:source-any`, `sanction:*`
 * 
 * - For the player themselves : `sanction:report:read:source-self`
*/
struct RALLYHEREAPI_API FRequest_GetReportsFromSourcePlayerUuid : public FRequest
{
    FRequest_GetReportsFromSourcePlayerUuid();
    virtual ~FRequest_GetReportsFromSourcePlayerUuid() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid PlayerUuid;
    /* Pass this on subsequent calls to iterate forwards.  Null/missing value indicates the first page */
    TOptional<FString> Cursor;
    TOptional<int32> PageSize;
};

struct RALLYHEREAPI_API FResponse_GetReportsFromSourcePlayerUuid : public FResponse
{
    FResponse_GetReportsFromSourcePlayerUuid(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetReportsFromSourcePlayerUuid() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_PlayerReportList Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_PlayerReportList& OutContent) const;

    /* Response 403
     Error Codes: - insufficient_permissions - Insufficient Permissions - auth_malformed_access - Invalid Authorization - malformed access token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization - auth_invalid_version - Invalid Authorization - version - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_unknown - Failed to parse token - auth_token_invalid_claim - Token contained invalid claim value: {} 
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 404
     Error Codes: - player_not_found - Player {id} not found 
    */
    bool TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetReportsFromSourcePlayerUuid
{
    typedef FRequest_GetReportsFromSourcePlayerUuid Request;
    typedef FResponse_GetReportsFromSourcePlayerUuid Response;
    typedef FDelegate_GetReportsFromSourcePlayerUuid Delegate;
    typedef FReportsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.GetReportsFromSourcePlayerUuid(InRequest, InDelegate, Priority); }
};

/* Get Reports From Source Player Uuid Self
 *
 * Get reports from a source player
 * Required Permissions:
 * 
 * - For any player (including themselves) any of: `sanction:report:read:source-any`, `sanction:*`
 * 
 * - For the player themselves : `sanction:report:read:source-self`
*/
struct RALLYHEREAPI_API FRequest_GetReportsFromSourcePlayerUuidSelf : public FRequest
{
    FRequest_GetReportsFromSourcePlayerUuidSelf();
    virtual ~FRequest_GetReportsFromSourcePlayerUuidSelf() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Pass this on subsequent calls to iterate forwards.  Null/missing value indicates the first page */
    TOptional<FString> Cursor;
    TOptional<int32> PageSize;
};

struct RALLYHEREAPI_API FResponse_GetReportsFromSourcePlayerUuidSelf : public FResponse
{
    FResponse_GetReportsFromSourcePlayerUuidSelf(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetReportsFromSourcePlayerUuidSelf() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_PlayerReportList Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_PlayerReportList& OutContent) const;

    /* Response 403
     Error Codes: - insufficient_permissions - Insufficient Permissions - auth_malformed_access - Invalid Authorization - malformed access token - auth_invalid_key_id - Invalid Authorization - Invalid Key ID in Access Token - auth_token_format - Invalid Authorization - {} - auth_not_jwt - Invalid Authorization - auth_invalid_version - Invalid Authorization - version - auth_token_expired - Token is expired - auth_token_sig_invalid - Token Signature is invalid - auth_token_unknown - Failed to parse token - auth_token_invalid_claim - Token contained invalid claim value: {} 
    */
    bool TryGetContentFor403(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 404
     Error Codes: - player_not_found - Player {id} not found 
    */
    bool TryGetContentFor404(FRHAPI_HzApiErrorModel& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_HTTPValidationError& OutContent) const;

};

struct RALLYHEREAPI_API Traits_GetReportsFromSourcePlayerUuidSelf
{
    typedef FRequest_GetReportsFromSourcePlayerUuidSelf Request;
    typedef FResponse_GetReportsFromSourcePlayerUuidSelf Response;
    typedef FDelegate_GetReportsFromSourcePlayerUuidSelf Delegate;
    typedef FReportsAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.GetReportsFromSourcePlayerUuidSelf(InRequest, InDelegate, Priority); }
};


}