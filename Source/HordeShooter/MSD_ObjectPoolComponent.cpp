// Fill out your copyright notice in the Description page of Project Settings.


#include "HordeShooter/MSD_ObjectPoolComponent.h"

#include "MSD_PooledObject.h"

UMSD_ObjectPoolComponent::UMSD_ObjectPoolComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

bool UMSD_ObjectPoolComponent::InitializePool()
{
	if(!PooledObjectClass)
	{
		return false;
	}

	UWorld* World = GetWorld();
	if(!World)
	{
		return false;
	}

	for(int32 i = 0; i < PoolSize; i++)
	{
		AMSD_PooledObject* PooledObject = World->SpawnActor<AMSD_PooledObject>(PooledObjectClass, FTransform::Identity);
		if(PooledObject)
		{
			PooledObject->SetIndex(i);
			PooledObject->SetIsActive(false);
			PooledObject->OnDeactivateDelegate.AddDynamic(this, &UMSD_ObjectPoolComponent::OnPooledObjectDespawned);
			ObjectPool.Add(PooledObject);
		}
	}

	return true;
}


AMSD_PooledObject* UMSD_ObjectPoolComponent::SpawnPooledObject(const FTransform& Transform)
{
	for(auto Object : ObjectPool)
	{
		if(Object && !Object->GetIsActive())
		{
			Object->SetActorTransform(Transform);
			Object->Activate();
			SpawnedObjectIndices.Add(Object->GetIndex());
			return Object;
		}
	}

	//if all of the objects in the pool are active, then we need to start looping
	if(SpawnedObjectIndices.Num() > 0)
	{
		//grab the index of first one we spawned (the oldest one),
		int32 SpawnedObjectIndex = SpawnedObjectIndices[0];
		
		//remove it from the list,
		SpawnedObjectIndices.RemoveAt(0);

		AMSD_PooledObject* Object = ObjectPool[SpawnedObjectIndex];

		//hide the associated object (disable collision, etc), 
		Object->Deactivate();

		//move it, 
		Object->SetActorTransform(Transform);

		//reinitialize it, 
		Object->Activate();

		//... and then send it to the back of the list, because it's now our newest spawned object
		SpawnedObjectIndices.Add(Object->GetIndex());
		
		return Object;
		
	}
		
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No available objects in the ObjectPool Attached to %s", *GetOwner()->GetName()));
	return nullptr;
}

void UMSD_ObjectPoolComponent::OnPooledObjectDespawned(AMSD_PooledObject* PooledObject)
{
	if(!PooledObject)
	{
		return;
	}

	SpawnedObjectIndices.Remove(PooledObject->GetIndex());
}

