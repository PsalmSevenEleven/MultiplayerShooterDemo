// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ClassSelectWidget.h"
#include "ClassSelectWidgetHub.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API UClassSelectWidgetHub : public UClassSelectWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;

	virtual void SelectButtonClicked() override;
	
};
