// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "RallyHereDeveloperAPIBaseModel.h"
#include "Auth0AccountPermissionsAPI.h"
#include "CatalogAPI.h"
#include "ClientsAPI.h"
#include "EnvironmentAPI.h"
#include "InstanceRequestTemplatesAPI.h"
#include "MapsAPI.h"
#include "MatchMakingProfilesAPI.h"
#include "MatchMakingRulesAPI.h"
#include "MatchMakingStridesAPI.h"
#include "MatchMakingTemplatesAPI.h"
#include "OrganizationAPI.h"
#include "OrganizationAccountsAPI.h"
#include "PermissionsAPI.h"
#include "PlatformSessionTemplatesAPI.h"
#include "PoliciesAPI.h"
#include "PortalMenuDataAPI.h"
#include "PortalPermissionsAPI.h"
#include "ProductAPI.h"
#include "QueuesAPI.h"
#include "RanksAPI.h"
#include "SandboxAPI.h"
#include "SandboxConfigAuditAPI.h"
#include "SandboxConfigGameConfigAPI.h"
#include "SandboxConfigKVAPI.h"
#include "SandboxConfigPlayerSettingTypesAPI.h"
#include "SandboxConfigRoleAPI.h"
#include "SessionTemplatesAPI.h"
#include "VerifyAPI.h"

namespace RallyHereDeveloperAPI
{

struct RALLYHEREDEVELOPERAPI_API FRallyHereDeveloperAPIAll
{
public:
    FRallyHereDeveloperAPIAll();

    TArray<FAPI*> GetAllAPIs() const;

    FAuth0AccountPermissionsAPI& GetAuth0AccountPermissions();
    const FAuth0AccountPermissionsAPI& GetAuth0AccountPermissions() const;

    FCatalogAPI& GetCatalog();
    const FCatalogAPI& GetCatalog() const;

    FClientsAPI& GetClients();
    const FClientsAPI& GetClients() const;

    FEnvironmentAPI& GetEnvironment();
    const FEnvironmentAPI& GetEnvironment() const;

    FInstanceRequestTemplatesAPI& GetInstanceRequestTemplates();
    const FInstanceRequestTemplatesAPI& GetInstanceRequestTemplates() const;

    FMapsAPI& GetMaps();
    const FMapsAPI& GetMaps() const;

    FMatchMakingProfilesAPI& GetMatchMakingProfiles();
    const FMatchMakingProfilesAPI& GetMatchMakingProfiles() const;

    FMatchMakingRulesAPI& GetMatchMakingRules();
    const FMatchMakingRulesAPI& GetMatchMakingRules() const;

    FMatchMakingStridesAPI& GetMatchMakingStrides();
    const FMatchMakingStridesAPI& GetMatchMakingStrides() const;

    FMatchMakingTemplatesAPI& GetMatchMakingTemplates();
    const FMatchMakingTemplatesAPI& GetMatchMakingTemplates() const;

    FOrganizationAPI& GetOrganization();
    const FOrganizationAPI& GetOrganization() const;

    FOrganizationAccountsAPI& GetOrganizationAccounts();
    const FOrganizationAccountsAPI& GetOrganizationAccounts() const;

    FPermissionsAPI& GetPermissions();
    const FPermissionsAPI& GetPermissions() const;

    FPlatformSessionTemplatesAPI& GetPlatformSessionTemplates();
    const FPlatformSessionTemplatesAPI& GetPlatformSessionTemplates() const;

    FPoliciesAPI& GetPolicies();
    const FPoliciesAPI& GetPolicies() const;

    FPortalMenuDataAPI& GetPortalMenuData();
    const FPortalMenuDataAPI& GetPortalMenuData() const;

    FPortalPermissionsAPI& GetPortalPermissions();
    const FPortalPermissionsAPI& GetPortalPermissions() const;

    FProductAPI& GetProduct();
    const FProductAPI& GetProduct() const;

    FQueuesAPI& GetQueues();
    const FQueuesAPI& GetQueues() const;

    FRanksAPI& GetRanks();
    const FRanksAPI& GetRanks() const;

    FSandboxAPI& GetSandbox();
    const FSandboxAPI& GetSandbox() const;

    FSandboxConfigAuditAPI& GetSandboxConfigAudit();
    const FSandboxConfigAuditAPI& GetSandboxConfigAudit() const;

    FSandboxConfigGameConfigAPI& GetSandboxConfigGameConfig();
    const FSandboxConfigGameConfigAPI& GetSandboxConfigGameConfig() const;

    FSandboxConfigKVAPI& GetSandboxConfigKV();
    const FSandboxConfigKVAPI& GetSandboxConfigKV() const;

    FSandboxConfigPlayerSettingTypesAPI& GetSandboxConfigPlayerSettingTypes();
    const FSandboxConfigPlayerSettingTypesAPI& GetSandboxConfigPlayerSettingTypes() const;

    FSandboxConfigRoleAPI& GetSandboxConfigRole();
    const FSandboxConfigRoleAPI& GetSandboxConfigRole() const;

    FSessionTemplatesAPI& GetSessionTemplates();
    const FSessionTemplatesAPI& GetSessionTemplates() const;

    FVerifyAPI& GetVerify();
    const FVerifyAPI& GetVerify() const;

private:
    TArray<FAPI*> AllAPIs;
    FAuth0AccountPermissionsAPI Auth0AccountPermissions;
    FCatalogAPI Catalog;
    FClientsAPI Clients;
    FEnvironmentAPI Environment;
    FInstanceRequestTemplatesAPI InstanceRequestTemplates;
    FMapsAPI Maps;
    FMatchMakingProfilesAPI MatchMakingProfiles;
    FMatchMakingRulesAPI MatchMakingRules;
    FMatchMakingStridesAPI MatchMakingStrides;
    FMatchMakingTemplatesAPI MatchMakingTemplates;
    FOrganizationAPI Organization;
    FOrganizationAccountsAPI OrganizationAccounts;
    FPermissionsAPI Permissions;
    FPlatformSessionTemplatesAPI PlatformSessionTemplates;
    FPoliciesAPI Policies;
    FPortalMenuDataAPI PortalMenuData;
    FPortalPermissionsAPI PortalPermissions;
    FProductAPI Product;
    FQueuesAPI Queues;
    FRanksAPI Ranks;
    FSandboxAPI Sandbox;
    FSandboxConfigAuditAPI SandboxConfigAudit;
    FSandboxConfigGameConfigAPI SandboxConfigGameConfig;
    FSandboxConfigKVAPI SandboxConfigKV;
    FSandboxConfigPlayerSettingTypesAPI SandboxConfigPlayerSettingTypes;
    FSandboxConfigRoleAPI SandboxConfigRole;
    FSessionTemplatesAPI SessionTemplates;
    FVerifyAPI Verify;
};
}