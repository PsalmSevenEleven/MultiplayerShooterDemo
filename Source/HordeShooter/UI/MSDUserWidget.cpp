// Fill out your copyright notice in the Description page of Project Settings.


#include "MSDUserWidget.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "GameFramework/PlayerState.h"


void UMSDUserWidget::BackOut()
{
	//If there isn't a parent widget we know that this is the top of the hierarchy,
	//so we back out of the menu entirely
	if(!ParentWidget)
	{
		UAbilitySystemBlueprintLibrary::RemoveLooseGameplayTags(GetOwningPlayer()->GetPlayerState<APlayerState>(), FGameplayTagContainer(FGameplayTag::RequestGameplayTag("Player.Status.Menu")));
		GetOwningPlayer()->SetInputMode(FInputModeGameOnly());
	}
	//Otherwise we show the parent
	else
	{
		ParentWidget->SetVisibility(ESlateVisibility::Visible);
	}

	//likely going to change this from destroying to just hiding the widget,
	//I'm 90% sure it's more expensive to create/destroy a widget than to show/hide one
	RemoveFromParent();
}
