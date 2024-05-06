// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HordeShooter/Character/AbilitySystem/Abilities/MSD_ProjectileAbility.h"
#include "MSD_PrimaryFireAbility.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API UMSD_PrimaryFireAbility : public UMSD_ProjectileAbility
{
	GENERATED_BODY()

	UMSD_PrimaryFireAbility();


public:

	//Represents the number of times the ability can be used before 'reloading', not necessarily the number of projectiles being created
	//If this is 0 or less, it will continue to fire until the player either releases the fire key or runs out of mana
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability", meta = (AllowPrivateAccess))
	int32 MagazineSize;
	
	//How much Mana is required to reload a completely empty magazine
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability", meta = (AllowPrivateAccess))
	float ReloadCost;

	//This montage should include the firing and reload animations,
	//and we can just use different sections instead of storing two separate montages.
	//If we decide later that we should have animations for failed firing or reloading,
	//this montage should include those too
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability", meta = (AllowPrivateAccess))
	UAnimMontage* Montage;

	//Use this to set the player's current and max rounds.
	//Otherwise the player has to reload before they can fire for the first time in-game
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability", meta = (AllowPrivateAccess))
	TSubclassOf<UGameplayEffect> OnGrantedEffect;


	virtual void OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
};
