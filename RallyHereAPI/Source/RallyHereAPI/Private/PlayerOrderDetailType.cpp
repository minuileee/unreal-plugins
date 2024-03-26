// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlayerOrderDetailType.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_PlayerOrderDetailType
FString EnumToString(const ERHAPI_PlayerOrderDetailType& Value)
{
	switch (Value)
	{
	case ERHAPI_PlayerOrderDetailType::Unknown:
		return TEXT("unknown");
	case ERHAPI_PlayerOrderDetailType::InventoryChange:
		return TEXT("inventory_change");
	case ERHAPI_PlayerOrderDetailType::DynamicBundleLti:
		return TEXT("dynamic_bundle_lti");
	case ERHAPI_PlayerOrderDetailType::ClaimPromoCode:
		return TEXT("claim_promo_code");
	case ERHAPI_PlayerOrderDetailType::ReturnPromoCode:
		return TEXT("return_promo_code");
	case ERHAPI_PlayerOrderDetailType::NewOrder:
		return TEXT("new_order");
	}

	UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_PlayerOrderDetailType::Values Value (%d)"), (int)Value);
	return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_PlayerOrderDetailType& Value)
{
	static TMap<FString, ERHAPI_PlayerOrderDetailType> StringToEnum = { 
		{ TEXT("unknown"), ERHAPI_PlayerOrderDetailType::Unknown },
		{ TEXT("inventory_change"), ERHAPI_PlayerOrderDetailType::InventoryChange },
		{ TEXT("dynamic_bundle_lti"), ERHAPI_PlayerOrderDetailType::DynamicBundleLti },
		{ TEXT("claim_promo_code"), ERHAPI_PlayerOrderDetailType::ClaimPromoCode },
		{ TEXT("return_promo_code"), ERHAPI_PlayerOrderDetailType::ReturnPromoCode },
		{ TEXT("new_order"), ERHAPI_PlayerOrderDetailType::NewOrder },	};

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;
	return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_PlayerOrderDetailType& Value)
{
	return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_PlayerOrderDetailType& Value)
{
	RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_PlayerOrderDetailType& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if (EnumFromString(TmpValue, Value))
			return true;
	}
	return false;
}


