// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ClassSelectWidget.h"
#include "ClassSelectWidgetEntry.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API UClassSelectWidgetEntry : public UClassSelectWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;

	virtual void SelectButtonClicked() override;
};
