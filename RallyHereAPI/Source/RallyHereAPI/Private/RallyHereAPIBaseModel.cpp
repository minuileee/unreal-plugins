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

bool FResponse::ParseContent()
{
	FString ContentType = HttpResponse->GetContentType();
	ContentType.TrimStartAndEndInline();

	if (ContentType.IsEmpty())
	{
		return ParseTypelessContent();
	}
	else if (ContentType.StartsWith(TEXT("application/json")) || ContentType.StartsWith("text/json"))
	{
		return ParseJsonTypeContent();
	}
	else if (ContentType.StartsWith(TEXT("text/")))
	{
		return ParseStringTypeContent();
	}
	else if (ContentType.StartsWith(TEXT("application/octet-stream")))
	{
		return ParseBinaryTypeContent();
	}
	else
	{
		UE_LOG(LogRallyHereAPI, Warning, TEXT("Failed to recognize http response type: %s"), *ContentType);
		return ParseUnknownTypeContent();
	}
}

bool FResponse::ParseTypelessContent()
{
	check(HttpResponse != nullptr);

	ClearPayload();

	return true; // Successfully parsed
}

bool FResponse::ParseStringTypeContent()
{
	check(HttpResponse != nullptr);

	SetPayload<StringPayloadType>(HttpResponse->GetContentAsString());
	return true; // Successfully parsed
}

bool FResponse::ParseJsonTypeContent()
{
	check(HttpResponse != nullptr);

	ClearPayload();

	TSharedPtr<FJsonValue> JsonValue;
	const FString ContentAsString = HttpResponse->GetContentAsString();

	if (ContentAsString.Len() == 0 || ContentAsString.TrimStart().Len() == 0)
	{
		// if the response was empty or all whitespace, do not create a json object, but return as non-error
		return true;
	}

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

		if (EHttpResponseCodes::IsOk(ResponseCode))
		{
			// for successfull responses, attempt to parse the json into local structures
			if (FromJson(JsonValue))
			{
				// Successfully parsed default value
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
			// for error responses, do not parse into local structures, but we did parse the json successfully, so return success
			UE_LOG(LogRallyHereAPI, Warning, TEXT("Parsed JSON successfully, but failed to ingest into API Error structures:\n%s"), *ContentAsString);
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

bool FResponse::ParseBinaryTypeContent()
{
	check(HttpResponse != nullptr);

	SetPayload<BinaryPayloadType>(MakeArrayView(HttpResponse->GetContent()));
	return true; // Successfully parsed
}

bool FResponse::ParseUnknownTypeContent()
{
	check(HttpResponse != nullptr);

	// load the response content as binary data, since we do not have a better way to parse it
	SetPayload<BinaryPayloadType>(MakeArrayView(HttpResponse->GetContent()));

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
		
		InOutResponse.ParseResponse(bParsedHeaders, bParsedContent);

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
		
		// attempt reauth for certain error codes if an auth context was provided
		if (AuthContext.IsValid())
		{
			if (InOutResponse.GetHttpResponseCode() == EHttpResponseCodes::Denied 
				|| InOutResponse.GetHttpResponseCode() == EHttpResponseCodes::Forbidden) // some consoles forcibly retry 401 errors with a modified body, which can generate 403 errors, so check those for an auth success flag
			{
				auto Retry = MakeShared<FRequestPendingAuthRetry>();
				Retry->HttpRequest = HttpRequest;
				Retry->AuthContext = AuthContext;
				
				// set a callback handle
				Retry->Handle = AuthContext->OnLoginComplete().AddSP(this, &FAPI::RetryRequestAfterAuth, Retry, ResponseDelegate, RequestMetadata, Priority);

				if (AuthContext->ConditionalRefreshOnFailedResponse(InOutResponse))
				{
					return true; // Don't submit the response for this request, we are going to retry it.
				}
				
				// failed to conditionally refresh, so remove the handle, and return completion
				AuthContext->OnLoginComplete().Remove(Retry->Handle);
				return false;
			}
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
		TSharedPtr<FRallyHereAPIHttpRequestData> RequestData = MakeShared<FRallyHereAPIHttpRequestData>(Request->HttpRequest.ToSharedRef(), AsShared(), Priority);
		RequestMetadata.RetryCount++;
		RequestData->SetMetadata(RequestMetadata);
		RequestData->SetDelegate(ResponseDelegate);

		HttpRequester->EnqueueHttpRequest(RequestData);
	}
}

}
