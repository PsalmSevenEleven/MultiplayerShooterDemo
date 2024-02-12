// Copyright Epic Games, Inc. All Rights Reserved.

#include "MSDMissionGameMode.h"

#include "AdvancedSessionsLibrary.h"
#include "UObject/ConstructorHelpers.h"

void AMSDMissionGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	//There will likely be logic here for announcements and difficulty scaling at some point
}
