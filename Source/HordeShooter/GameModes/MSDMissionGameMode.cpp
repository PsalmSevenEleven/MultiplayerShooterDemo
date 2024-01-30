// Copyright Epic Games, Inc. All Rights Reserved.

#include "MSDMissionGameMode.h"

#include "AdvancedSessionsLibrary.h"
#include "HordeShooter/MSDGameInstance.h"
#include "HordeShooter/Character/MSDCharacter.h"
#include "HordeShooter/Character/MSDPlayerState.h"
#include "HordeShooter/Character/Input/MSDPlayerController.h"
#include "UObject/ConstructorHelpers.h"

AMSDMissionGameMode::AMSDMissionGameMode()
{
	// set default pawn class to our Blueprinted character
	// static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	// if (PlayerPawnBPClass.Class != NULL)
	// {
	// 	DefaultPawnClass = PlayerPawnBPClass.Class;
	// }
}

void AMSDMissionGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	//there may actually be stuff here eventually
}
