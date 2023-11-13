// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIModule.h"
#include "AuthAPI.h"

namespace RallyHereAPI
{

FAuthContext::FAuthContext(FAuthAPI &LoginAPI_, FString ClientId, FString ClientSecret) : LoginAPI{ &LoginAPI_ },
    ClientId{std::move(ClientId)}, ClientSecret{std::move(ClientSecret)}, bIsRefreshing{}, LoginComplete{}, LoginResult{}, TokenResponse{}
{
    UpdateBasicAuthValue();
}

FAuthContext::FAuthContext(FAuthAPI& LoginAPI_) : LoginAPI{ &LoginAPI_ }, bIsRefreshing{}, LoginComplete{}, LoginResult{}, TokenResponse{}
{
}

const TOptional<FRHAPI_LoginResult>& FAuthContext::GetLoginResult() const
{
    return LoginResult;
}

const TOptional<FRHAPI_TokenResponse>& FAuthContext::GetTokenResponse() const
{
    return TokenResponse;
}

bool FAuthContext::IsLoggedIn() const
{
    if (LoginResult.IsSet())
    {
        return LoginResult->AccessToken_IsSet;
    }
    else if (TokenResponse.IsSet())
    {
        return true;
    }
    return false;
}

FString FAuthContext::GetAccessToken() const
{
    if (LoginResult.IsSet())
    {
        return LoginResult->GetAccessToken(FString());
    }
    else if (TokenResponse.IsSet())
    {
        return TokenResponse->GetAccessToken();
    }
    return FString();
}

FString FAuthContext::GetRefreshToken() const
{
    if (LoginResult.IsSet())
    {
        return LoginResult->GetRefreshToken(FString());
    }
    else if (TokenResponse.IsSet())
    {
        return TokenResponse->GetRefreshToken();
    }
    return FString();
}

void FAuthContext::ProcessLogin(const FResponse_Login& LoginResponse_)
{
    bIsRefreshing = false;
    const bool bSuccess = LoginResponse_.IsSuccessful() && LoginResponse_.GetHttpResponseCode() == EHttpResponseCodes::Type::Ok;
    if (!bSuccess)
    {
        SCOPED_NAMED_EVENT(RallyHere_BroadcastLoginFailed, FColor::Purple);
        LoginComplete.Broadcast(false);
        return;
    }

    const auto PreviousLoginResult = LoginResult;
    LoginResult = LoginResponse_.Content;

    // clear out any token response
    TokenResponse.Reset();

    {
        SCOPED_NAMED_EVENT(RallyHere_BroadcastLoginComplete, FColor::Purple);
        LoginComplete.Broadcast(true);
    }

    if (!IsSameUser(PreviousLoginResult, LoginResult))
    {
        SCOPED_NAMED_EVENT(RallyHere_BroadcastLoginUserChanged, FColor::Purple);
        LoginUserChanged.Broadcast();
    }
}

void FAuthContext::ProcessLoginToken(const FResponse_Token& LoginResponse_)
{
    bIsRefreshing = false;
    const bool bSuccess = LoginResponse_.IsSuccessful() && LoginResponse_.GetHttpResponseCode() == EHttpResponseCodes::Type::Ok;
    if (!bSuccess)
    {
        SCOPED_NAMED_EVENT(RallyHere_BroadcastLoginFailed, FColor::Purple);
        LoginComplete.Broadcast(false);
        return;
    }

    TokenResponse = LoginResponse_.Content;

    // clear out any login result
    LoginResult.Reset();

    {
        SCOPED_NAMED_EVENT(RallyHere_BroadcastLoginComplete, FColor::Purple);
        LoginComplete.Broadcast(true);
    }
}

bool FAuthContext::IsSameUser(const TOptional<FRHAPI_LoginResult>& A, const TOptional<FRHAPI_LoginResult>& B)
{
    if (A.IsSet() != B.IsSet())
    {
        return false;
    }

    if (!A.IsSet())
    {
        return true;
    }

    return A->ActivePlayerUuid_Optional == B->ActivePlayerUuid_Optional && A->GetPersonId() == B->GetPersonId();
}

bool FAuthContext::Refresh()
{
    if (bIsRefreshing)
    {
        UE_LOG(LogRallyHereAPI, Verbose, TEXT("FAuthContext::Refresh skipping refresh while already in progress"));
        return true; // We will handle their refresh request with the already pending one
    }

    auto refreshToken = GetRefreshToken();
    if (refreshToken.IsEmpty())
    {
        UE_LOG(LogRallyHereAPI, Verbose, TEXT("FAuthContext::Refresh No token to refresh with"));
        return false;
    }

    FDelegate_Login Delegate;
    Delegate.BindSP(AsShared(), &FAuthContext::ProcessLogin);
    FRequest_Login Request;
    Request.AuthContext = SharedThis(this);
    Request.LoginRequestV1.SetIncludeRefresh(true);
    Request.LoginRequestV1.SetGrantType(ERHAPI_GrantType::Refresh);
    Request.LoginRequestV1.SetPortalAccessToken(std::move(refreshToken));
    auto submittedRequest = LoginAPI->Login(Request, std::move(Delegate));
    bIsRefreshing = submittedRequest != nullptr;
    UE_LOG(LogRallyHereAPI, Verbose, TEXT("FAuthContext::Refresh Submitted: %s"), bIsRefreshing ? TEXT("Yes") : TEXT("No"));
    return bIsRefreshing;
}

void FAuthContext::ClearAuthContext()
{
    LoginResult.Reset();
    TokenResponse.Reset();

    {
        SCOPED_NAMED_EVENT(RallyHere_BroadcastLogout, FColor::Purple);
        Logout.Broadcast();
    }
}

void FAuthContext::SetClientId(const FString& InClientId)
{
    ClientId = InClientId;
    UpdateBasicAuthValue();
}

void FAuthContext::SetClientSecret(const FString& InClientSecret)
{
    ClientSecret = InClientSecret;
    UpdateBasicAuthValue();
}

bool FAuthContext::AddClientCredentials(const FHttpRequestRef& HttpRequest) const
{
    if (BasicAuthValue.IsSet())
    {
        HttpRequest->SetHeader(TEXT("Authorization"), *BasicAuthValue);
    }

    return true;
}

bool FAuthContext::AddClientCredentials(const FHttpRequestPtr& HttpRequest) const
{
    if (BasicAuthValue.IsSet())
    {
        HttpRequest->SetHeader(TEXT("Authorization"), *BasicAuthValue);
    }

    return true;
}

bool FAuthContext::AddBearerToken(const FHttpRequestRef& HttpRequest) const
{
    if (!IsLoggedIn())
    {
        return false;
    }
    HttpRequest->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + GetAccessToken());
    return true;
}

bool FAuthContext::AddBearerToken(const FHttpRequestPtr& HttpRequest) const
{
    if (!IsLoggedIn())
    {
        return false;
    }
    HttpRequest->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + GetAccessToken());
    return true;
}

void FAuthContext::UpdateBasicAuthValue()
{
    if (ClientId.IsSet() && !ClientId->IsEmpty() && ClientSecret.IsSet() && !ClientSecret->IsEmpty())
    {
        BasicAuthValue = TEXT("Basic ") + Base64UrlEncode(*ClientId + TEXT(":") + *ClientSecret);
    }
    else
    {
        BasicAuthValue.Reset();
    }
}
}
