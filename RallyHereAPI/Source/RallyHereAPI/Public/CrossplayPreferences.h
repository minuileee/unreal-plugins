// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "CrossplayInput.h"
#include "CrossplayPlatform.h"
#include "CrossplayPreferences.generated.h"

/** @defgroup RHAPI_CrossplayPreferences RallyHere API Model CrossplayPreferences
 *  @{
 */

/**
 * @brief A session&#39;s or player&#39;s preferences around crossplay platforms and inputs. Permitted platforms and inputs will be checked when new players attempt to join a session
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_CrossplayPreferences : public FRHAPI_Model
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

	/** @brief The platform type that the client is allowed to play with (any, xbox-like only, playstation-like only etc.) */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_CrossplayPlatform PermittedPlatform{  };
	/** @brief Gets the value of PermittedPlatform */
	ERHAPI_CrossplayPlatform& GetPermittedPlatform() { return PermittedPlatform; }
	/** @brief Gets the value of PermittedPlatform */
	const ERHAPI_CrossplayPlatform& GetPermittedPlatform() const { return PermittedPlatform; }
	/** @brief Sets the value of PermittedPlatform */
	void SetPermittedPlatform(const ERHAPI_CrossplayPlatform& NewValue) { PermittedPlatform = NewValue;  }
	/** @brief Sets the value of PermittedPlatform using move semantics */
	void SetPermittedPlatform(ERHAPI_CrossplayPlatform&& NewValue) { PermittedPlatform = NewValue;  }

	/** @brief The input type that the client is allowed to play with (keyboard and mouse, gamepad, touch input etc.) */
	UPROPERTY(BlueprintReadWrite, Category = "RallyHere")
	ERHAPI_CrossplayInput PermittedInput{  };
	/** @brief Gets the value of PermittedInput */
	ERHAPI_CrossplayInput& GetPermittedInput() { return PermittedInput; }
	/** @brief Gets the value of PermittedInput */
	const ERHAPI_CrossplayInput& GetPermittedInput() const { return PermittedInput; }
	/** @brief Sets the value of PermittedInput */
	void SetPermittedInput(const ERHAPI_CrossplayInput& NewValue) { PermittedInput = NewValue;  }
	/** @brief Sets the value of PermittedInput using move semantics */
	void SetPermittedInput(ERHAPI_CrossplayInput&& NewValue) { PermittedInput = NewValue;  }
};

/** @} */
