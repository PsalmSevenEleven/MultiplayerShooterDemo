// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MSDUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API UMSDUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	//At the moment, this function is the only reason for this class's existence
	//It just allows me to have any widget respond to the pause key being pressed
	UFUNCTION(BlueprintCallable)
	virtual void BackOut();
	
	//A reference to the parent widget, typically for easy access when backing out of this one
	UPROPERTY(BlueprintReadWrite, meta = (ExposeOnSpawn))
	UMSDUserWidget* ParentWidget = nullptr;
	
};
