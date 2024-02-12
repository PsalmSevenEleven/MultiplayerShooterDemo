// Fill out your copyright notice in the Description page of Project Settings.


#include "HordeShooter/GameModes/MSDLobbyGameMode.h"

#include "Blueprint/UserWidget.h"
#include "GameFramework/GameStateBase.h"

void AMSDLobbyGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	//read from the player's save file to get the character class
}

void AMSDLobbyGameMode::StartMission()
{
	GetWorld()->ServerTravel("/Game/Maps/PlaceholderMatchMap?listen");
}


