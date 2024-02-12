// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MSDCharacter.h"
#include "HordeShooter/UI/MSDCharacterMenuViewer.h"
#include "MSD_MissionCharacter.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API AMSD_MissionCharacter : public AMSDCharacter
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSoftClassPtr<UUserWidget> ClassSelectWidgetClass;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSoftClassPtr<AMSDCharacterMenuViewer> ClassViewerClass;

	virtual void OnRep_PlayerState() override;
	
};


