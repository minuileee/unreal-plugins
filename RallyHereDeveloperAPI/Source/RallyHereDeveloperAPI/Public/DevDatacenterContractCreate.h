// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevDatacenterContractCreate.generated.h"

/** @defgroup RHAPI_DevDatacenterContractCreate RallyHere API Model DevDatacenterContractCreate
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevDatacenterContractCreate : public FRHAPI_DevModel
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

    /** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
    FDateTime StartDate_Optional{  };
    /** @brief true if StartDate_Optional has been set to a value */
    bool StartDate_IsSet{ false };
    /** @brief Gets the value of StartDate_Optional, regardless of it having been set */
    FDateTime& GetStartDate() { return StartDate_Optional; }
    /** @brief Gets the value of StartDate_Optional, regardless of it having been set */
    const FDateTime& GetStartDate() const { return StartDate_Optional; }
    /** @brief Gets the value of StartDate_Optional, if it has been set, otherwise it returns DefaultValue */
    const FDateTime& GetStartDate(const FDateTime& DefaultValue) const { if (StartDate_IsSet) return StartDate_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of StartDate_Optional and returns true if it has been set, otherwise returns false */
    bool GetStartDate(FDateTime& OutValue) const { if (StartDate_IsSet) OutValue = StartDate_Optional; return StartDate_IsSet; }
    /** @brief Returns a pointer to StartDate_Optional, if it has been set, otherwise returns nullptr */
    FDateTime* GetStartDateOrNull() { if (StartDate_IsSet) return &StartDate_Optional; return nullptr; }
    /** @brief Returns a pointer to StartDate_Optional, if it has been set, otherwise returns nullptr */
    const FDateTime* GetStartDateOrNull() const { if (StartDate_IsSet) return &StartDate_Optional; return nullptr; }
    /** @brief Sets the value of StartDate_Optional and also sets StartDate_IsSet to true */
    void SetStartDate(FDateTime NewValue) { StartDate_Optional = NewValue; StartDate_IsSet = true; }
     /** @brief Clears the value of StartDate_Optional and sets StartDate_IsSet to false */
    void ClearStartDate() { StartDate_IsSet = false; }

    /** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
    FDateTime EndDate_Optional{  };
    /** @brief true if EndDate_Optional has been set to a value */
    bool EndDate_IsSet{ false };
    /** @brief Gets the value of EndDate_Optional, regardless of it having been set */
    FDateTime& GetEndDate() { return EndDate_Optional; }
    /** @brief Gets the value of EndDate_Optional, regardless of it having been set */
    const FDateTime& GetEndDate() const { return EndDate_Optional; }
    /** @brief Gets the value of EndDate_Optional, if it has been set, otherwise it returns DefaultValue */
    const FDateTime& GetEndDate(const FDateTime& DefaultValue) const { if (EndDate_IsSet) return EndDate_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of EndDate_Optional and returns true if it has been set, otherwise returns false */
    bool GetEndDate(FDateTime& OutValue) const { if (EndDate_IsSet) OutValue = EndDate_Optional; return EndDate_IsSet; }
    /** @brief Returns a pointer to EndDate_Optional, if it has been set, otherwise returns nullptr */
    FDateTime* GetEndDateOrNull() { if (EndDate_IsSet) return &EndDate_Optional; return nullptr; }
    /** @brief Returns a pointer to EndDate_Optional, if it has been set, otherwise returns nullptr */
    const FDateTime* GetEndDateOrNull() const { if (EndDate_IsSet) return &EndDate_Optional; return nullptr; }
    /** @brief Sets the value of EndDate_Optional and also sets EndDate_IsSet to true */
    void SetEndDate(FDateTime NewValue) { EndDate_Optional = NewValue; EndDate_IsSet = true; }
     /** @brief Clears the value of EndDate_Optional and sets EndDate_IsSet to false */
    void ClearEndDate() { EndDate_IsSet = false; }

    /** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
    FDateTime CancelDate_Optional{  };
    /** @brief true if CancelDate_Optional has been set to a value */
    bool CancelDate_IsSet{ false };
    /** @brief Gets the value of CancelDate_Optional, regardless of it having been set */
    FDateTime& GetCancelDate() { return CancelDate_Optional; }
    /** @brief Gets the value of CancelDate_Optional, regardless of it having been set */
    const FDateTime& GetCancelDate() const { return CancelDate_Optional; }
    /** @brief Gets the value of CancelDate_Optional, if it has been set, otherwise it returns DefaultValue */
    const FDateTime& GetCancelDate(const FDateTime& DefaultValue) const { if (CancelDate_IsSet) return CancelDate_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CancelDate_Optional and returns true if it has been set, otherwise returns false */
    bool GetCancelDate(FDateTime& OutValue) const { if (CancelDate_IsSet) OutValue = CancelDate_Optional; return CancelDate_IsSet; }
    /** @brief Returns a pointer to CancelDate_Optional, if it has been set, otherwise returns nullptr */
    FDateTime* GetCancelDateOrNull() { if (CancelDate_IsSet) return &CancelDate_Optional; return nullptr; }
    /** @brief Returns a pointer to CancelDate_Optional, if it has been set, otherwise returns nullptr */
    const FDateTime* GetCancelDateOrNull() const { if (CancelDate_IsSet) return &CancelDate_Optional; return nullptr; }
    /** @brief Sets the value of CancelDate_Optional and also sets CancelDate_IsSet to true */
    void SetCancelDate(FDateTime NewValue) { CancelDate_Optional = NewValue; CancelDate_IsSet = true; }
     /** @brief Clears the value of CancelDate_Optional and sets CancelDate_IsSet to false */
    void ClearCancelDate() { CancelDate_IsSet = false; }

    /** @brief The number of days in the contract period */
    int32 PeriodDays_Optional{  };
    /** @brief true if PeriodDays_Optional has been set to a value */
    bool PeriodDays_IsSet{ false };
    /** @brief Gets the value of PeriodDays_Optional, regardless of it having been set */
    int32& GetPeriodDays() { return PeriodDays_Optional; }
    /** @brief Gets the value of PeriodDays_Optional, regardless of it having been set */
    const int32& GetPeriodDays() const { return PeriodDays_Optional; }
    /** @brief Gets the value of PeriodDays_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetPeriodDays(const int32& DefaultValue) const { if (PeriodDays_IsSet) return PeriodDays_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of PeriodDays_Optional and returns true if it has been set, otherwise returns false */
    bool GetPeriodDays(int32& OutValue) const { if (PeriodDays_IsSet) OutValue = PeriodDays_Optional; return PeriodDays_IsSet; }
    /** @brief Returns a pointer to PeriodDays_Optional, if it has been set, otherwise returns nullptr */
    int32* GetPeriodDaysOrNull() { if (PeriodDays_IsSet) return &PeriodDays_Optional; return nullptr; }
    /** @brief Returns a pointer to PeriodDays_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetPeriodDaysOrNull() const { if (PeriodDays_IsSet) return &PeriodDays_Optional; return nullptr; }
    /** @brief Sets the value of PeriodDays_Optional and also sets PeriodDays_IsSet to true */
    void SetPeriodDays(int32 NewValue) { PeriodDays_Optional = NewValue; PeriodDays_IsSet = true; }
     /** @brief Clears the value of PeriodDays_Optional and sets PeriodDays_IsSet to false */
    void ClearPeriodDays() { PeriodDays_Optional = 0; PeriodDays_IsSet = false; }
    /** @brief Returns true if PeriodDays_Optional is set and matches the default value */
    bool IsPeriodDaysDefaultValue() const { return PeriodDays_IsSet && PeriodDays_Optional == 0; }
    /** @brief Sets the value of PeriodDays_Optional to its default and also sets PeriodDays_IsSet to true */
    void SetPeriodDaysToDefault() { PeriodDays_Optional = 0; PeriodDays_IsSet = true; }

    /** @brief The service extend period in days */
    int32 ExtendPeriodDays_Optional{  };
    /** @brief true if ExtendPeriodDays_Optional has been set to a value */
    bool ExtendPeriodDays_IsSet{ false };
    /** @brief Gets the value of ExtendPeriodDays_Optional, regardless of it having been set */
    int32& GetExtendPeriodDays() { return ExtendPeriodDays_Optional; }
    /** @brief Gets the value of ExtendPeriodDays_Optional, regardless of it having been set */
    const int32& GetExtendPeriodDays() const { return ExtendPeriodDays_Optional; }
    /** @brief Gets the value of ExtendPeriodDays_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetExtendPeriodDays(const int32& DefaultValue) const { if (ExtendPeriodDays_IsSet) return ExtendPeriodDays_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of ExtendPeriodDays_Optional and returns true if it has been set, otherwise returns false */
    bool GetExtendPeriodDays(int32& OutValue) const { if (ExtendPeriodDays_IsSet) OutValue = ExtendPeriodDays_Optional; return ExtendPeriodDays_IsSet; }
    /** @brief Returns a pointer to ExtendPeriodDays_Optional, if it has been set, otherwise returns nullptr */
    int32* GetExtendPeriodDaysOrNull() { if (ExtendPeriodDays_IsSet) return &ExtendPeriodDays_Optional; return nullptr; }
    /** @brief Returns a pointer to ExtendPeriodDays_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetExtendPeriodDaysOrNull() const { if (ExtendPeriodDays_IsSet) return &ExtendPeriodDays_Optional; return nullptr; }
    /** @brief Sets the value of ExtendPeriodDays_Optional and also sets ExtendPeriodDays_IsSet to true */
    void SetExtendPeriodDays(int32 NewValue) { ExtendPeriodDays_Optional = NewValue; ExtendPeriodDays_IsSet = true; }
     /** @brief Clears the value of ExtendPeriodDays_Optional and sets ExtendPeriodDays_IsSet to false */
    void ClearExtendPeriodDays() { ExtendPeriodDays_Optional = 0; ExtendPeriodDays_IsSet = false; }
    /** @brief Returns true if ExtendPeriodDays_Optional is set and matches the default value */
    bool IsExtendPeriodDaysDefaultValue() const { return ExtendPeriodDays_IsSet && ExtendPeriodDays_Optional == 0; }
    /** @brief Sets the value of ExtendPeriodDays_Optional to its default and also sets ExtendPeriodDays_IsSet to true */
    void SetExtendPeriodDaysToDefault() { ExtendPeriodDays_Optional = 0; ExtendPeriodDays_IsSet = true; }

    /** @brief The number of days notice required to cancel the contract */
    int32 NoticeDays_Optional{  };
    /** @brief true if NoticeDays_Optional has been set to a value */
    bool NoticeDays_IsSet{ false };
    /** @brief Gets the value of NoticeDays_Optional, regardless of it having been set */
    int32& GetNoticeDays() { return NoticeDays_Optional; }
    /** @brief Gets the value of NoticeDays_Optional, regardless of it having been set */
    const int32& GetNoticeDays() const { return NoticeDays_Optional; }
    /** @brief Gets the value of NoticeDays_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetNoticeDays(const int32& DefaultValue) const { if (NoticeDays_IsSet) return NoticeDays_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of NoticeDays_Optional and returns true if it has been set, otherwise returns false */
    bool GetNoticeDays(int32& OutValue) const { if (NoticeDays_IsSet) OutValue = NoticeDays_Optional; return NoticeDays_IsSet; }
    /** @brief Returns a pointer to NoticeDays_Optional, if it has been set, otherwise returns nullptr */
    int32* GetNoticeDaysOrNull() { if (NoticeDays_IsSet) return &NoticeDays_Optional; return nullptr; }
    /** @brief Returns a pointer to NoticeDays_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetNoticeDaysOrNull() const { if (NoticeDays_IsSet) return &NoticeDays_Optional; return nullptr; }
    /** @brief Sets the value of NoticeDays_Optional and also sets NoticeDays_IsSet to true */
    void SetNoticeDays(int32 NewValue) { NoticeDays_Optional = NewValue; NoticeDays_IsSet = true; }
     /** @brief Clears the value of NoticeDays_Optional and sets NoticeDays_IsSet to false */
    void ClearNoticeDays() { NoticeDays_Optional = 0; NoticeDays_IsSet = false; }
    /** @brief Returns true if NoticeDays_Optional is set and matches the default value */
    bool IsNoticeDaysDefaultValue() const { return NoticeDays_IsSet && NoticeDays_Optional == 0; }
    /** @brief Sets the value of NoticeDays_Optional to its default and also sets NoticeDays_IsSet to true */
    void SetNoticeDaysToDefault() { NoticeDays_Optional = 0; NoticeDays_IsSet = true; }

    /** @brief The purchase order number or description for the contract */
    FString PurchaseOrder_Optional{  };
    /** @brief true if PurchaseOrder_Optional has been set to a value */
    bool PurchaseOrder_IsSet{ false };
    /** @brief Gets the value of PurchaseOrder_Optional, regardless of it having been set */
    FString& GetPurchaseOrder() { return PurchaseOrder_Optional; }
    /** @brief Gets the value of PurchaseOrder_Optional, regardless of it having been set */
    const FString& GetPurchaseOrder() const { return PurchaseOrder_Optional; }
    /** @brief Gets the value of PurchaseOrder_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetPurchaseOrder(const FString& DefaultValue) const { if (PurchaseOrder_IsSet) return PurchaseOrder_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of PurchaseOrder_Optional and returns true if it has been set, otherwise returns false */
    bool GetPurchaseOrder(FString& OutValue) const { if (PurchaseOrder_IsSet) OutValue = PurchaseOrder_Optional; return PurchaseOrder_IsSet; }
    /** @brief Returns a pointer to PurchaseOrder_Optional, if it has been set, otherwise returns nullptr */
    FString* GetPurchaseOrderOrNull() { if (PurchaseOrder_IsSet) return &PurchaseOrder_Optional; return nullptr; }
    /** @brief Returns a pointer to PurchaseOrder_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetPurchaseOrderOrNull() const { if (PurchaseOrder_IsSet) return &PurchaseOrder_Optional; return nullptr; }
    /** @brief Sets the value of PurchaseOrder_Optional and also sets PurchaseOrder_IsSet to true */
    void SetPurchaseOrder(FString NewValue) { PurchaseOrder_Optional = NewValue; PurchaseOrder_IsSet = true; }
     /** @brief Clears the value of PurchaseOrder_Optional and sets PurchaseOrder_IsSet to false */
    void ClearPurchaseOrder() { PurchaseOrder_IsSet = false; }

    /** @brief The number of days after the invoice is sent that payment is due */
    int32 PaymentTermDays_Optional{  };
    /** @brief true if PaymentTermDays_Optional has been set to a value */
    bool PaymentTermDays_IsSet{ false };
    /** @brief Gets the value of PaymentTermDays_Optional, regardless of it having been set */
    int32& GetPaymentTermDays() { return PaymentTermDays_Optional; }
    /** @brief Gets the value of PaymentTermDays_Optional, regardless of it having been set */
    const int32& GetPaymentTermDays() const { return PaymentTermDays_Optional; }
    /** @brief Gets the value of PaymentTermDays_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetPaymentTermDays(const int32& DefaultValue) const { if (PaymentTermDays_IsSet) return PaymentTermDays_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of PaymentTermDays_Optional and returns true if it has been set, otherwise returns false */
    bool GetPaymentTermDays(int32& OutValue) const { if (PaymentTermDays_IsSet) OutValue = PaymentTermDays_Optional; return PaymentTermDays_IsSet; }
    /** @brief Returns a pointer to PaymentTermDays_Optional, if it has been set, otherwise returns nullptr */
    int32* GetPaymentTermDaysOrNull() { if (PaymentTermDays_IsSet) return &PaymentTermDays_Optional; return nullptr; }
    /** @brief Returns a pointer to PaymentTermDays_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetPaymentTermDaysOrNull() const { if (PaymentTermDays_IsSet) return &PaymentTermDays_Optional; return nullptr; }
    /** @brief Sets the value of PaymentTermDays_Optional and also sets PaymentTermDays_IsSet to true */
    void SetPaymentTermDays(int32 NewValue) { PaymentTermDays_Optional = NewValue; PaymentTermDays_IsSet = true; }
     /** @brief Clears the value of PaymentTermDays_Optional and sets PaymentTermDays_IsSet to false */
    void ClearPaymentTermDays() { PaymentTermDays_Optional = 0; PaymentTermDays_IsSet = false; }
    /** @brief Returns true if PaymentTermDays_Optional is set and matches the default value */
    bool IsPaymentTermDaysDefaultValue() const { return PaymentTermDays_IsSet && PaymentTermDays_Optional == 0; }
    /** @brief Sets the value of PaymentTermDays_Optional to its default and also sets PaymentTermDays_IsSet to true */
    void SetPaymentTermDaysToDefault() { PaymentTermDays_Optional = 0; PaymentTermDays_IsSet = true; }

    /** @brief The IDs of the hosts this contract is associated with */
    TArray<FGuid> Hosts_Optional{  };
    /** @brief true if Hosts_Optional has been set to a value */
    bool Hosts_IsSet{ false };
    /** @brief Gets the value of Hosts_Optional, regardless of it having been set */
    TArray<FGuid>& GetHosts() { return Hosts_Optional; }
    /** @brief Gets the value of Hosts_Optional, regardless of it having been set */
    const TArray<FGuid>& GetHosts() const { return Hosts_Optional; }
    /** @brief Gets the value of Hosts_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FGuid>& GetHosts(const TArray<FGuid>& DefaultValue) const { if (Hosts_IsSet) return Hosts_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Hosts_Optional and returns true if it has been set, otherwise returns false */
    bool GetHosts(TArray<FGuid>& OutValue) const { if (Hosts_IsSet) OutValue = Hosts_Optional; return Hosts_IsSet; }
    /** @brief Returns a pointer to Hosts_Optional, if it has been set, otherwise returns nullptr */
    TArray<FGuid>* GetHostsOrNull() { if (Hosts_IsSet) return &Hosts_Optional; return nullptr; }
    /** @brief Returns a pointer to Hosts_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FGuid>* GetHostsOrNull() const { if (Hosts_IsSet) return &Hosts_Optional; return nullptr; }
    /** @brief Sets the value of Hosts_Optional and also sets Hosts_IsSet to true */
    void SetHosts(TArray<FGuid> NewValue) { Hosts_Optional = NewValue; Hosts_IsSet = true; }
     /** @brief Clears the value of Hosts_Optional and sets Hosts_IsSet to false */
    void ClearHosts() { Hosts_IsSet = false; }
};

/** @} */