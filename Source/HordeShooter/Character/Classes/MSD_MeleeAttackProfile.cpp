// Fill out your copyright notice in the Description page of Project Settings.


#include "HordeShooter/Character/Classes/MSD_MeleeAttackProfile.h"

FMeleeCombo::FMeleeCombo()
{
	Sequence = TArray<int32>();
}

FPrimaryAssetId UMSD_MeleeAttackProfile::GetPrimaryAssetId() const
{
	return FPrimaryAssetId(FPrimaryAssetType("MeleeAttackProfile"), GetFName());
}
