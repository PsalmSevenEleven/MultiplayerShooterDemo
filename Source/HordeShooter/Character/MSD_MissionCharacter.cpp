// Fill out your copyright notice in the Description page of Project Settings.


#include "MSD_MissionCharacter.h"

#include "Blueprint/UserWidget.h"
#include "HordeShooter/UI/ClassSelectWidget.h"

void AMSD_MissionCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	APlayerController* PC = Cast<APlayerController>(GetController());
	if(!PC)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Failed to get player controller"));
		return;
	}
	
	TSubclassOf<UUserWidget> WidgetClass = ClassSelectWidgetClass.LoadSynchronous();
	
	if(!WidgetClass)
	{
		return;
	}
	
	UClassSelectWidget* Widget = CreateWidget<UClassSelectWidget>(PC, WidgetClass);
	if(!Widget)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Failed to create widget"));
		return;
	}
	Widget->AddToViewport();
	
	PC->SetInputMode(FInputModeGameAndUI());
	
	TSubclassOf<AMSDCharacterMenuViewer> ViewerClass = ClassViewerClass.LoadSynchronous();
	
	if(ViewerClass)
	{
		AMSDCharacterMenuViewer* ClassViewer = GetWorld()->SpawnActor<AMSDCharacterMenuViewer>(ViewerClass, FVector(0,0,100000), FRotator(0,0,0));
		Widget->CharacterMenuViewer = ClassViewer;
		Widget->InitMenu();
	}
}