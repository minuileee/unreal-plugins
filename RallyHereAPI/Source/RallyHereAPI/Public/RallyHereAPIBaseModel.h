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
#include "Misc/TVariant.h"
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

class FHttpRetryRequest : public FHttpRetrySystem::FRequest
{
public:
	FHttpRetryRequest(
		class FManager& InManager,
		const TSharedRef<IHttpRequest, ESPMode::ThreadSafe>& HttpRequest,
		const FRetryLimitCountSetting& InRetryLimitCountOverride = FRetryLimitCountSetting(),
		const FRetryTimeoutRelativeSecondsSetting& InRetryTimeoutRelativeSecondsOverride = FRetryTimeoutRelativeSecondsSetting(),
		const FRetryResponseCodes& InRetryResponseCodes = FRetryResponseCodes(),
		const FRetryVerbs& InRetryVerbs = FRetryVerbs(),
		const FRetryDomainsPtr& InRetryDomains = FRetryDomainsPtr()
	) : FHttpRetrySystem::FRequest (InManager, HttpRequest, InRetryLimitCountOverride, InRetryTimeoutRelativeSecondsOverride, InRetryResponseCodes, InRetryVerbs, InRetryDomains)
	{ }

	// Reset state of the request to not started, in case we are retrying after an auth failure
	virtual bool RALLYHEREAPI_API ProcessRequest() override
	{
		Status = EStatus::NotStarted;
		return FHttpRetrySystem::FRequest::ProcessRequest();
	}
};

/*
 * Metadata used to track a request through the Unreal systems
 */
struct RALLYHEREAPI_API FRequestMetadata
{
	FGuid Identifier;
	FName SimplifiedPath;
	int32 RetryCount;
	FDateTime CreateTimestamp, QueuedTimestamp, HttpQueuedTimestamp;
	
	FRequestMetadata()
		: Identifier(FGuid::NewGuid())
		, RetryCount(0)
		, CreateTimestamp(FDateTime::Now())
	{}
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
	typedef nullptr_t EmptyPayloadType;
	typedef FString StringPayloadType;
	typedef TSharedPtr<FJsonValue> JsonPayloadType;
	typedef TArrayView<const uint8> BinaryPayloadType;
	typedef TVariant<EmptyPayloadType, StringPayloadType, JsonPayloadType, BinaryPayloadType> PayloadVariantType;

	FResponse(FRequestMetadata InRequestMetadata);
	virtual ~FResponse() = default;
	virtual bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) = 0;
	bool ParseResponse(bool& bOutParsedHeaders, bool& bOutParsedContent)
	{
		bOutParsedContent = false;
		bOutParsedHeaders = ParseHeaders();
		if (bOutParsedHeaders)
		{
			bOutParsedContent = ParseContent();
		}
		return bOutParsedHeaders && bOutParsedContent;
	};
	
	virtual bool ParseHeaders() { return true; }
	virtual bool ParseContent();

	void SetSuccessful(bool InSuccessful) { Successful = InSuccessful; }
	bool IsSuccessful() const { return Successful; }

	virtual void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode);
	EHttpResponseCodes::Type GetHttpResponseCode() const { return ResponseCode; }
	
	virtual FString GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const;

	void SetHttpResponse(const FHttpResponsePtr& InHttpResponse) { HttpResponse = InHttpResponse; }
	const FHttpResponsePtr& GetHttpResponse() const { return HttpResponse; }

	const FRequestMetadata GetRequestMetadata() const { return RequestMetadata; }

	template<typename T>
	void SetPayload(const T& InPayload) { Payload.Set<T>(InPayload); }
	void SetPayload(const PayloadVariantType& InPayload) { Payload = InPayload; }
	const PayloadVariantType& GetPayload() const { return Payload; }
	template<typename T>
	const T* TryGetPayload() const { return Payload.TryGet<T>(); }

	void ClearPayload() { return Payload.Set<EmptyPayloadType>(nullptr); }

	UE_DEPRECATED(5.0, "Please use SetPayload<>() instead" )
	void SetResponseString(const StringPayloadType& InValue) { SetPayload<StringPayloadType>(InValue); }
	UE_DEPRECATED(5.0, "Please use TryGetPayload<>() instead" )
	const StringPayloadType& GetResponseString() const { auto PayloadString = TryGetPayload<StringPayloadType>(); return PayloadString ? *PayloadString : DefaultStringPayload; }

	UE_DEPRECATED(5.0, "Please use SetPayload<>() instead" )
	void SetJsonResponse(const JsonPayloadType& InValue) { SetPayload<JsonPayloadType>(InValue); }
	UE_DEPRECATED(5.0, "Please use TryGetPayload<>() instead" )
	const JsonPayloadType& GetJsonResponse() const { auto PayloadJson = TryGetPayload<JsonPayloadType>(); return PayloadJson ? *PayloadJson : DefaultJsonPayload; }

protected:
	bool Successful;
	EHttpResponseCodes::Type ResponseCode;
	FHttpResponsePtr HttpResponse;
	FRequestMetadata RequestMetadata;
	
	PayloadVariantType Payload;
	
	virtual bool ParseTypelessContent();
	virtual bool ParseStringTypeContent();
	virtual bool ParseJsonTypeContent();
	virtual bool ParseBinaryTypeContent();
	virtual bool ParseUnknownTypeContent();
	
	// static payloads to allow deprecated functions to return references
	static JsonPayloadType DefaultJsonPayload;
	static StringPayloadType DefaultStringPayload;
};

DECLARE_MULTICAST_DELEGATE_TwoParams(FAPI_RequestStarted, const FRequestMetadata&, FHttpRequestRef);
DECLARE_MULTICAST_DELEGATE_FiveParams(FAPI_RequestCompleted, const FResponse&, FHttpRequestPtr, FHttpResponsePtr, bool /* success */, bool /* willRetryWithAuth */);

class RALLYHEREAPI_API FAPI : public TSharedFromThis<FAPI>
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
	void SetHttpRetryManager(const TSharedRef<FHttpRetrySystem::FManager>& RetryManager);
	TSharedPtr<FHttpRetrySystem::FManager>& GetHttpRetryManager() const { return RetryManager; }

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
	mutable TSharedPtr<FHttpRetrySystem::FManager> RetryManager;
	mutable TSharedPtr<FHttpRetryManager> DefaultRetryManager;
	FAPI_RequestStarted RequestStarted;
	FAPI_RequestCompleted RequestCompleted;
};

}
