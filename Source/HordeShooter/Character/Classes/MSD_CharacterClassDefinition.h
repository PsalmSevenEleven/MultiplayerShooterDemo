// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HordeShooter/Character/AbilitySystem/MSD_AbilitySet.h"
#include "Engine/DataAsset.h"
#include "MSD_CharacterClassDefinition.generated.h"


//This struct primarily exists to let me access a display name without having to load stuff
USTRUCT(Blueprintable)
struct HORDESHOOTER_API FMSDPrimaryAssetID
{
	GENERATED_BODY()

	FMSDPrimaryAssetID();
	FMSDPrimaryAssetID(FString InDisplayName, FPrimaryAssetId InPrimaryAssetId);
	

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FString DisplayName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FPrimaryAssetId PrimaryAssetId;
};

UCLASS()
class HORDESHOOTER_API UMSD_CharacterClassDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	virtual FPrimaryAssetId GetPrimaryAssetId() const override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Models", meta = (AssetBundles = "HubOnly"))
	TSoftObjectPtr<USkeletalMesh> HubBodyMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly,Category = "Models", meta = (AssetBundles = "HubOnly"))
	TSoftObjectPtr<USkeletalMesh> HubHandsMesh;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Abilities", meta = (AssetBundles = "MissionOnly"))
	TSoftObjectPtr<UMSD_AbilitySet> AbilitySet;

	//maybe eventually I'll swap these over to FStrings for a tiny memory optimization,
	//but at the moment the extra complexity isn't worth it
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Abilities")
	TArray<FMSDPrimaryAssetID> Subclasses;

	//no need for bundle tags here, only soft pointers can make use of the bundling system
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Character Setup")
	int32 CapsuleHalfHeight = 96;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Character Setup")
	int32 CapsuleRadius = 34;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Character Setup")
	int32 CameraHeight = 64;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Character Setup")
	FVector HandMeshLocalPosition = FVector(70,0,-20);
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Character Stats")
	int32 MoveSpeedWalking = 400;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Character Stats")
	int32 MoveSpeedRunning = 700;
};
