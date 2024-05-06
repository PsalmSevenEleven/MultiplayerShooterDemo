// Fill out your copyright notice in the Description page of Project Settings.


#include "HordeShooter/Pooled_Objects/MSD_PooledObject.h"

AMSD_PooledObject::AMSD_PooledObject()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AMSD_PooledObject::Activate()
{
	bIsActive = true;
	OnActivate();
}

void AMSD_PooledObject::OnActivate_Implementation()
{
	
}

void AMSD_PooledObject::Deactivate()
{
	bIsActive = false;
	OnDeactivate();
	OnDeactivateDelegate.Broadcast(this);
}

void AMSD_PooledObject::OnDeactivate_Implementation()
{
	
}

