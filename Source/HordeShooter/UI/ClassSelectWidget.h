// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MSDCharacterMenuViewer.h"
#include "Blueprint/UserWidget.h"
#include "ClassSelectWidget.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API UClassSelectWidget : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	class UButton* NextButton;

	UPROPERTY(meta = (BindWidget))
	UButton* PreviousButton;

	UPROPERTY(meta = (BindWidget))
	UButton* SelectClassButton;

	

	virtual void NativeDestruct() override;

public:

	UFUNCTION(BlueprintCallable)
	virtual void InitMenu();
	
	UPROPERTY(BlueprintReadWrite, meta = (ExposeOnSpawn))
	AMSDCharacterMenuViewer* CharacterMenuViewer;

	
	
};
