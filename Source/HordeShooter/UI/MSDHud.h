// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MSDHud.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API UMSDHud : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	class UImage* Crosshair;

	UPROPERTY(meta = (BindWidget))
	class UImage* DirectionIndicator;
	
	UPROPERTY(meta = (BindWidget))
	class UInteractPrompt* InteractPrompt;

	
	UFUNCTION(BlueprintNativeEvent)
	int UpdateDirectionIndicator(const FVector2D& Direction);

    UPROPERTY()
	FVector2D SmoothedDirection = FVector2D::ZeroVector;
};
