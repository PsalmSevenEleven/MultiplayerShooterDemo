// Fill out your copyright notice in the Description page of Project Settings.


#include "MSDPlayerController.h"

#include "EnhancedInputSubsystems.h"


void AMSDPlayerController::SetupEnhancedInputContext()
{
	UEnhancedInputLocalPlayerSubsystem* EnhancedInputSubsystem = GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();

	if(!EnhancedInputSubsystem || !PlayerInputMappingContext
		|| EnhancedInputSubsystem->HasMappingContext(PlayerInputMappingContext))
	{
		return;
	}

	FModifyContextOptions ModifyOptions = FModifyContextOptions();
	ModifyOptions.bIgnoreAllPressedKeysUntilRelease = true;
	ModifyOptions.bForceImmediately = true;
	ModifyOptions.bNotifyUserSettings = true;
	
	EnhancedInputSubsystem->AddMappingContext(PlayerInputMappingContext, 0, ModifyOptions);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("SetupEnhancedInputContext"));
}

void AMSDPlayerController::SetupHud()
{
	HUD = CreateWidget<UMSDHud>(this, HUDClass);
	if(HUD)
	{
		HUD->AddToViewport();
	}
}
