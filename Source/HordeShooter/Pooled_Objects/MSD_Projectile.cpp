// Fill out your copyright notice in the Description page of Project Settings.


#include "HordeShooter/Pooled_Objects/MSD_Projectile.h"

#include "NiagaraComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

AMSD_Projectile::AMSD_Projectile()
{
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComponent;
	
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetupAttachment(RootComponent);

	ParticleSystem = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
	CollisionComponent->SetupAttachment(RootComponent);

	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AMSD_Projectile::CollisionCallback);
}

void AMSD_Projectile::CollisionCallback(UPrimitiveComponent* HitComponent,
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor->GetClass() == GetClass()
		|| OtherActor == GetInstigator())
	{
		return;
	}
	Deactivate();
	OnProjectileHit(OtherActor, SweepResult);
}

void AMSD_Projectile::Activate()
{
	Super::Activate();
	
	MeshComponent->SetVisibility(true);
	ParticleSystem->ActivateSystem();
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	
	ProjectileMovementComponent->SetUpdatedComponent(GetRootComponent());
	ProjectileMovementComponent->SetVelocityInLocalSpace(FVector(Velocity,0,0));
	ProjectileMovementComponent->Activate();
	
	GetWorld()->GetTimerManager().SetTimer(LifetimeHandle, this, &AMSD_Projectile::Deactivate, Lifetime, false);
}

void AMSD_Projectile::Deactivate()
{
	Super::Deactivate();

	MeshComponent->SetVisibility(false);
	ParticleSystem->Deactivate();
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	ProjectileMovementComponent->SetUpdatedComponent(nullptr);
	ProjectileMovementComponent->SetVelocityInLocalSpace(FVector(0,0,0));
	ProjectileMovementComponent->Deactivate();

	GetWorld()->GetTimerManager().ClearTimer(LifetimeHandle);
}
