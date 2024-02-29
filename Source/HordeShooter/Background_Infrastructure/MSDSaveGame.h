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

	//Please use SetClass to set these values
	UPROPERTY(SaveGame)
	int32 SelectedClassIndex;

	//Please use SetClass to set these values
	UPROPERTY(SaveGame)
	FString SelectedClassName;

public:

	//While I am the only developer on this project, I can also be relied upon to forget little details like this.
	//Therefore, I have made sure that I can't do anything dumb and cause myself headaches in the future.
	//Technically, this also somewhat future-proofs the code for if a clerical error adds a couple of 0s
	//to my bank account and I can afford help
	
	//This function primarily exists to prevent bugs.
	//The index and name need to line up, so I made them private and you can only set one if you also set the other.
	void SetClass(int32 Index, FString Name);

	int32 GetClassIndex();
	FString GetClassName();
	
	
	//WARNING - This will need to be updated to contain at least the same number of 0s as the number of classes in the game
	//When reading/writing to this array, maybe just include some checks to insure the index is valid and, if not,
	//add 0s to the array until it is.
	//Stuff to think about later
	UPROPERTY(BlueprintReadWrite, SaveGame)
	TArray<int32> SelectedSubclassIndices = {0,0,0,0};
	
};
