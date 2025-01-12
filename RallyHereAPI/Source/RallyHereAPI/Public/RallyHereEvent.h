// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "RallyHereEvent.generated.h"

/** @defgroup RHAPI_RallyHereEvent RallyHere API Model RallyHereEvent
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_RallyHereEvent : public FRHAPI_Model
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

	/** @brief Unique Event ID for this instance of the event */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FGuid EventUuid{  };
	/** @brief Gets the value of EventUuid */
	FGuid& GetEventUuid() { return EventUuid; }
	/** @brief Gets the value of EventUuid */
	const FGuid& GetEventUuid() const { return EventUuid; }
	/** @brief Sets the value of EventUuid */
	void SetEventUuid(const FGuid& NewValue) { EventUuid = NewValue;  }
	/** @brief Sets the value of EventUuid using move semantics */
	void SetEventUuid(FGuid&& NewValue) { EventUuid = NewValue;  }

	/** @brief Type of event to process this as. */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString EventName{  };
	/** @brief Gets the value of EventName */
	FString& GetEventName() { return EventName; }
	/** @brief Gets the value of EventName */
	const FString& GetEventName() const { return EventName; }
	/** @brief Sets the value of EventName */
	void SetEventName(const FString& NewValue) { EventName = NewValue;  }
	/** @brief Sets the value of EventName using move semantics */
	void SetEventName(FString&& NewValue) { EventName = NewValue;  }

	/** @brief Time the event was triggered */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FDateTime EventTimestamp{  };
	/** @brief Gets the value of EventTimestamp */
	FDateTime& GetEventTimestamp() { return EventTimestamp; }
	/** @brief Gets the value of EventTimestamp */
	const FDateTime& GetEventTimestamp() const { return EventTimestamp; }
	/** @brief Sets the value of EventTimestamp */
	void SetEventTimestamp(const FDateTime& NewValue) { EventTimestamp = NewValue;  }
	/** @brief Sets the value of EventTimestamp using move semantics */
	void SetEventTimestamp(FDateTime&& NewValue) { EventTimestamp = NewValue;  }

	/** @brief Event specific parameters */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FRHAPI_JsonObject EventParams{  };
	/** @brief Gets the value of EventParams */
	FRHAPI_JsonObject& GetEventParams() { return EventParams; }
	/** @brief Gets the value of EventParams */
	const FRHAPI_JsonObject& GetEventParams() const { return EventParams; }
	/** @brief Sets the value of EventParams */
	void SetEventParams(const FRHAPI_JsonObject& NewValue) { EventParams = NewValue;  }
	/** @brief Sets the value of EventParams using move semantics */
	void SetEventParams(FRHAPI_JsonObject&& NewValue) { EventParams = NewValue;  }

	/** @brief Event custom data */
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

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString UserId_Optional{  };
	/** @brief true if UserId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool UserId_IsSet{ false };
	/** @brief Gets the value of UserId_Optional, regardless of it having been set */
	FString& GetUserId() { return UserId_Optional; }
	/** @brief Gets the value of UserId_Optional, regardless of it having been set */
	const FString& GetUserId() const { return UserId_Optional; }
	/** @brief Gets the value of UserId_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetUserId(const FString& DefaultValue) const { if (UserId_IsSet) return UserId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of UserId_Optional and returns true if it has been set, otherwise returns false */
	bool GetUserId(FString& OutValue) const { if (UserId_IsSet) OutValue = UserId_Optional; return UserId_IsSet; }
	/** @brief Returns a pointer to UserId_Optional, if it has been set, otherwise returns nullptr */
	FString* GetUserIdOrNull() { if (UserId_IsSet) return &UserId_Optional; return nullptr; }
	/** @brief Returns a pointer to UserId_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetUserIdOrNull() const { if (UserId_IsSet) return &UserId_Optional; return nullptr; }
	/** @brief Sets the value of UserId_Optional and also sets UserId_IsSet to true */
	void SetUserId(const FString& NewValue) { UserId_Optional = NewValue; UserId_IsSet = true; }
	/** @brief Sets the value of UserId_Optional and also sets UserId_IsSet to true using move semantics */
	void SetUserId(FString&& NewValue) { UserId_Optional = NewValue; UserId_IsSet = true; }
	 /** @brief Clears the value of UserId_Optional and sets UserId_IsSet to false */
	void ClearUserId() { UserId_IsSet = false; }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString SessionId_Optional{  };
	/** @brief true if SessionId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool SessionId_IsSet{ false };
	/** @brief Gets the value of SessionId_Optional, regardless of it having been set */
	FString& GetSessionId() { return SessionId_Optional; }
	/** @brief Gets the value of SessionId_Optional, regardless of it having been set */
	const FString& GetSessionId() const { return SessionId_Optional; }
	/** @brief Gets the value of SessionId_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetSessionId(const FString& DefaultValue) const { if (SessionId_IsSet) return SessionId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of SessionId_Optional and returns true if it has been set, otherwise returns false */
	bool GetSessionId(FString& OutValue) const { if (SessionId_IsSet) OutValue = SessionId_Optional; return SessionId_IsSet; }
	/** @brief Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr */
	FString* GetSessionIdOrNull() { if (SessionId_IsSet) return &SessionId_Optional; return nullptr; }
	/** @brief Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetSessionIdOrNull() const { if (SessionId_IsSet) return &SessionId_Optional; return nullptr; }
	/** @brief Sets the value of SessionId_Optional and also sets SessionId_IsSet to true */
	void SetSessionId(const FString& NewValue) { SessionId_Optional = NewValue; SessionId_IsSet = true; }
	/** @brief Sets the value of SessionId_Optional and also sets SessionId_IsSet to true using move semantics */
	void SetSessionId(FString&& NewValue) { SessionId_Optional = NewValue; SessionId_IsSet = true; }
	 /** @brief Clears the value of SessionId_Optional and sets SessionId_IsSet to false */
	void ClearSessionId() { SessionId_IsSet = false; }

	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	FString CorrelationId_Optional{  };
	/** @brief true if CorrelationId_Optional has been set to a value */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	bool CorrelationId_IsSet{ false };
	/** @brief Gets the value of CorrelationId_Optional, regardless of it having been set */
	FString& GetCorrelationId() { return CorrelationId_Optional; }
	/** @brief Gets the value of CorrelationId_Optional, regardless of it having been set */
	const FString& GetCorrelationId() const { return CorrelationId_Optional; }
	/** @brief Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue */
	const FString& GetCorrelationId(const FString& DefaultValue) const { if (CorrelationId_IsSet) return CorrelationId_Optional; return DefaultValue; }
	/** @brief Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false */
	bool GetCorrelationId(FString& OutValue) const { if (CorrelationId_IsSet) OutValue = CorrelationId_Optional; return CorrelationId_IsSet; }
	/** @brief Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr */
	FString* GetCorrelationIdOrNull() { if (CorrelationId_IsSet) return &CorrelationId_Optional; return nullptr; }
	/** @brief Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr */
	const FString* GetCorrelationIdOrNull() const { if (CorrelationId_IsSet) return &CorrelationId_Optional; return nullptr; }
	/** @brief Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true */
	void SetCorrelationId(const FString& NewValue) { CorrelationId_Optional = NewValue; CorrelationId_IsSet = true; }
	/** @brief Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics */
	void SetCorrelationId(FString&& NewValue) { CorrelationId_Optional = NewValue; CorrelationId_IsSet = true; }
	 /** @brief Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false */
	void ClearCorrelationId() { CorrelationId_IsSet = false; }
};

/** @} */
