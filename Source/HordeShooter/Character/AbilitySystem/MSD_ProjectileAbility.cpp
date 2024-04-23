// Fill out your copyright notice in the Description page of Project Settings.


#include "HordeShooter/Character/AbilitySystem/MSD_ProjectileAbility.h"

#include "HordeShooter/Pooled_Objects/MSD_ObjectPoolComponent.h"

void UMSD_ProjectileAbility::OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnAvatarSet(ActorInfo, Spec);

	ProjectilePool = Cast<UMSD_ObjectPoolComponent>(
		ActorInfo->OwnerActor->AddComponentByClass(UMSD_ObjectPoolComponent::StaticClass(),
		false,
		FTransform(FRotator(0,0,0), FVector(0,0,0), FVector(1,1,1)),
		false)
		);

	if(ProjectilePool)
	{
		ProjectilePool->PoolSize = ProjectilePoolSize;
		ProjectilePool->PooledObjectClass = ProjectileClass;
		ProjectilePool->InitializePool();
	}

	
}
