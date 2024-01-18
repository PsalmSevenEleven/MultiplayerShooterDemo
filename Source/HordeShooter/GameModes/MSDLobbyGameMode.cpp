// Fill out your copyright notice in the Description page of Project Settings.


#include "HordeShooter/GameModes/MSDLobbyGameMode.h"

#include "GameFramework/GameStateBase.h"

void AMSDLobbyGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	//TODO - This player number is hard-coded, but should be a variable
	//eventually we won't need to use players joining as the catalyst for starting a match though.
	if (GameState.Get()->PlayerArray.Num() == 2)
	{
		UWorld* World = GetWorld();
		if (!World) return;
		bUseSeamlessTravel = true;
		World->ServerTravel(FString("/Game/Maps/PlaceholderMatchMap?listen"));
	}
}
