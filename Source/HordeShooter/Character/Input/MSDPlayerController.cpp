// Fill out your copyright notice in the Description page of Project Settings.


#include "MSDPlayerController.h"

#include "EnhancedInputSubsystems.h"
#include "HordeShooter/Character/MSDPlayerState.h"
#include "HordeShooter/Character/AbilitySystem/MSD_AbilitySystemComponent.h"


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

void AMSDPlayerController::PostProcessInput(const float DeltaTime, const bool bGamePaused)
{
	Super::PostProcessInput(DeltaTime, bGamePaused);

	if(UMSD_AbilitySystemComponent* AbilitySystemComponent = Cast<UMSD_AbilitySystemComponent>(GetAbilitySystemComponent()))
	{
		AbilitySystemComponent->HandleQueuedAbilities();
	}
}

void AMSDPlayerController::SetupHud()
{
	HUD = CreateWidget<UMSDHud>(this, HUDClass);
	if(HUD)
	{
		HUD->AddToViewport();
	}
}

UAbilitySystemComponent* AMSDPlayerController::GetAbilitySystemComponent() const
{
	return GetPlayerState<AMSDPlayerState>()->GetAbilitySystemComponent();
}

void AMSDPlayerController::SetHudVisibility_Implementation(ESlateVisibility Visibility)
{
	if(HUD)
	{
		HUD->SetVisibility(Visibility);
	}
}

FVector2D AMSDPlayerController::GetMouseDirection_Implementation()
{
	return LastMouseDirection;
}
