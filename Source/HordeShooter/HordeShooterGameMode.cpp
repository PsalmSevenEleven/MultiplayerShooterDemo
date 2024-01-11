// Copyright Epic Games, Inc. All Rights Reserved.

#include "HordeShooterGameMode.h"
#include "MSDCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHordeShooterGameMode::AHordeShooterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
