// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "RallyHereDeveloperAPIHttpRequester.h"
#include "RallyHereDeveloperAPIAuthContext.h"
#include "RallyHereDeveloperAPIModule.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "HttpModule.h"

namespace RallyHereDeveloperAPI
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

FResponse::FResponse(FRequestMetadata InRequestMetadata) :
    Successful{},
    ResponseCode{ EHttpResponseCodes::Type::Unknown },
    ResponseString{ TEXT("Unset") },
    HttpResponse{},
    RequestMetadata{ MoveTemp(InRequestMetadata) }
{
}

void FResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    ResponseCode = InHttpResponseCode;
    SetSuccessful(EHttpResponseCodes::IsOk(InHttpResponseCode));
    if(InHttpResponseCode == EHttpResponseCodes::RequestTimeout)
    {
        SetResponseString(TEXT("Request Timeout"));
    }
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
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("Endpoint Url is not set, request cannot be performed"));
        return false;
    }

    return true;
}

void FAPI::SetHttpRetryManager(FHttpRetrySystem::FManager& InRetryManager)
{
    if(&InRetryManager != RetryManager)
    {
        DefaultRetryManager.Reset();
        RetryManager = &InRetryManager;
    }
}

FHttpRetrySystem::FManager& FAPI::GetHttpRetryManager()
{
    checkf(RetryManager, TEXT("LogRallyHereDeveloperAPI: RetryManager is null.  You may have meant to set it with SetHttpRetryManager first, or you may not be using a custom RetryManager at all."))
    return *RetryManager;
}

FHttpRequestRef FAPI::CreateHttpRequest(const FRequest& Request) const
{
	auto HttpRequest = FHttpModule::Get().CreateRequest();
    if (Request.GetRetryParams().IsSet())
    {
        if (!RetryManager)
        {
            // Create default retry manager if none was specified
            DefaultRetryManager = MakeUnique<FHttpRetryManager>(6, 60);
            RetryManager = DefaultRetryManager.Get();
        }

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

        if (!InOutResponse.ParseHeaders())
        {
            // Report the parse error but do not mark the request as unsuccessful. Data could be partial or malformed, but the request succeeded.
            UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("Failed to parse Http response headers"));
            return false;
        }

        FString ContentType = HttpResponse->GetContentType();
        ContentType.TrimStartAndEndInline();
        FString Content;

        if (ContentType.IsEmpty())
        {
            return false; // Nothing to parse
        }
        else if (ContentType.StartsWith(TEXT("application/json")) || ContentType.StartsWith("text/json"))
        {
            Content = HttpResponse->GetContentAsString();

            TSharedPtr<FJsonValue> JsonValue;
            auto Reader = TJsonReaderFactory<>::Create(Content);

            if (!FJsonSerializer::Deserialize(Reader, JsonValue))
            {
                if (Reader->GetErrorMessage().StartsWith(TEXT("Open Curly or Square Brace token expected, but not found")))
                {
                    FString ContentArrayWrapper = TEXT("[") + Content + TEXT("]");
                    Reader = TJsonReaderFactory<>::Create(ContentArrayWrapper);
                    if (FJsonSerializer::Deserialize(Reader, JsonValue) && JsonValue.IsValid())
                    {
#if !(ENGINE_MAJOR_VERSION < (5) || (ENGINE_MAJOR_VERSION == (5) && ENGINE_MINOR_VERSION < (0)))
                        TArray<TSharedPtr<FJsonValue>>* OutArray;
                        if (JsonValue->TryGetArray(OutArray) && OutArray != nullptr && OutArray->Num() > 0)
                        {
                            JsonValue = (*OutArray).Last();
                        }
#else
                        auto OutArray = JsonValue->AsArray();
                        if (OutArray.Num() > 0)
                        {
                            JsonValue = OutArray.Last();
                        }
#endif
                    }
                }
            }

            if (JsonValue.IsValid())
            {
                InOutResponse.SetJsonResponse(JsonValue);

                if (AuthContext)
                {
                    TOptional<bool> bAuthIsValid;
                    const TSharedPtr<FJsonObject>* JsonObject;
                    switch (HttpResponse->GetResponseCode())
                    {
                    case 403: // XDK clients screwed this one up for us
                    case 401:
                        if (JsonValue->TryGetObject(JsonObject) && JsonObject && JsonObject->IsValid() && TryGetJsonValue(*JsonObject, FString(TEXT("auth_success")), bAuthIsValid) && bAuthIsValid.IsSet() && !bAuthIsValid.GetValue())
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
                        }
                        break;
                    }
                }
                if (InOutResponse.FromJson(JsonValue))
                {
                    return false; // Successfully parsed
                }
                else
                {
                    // Report the parse error but do not mark the request as unsuccessful. Data could be partial or malformed, but the request succeeded.
                    UE_LOG(LogRallyHereDeveloperAPI, Warning, TEXT("Parsed JSON successfully, but failed to ingest into API structures (note: failure may be partial) (type:%s):\n%s"), *ContentType, *Content);
                    return false;
                }
            }
            else
            {
                // Report the parse error but do not mark the request as unsuccessful. Data could be partial or malformed, but the request succeeded.
                UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("Failed to deserialize JSON content in Http response (type:%s):\n%s"), *ContentType, *Content);
                return false;
            }
        }
        else if(ContentType.StartsWith(TEXT("text/plain")))
        {
            Content = HttpResponse->GetContentAsString();
            InOutResponse.SetResponseString(Content);
            return false; // Successfully parsed
        }

        // Report the parse error but do not mark the request as unsuccessful. Data could be partial or malformed, but the request succeeded.
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("Failed to deserialize Http response content (type:%s):\n%s"), *ContentType, *Content);
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

    if (auto* HttpRequester = FRallyHereDeveloperAPIHttpRequester::Get())
    {
        TSharedPtr<FRallyHereDeveloperAPIHttpRequestData> RequestData = MakeShared<FRallyHereDeveloperAPIHttpRequestData>(Request->HttpRequest.ToSharedRef(), *this, Priority);
        RequestMetadata.RetryCount++;
        RequestData->SetMetadata(RequestMetadata);
        RequestData->SetDelegate(ResponseDelegate);

        HttpRequester->EnqueueHttpRequest(RequestData);
    }
}

}