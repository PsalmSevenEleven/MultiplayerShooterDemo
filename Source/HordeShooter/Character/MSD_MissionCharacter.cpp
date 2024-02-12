// Fill out your copyright notice in the Description page of Project Settings.


#include "MSD_MissionCharacter.h"
#include "MSDPlayerState.h"
#include "Blueprint/UserWidget.h"
#include "HordeShooter/UI/ClassSelectWidget.h"

//At the moment, this is the only real difference between a "mission" character and a "lobby" character.
void AMSD_MissionCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	AMSDPlayerState* PS = GetPlayerState<AMSDPlayerState>();
	if(PS->GetCharacterClass() != "none")
	{
		//Don't need to show a class select window if the player has already selected a class
		//The code below is really only meant to handle a player joining a mission in progress
		return;
	}

	//Make sure the player controller is valid
	APlayerController* PC = Cast<APlayerController>(GetController());
	if(!PC)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Failed to get player controller"));
		return;
	}

	//Make sure we have a widget class to use
	TSubclassOf<UUserWidget> WidgetClass = ClassSelectWidgetClass.LoadSynchronous();
	if(!WidgetClass)
	{
		return;
	}

	//Create and validate the class select widget
	UClassSelectWidget* Widget = CreateWidget<UClassSelectWidget>(PC, WidgetClass);
	if(!Widget)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Failed to create widget"));
		return;
	}
	//Add the widget to the viewport and set the input mode
	Widget->AddToViewport();
	PC->SetInputMode(FInputModeGameAndUI());

	//Create the character class viewer and set the widget's reference to it
	TSubclassOf<AMSDCharacterMenuViewer> ViewerClass = ClassViewerClass.LoadSynchronous();
	if(ViewerClass)
	{
		AMSDCharacterMenuViewer* ClassViewer = GetWorld()->SpawnActor<AMSDCharacterMenuViewer>(ViewerClass, FVector(0,0,100000), FRotator(0,0,0));
		Widget->CharacterMenuViewer = ClassViewer;
		Widget->InitMenu();
	}
}