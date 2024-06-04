// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MSD_MeleeAttackProfile.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct FMeleeCombo
{
	GENERATED_BODY()

	FMeleeCombo();
	
	//May eventually have other info that needs to be stored,
	//but for now this struct just exists to allow me to store an array of arrays
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<int32> Sequence;
};
/**
 * 
 */
UCLASS()
class HORDESHOOTER_API UMSD_MeleeAttackProfile : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	
	virtual FPrimaryAssetId GetPrimaryAssetId() const override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<int32> Segments;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FMeleeCombo> Combos;
};
