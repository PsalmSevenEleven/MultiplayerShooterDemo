// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MSDSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API UMSDSaveGame : public USaveGame
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	int32 SelectedClassIndex;

	//WARNING - This will need to be updated to contain at least the same number of 0s as the number of classes in the game
	UPROPERTY(BlueprintReadWrite)
	TArray<int32> SelectedSubclassIndices = {0,0,0,0};
	
};
