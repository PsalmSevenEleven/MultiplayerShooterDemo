// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/MSDGameplayAbility.h"
#include "AbilitySystem/MSD_AbilitySet.h"
#include "Engine/DataAsset.h"
#include "MSD_CharacterClassDefinition.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API UMSD_CharacterClassDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	virtual FPrimaryAssetId GetPrimaryAssetId() const override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Models", meta = (AssetBundles = "HubAndMission"))
	TSoftObjectPtr<USkeletalMesh> BodyMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly,Category = "Models", meta = (AssetBundles = "HubAndMission"))
	TSoftObjectPtr<USkeletalMesh> HandsMesh;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Abilities", meta = (AssetBundles = "MissionOnly"))
	TSoftObjectPtr<UMSD_AbilitySet> AbilitySet;

	//no need for bundle tags here, only soft pointers can make use of the bundling system
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Character Stats")
	int32 CapsuleHalfHeight;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Character Stats")
	int32 CapsuleRadius;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Character Stats")
	int32 CameraHeight;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Character Stats")
	int32 MoveSpeedWalking;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Character Stats")
	int32 MoveSpeedRunning;
};
