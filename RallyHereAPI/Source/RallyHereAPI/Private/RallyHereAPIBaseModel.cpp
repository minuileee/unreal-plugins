// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "RallyHereAPIHttpRequester.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIModule.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "HttpModule.h"

namespace RallyHereAPI
{

bool FHttpRetryManager::Tick(float DeltaTime)
{
	FManager::Update();
	return true;
}

FHttpRetryParams::FHttpRetryParams(const FRetryLimitCountSetting& InRetryLimitCountOverride /*= FRetryLimitCountSetting()*/,
	const FRetryTimeoutRelativeSecondsSetting& InRetryTimeoutRelativeSecondsOverride /*= FRetryTimeoutRelativeSecondsSetting()*/,
	const FRetryResponseCodes& InRetryResponseCodes /*= FRetryResponseCodes()*/,
	const FRetryVerbs& InRetryVerbs /*= FRetryVerbs()*/,
	const FRetryDomainsPtr& InRetryDomains /*= FRetryDomainsPtr() */)
	: RetryLimitCountOverride(InRetryLimitCountOverride)
	, RetryTimeoutRelativeSecondsOverride(InRetryTimeoutRelativeSecondsOverride)
	, RetryResponseCodes(InRetryResponseCodes)
	, RetryVerbs(InRetryVerbs)
	, RetryDomains(InRetryDomains)
{
}

FResponse::JsonPayloadType FResponse::DefaultJsonPayload = FResponse::JsonPayloadType();
FResponse::StringPayloadType FResponse::DefaultStringPayload = FResponse::StringPayloadType();

FResponse::FResponse(FRequestMetadata InRequestMetadata) :
	Successful{},
	ResponseCode{ EHttpResponseCodes::Type::Unknown },
	HttpResponse{},
	RequestMetadata{ MoveTemp(InRequestMetadata) }
{
}

void FResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	ResponseCode = InHttpResponseCode;
	SetSuccessful(EHttpResponseCodes::IsOk(InHttpResponseCode));
}

FString FResponse::GetHttpResponseCodeDescription(EHttpResponseCodes::Type InHttpResponseCode) const
{
	return EHttpResponseCodes::GetDescription(InHttpResponseCode).ToString();
}

bool FResponse::ParseContent(bool& bOutNeedsReauth)
{
	bOutNeedsReauth = false;

	FString ContentType = HttpResponse->GetContentType();
	ContentType.TrimStartAndEndInline();

	if (ContentType.IsEmpty())
	{
		return ParseTypelessContent(bOutNeedsReauth);
	}
	else if (ContentType.StartsWith(TEXT("application/json")) || ContentType.StartsWith("text/json"))
	{
		return ParseJsonTypeContent(bOutNeedsReauth);
	}
	else if (ContentType.StartsWith(TEXT("text/plain")))
	{
		return ParseStringTypeContent(bOutNeedsReauth);
	}
	else if (ContentType.StartsWith(TEXT("application/octet-stream")))
	{
		return ParseBinaryTypeContent(bOutNeedsReauth);
	}
	else
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("Failed to recognize http response type: %s"), *ContentType);
		return ParseUnknownTypeContent(bOutNeedsReauth);
	}
}

bool FResponse::ParseTypelessContent(bool& bOutNeedsReauth)
{
	check(HttpResponse != nullptr);

	bOutNeedsReauth = false;

	ClearPayload();

	return true; // Successfully parsed
}

bool FResponse::ParseStringTypeContent(bool& bOutNeedsReauth)
{
	check(HttpResponse != nullptr);

	bOutNeedsReauth = false;
	
	SetPayload<StringPayloadType>(HttpResponse->GetContentAsString());
	return true; // Successfully parsed
}

bool FResponse::ParseJsonTypeContent(bool& bOutNeedsReauth)
{
	check(HttpResponse != nullptr);

	bOutNeedsReauth = false;

	ClearPayload();

	TSharedPtr<FJsonValue> JsonValue;
	const FString ContentAsString = HttpResponse->GetContentAsString();
	auto Reader = TJsonReaderFactory<>::Create(ContentAsString);

	if (!FJsonSerializer::Deserialize(Reader, JsonValue))
	{
		if (Reader->GetErrorMessage().StartsWith(TEXT("Open Curly or Square Brace token expected, but not found")))
		{
			FString ContentArrayWrapper = TEXT("[") + ContentAsString + TEXT("]");
			Reader = TJsonReaderFactory<>::Create(ContentArrayWrapper);
			if (FJsonSerializer::Deserialize(Reader, JsonValue) && JsonValue.IsValid())
			{
				TArray<TSharedPtr<FJsonValue>>* OutArray;
				if (JsonValue->TryGetArray(OutArray) && OutArray != nullptr && OutArray->Num() > 0)
				{
					JsonValue = (*OutArray).Last();
				}
			}
		}
	}

	if (JsonValue.IsValid())
	{
		SetPayload<JsonPayloadType>(JsonValue);

		TOptional<bool> bAuthIsValid;
		const TSharedPtr<FJsonObject>* JsonObject;
		switch (HttpResponse->GetResponseCode())
		{
		case 403: // some consoles forcibly retry 401 errors with a modified body, which can generate 403 errors
		case 401:
			if (JsonValue->TryGetObject(JsonObject) && JsonObject && JsonObject->IsValid() && TryGetJsonValue(*JsonObject, FString(TEXT("auth_success")), bAuthIsValid) && bAuthIsValid.IsSet() && !bAuthIsValid.GetValue())
			{
				UE_LOG(LogRallyHereAPI, Warning, TEXT("Parsed JSON successfully, but detected authorization error, marking to reauth and retry"));
				bOutNeedsReauth = true;
				return true;
			}
			break;
		}

		if (FromJson(JsonValue))
		{
			// Successfully parsed
			return true;
		}
		else
		{
			// Report the parse error but do not mark the request as unsuccessful. Data could be partial or malformed, but the request succeeded.
			UE_LOG(LogRallyHereAPI, Warning, TEXT("Parsed JSON successfully, but failed to ingest into API structures (note: failure may be partial):\n%s"), *ContentAsString);
			return true;
		}
	}
	else
	{
		// Report the parse error, as this was supposed to be json but could not be serialized as such
		UE_LOG(LogRallyHereAPI, Error, TEXT("Failed to deserialize JSON content in Http response:\n%s"), *ContentAsString);
		return false;
	}
}

bool FResponse::ParseBinaryTypeContent(bool& bOutNeedsReauth)
{
	check(HttpResponse != nullptr);

	bOutNeedsReauth = false;
	
	SetPayload<BinaryPayloadType>(MakeArrayView(HttpResponse->GetContent()));
	return true; // Successfully parsed
}

bool FResponse::ParseUnknownTypeContent(bool& bOutNeedsReauth)
{
	check(HttpResponse != nullptr);

	bOutNeedsReauth = false;
	
	ClearPayload();

	return false; // could not parse unknown type
}

void FAPI::SetURL(const FString& InUrl)
{
	Url = InUrl;
}

FString FAPI::GetURL() const
{
	return Url;
}

FName FAPI::GetName() const
{
	return Name;
}

void FAPI::AddHeaderParam(const FString& Key, const FString& Value)
{
	AdditionalHeaderParams.Add(Key, Value);
}

void FAPI::ClearHeaderParams()
{
	AdditionalHeaderParams.Reset();
}

bool FAPI::IsValid() const
{
	if (Url.IsEmpty())
	{
		UE_LOG(LogRallyHereAPI, Error, TEXT("Endpoint Url is not set, request cannot be performed"));
		return false;
	}

	return true;
}

void FAPI::SetHttpRetryManager(const TSharedRef<FHttpRetrySystem::FManager>& InRetryManager)
{
	if(InRetryManager != RetryManager)
	{
		DefaultRetryManager.Reset();
		RetryManager = InRetryManager;
	}
}

FHttpRequestRef FAPI::CreateHttpRequest(const FRequest& Request) const
{
	auto HttpRequest = FHttpModule::Get().CreateRequest();
	if (Request.GetRetryParams().IsSet())
	{
		if (!RetryManager.IsValid())
		{
			// Create default retry manager if none was specified
			DefaultRetryManager = MakeShared<FHttpRetryManager>(6, 60);
			RetryManager = DefaultRetryManager.ToSharedRef();
		}
		
		check(RetryManager.IsValid());

		const FHttpRetryParams& Params = Request.GetRetryParams().GetValue();

		// make a new request wrapper that will handle retries
		HttpRequest = MakeShareable(new FHttpRetryRequest(
			*RetryManager,
			HttpRequest,
			Params.RetryLimitCountOverride,
			Params.RetryTimeoutRelativeSecondsOverride,
			Params.RetryResponseCodes,
			Params.RetryVerbs,
			Params.RetryDomains
		));
	}

	return HttpRequest;
}

bool FAPI::HandleResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, TSharedPtr<FAuthContext> AuthContext, FResponse &InOutResponse, const FHttpRequestCompleteDelegate& ResponseDelegate, const FRequestMetadata& RequestMetadata, int32 Priority)
{
	InOutResponse.SetHttpResponse(HttpResponse);
	InOutResponse.SetSuccessful(bSucceeded);

	if (bSucceeded && HttpResponse.IsValid())
	{
		InOutResponse.SetHttpResponseCode((EHttpResponseCodes::Type)HttpResponse->GetResponseCode());

		bool bParsedHeaders = false;
		bool bParsedContent = false;
		bool bNeedsReauth = false;
		
		InOutResponse.ParseResponse(bParsedHeaders, bParsedContent, bNeedsReauth);

		if (!bParsedHeaders)
		{
			// Report the parse error but do not mark the request as unsuccessful. Data could be partial or malformed, but the request succeeded.
			UE_LOG(LogRallyHereAPI, Error, TEXT("Failed to parse Http response headers"));
			return false;
		}

		if (!bParsedContent)
		{
			// Report the parse error but do not mark the request as unsuccessful. Data could be partial or malformed, but the request succeeded.
			UE_LOG(LogRallyHereAPI, Warning, TEXT("Failed to parse Http response content"));
			return false;
		}

		if (bNeedsReauth)
		{
			auto Retry = MakeShared<FRequestPendingAuthRetry>();
			Retry->HttpRequest = HttpRequest;
			Retry->AuthContext = AuthContext;
			Retry->Handle = AuthContext->OnLoginComplete().AddRaw(this, &FAPI::RetryRequestAfterAuth, Retry, ResponseDelegate, RequestMetadata, Priority);
			if (AuthContext->Refresh())
			{
				return true; // Don't submit the response for this request, we are going to retry it.
			}
			else // unable to refresh the token, so cancel the request and go with what we have
			{
				AuthContext->OnLoginComplete().Remove(Retry->Handle);
			}
			return false;
		}

		// successfully parsed content
		return false;
	}

	// By default, assume we failed to establish connection
	InOutResponse.SetHttpResponseCode(EHttpResponseCodes::RequestTimeout);
	return false;
}

void FAPI::RetryRequestAfterAuth(bool bAuthSuccess, TSharedRef<FRequestPendingAuthRetry> Request, FHttpRequestCompleteDelegate ResponseDelegate, FRequestMetadata RequestMetadata, int32 Priority)
{
	Request->AuthContext->OnLoginComplete().Remove(Request->Handle);
	Request->AuthContext->AddBearerToken(Request->HttpRequest);

	if (auto* HttpRequester = FRallyHereAPIHttpRequester::Get())
	{
		TSharedPtr<FRallyHereAPIHttpRequestData> RequestData = MakeShared<FRallyHereAPIHttpRequestData>(Request->HttpRequest.ToSharedRef(), *this, Priority);
		RequestMetadata.RetryCount++;
		RequestData->SetMetadata(RequestMetadata);
		RequestData->SetDelegate(ResponseDelegate);

		HttpRequester->EnqueueHttpRequest(RequestData);
	}
}

}
