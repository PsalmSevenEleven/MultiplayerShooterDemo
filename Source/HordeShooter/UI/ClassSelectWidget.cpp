// Fill out your copyright notice in the Description page of Project Settings.


#include "ClassSelectWidget.h"

void UClassSelectWidget::InitMenu()
{
	Super::NativeConstruct();
	if(!CharacterMenuViewer)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("CharacterMenuViewer is not set in ClassSelectWidget"));
		return;
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Setting View Target"));
	
	GetOwningPlayer()->SetViewTarget(CharacterMenuViewer);
}

void UClassSelectWidget::NativeDestruct()
{
	GetOwningPlayer()->SetViewTarget(GetOwningPlayerPawn());
	if(CharacterMenuViewer)
	{
		CharacterMenuViewer->Destroy();
	}
	
	Super::NativeDestruct();
}
