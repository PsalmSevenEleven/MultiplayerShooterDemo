
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MSD_ObjectPoolComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HORDESHOOTER_API UMSD_ObjectPoolComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMSD_ObjectPoolComponent();

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AMSD_PooledObject> PooledObjectClass;

	UFUNCTION(BlueprintCallable)
	virtual bool InitializePool();

	int32 PoolSize = 0;
	
	UFUNCTION(BlueprintCallable)
	AMSD_PooledObject* SpawnPooledObject(const FTransform& Transform);

UFUNCTION()
	void OnPooledObjectDespawned(AMSD_PooledObject* PooledObject);
	
protected:

	UPROPERTY()
	TArray<AMSD_PooledObject*> ObjectPool;

	UPROPERTY()
	TArray<int32> SpawnedObjectIndices;
};
