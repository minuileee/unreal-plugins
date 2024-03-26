// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "RankConfig.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_RankConfig

void FRHAPI_RankConfig::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("rank_id"));
	RallyHereAPI::WriteJsonValue(Writer, RankId);
	Writer->WriteIdentifierPrefix(TEXT("default_rank"));
	RallyHereAPI::WriteJsonValue(Writer, DefaultRank);
	Writer->WriteIdentifierPrefix(TEXT("default_variance"));
	RallyHereAPI::WriteJsonValue(Writer, DefaultVariance);
	Writer->WriteIdentifierPrefix(TEXT("max_rank_allowed"));
	RallyHereAPI::WriteJsonValue(Writer, MaxRankAllowed);
	Writer->WriteIdentifierPrefix(TEXT("min_rank_allowed"));
	RallyHereAPI::WriteJsonValue(Writer, MinRankAllowed);
	Writer->WriteIdentifierPrefix(TEXT("min_variance_allowed"));
	RallyHereAPI::WriteJsonValue(Writer, MinVarianceAllowed);
	if (TrueskillBeta_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("trueskill_beta"));
		RallyHereAPI::WriteJsonValue(Writer, TrueskillBeta_Optional);
	}
	if (TrueskillTau_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("trueskill_tau"));
		RallyHereAPI::WriteJsonValue(Writer, TrueskillTau_Optional);
	}
	if (TrueskillDrawProbability_IsSet)
	{
		Writer->WriteIdentifierPrefix(TEXT("trueskill_draw_probability"));
		RallyHereAPI::WriteJsonValue(Writer, TrueskillDrawProbability_Optional);
	}
	Writer->WriteObjectEnd();
}

bool FRHAPI_RankConfig::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	const TSharedPtr<FJsonValue> JsonRankIdField = (*Object)->TryGetField(TEXT("rank_id"));
	ParseSuccess &= JsonRankIdField.IsValid() && !JsonRankIdField->IsNull() && TryGetJsonValue(JsonRankIdField, RankId);
	const TSharedPtr<FJsonValue> JsonDefaultRankField = (*Object)->TryGetField(TEXT("default_rank"));
	ParseSuccess &= JsonDefaultRankField.IsValid() && !JsonDefaultRankField->IsNull() && TryGetJsonValue(JsonDefaultRankField, DefaultRank);
	const TSharedPtr<FJsonValue> JsonDefaultVarianceField = (*Object)->TryGetField(TEXT("default_variance"));
	ParseSuccess &= JsonDefaultVarianceField.IsValid() && !JsonDefaultVarianceField->IsNull() && TryGetJsonValue(JsonDefaultVarianceField, DefaultVariance);
	const TSharedPtr<FJsonValue> JsonMaxRankAllowedField = (*Object)->TryGetField(TEXT("max_rank_allowed"));
	ParseSuccess &= JsonMaxRankAllowedField.IsValid() && !JsonMaxRankAllowedField->IsNull() && TryGetJsonValue(JsonMaxRankAllowedField, MaxRankAllowed);
	const TSharedPtr<FJsonValue> JsonMinRankAllowedField = (*Object)->TryGetField(TEXT("min_rank_allowed"));
	ParseSuccess &= JsonMinRankAllowedField.IsValid() && !JsonMinRankAllowedField->IsNull() && TryGetJsonValue(JsonMinRankAllowedField, MinRankAllowed);
	const TSharedPtr<FJsonValue> JsonMinVarianceAllowedField = (*Object)->TryGetField(TEXT("min_variance_allowed"));
	ParseSuccess &= JsonMinVarianceAllowedField.IsValid() && !JsonMinVarianceAllowedField->IsNull() && TryGetJsonValue(JsonMinVarianceAllowedField, MinVarianceAllowed);
	const TSharedPtr<FJsonValue> JsonTrueskillBetaField = (*Object)->TryGetField(TEXT("trueskill_beta"));
	if (JsonTrueskillBetaField.IsValid() && !JsonTrueskillBetaField->IsNull())
	{
		TrueskillBeta_IsSet = TryGetJsonValue(JsonTrueskillBetaField, TrueskillBeta_Optional);
		ParseSuccess &= TrueskillBeta_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonTrueskillTauField = (*Object)->TryGetField(TEXT("trueskill_tau"));
	if (JsonTrueskillTauField.IsValid() && !JsonTrueskillTauField->IsNull())
	{
		TrueskillTau_IsSet = TryGetJsonValue(JsonTrueskillTauField, TrueskillTau_Optional);
		ParseSuccess &= TrueskillTau_IsSet;
	}
	const TSharedPtr<FJsonValue> JsonTrueskillDrawProbabilityField = (*Object)->TryGetField(TEXT("trueskill_draw_probability"));
	if (JsonTrueskillDrawProbabilityField.IsValid() && !JsonTrueskillDrawProbabilityField->IsNull())
	{
		TrueskillDrawProbability_IsSet = TryGetJsonValue(JsonTrueskillDrawProbabilityField, TrueskillDrawProbability_Optional);
		ParseSuccess &= TrueskillDrawProbability_IsSet;
	}

	return ParseSuccess;
}

