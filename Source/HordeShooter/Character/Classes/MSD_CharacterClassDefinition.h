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
	
	//Display name for class select screens
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FString DisplayName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FPrimaryAssetId PrimaryAssetId;
};

//The set of variables that defines a character class.
//When you make a new one of these, make sure to add it to the character select widgets' class arrays.
UCLASS()
class HORDESHOOTER_API UMSD_CharacterClassDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	virtual FPrimaryAssetId GetPrimaryAssetId() const override;

	//The following two meshes are only used in the hub and do not change based on subclass.
	//The body mesh, only visible to the server and other clients.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Models", meta = (AssetBundles = "HubOnly"))
	TSoftObjectPtr<USkeletalMesh> HubBodyMesh;

	//The hands mesh, only visible to the owning client.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly,Category = "Models", meta = (AssetBundles = "HubOnly"))
	TSoftObjectPtr<USkeletalMesh> HubHandsMesh;

	
	//Default abilities for the class, regardless of subclass
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Abilities", meta = (AssetBundles = "MissionOnly"))
	TSoftObjectPtr<UMSD_AbilitySet> AbilitySet;

	//The effect to set the class's attributes
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Abilities", meta = (AssetBundles = "HubAndMission"))
	TSoftClassPtr<UGameplayEffect> AttributesEffect;

	
	//Maybe eventually I'll swap these over to FStrings for a tiny memory optimization
	//but at the moment the extra complexity isn't worth it,
	//not to mention the added pitfalls of entering strings wrong
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Abilities")
	TArray<FMSDPrimaryAssetID> Subclasses;

	//No need for bundle tags here, only soft pointers can make use of the bundling system
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Character Setup")
	int32 CapsuleHalfHeight = 96;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Character Setup")
	int32 CapsuleRadius = 34;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Character Setup")
	int32 CameraHeight = 64;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Character Setup")
	FVector HandMeshLocalPosition = FVector(70,0,-20);


	//TODO - remove these, they should be handled by the attributes effect to allow for easier slowing or quickening effects
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Character Stats")
	int32 MoveSpeedWalking = 400;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Character Stats")
	int32 MoveSpeedRunning = 700;
};
