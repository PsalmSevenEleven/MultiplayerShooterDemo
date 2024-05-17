// Fill out your copyright notice in the Description page of Project Settings.


#include "HordeShooter/ANS_MeleeTrace.h"

#include "GameFramework/Character.h"
#include "Interfaces/CombatInterface.h"
#include "Kismet/KismetMathLibrary.h"

void UANS_MeleeTrace::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	CurrentCleaveValue = BaseCleaveValue;
	HitActors.Reset();
}

void UANS_MeleeTrace::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyTick(MeshComp, Animation, FrameDeltaTime, EventReference);

	UWorld * World = MeshComp->GetWorld();
	FHitResult HitResult;
	FTransform BoneTransform = MeshComp->GetBoneTransform(BoneToTrace);
	FVector TraceLocation = UKismetMathLibrary::TransformLocation(BoneTransform, Offset);

	bool SuccessfulHit = UKismetSystemLibrary::BoxTraceSingle(World, TraceLocation, TraceLocation, BoxHalfSize, BoneTransform.GetRotation().Rotator(), TraceTypeQuery2, false, HitActors, DrawDebugType, HitResult, true, FLinearColor::Red, FLinearColor::Green, DrawTime);	

	if (!SuccessfulHit
		|| !HitResult.GetActor()
		|| !HitResult.GetActor()->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()))
	{
		return;
	}

	HitActors.Add(HitResult.GetActor());
	CurrentCleaveValue -= ICombatInterface::Execute_GetCleaveResistance(HitResult.GetActor());

	if (CurrentCleaveValue > 0)
	{
		return;
	}

	FName TargetSection = FName(MeshComp->GetAnimInstance()->Montage_GetCurrentSection(CurrentMontage).ToString() + "Bonk");
	MeshComp->GetAnimInstance()->Montage_JumpToSection(TargetSection, CurrentMontage);
}
