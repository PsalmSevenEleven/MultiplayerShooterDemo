// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InteractPrompt.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API UInteractPrompt : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;

	
public:
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* PromptText;

	UPROPERTY(meta = (BindWidget))
	class UProgressBar* ProgressBar;
};

