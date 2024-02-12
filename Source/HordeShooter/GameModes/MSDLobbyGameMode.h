// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MSDLobbyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API AMSDLobbyGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void StartMission();
};
