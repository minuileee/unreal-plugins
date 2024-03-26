// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "InstanceJoinableStatus.h"
#include "JoinParams.h"
#include "InstanceInfoUpdate.generated.h"

/** @defgroup RHAPI_InstanceInfoUpdate RallyHere API Model InstanceInfoUpdate
 *  @{
 */

/**
 * @brief A request body to update the instance resource in a session
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_InstanceInfoUpdate : public FRHAPI_Model
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

	/** @brief Allocation ID for instance that's been spun up */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString AllocationId_Optional{  };
	/** @brief true if AllocationId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool AllocationId_IsSet{ false };
	/** @brief Gets the value of AllocationId_Optional, regardless of it having been set */
	FString& GetAllocationId() { return AllocationId_Optional; }
	/** @brief Gets the value of AllocationId_Optional, regardless of it having been set */
	const FString& GetAllocationId() const { return AllocationId_Optional; }
	/** @brief Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetAllocationId(const FString& DefaultValue) const { if (AllocationId_IsSet) return AllocationId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false */
	bool GetAllocationId(FString& OutValue) const { if (AllocationId_IsSet) OutValue = AllocationId_Optional; return AllocationId_IsSet; }
	/** @brief Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr */
	FString* GetAllocationIdOrNull() { if (AllocationId_IsSet) return &AllocationId_Optional; return nullptr; }
	/** @brief Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetAllocationIdOrNull() const { if (AllocationId_IsSet) return &AllocationId_Optional; return nullptr; }
	/** @brief Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true */
	void SetAllocationId(FString NewValue) { AllocationId_Optional = NewValue; AllocationId_IsSet = true; }
	 /** @brief Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false */
	void ClearAllocationId() { AllocationId_IsSet = false; }

	/** @brief Is the instance joinable at this time? */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_InstanceJoinableStatus JoinStatus_Optional{  };
	/** @brief true if JoinStatus_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool JoinStatus_IsSet{ false };
	/** @brief Gets the value of JoinStatus_Optional, regardless of it having been set */
	ERHAPI_InstanceJoinableStatus& GetJoinStatus() { return JoinStatus_Optional; }
	/** @brief Gets the value of JoinStatus_Optional, regardless of it having been set */
	const ERHAPI_InstanceJoinableStatus& GetJoinStatus() const { return JoinStatus_Optional; }
	/** @brief Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue */
	const ERHAPI_InstanceJoinableStatus& GetJoinStatus(const ERHAPI_InstanceJoinableStatus& DefaultValue) const { if (JoinStatus_IsSet) return JoinStatus_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false */
	bool GetJoinStatus(ERHAPI_InstanceJoinableStatus& OutValue) const { if (JoinStatus_IsSet) OutValue = JoinStatus_Optional; return JoinStatus_IsSet; }
	/** @brief Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr */
	ERHAPI_InstanceJoinableStatus* GetJoinStatusOrNull() { if (JoinStatus_IsSet) return &JoinStatus_Optional; return nullptr; }
	/** @brief Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr */
	const ERHAPI_InstanceJoinableStatus* GetJoinStatusOrNull() const { if (JoinStatus_IsSet) return &JoinStatus_Optional; return nullptr; }
	/** @brief Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true */
	void SetJoinStatus(ERHAPI_InstanceJoinableStatus NewValue) { JoinStatus_Optional = NewValue; JoinStatus_IsSet = true; }
	 /** @brief Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false */
	void ClearJoinStatus() { JoinStatus_IsSet = false; }

	/** @brief Parameters to join the instance */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_JoinParams JoinParams_Optional{  };
	/** @brief true if JoinParams_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool JoinParams_IsSet{ false };
	/** @brief Gets the value of JoinParams_Optional, regardless of it having been set */
	FRHAPI_JoinParams& GetJoinParams() { return JoinParams_Optional; }
	/** @brief Gets the value of JoinParams_Optional, regardless of it having been set */
	const FRHAPI_JoinParams& GetJoinParams() const { return JoinParams_Optional; }
	/** @brief Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue */
	const FRHAPI_JoinParams& GetJoinParams(const FRHAPI_JoinParams& DefaultValue) const { if (JoinParams_IsSet) return JoinParams_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false */
	bool GetJoinParams(FRHAPI_JoinParams& OutValue) const { if (JoinParams_IsSet) OutValue = JoinParams_Optional; return JoinParams_IsSet; }
	/** @brief Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr */
	FRHAPI_JoinParams* GetJoinParamsOrNull() { if (JoinParams_IsSet) return &JoinParams_Optional; return nullptr; }
	/** @brief Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr */
	const FRHAPI_JoinParams* GetJoinParamsOrNull() const { if (JoinParams_IsSet) return &JoinParams_Optional; return nullptr; }
	/** @brief Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true */
	void SetJoinParams(FRHAPI_JoinParams NewValue) { JoinParams_Optional = NewValue; JoinParams_IsSet = true; }
	 /** @brief Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false */
	void ClearJoinParams() { JoinParams_IsSet = false; }

	/** @brief Product Client Version number.  Used for compatibility checking with players.  Must be compatible with all players to spawn */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString Version_Optional{  };
	/** @brief true if Version_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool Version_IsSet{ false };
	/** @brief Gets the value of Version_Optional, regardless of it having been set */
	FString& GetVersion() { return Version_Optional; }
	/** @brief Gets the value of Version_Optional, regardless of it having been set */
	const FString& GetVersion() const { return Version_Optional; }
	/** @brief Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetVersion(const FString& DefaultValue) const { if (Version_IsSet) return Version_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false */
	bool GetVersion(FString& OutValue) const { if (Version_IsSet) OutValue = Version_Optional; return Version_IsSet; }
	/** @brief Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr */
	FString* GetVersionOrNull() { if (Version_IsSet) return &Version_Optional; return nullptr; }
	/** @brief Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetVersionOrNull() const { if (Version_IsSet) return &Version_Optional; return nullptr; }
	/** @brief Sets the value of Version_Optional and also sets Version_IsSet to true */
	void SetVersion(FString NewValue) { Version_Optional = NewValue; Version_IsSet = true; }
	 /** @brief Clears the value of Version_Optional and sets Version_IsSet to false */
	void ClearVersion() { Version_IsSet = false; }

	/** @brief instance-defined custom data */
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
	void SetCustomData(TMap<FString, FString> NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true; }
	 /** @brief Clears the value of CustomData_Optional and sets CustomData_IsSet to false */
	void ClearCustomData() { CustomData_IsSet = false; }
};

/** @} */
