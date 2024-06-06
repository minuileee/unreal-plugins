// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevRankRequest.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevRankRequest

void FRHAPI_DevRankRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("name"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Name);
    Writer->WriteIdentifierPrefix(TEXT("rank_max"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, RankMax);
    Writer->WriteIdentifierPrefix(TEXT("rank_min"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, RankMin);
    if (TrueskillSigmaMin_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("trueskill_sigma_min"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, TrueskillSigmaMin_Optional);
    }
    if (TrueskillBeta_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("trueskill_beta"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, TrueskillBeta_Optional);
    }
    if (TrueskillDefaultMu_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("trueskill_default_mu"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, TrueskillDefaultMu_Optional);
    }
    if (TrueskillDefaultSigma_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("trueskill_default_sigma"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, TrueskillDefaultSigma_Optional);
    }
    if (TrueskillDrawProbability_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("trueskill_draw_probability"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, TrueskillDrawProbability_Optional);
    }
    if (TrueskillTau_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("trueskill_tau"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, TrueskillTau_Optional);
    }
    if (LegacyConfig_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("legacy_config"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LegacyConfig_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevRankRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonNameField = (*Object)->TryGetField(TEXT("name"));
    ParseSuccess &= JsonNameField.IsValid() && !JsonNameField->IsNull() && TryGetJsonValue(JsonNameField, Name);
    const TSharedPtr<FJsonValue> JsonRankMaxField = (*Object)->TryGetField(TEXT("rank_max"));
    ParseSuccess &= JsonRankMaxField.IsValid() && !JsonRankMaxField->IsNull() && TryGetJsonValue(JsonRankMaxField, RankMax);
    const TSharedPtr<FJsonValue> JsonRankMinField = (*Object)->TryGetField(TEXT("rank_min"));
    ParseSuccess &= JsonRankMinField.IsValid() && !JsonRankMinField->IsNull() && TryGetJsonValue(JsonRankMinField, RankMin);
    const TSharedPtr<FJsonValue> JsonTrueskillSigmaMinField = (*Object)->TryGetField(TEXT("trueskill_sigma_min"));
    if (JsonTrueskillSigmaMinField.IsValid() && !JsonTrueskillSigmaMinField->IsNull())
    {
        TrueskillSigmaMin_IsSet = TryGetJsonValue(JsonTrueskillSigmaMinField, TrueskillSigmaMin_Optional);
        ParseSuccess &= TrueskillSigmaMin_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonTrueskillBetaField = (*Object)->TryGetField(TEXT("trueskill_beta"));
    if (JsonTrueskillBetaField.IsValid() && !JsonTrueskillBetaField->IsNull())
    {
        TrueskillBeta_IsSet = TryGetJsonValue(JsonTrueskillBetaField, TrueskillBeta_Optional);
        ParseSuccess &= TrueskillBeta_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonTrueskillDefaultMuField = (*Object)->TryGetField(TEXT("trueskill_default_mu"));
    if (JsonTrueskillDefaultMuField.IsValid() && !JsonTrueskillDefaultMuField->IsNull())
    {
        TrueskillDefaultMu_IsSet = TryGetJsonValue(JsonTrueskillDefaultMuField, TrueskillDefaultMu_Optional);
        ParseSuccess &= TrueskillDefaultMu_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonTrueskillDefaultSigmaField = (*Object)->TryGetField(TEXT("trueskill_default_sigma"));
    if (JsonTrueskillDefaultSigmaField.IsValid() && !JsonTrueskillDefaultSigmaField->IsNull())
    {
        TrueskillDefaultSigma_IsSet = TryGetJsonValue(JsonTrueskillDefaultSigmaField, TrueskillDefaultSigma_Optional);
        ParseSuccess &= TrueskillDefaultSigma_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonTrueskillDrawProbabilityField = (*Object)->TryGetField(TEXT("trueskill_draw_probability"));
    if (JsonTrueskillDrawProbabilityField.IsValid() && !JsonTrueskillDrawProbabilityField->IsNull())
    {
        TrueskillDrawProbability_IsSet = TryGetJsonValue(JsonTrueskillDrawProbabilityField, TrueskillDrawProbability_Optional);
        ParseSuccess &= TrueskillDrawProbability_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonTrueskillTauField = (*Object)->TryGetField(TEXT("trueskill_tau"));
    if (JsonTrueskillTauField.IsValid() && !JsonTrueskillTauField->IsNull())
    {
        TrueskillTau_IsSet = TryGetJsonValue(JsonTrueskillTauField, TrueskillTau_Optional);
        ParseSuccess &= TrueskillTau_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLegacyConfigField = (*Object)->TryGetField(TEXT("legacy_config"));
    if (JsonLegacyConfigField.IsValid() && !JsonLegacyConfigField->IsNull())
    {
        LegacyConfig_IsSet = TryGetJsonValue(JsonLegacyConfigField, LegacyConfig_Optional);
        ParseSuccess &= LegacyConfig_IsSet;
    }

    return ParseSuccess;
}
