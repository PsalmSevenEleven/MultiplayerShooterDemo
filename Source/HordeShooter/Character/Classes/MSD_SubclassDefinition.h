// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Engine/DataAsset.h"
#include "HordeShooter/Character/AbilitySystem/MSD_AbilitySet.h"
#include "MSD_SubclassDefinition.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API UMSD_SubclassDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	virtual FPrimaryAssetId GetPrimaryAssetId() const override;

	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Abilities", meta = (AssetBundles = "MissionOnly"))
	TSoftObjectPtr<UMSD_AbilitySet> AbilitySet;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Models", meta = (AssetBundles = "HubAndMission"))
	TSoftObjectPtr<USkeletalMesh> BodyMesh;

	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly,Category = "Models", meta = (AssetBundles = "MissionOnly"))
	TSoftObjectPtr<USkeletalMesh> HandsMesh;

	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation", meta = (AssetBundles = "HubOnly"))
	TSoftObjectPtr<UAnimBlueprint> ClassViewerAnimBlueprint;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation", meta = (AssetBundles = "MissionOnly"))
	TSoftObjectPtr<UAnimBlueprint> BodyAnimBlueprint;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation", meta = (AssetBundles = "MissionOnly"))
	TSoftObjectPtr<UAnimBlueprint> HandsAnimBlueprint;
	
};

