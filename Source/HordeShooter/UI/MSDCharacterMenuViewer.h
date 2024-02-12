// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Actor.h"
#include "MSDCharacterMenuViewer.generated.h"

UCLASS()
class HORDESHOOTER_API AMSDCharacterMenuViewer : public AActor
{
	GENERATED_BODY()

	AMSDCharacterMenuViewer();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* Camera;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* CharacterMesh;
};
