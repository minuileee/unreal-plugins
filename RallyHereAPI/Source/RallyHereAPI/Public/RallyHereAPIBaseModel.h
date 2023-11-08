// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Serialization/JsonWriter.h"
#include "Dom/JsonObject.h"
#include "HttpRetrySystem.h"
#include "Containers/Ticker.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Misc/Guid.h"
#include "RallyHereAPIBaseModel.generated.h"

/** @defgroup RHAPI_BaseModel RallyHere API Base Model
 *  @{
 */

/**
 * @brief Base class for all RallyHereAPI data models
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_Model
{
    GENERATED_BODY(WithNoDestructor);
    virtual ~FRHAPI_Model() {}

    /**
    * @brief Fills this object with data from the passed in JSON
    *
    * @param [in] JsonValue Data from the API call.
    *
    * @return true if parsing of the JSON data was successful.
    */
    virtual bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) { return false; }

    /**
    * @brief Writes the data from this object into the specified JSON Writer stream
    *
    * @param [in] Writer JSON Writer stream to push .
    */
    virtual void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const {}
};
/** @} */

namespace RallyHereAPI
{

struct FAuthContext;
using namespace FHttpRetrySystem;

#if ENGINE_MAJOR_VERSION >= 5
struct RALLYHEREAPI_API FHttpRetryManager : public FManager, public FTSTickerObjectBase
#else
struct RALLYHEREAPI_API FHttpRetryManager : public FManager, public FTickerObjectBase
#endif
{
    using FManager::FManager;

    bool Tick(float DeltaTime) final;
};

struct RALLYHEREAPI_API FHttpRetryParams
{
    FHttpRetryParams(
        const FRetryLimitCountSetting& InRetryLimitCountOverride = FRetryLimitCountSetting(),
        const FRetryTimeoutRelativeSecondsSetting& InRetryTimeoutRelativeSecondsOverride = FRetryTimeoutRelativeSecondsSetting(),
        const FRetryResponseCodes& InRetryResponseCodes = FRetryResponseCodes(),
        const FRetryVerbs& InRetryVerbs = FRetryVerbs(),
        const FRetryDomainsPtr& InRetryDomains = FRetryDomainsPtr()
    );

    FRetryLimitCountSetting RetryLimitCountOverride;
    FRetryTimeoutRelativeSecondsSetting RetryTimeoutRelativeSecondsOverride;
    FRetryResponseCodes RetryResponseCodes;
    FRetryVerbs RetryVerbs;
    FRetryDomainsPtr RetryDomains;
};

/*
 * Metadata used to track a request through the Unreal systems
 */
struct RALLYHEREAPI_API FRequestMetadata
{
    FGuid Identifier;
    FName SimplifiedPath;
    int32 RetryCount = 0;
};

class RALLYHEREAPI_API FRequest
{
public:
    FRequest()
    {
        // default to enabling retry
        SetShouldRetry();
    }
    virtual ~FRequest() = default;
    virtual bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const = 0;
    virtual FString ComputePath() const = 0;
    virtual FName GetSimplifiedPath() const = 0;
    virtual TSharedPtr<FAuthContext> GetAuthContext() const { return nullptr; }
    const FRequestMetadata& GetRequestMetadata() const { return RequestMetadata; }

    /* Enables retry and optionally sets a retry policy for this request */
    void SetShouldRetry(const FHttpRetryParams& Params = FHttpRetryParams()) { RetryParams = Params; }
    void ClearShouldRetry() { RetryParams.Reset(); }
    const TOptional<FHttpRetryParams>& GetRetryParams() const { return RetryParams; }

protected:
    FRequestMetadata RequestMetadata;
    TOptional<FHttpRetryParams> RetryParams;
};

class RALLYHEREAPI_API FResponse
{
public:
    FResponse(FRequestMetadata InRequestMetadata);
    virtual ~FResponse() = default;
    virtual bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) = 0;
    virtual bool ParseHeaders() { return true; }

    void SetSuccessful(bool InSuccessful) { Successful = InSuccessful; }
    bool IsSuccessful() const { return Successful; }

    virtual void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode);
    EHttpResponseCodes::Type GetHttpResponseCode() const { return ResponseCode; }

    void SetResponseString(const FString& InResponseString) { ResponseString = InResponseString; }
    const FString& GetResponseString() const { return ResponseString; }

    void SetHttpResponse(const FHttpResponsePtr& InHttpResponse) { HttpResponse = InHttpResponse; }
    const FHttpResponsePtr& GetHttpResponse() const { return HttpResponse; }

    const FRequestMetadata GetRequestMetadata() const { return RequestMetadata; }

    void SetJsonResponse(const TSharedPtr<FJsonValue>& InJsonValue) { ResponseJson = InJsonValue; }
    const TSharedPtr<FJsonValue>& GetJsonResponse() const { return ResponseJson; }

protected:
    bool Successful;
    EHttpResponseCodes::Type ResponseCode;
    FString ResponseString;
    FHttpResponsePtr HttpResponse;
    FRequestMetadata RequestMetadata;
    TSharedPtr<FJsonValue> ResponseJson;
};

DECLARE_MULTICAST_DELEGATE_TwoParams(FAPI_RequestStarted, const FRequestMetadata&, FHttpRequestRef);
DECLARE_MULTICAST_DELEGATE_FiveParams(FAPI_RequestCompleted, const FResponse&, FHttpRequestPtr, FHttpResponsePtr, bool /* success */, bool /* willRetryWithAuth */);

class RALLYHEREAPI_API FAPI
{
public:
    FAPI() = default;
    virtual ~FAPI() = default;

    /* Sets the URL Endpoint.
     * Note: several fallback endpoints can be configured in request retry policies, see Request::SetShouldRetry */
    void SetURL(const FString& Url);
    FString GetURL() const;
    FName GetName() const;

    /* Adds global header params to all requests */
    void AddHeaderParam(const FString& Key, const FString& Value);
    void ClearHeaderParams();

    /* Auth context for requests that require an Authorization header */
    void SetAuthContext(FAuthContext& NewAuthContext);
    FAuthContext *GetAuthContext();

    /* Sets the retry manager to the user-defined retry manager. User must manage the lifetime of the retry manager.
     * If no retry manager is specified and a request needs retries, a default retry manager will be used.
     * See also: Request::SetShouldRetry */
    void SetHttpRetryManager(FHttpRetrySystem::FManager& RetryManager);
    FHttpRetrySystem::FManager &GetHttpRetryManager();

    FAPI_RequestStarted& OnRequestStarted() { return RequestStarted; }
    FAPI_RequestCompleted& OnRequestCompleted() { return RequestCompleted; }

protected:
    FHttpRequestRef CreateHttpRequest(const FRequest& Request) const;
    bool IsValid() const;
    struct FRequestPendingAuthRetry
    {
        FHttpRequestPtr HttpRequest;
        TSharedPtr<FAuthContext> AuthContext;
        FDelegateHandle Handle;
    };
    bool HandleResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, TSharedPtr<FAuthContext> AuthContext, FResponse& InOutResponse, const FHttpRequestCompleteDelegate& ResponseDelegate, const FRequestMetadata& RequestMetadata, int32 Priority);
    void RetryRequestAfterAuth(bool bAuthSuccess, TSharedRef<FRequestPendingAuthRetry> Request, FHttpRequestCompleteDelegate ResponseDelegate, FRequestMetadata RequestMetadata, int32 Priority);

    FString Url;
    FName Name;
    TMap<FString, FString> AdditionalHeaderParams;
    mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
    mutable TUniquePtr<FHttpRetryManager> DefaultRetryManager;
    FAPI_RequestStarted RequestStarted;
    FAPI_RequestCompleted RequestCompleted;
};

}
