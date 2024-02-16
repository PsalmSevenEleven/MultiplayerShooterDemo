// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ClassSelectWidget.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "SubclassButtonWidget.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API USubclassButtonWidget : public UUserWidget
{
	GENERATED_BODY()

	
	UPROPERTY(meta = (BindWidget))
	UButton* Button;

	UFUNCTION()
	void ButtonPressed();
	
	int32 Index;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess))
	FString Name;
	
	UPROPERTY(meta = (AllowPrivateAccess))
	UClassSelectWidget* ParentWidget;

public:
	UFUNCTION(BlueprintCallable)
	void InitSubclassButton(UClassSelectWidget* Parent, int32 InIndex, FString InName);
	
};


