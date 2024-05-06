// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MSD_PooledObject.generated.h"
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPooledObjectDeactivateDelegate, AMSD_PooledObject*, PooledObject);
UCLASS()
class HORDESHOOTER_API AMSD_PooledObject : public AActor
{
	GENERATED_BODY()
	
public:	
	AMSD_PooledObject();

	UFUNCTION(BlueprintCallable)
	virtual void Activate();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnActivate();

	
	UFUNCTION(BlueprintCallable)
	virtual void Deactivate();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnDeactivate();

	
	virtual void SetIsActive(bool bActive) { bIsActive = bActive; }
	bool GetIsActive() const { return bIsActive; }
	
	void SetIndex(int32 NewIndex) { Index = NewIndex; }
	int32 GetIndex() const { return Index; }

	FOnPooledObjectDeactivateDelegate OnDeactivateDelegate;

protected:
	bool bIsActive = false;
	int32 Index = 0;

};
