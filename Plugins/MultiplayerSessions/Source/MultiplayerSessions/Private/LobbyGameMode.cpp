// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGameMode.h"

#include "GameFramework/GameStateBase.h"
#include "GameFramework/PlayerState.h"

void ALobbyGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	if(GameState)
	{
		int32 NumPlayers = GameState.Get()->PlayerArray.Num();

		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Red, FString::Printf(TEXT("NumPlayers: %d"), NumPlayers));

		FString NewPlayerName = NewPlayer->PlayerState->GetPlayerName();
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("%s has joined!"), *NewPlayerName));

	}
}

void ALobbyGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);

	if(GameState)
	{
		FString ExitingName = Exiting->PlayerState->GetPlayerName();
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("%s has joined!"), *ExitingName));
	}

}
