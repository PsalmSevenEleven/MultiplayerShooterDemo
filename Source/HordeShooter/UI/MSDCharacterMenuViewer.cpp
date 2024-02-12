// Fill out your copyright notice in the Description page of Project Settings.


#include "MSDCharacterMenuViewer.h"

// Sets default values
AMSDCharacterMenuViewer::AMSDCharacterMenuViewer()
{
	PrimaryActorTick.bCanEverTick = false;

	CharacterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
	CharacterMesh->Mobility = EComponentMobility::Movable;
	RootComponent = CharacterMesh;
	
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(RootComponent);
	Camera->Mobility = EComponentMobility::Movable;
}


