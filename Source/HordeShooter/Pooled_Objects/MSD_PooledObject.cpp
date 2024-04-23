// Fill out your copyright notice in the Description page of Project Settings.


#include "HordeShooter/Pooled_Objects/MSD_PooledObject.h"

AMSD_PooledObject::AMSD_PooledObject()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AMSD_PooledObject::Activate()
{
	bIsActive = true;
}

void AMSD_PooledObject::Deactivate()
{
	bIsActive = false;
	OnDeactivateDelegate.Broadcast(this);
}

