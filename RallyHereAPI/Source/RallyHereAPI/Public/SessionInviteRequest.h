// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "TeamOverflowAction.h"
#include "SessionInviteRequest.generated.h"

/** @defgroup RHAPI_SessionInviteRequest RallyHere API Model SessionInviteRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_SessionInviteRequest : public FRHAPI_Model
{
	GENERATED_BODY()

	/**
	* @brief Fills this object with data from the passed in JSON
	*
	* @param [in] JsonValue Data from the API call.
	*
	* @return true if parsing of the JSON data was successful.
	*/
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;

	/**
	* @brief Writes the data from this object into the specified JSON Writer stream
	*
	* @param [in] Writer JSON Writer stream to push .
	*/
	void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

	/** @brief Which team the players in the source session should be on */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	int32 TeamId_Optional{  };
	/** @brief true if TeamId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool TeamId_IsSet{ false };
	/** @brief Gets the value of TeamId_Optional, regardless of it having been set */
	int32& GetTeamId() { return TeamId_Optional; }
	/** @brief Gets the value of TeamId_Optional, regardless of it having been set */
	const int32& GetTeamId() const { return TeamId_Optional; }
	/** @brief Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue */
	const int32& GetTeamId(const int32& DefaultValue) const { if (TeamId_IsSet) return TeamId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false */
	bool GetTeamId(int32& OutValue) const { if (TeamId_IsSet) OutValue = TeamId_Optional; return TeamId_IsSet; }
	/** @brief Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr */
	int32* GetTeamIdOrNull() { if (TeamId_IsSet) return &TeamId_Optional; return nullptr; }
	/** @brief Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr */
	const int32* GetTeamIdOrNull() const { if (TeamId_IsSet) return &TeamId_Optional; return nullptr; }
	/** @brief Sets the value of TeamId_Optional and also sets TeamId_IsSet to true */
	void SetTeamId(const int32& NewValue) { TeamId_Optional = NewValue; TeamId_IsSet = true; }
	/** @brief Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics */
	void SetTeamId(int32&& NewValue) { TeamId_Optional = NewValue; TeamId_IsSet = true; }
	 /** @brief Clears the value of TeamId_Optional and sets TeamId_IsSet to false */
	void ClearTeamId() { TeamId_Optional = 0; TeamId_IsSet = false; }
	/** @brief Returns true if TeamId_Optional is set and matches the default value */
	bool IsTeamIdDefaultValue() const { return TeamId_IsSet && TeamId_Optional == 0; }
	/** @brief Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true */
	void SetTeamIdToDefault() { TeamId_Optional = 0; TeamId_IsSet = true; }

	/** @brief How we should handle too many players being invited to the chosen team */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_TeamOverflowAction OverflowAction_Optional{  };
	/** @brief true if OverflowAction_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool OverflowAction_IsSet{ false };
	/** @brief Gets the value of OverflowAction_Optional, regardless of it having been set */
	ERHAPI_TeamOverflowAction& GetOverflowAction() { return OverflowAction_Optional; }
	/** @brief Gets the value of OverflowAction_Optional, regardless of it having been set */
	const ERHAPI_TeamOverflowAction& GetOverflowAction() const { return OverflowAction_Optional; }
	/** @brief Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue */
	const ERHAPI_TeamOverflowAction& GetOverflowAction(const ERHAPI_TeamOverflowAction& DefaultValue) const { if (OverflowAction_IsSet) return OverflowAction_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false */
	bool GetOverflowAction(ERHAPI_TeamOverflowAction& OutValue) const { if (OverflowAction_IsSet) OutValue = OverflowAction_Optional; return OverflowAction_IsSet; }
	/** @brief Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr */
	ERHAPI_TeamOverflowAction* GetOverflowActionOrNull() { if (OverflowAction_IsSet) return &OverflowAction_Optional; return nullptr; }
	/** @brief Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr */
	const ERHAPI_TeamOverflowAction* GetOverflowActionOrNull() const { if (OverflowAction_IsSet) return &OverflowAction_Optional; return nullptr; }
	/** @brief Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true */
	void SetOverflowAction(const ERHAPI_TeamOverflowAction& NewValue) { OverflowAction_Optional = NewValue; OverflowAction_IsSet = true; }
	/** @brief Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true using move semantics */
	void SetOverflowAction(ERHAPI_TeamOverflowAction&& NewValue) { OverflowAction_Optional = NewValue; OverflowAction_IsSet = true; }
	 /** @brief Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false */
	void ClearOverflowAction() { OverflowAction_IsSet = false; }

	/** @brief Custom data for all players being invited */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	TMap<FString, FString> CustomData_Optional{  };
	/** @brief true if CustomData_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool CustomData_IsSet{ false };
	/** @brief Gets the value of CustomData_Optional, regardless of it having been set */
	TMap<FString, FString>& GetCustomData() { return CustomData_Optional; }
	/** @brief Gets the value of CustomData_Optional, regardless of it having been set */
	const TMap<FString, FString>& GetCustomData() const { return CustomData_Optional; }
	/** @brief Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue */
	const TMap<FString, FString>& GetCustomData(const TMap<FString, FString>& DefaultValue) const { if (CustomData_IsSet) return CustomData_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false */
	bool GetCustomData(TMap<FString, FString>& OutValue) const { if (CustomData_IsSet) OutValue = CustomData_Optional; return CustomData_IsSet; }
	/** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
	TMap<FString, FString>* GetCustomDataOrNull() { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
	/** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
	const TMap<FString, FString>* GetCustomDataOrNull() const { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
	/** @brief Sets the value of CustomData_Optional and also sets CustomData_IsSet to true */
	void SetCustomData(const TMap<FString, FString>& NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true; }
	/** @brief Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics */
	void SetCustomData(TMap<FString, FString>&& NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true; }
	 /** @brief Clears the value of CustomData_Optional and sets CustomData_IsSet to false */
	void ClearCustomData() { CustomData_IsSet = false; }
};

/** @} */
