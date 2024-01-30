// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MSDMissionGameMode.generated.h"

UCLASS(minimalapi)
class AMSDMissionGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMSDMissionGameMode();

	virtual void PostLogin(APlayerController* NewPlayer) override;
};



