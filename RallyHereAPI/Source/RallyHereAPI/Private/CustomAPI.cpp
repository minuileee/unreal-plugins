// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "CustomAPI.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIHttpRequester.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereAPI
{

FCustomAPI::FCustomAPI() : FAPI()
{
    Url = TEXT("http://localhost");
    Name = FName(TEXT("Custom"));
}

FCustomAPI::~FCustomAPI() {}

FHttpRequestPtr FCustomAPI::CustomEndpointSend(const FRequest_CustomEndpointSend& Request, const FDelegate_CustomEndpointSend& Delegate /*= FDelegate_CustomEndpointSend()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
{
    if (!IsValid())
        return nullptr;

    TSharedPtr<FRallyHereAPIHttpRequestData> RequestData = MakeShared<FRallyHereAPIHttpRequestData>(CreateHttpRequest(Request), *this, Priority);
    RequestData->HttpRequest->SetURL(*(Url + Request.ComputePath()));

    for(const auto& It : AdditionalHeaderParams)
    {
        RequestData->HttpRequest->SetHeader(It.Key, It.Value);
    }

    if (!Request.SetupHttpRequest(RequestData->HttpRequest))
    {
        return nullptr;
    }

    RequestData->SetMetadata(Request.GetRequestMetadata());

    FHttpRequestCompleteDelegate ResponseDelegate;
    ResponseDelegate.BindRaw(this, &FCustomAPI::OnCustomEndpointSendResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FCustomAPI::OnCustomEndpointSendResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_CustomEndpointSend Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FCustomAPI::OnCustomEndpointSendResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_CustomEndpointSend Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response, ResponseDelegate, RequestMetadata, Priority);

    {
        SCOPED_NAMED_EVENT(RallyHere_BroadcastRequestCompleted, FColor::Purple);
        OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    }

    if (!bWillRetryWithRefreshedAuth)
    {
        SCOPED_NAMED_EVENT(RallyHere_ExecuteDelegate, FColor::Purple);
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_CustomEndpointSend::FRequest_CustomEndpointSend()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_CustomEndpointSend::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/custom/v1/custom/{endpoint_id}"));
    return Path;
}

FString FRequest_CustomEndpointSend::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("endpoint_id"), ToStringFormatArg(EndpointId) }
    };

    FString Path = FString::Format(TEXT("/custom/v1/custom/{endpoint_id}"), PathParams);

    return Path;
}

bool FRequest_CustomEndpointSend::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = { TEXT("application/json") };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("POST"));

    // Header parameters
    if (ContentType.IsSet())
    {
        HttpRequest->SetHeader(TEXT("content-type"), ContentType.GetValue());
    }

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_CustomEndpointSend - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_CustomEndpointSend - failed to add bearer token"));
        return false;
    }

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
        // Body parameters
        FString JsonBody;
        TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

        if (Body.IsSet())
        {
            WriteJsonValue(Writer, Body.GetValue());
        }
        Writer->Close();

        HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
        HttpRequest->SetContentAsString(JsonBody);
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_CustomEndpointSend - Body parameter (body) was ignored, not supported in multipart form"));
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_CustomEndpointSend - Body parameter (body) was ignored, not supported in urlencoded requests"));
    }
    else
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_CustomEndpointSend - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_CustomEndpointSend::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 403:
        SetResponseString(TEXT("Forbidden"));
        break;
    case 404:
        SetResponseString(TEXT("Not Found"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_CustomEndpointSend::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_CustomEndpointSend::FResponse_CustomEndpointSend(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_CustomEndpointSend::Name = TEXT("CustomEndpointSend");


}