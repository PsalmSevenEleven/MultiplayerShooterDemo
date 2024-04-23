// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HordeShooter/Character/AbilitySystem/MSDGameplayAbility.h"
#include "MSD_ProjectileAbility.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API UMSD_ProjectileAbility : public UMSDGameplayAbility
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	TSubclassOf<class AMSD_PooledObject> ProjectileClass;

	//Represents the number of times the ability can be used before 'reloading', not necessarily the number of projectiles being created
	//If this is 0 or less, it will continue to fire until the player either releases the fire key or runs out of mana
	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	int32 MagazineSize;

	//Decals for environmental hits
	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	TSubclassOf<AMSD_PooledObject> DecalClass;

	
	//This will be the pool size for both the projectiles and the hit decals, no need to split those values
	UPROPERTY(EditDefaultsOnly, Category = "Object Pooling")
	int32 ProjectilePoolSize;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Object Pooling", meta = (AllowPrivateAccess))
	class UMSD_ObjectPoolComponent* ProjectilePool;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Object Pooling", meta = (AllowPrivateAccess))
	UMSD_ObjectPoolComponent* DecalPool;
	

	virtual void OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
};
