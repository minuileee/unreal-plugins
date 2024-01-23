// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "RallyHereDeveloperAPIAuthContext.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevAccountAuth0.h"
#include "DevHTTPValidationError.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_ResendVerificationEmail;
struct FResponse_ResendVerificationEmail;
struct FRequest_UpdateAccountByUser;
struct FResponse_UpdateAccountByUser;

DECLARE_DELEGATE_OneParam(FDelegate_ResendVerificationEmail, const FResponse_ResendVerificationEmail&);
DECLARE_DELEGATE_OneParam(FDelegate_UpdateAccountByUser, const FResponse_UpdateAccountByUser&);

class RALLYHEREDEVELOPERAPI_API FUserAccountUserRequestNoM2mAPI : public FAPI
{
public:
    FUserAccountUserRequestNoM2mAPI();
    virtual ~FUserAccountUserRequestNoM2mAPI();

    FHttpRequestPtr ResendVerificationEmail(const FRequest_ResendVerificationEmail& Request, const FDelegate_ResendVerificationEmail& Delegate = FDelegate_ResendVerificationEmail(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr UpdateAccountByUser(const FRequest_UpdateAccountByUser& Request, const FDelegate_UpdateAccountByUser& Delegate = FDelegate_UpdateAccountByUser(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnResendVerificationEmailResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ResendVerificationEmail Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnUpdateAccountByUserResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UpdateAccountByUser Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Resend Verification Email
 *
 * Resend verification email, requires no permissions as request should be made using account token
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_ResendVerificationEmail : public FRequest
{
    FRequest_ResendVerificationEmail();
    virtual ~FRequest_ResendVerificationEmail() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_ResendVerificationEmail : public FResponse
{
    FResponse_ResendVerificationEmail(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_ResendVerificationEmail() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevJsonValue Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevJsonValue& OutContent) const;

    /* Response 404
    Not Found
    */

};

struct RALLYHEREDEVELOPERAPI_API Traits_ResendVerificationEmail
{
    typedef FRequest_ResendVerificationEmail Request;
    typedef FResponse_ResendVerificationEmail Response;
    typedef FDelegate_ResendVerificationEmail Delegate;
    typedef FUserAccountUserRequestNoM2mAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.ResendVerificationEmail(InRequest, InDelegate, Priority); }
};

/* Update Account By User
 *
 * Update account details, no permissions required as request should be made using user account token
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_UpdateAccountByUser : public FRequest
{
    FRequest_UpdateAccountByUser();
    virtual ~FRequest_UpdateAccountByUser() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FRHAPI_DevAccountAuth0 AccountAuth0;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_UpdateAccountByUser : public FResponse
{
    FResponse_UpdateAccountByUser(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_UpdateAccountByUser() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevJsonValue Content;


    // Manual Response Helpers
    /* Response 200
    Successful Response
    */
    bool TryGetContentFor200(FRHAPI_DevJsonValue& OutContent) const;

    /* Response 422
    Validation Error
    */
    bool TryGetContentFor422(FRHAPI_DevHTTPValidationError& OutContent) const;

};

struct RALLYHEREDEVELOPERAPI_API Traits_UpdateAccountByUser
{
    typedef FRequest_UpdateAccountByUser Request;
    typedef FResponse_UpdateAccountByUser Response;
    typedef FDelegate_UpdateAccountByUser Delegate;
    typedef FUserAccountUserRequestNoM2mAPI API;
    static FString Name;

    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.UpdateAccountByUser(InRequest, InDelegate, Priority); }
};


}
