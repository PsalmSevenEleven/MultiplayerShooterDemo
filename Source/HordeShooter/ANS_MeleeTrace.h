// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Kismet/KismetSystemLibrary.h"
#include "ANS_MeleeTrace.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API UANS_MeleeTrace : public UAnimNotifyState
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Trace")
	FVector BoxHalfSize = FVector(10.0f, 10.0f, 10.0f);

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Trace")
	FVector Offset;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Trace")
	FName BoneToTrace;

	
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Debug")
	TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType = EDrawDebugTrace::None;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Debug")
	float DrawTime = 2.0f;

	
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Combat")
	int32 BaseCleaveValue = 0;

	int32 CurrentCleaveValue = BaseCleaveValue;

	
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* CurrentMontage;

	UPROPERTY()
	TArray<AActor*> HitActors;

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
	
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference) override;
};
