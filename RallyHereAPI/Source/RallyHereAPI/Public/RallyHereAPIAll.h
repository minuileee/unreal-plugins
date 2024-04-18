// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "RallyHereAPIBaseModel.h"
#include "AdAPI.h"
#include "AuthAPI.h"
#include "BlockedV1API.h"
#include "BlockedV2API.h"
#include "CatalogAPI.h"
#include "ConfigAPI.h"
#include "ConfigurationV1API.h"
#include "CustomAPI.h"
#include "EntitlementsAPI.h"
#include "EnvironmentAPI.h"
#include "EventsAPI.h"
#include "FileAPI.h"
#include "FriendsV1API.h"
#include "FriendsV2API.h"
#include "InstanceNotificationAPI.h"
#include "InventoryAPI.h"
#include "KeyClaimsAPI.h"
#include "KeyEntitlementsAPI.h"
#include "MarketingAPI.h"
#include "MatchAPI.h"
#include "PlayerIdNotificationAPI.h"
#include "PlayerNotificationAPI.h"
#include "PresenceAPI.h"
#include "PresenceAdminAPI.h"
#include "QueuesAPI.h"
#include "RankAPI.h"
#include "RegionsAPI.h"
#include "ReportsAPI.h"
#include "SessionAuditAPI.h"
#include "SessionsAPI.h"
#include "SettingsAPI.h"
#include "TimeAPI.h"
#include "UsersAPI.h"
#include "VOIPAPI.h"

namespace RallyHereAPI
{

struct RALLYHEREAPI_API FRallyHereAPIAll
{
public:
	FRallyHereAPIAll();

	// dummy value to help autogenerator for constructor
	int32 DummyValue;

	TArray<TSharedRef<FAPI>> GetAllAPIs() const;

	TSharedRef<FAdAPI> GetAd();
	const TSharedRef<FAdAPI> GetAd() const;

	TSharedRef<FAuthAPI> GetAuth();
	const TSharedRef<FAuthAPI> GetAuth() const;

	TSharedRef<FBlockedV1API> GetBlockedV1();
	const TSharedRef<FBlockedV1API> GetBlockedV1() const;

	TSharedRef<FBlockedV2API> GetBlockedV2();
	const TSharedRef<FBlockedV2API> GetBlockedV2() const;

	TSharedRef<FCatalogAPI> GetCatalog();
	const TSharedRef<FCatalogAPI> GetCatalog() const;

	TSharedRef<FConfigAPI> GetConfig();
	const TSharedRef<FConfigAPI> GetConfig() const;

	TSharedRef<FConfigurationV1API> GetConfigurationV1();
	const TSharedRef<FConfigurationV1API> GetConfigurationV1() const;

	TSharedRef<FCustomAPI> GetCustom();
	const TSharedRef<FCustomAPI> GetCustom() const;

	TSharedRef<FEntitlementsAPI> GetEntitlements();
	const TSharedRef<FEntitlementsAPI> GetEntitlements() const;

	TSharedRef<FEnvironmentAPI> GetEnvironment();
	const TSharedRef<FEnvironmentAPI> GetEnvironment() const;

	TSharedRef<FEventsAPI> GetEvents();
	const TSharedRef<FEventsAPI> GetEvents() const;

	TSharedRef<FFileAPI> GetFile();
	const TSharedRef<FFileAPI> GetFile() const;

	TSharedRef<FFriendsV1API> GetFriendsV1();
	const TSharedRef<FFriendsV1API> GetFriendsV1() const;

	TSharedRef<FFriendsV2API> GetFriendsV2();
	const TSharedRef<FFriendsV2API> GetFriendsV2() const;

	TSharedRef<FInstanceNotificationAPI> GetInstanceNotification();
	const TSharedRef<FInstanceNotificationAPI> GetInstanceNotification() const;

	TSharedRef<FInventoryAPI> GetInventory();
	const TSharedRef<FInventoryAPI> GetInventory() const;

	TSharedRef<FKeyClaimsAPI> GetKeyClaims();
	const TSharedRef<FKeyClaimsAPI> GetKeyClaims() const;

	TSharedRef<FKeyEntitlementsAPI> GetKeyEntitlements();
	const TSharedRef<FKeyEntitlementsAPI> GetKeyEntitlements() const;

	TSharedRef<FMarketingAPI> GetMarketing();
	const TSharedRef<FMarketingAPI> GetMarketing() const;

	TSharedRef<FMatchAPI> GetMatch();
	const TSharedRef<FMatchAPI> GetMatch() const;

	TSharedRef<FPlayerIdNotificationAPI> GetPlayerIdNotification();
	const TSharedRef<FPlayerIdNotificationAPI> GetPlayerIdNotification() const;

	TSharedRef<FPlayerNotificationAPI> GetPlayerNotification();
	const TSharedRef<FPlayerNotificationAPI> GetPlayerNotification() const;

	TSharedRef<FPresenceAPI> GetPresence();
	const TSharedRef<FPresenceAPI> GetPresence() const;

	TSharedRef<FPresenceAdminAPI> GetPresenceAdmin();
	const TSharedRef<FPresenceAdminAPI> GetPresenceAdmin() const;

	TSharedRef<FQueuesAPI> GetQueues();
	const TSharedRef<FQueuesAPI> GetQueues() const;

	TSharedRef<FRankAPI> GetRank();
	const TSharedRef<FRankAPI> GetRank() const;

	TSharedRef<FRegionsAPI> GetRegions();
	const TSharedRef<FRegionsAPI> GetRegions() const;

	TSharedRef<FReportsAPI> GetReports();
	const TSharedRef<FReportsAPI> GetReports() const;

	TSharedRef<FSessionAuditAPI> GetSessionAudit();
	const TSharedRef<FSessionAuditAPI> GetSessionAudit() const;

	TSharedRef<FSessionsAPI> GetSessions();
	const TSharedRef<FSessionsAPI> GetSessions() const;

	TSharedRef<FSettingsAPI> GetSettings();
	const TSharedRef<FSettingsAPI> GetSettings() const;

	TSharedRef<FTimeAPI> GetTime();
	const TSharedRef<FTimeAPI> GetTime() const;

	TSharedRef<FUsersAPI> GetUsers();
	const TSharedRef<FUsersAPI> GetUsers() const;

	TSharedRef<FVOIPAPI> GetVOIP();
	const TSharedRef<FVOIPAPI> GetVOIP() const;

private:
	TArray<TSharedRef<FAPI>> AllAPIs;
	TSharedRef<FAdAPI> Ad;
	TSharedRef<FAuthAPI> Auth;
	TSharedRef<FBlockedV1API> BlockedV1;
	TSharedRef<FBlockedV2API> BlockedV2;
	TSharedRef<FCatalogAPI> Catalog;
	TSharedRef<FConfigAPI> Config;
	TSharedRef<FConfigurationV1API> ConfigurationV1;
	TSharedRef<FCustomAPI> Custom;
	TSharedRef<FEntitlementsAPI> Entitlements;
	TSharedRef<FEnvironmentAPI> Environment;
	TSharedRef<FEventsAPI> Events;
	TSharedRef<FFileAPI> File;
	TSharedRef<FFriendsV1API> FriendsV1;
	TSharedRef<FFriendsV2API> FriendsV2;
	TSharedRef<FInstanceNotificationAPI> InstanceNotification;
	TSharedRef<FInventoryAPI> Inventory;
	TSharedRef<FKeyClaimsAPI> KeyClaims;
	TSharedRef<FKeyEntitlementsAPI> KeyEntitlements;
	TSharedRef<FMarketingAPI> Marketing;
	TSharedRef<FMatchAPI> Match;
	TSharedRef<FPlayerIdNotificationAPI> PlayerIdNotification;
	TSharedRef<FPlayerNotificationAPI> PlayerNotification;
	TSharedRef<FPresenceAPI> Presence;
	TSharedRef<FPresenceAdminAPI> PresenceAdmin;
	TSharedRef<FQueuesAPI> Queues;
	TSharedRef<FRankAPI> Rank;
	TSharedRef<FRegionsAPI> Regions;
	TSharedRef<FReportsAPI> Reports;
	TSharedRef<FSessionAuditAPI> SessionAudit;
	TSharedRef<FSessionsAPI> Sessions;
	TSharedRef<FSettingsAPI> Settings;
	TSharedRef<FTimeAPI> Time;
	TSharedRef<FUsersAPI> Users;
	TSharedRef<FVOIPAPI> VOIP;
};
}
