// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_PlayerInfoSubsystem.h"

struct FRHDTW_PlayerSettings : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_PlayerSettings();
	virtual ~FRHDTW_PlayerSettings();

	virtual void Do() override;

	void DoViewSettings();
	void DoModifySettings();
	void DoSettingsTypes();

	int32 SettingVersionNum;
	TArray<ANSICHAR> SettingsIdInput;
	TArray<ANSICHAR> ModifySettingsIdInput;
	TArray<ANSICHAR> ModifySettingsKeyInput;
	TArray<ANSICHAR> ModifySettingsJsonInput;

private:
	FString SetPlayerSettingsActionResult;
	void HandleSetPlayerSettingsResponse(bool bSuccess, const FRH_PlayerSettingsDataWrapper& Response, FGuid PlayerUuid);
};
