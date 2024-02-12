// Fill out your copyright notice in the Description page of Project Settings.


#include "HordeShooter/GameModes/MSDLobbyGameMode.h"

#include "Blueprint/UserWidget.h"
#include "GameFramework/GameStateBase.h"

void AMSDLobbyGameMode::StartMission()
{
	//probably going to have multiple maps eventually, but for now I'll just use this one
	GetWorld()->ServerTravel("/Game/Maps/PlaceholderMatchMap?listen");
}


