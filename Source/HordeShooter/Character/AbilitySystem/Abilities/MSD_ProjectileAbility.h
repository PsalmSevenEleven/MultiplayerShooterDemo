// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HordeShooter/Character/AbilitySystem/Abilities/MSDGameplayAbility.h"
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

public:
	virtual void OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	
};
