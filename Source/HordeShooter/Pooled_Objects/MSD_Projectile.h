// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NiagaraSystem.h"
#include "HordeShooter/Pooled_Objects/MSD_PooledObject.h"
#include "MSD_Projectile.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API AMSD_Projectile : public AMSD_PooledObject
{
	GENERATED_BODY()

	AMSD_Projectile();

	UFUNCTION()
	void CollisionCallback(UPrimitiveComponent* HitComponent,
	AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	
	UPROPERTY()
	USceneComponent* SceneComponent;

	FTimerHandle LifetimeHandle;
	
	UPROPERTY(EditDefaultsOnly, Category = "Visuals")
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Visuals")
	UNiagaraComponent* ParticleSystem;
	
	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
	class USphereComponent* CollisionComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
	int32 Lifetime = 5;

	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
	int32 Velocity = 1000;

	

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Projectile")
	class UProjectileMovementComponent* ProjectileMovementComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Projectile")
	int32 Damage = 10;
	
	virtual void Activate() override;
	virtual void Deactivate() override;

	UFUNCTION(BlueprintImplementableEvent)
	void OnProjectileHit(AActor* OtherActor, const FHitResult& SweepResult);
};