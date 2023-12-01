// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevMachineClassUpdate.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevMachineClassUpdate

void FRHAPI_DevMachineClassUpdate::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (DatacenterProvider_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("datacenter_provider"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, DatacenterProvider_Optional);
    }
    if (Name_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("name"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Name_Optional);
    }
    if (Type_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("type"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Type_Optional);
    }
    if (Labels_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("labels"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Labels_Optional);
    }
    if (MonthlyPrice_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("monthly_price"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, MonthlyPrice_Optional);
    }
    if (HourlyPrice_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("hourly_price"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, HourlyPrice_Optional);
    }
    if (CpuCount_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("cpu_count"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CpuCount_Optional);
    }
    if (CpuInfo_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("cpu_info"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CpuInfo_Optional);
    }
    if (CpuType_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("cpu_type"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CpuType_Optional);
    }
    if (CpuSockets_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("cpu_sockets"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CpuSockets_Optional);
    }
    if (CpuCores_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("cpu_cores"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CpuCores_Optional);
    }
    if (CpuThreads_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("cpu_threads"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CpuThreads_Optional);
    }
    if (MemorySizeGigabytes_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("memory_size_gigabytes"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, MemorySizeGigabytes_Optional);
    }
    if (MemoryType_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("memory_type"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, MemoryType_Optional);
    }
    if (MemorySpeedRating_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("memory_speed_rating"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, MemorySpeedRating_Optional);
    }
    if (MemoryTimings_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("memory_timings"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, MemoryTimings_Optional);
    }
    if (DiskType_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("disk_type"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, DiskType_Optional);
    }
    if (DiskSizeGigabytes_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("disk_size_gigabytes"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, DiskSizeGigabytes_Optional);
    }
    if (DiskSequentialRead_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("disk_sequential_read"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, DiskSequentialRead_Optional);
    }
    if (DiskSequentialWrite_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("disk_sequential_write"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, DiskSequentialWrite_Optional);
    }
    if (DiskRandomRead_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("disk_random_read"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, DiskRandomRead_Optional);
    }
    if (DiskRandomWrite_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("disk_random_write"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, DiskRandomWrite_Optional);
    }
    if (DiskIops_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("disk_iops"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, DiskIops_Optional);
    }
    if (DiskLatencyMs_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("disk_latency_ms"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, DiskLatencyMs_Optional);
    }
    if (NetworkGbps_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("network_gbps"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, NetworkGbps_Optional);
    }
    if (GpuType_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("gpu_type"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, GpuType_Optional);
    }
    if (GpuCount_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("gpu_count"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, GpuCount_Optional);
    }
    if (GpuMemoryGigabytes_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("gpu_memory_gigabytes"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, GpuMemoryGigabytes_Optional);
    }
    if (DatacenterProviderId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("datacenter_provider_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, DatacenterProviderId_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevMachineClassUpdate::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonDatacenterProviderField = (*Object)->TryGetField(TEXT("datacenter_provider"));
    if (JsonDatacenterProviderField.IsValid() && !JsonDatacenterProviderField->IsNull())
    {
        DatacenterProvider_IsSet = TryGetJsonValue(JsonDatacenterProviderField, DatacenterProvider_Optional);
        ParseSuccess &= DatacenterProvider_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonNameField = (*Object)->TryGetField(TEXT("name"));
    if (JsonNameField.IsValid() && !JsonNameField->IsNull())
    {
        Name_IsSet = TryGetJsonValue(JsonNameField, Name_Optional);
        ParseSuccess &= Name_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonTypeField = (*Object)->TryGetField(TEXT("type"));
    if (JsonTypeField.IsValid() && !JsonTypeField->IsNull())
    {
        Type_IsSet = TryGetJsonValue(JsonTypeField, Type_Optional);
        ParseSuccess &= Type_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLabelsField = (*Object)->TryGetField(TEXT("labels"));
    if (JsonLabelsField.IsValid() && !JsonLabelsField->IsNull())
    {
        Labels_IsSet = TryGetJsonValue(JsonLabelsField, Labels_Optional);
        ParseSuccess &= Labels_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonMonthlyPriceField = (*Object)->TryGetField(TEXT("monthly_price"));
    if (JsonMonthlyPriceField.IsValid() && !JsonMonthlyPriceField->IsNull())
    {
        MonthlyPrice_IsSet = TryGetJsonValue(JsonMonthlyPriceField, MonthlyPrice_Optional);
        ParseSuccess &= MonthlyPrice_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonHourlyPriceField = (*Object)->TryGetField(TEXT("hourly_price"));
    if (JsonHourlyPriceField.IsValid() && !JsonHourlyPriceField->IsNull())
    {
        HourlyPrice_IsSet = TryGetJsonValue(JsonHourlyPriceField, HourlyPrice_Optional);
        ParseSuccess &= HourlyPrice_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCpuCountField = (*Object)->TryGetField(TEXT("cpu_count"));
    if (JsonCpuCountField.IsValid() && !JsonCpuCountField->IsNull())
    {
        CpuCount_IsSet = TryGetJsonValue(JsonCpuCountField, CpuCount_Optional);
        ParseSuccess &= CpuCount_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCpuInfoField = (*Object)->TryGetField(TEXT("cpu_info"));
    if (JsonCpuInfoField.IsValid() && !JsonCpuInfoField->IsNull())
    {
        CpuInfo_IsSet = TryGetJsonValue(JsonCpuInfoField, CpuInfo_Optional);
        ParseSuccess &= CpuInfo_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCpuTypeField = (*Object)->TryGetField(TEXT("cpu_type"));
    if (JsonCpuTypeField.IsValid() && !JsonCpuTypeField->IsNull())
    {
        CpuType_IsSet = TryGetJsonValue(JsonCpuTypeField, CpuType_Optional);
        ParseSuccess &= CpuType_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCpuSocketsField = (*Object)->TryGetField(TEXT("cpu_sockets"));
    if (JsonCpuSocketsField.IsValid() && !JsonCpuSocketsField->IsNull())
    {
        CpuSockets_IsSet = TryGetJsonValue(JsonCpuSocketsField, CpuSockets_Optional);
        ParseSuccess &= CpuSockets_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCpuCoresField = (*Object)->TryGetField(TEXT("cpu_cores"));
    if (JsonCpuCoresField.IsValid() && !JsonCpuCoresField->IsNull())
    {
        CpuCores_IsSet = TryGetJsonValue(JsonCpuCoresField, CpuCores_Optional);
        ParseSuccess &= CpuCores_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCpuThreadsField = (*Object)->TryGetField(TEXT("cpu_threads"));
    if (JsonCpuThreadsField.IsValid() && !JsonCpuThreadsField->IsNull())
    {
        CpuThreads_IsSet = TryGetJsonValue(JsonCpuThreadsField, CpuThreads_Optional);
        ParseSuccess &= CpuThreads_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonMemorySizeGigabytesField = (*Object)->TryGetField(TEXT("memory_size_gigabytes"));
    if (JsonMemorySizeGigabytesField.IsValid() && !JsonMemorySizeGigabytesField->IsNull())
    {
        MemorySizeGigabytes_IsSet = TryGetJsonValue(JsonMemorySizeGigabytesField, MemorySizeGigabytes_Optional);
        ParseSuccess &= MemorySizeGigabytes_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonMemoryTypeField = (*Object)->TryGetField(TEXT("memory_type"));
    if (JsonMemoryTypeField.IsValid() && !JsonMemoryTypeField->IsNull())
    {
        MemoryType_IsSet = TryGetJsonValue(JsonMemoryTypeField, MemoryType_Optional);
        ParseSuccess &= MemoryType_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonMemorySpeedRatingField = (*Object)->TryGetField(TEXT("memory_speed_rating"));
    if (JsonMemorySpeedRatingField.IsValid() && !JsonMemorySpeedRatingField->IsNull())
    {
        MemorySpeedRating_IsSet = TryGetJsonValue(JsonMemorySpeedRatingField, MemorySpeedRating_Optional);
        ParseSuccess &= MemorySpeedRating_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonMemoryTimingsField = (*Object)->TryGetField(TEXT("memory_timings"));
    if (JsonMemoryTimingsField.IsValid() && !JsonMemoryTimingsField->IsNull())
    {
        MemoryTimings_IsSet = TryGetJsonValue(JsonMemoryTimingsField, MemoryTimings_Optional);
        ParseSuccess &= MemoryTimings_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonDiskTypeField = (*Object)->TryGetField(TEXT("disk_type"));
    if (JsonDiskTypeField.IsValid() && !JsonDiskTypeField->IsNull())
    {
        DiskType_IsSet = TryGetJsonValue(JsonDiskTypeField, DiskType_Optional);
        ParseSuccess &= DiskType_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonDiskSizeGigabytesField = (*Object)->TryGetField(TEXT("disk_size_gigabytes"));
    if (JsonDiskSizeGigabytesField.IsValid() && !JsonDiskSizeGigabytesField->IsNull())
    {
        DiskSizeGigabytes_IsSet = TryGetJsonValue(JsonDiskSizeGigabytesField, DiskSizeGigabytes_Optional);
        ParseSuccess &= DiskSizeGigabytes_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonDiskSequentialReadField = (*Object)->TryGetField(TEXT("disk_sequential_read"));
    if (JsonDiskSequentialReadField.IsValid() && !JsonDiskSequentialReadField->IsNull())
    {
        DiskSequentialRead_IsSet = TryGetJsonValue(JsonDiskSequentialReadField, DiskSequentialRead_Optional);
        ParseSuccess &= DiskSequentialRead_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonDiskSequentialWriteField = (*Object)->TryGetField(TEXT("disk_sequential_write"));
    if (JsonDiskSequentialWriteField.IsValid() && !JsonDiskSequentialWriteField->IsNull())
    {
        DiskSequentialWrite_IsSet = TryGetJsonValue(JsonDiskSequentialWriteField, DiskSequentialWrite_Optional);
        ParseSuccess &= DiskSequentialWrite_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonDiskRandomReadField = (*Object)->TryGetField(TEXT("disk_random_read"));
    if (JsonDiskRandomReadField.IsValid() && !JsonDiskRandomReadField->IsNull())
    {
        DiskRandomRead_IsSet = TryGetJsonValue(JsonDiskRandomReadField, DiskRandomRead_Optional);
        ParseSuccess &= DiskRandomRead_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonDiskRandomWriteField = (*Object)->TryGetField(TEXT("disk_random_write"));
    if (JsonDiskRandomWriteField.IsValid() && !JsonDiskRandomWriteField->IsNull())
    {
        DiskRandomWrite_IsSet = TryGetJsonValue(JsonDiskRandomWriteField, DiskRandomWrite_Optional);
        ParseSuccess &= DiskRandomWrite_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonDiskIopsField = (*Object)->TryGetField(TEXT("disk_iops"));
    if (JsonDiskIopsField.IsValid() && !JsonDiskIopsField->IsNull())
    {
        DiskIops_IsSet = TryGetJsonValue(JsonDiskIopsField, DiskIops_Optional);
        ParseSuccess &= DiskIops_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonDiskLatencyMsField = (*Object)->TryGetField(TEXT("disk_latency_ms"));
    if (JsonDiskLatencyMsField.IsValid() && !JsonDiskLatencyMsField->IsNull())
    {
        DiskLatencyMs_IsSet = TryGetJsonValue(JsonDiskLatencyMsField, DiskLatencyMs_Optional);
        ParseSuccess &= DiskLatencyMs_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonNetworkGbpsField = (*Object)->TryGetField(TEXT("network_gbps"));
    if (JsonNetworkGbpsField.IsValid() && !JsonNetworkGbpsField->IsNull())
    {
        NetworkGbps_IsSet = TryGetJsonValue(JsonNetworkGbpsField, NetworkGbps_Optional);
        ParseSuccess &= NetworkGbps_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonGpuTypeField = (*Object)->TryGetField(TEXT("gpu_type"));
    if (JsonGpuTypeField.IsValid() && !JsonGpuTypeField->IsNull())
    {
        GpuType_IsSet = TryGetJsonValue(JsonGpuTypeField, GpuType_Optional);
        ParseSuccess &= GpuType_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonGpuCountField = (*Object)->TryGetField(TEXT("gpu_count"));
    if (JsonGpuCountField.IsValid() && !JsonGpuCountField->IsNull())
    {
        GpuCount_IsSet = TryGetJsonValue(JsonGpuCountField, GpuCount_Optional);
        ParseSuccess &= GpuCount_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonGpuMemoryGigabytesField = (*Object)->TryGetField(TEXT("gpu_memory_gigabytes"));
    if (JsonGpuMemoryGigabytesField.IsValid() && !JsonGpuMemoryGigabytesField->IsNull())
    {
        GpuMemoryGigabytes_IsSet = TryGetJsonValue(JsonGpuMemoryGigabytesField, GpuMemoryGigabytes_Optional);
        ParseSuccess &= GpuMemoryGigabytes_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonDatacenterProviderIdField = (*Object)->TryGetField(TEXT("datacenter_provider_id"));
    if (JsonDatacenterProviderIdField.IsValid() && !JsonDatacenterProviderIdField->IsNull())
    {
        DatacenterProviderId_IsSet = TryGetJsonValue(JsonDatacenterProviderIdField, DatacenterProviderId_Optional);
        ParseSuccess &= DatacenterProviderId_IsSet;
    }

    return ParseSuccess;
}

