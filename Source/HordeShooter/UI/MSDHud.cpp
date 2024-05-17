// Fill out your copyright notice in the Description page of Project Settings.


#include "MSDHud.h"

#include "Components/Image.h"
#include "Kismet/KismetMathLibrary.h"

int UMSDHud::UpdateDirectionIndicator_Implementation(const FVector2D& Direction)
{
	//Smoothing because the twitchy indicator bothers me
	SmoothedDirection = UKismetMathLibrary::Vector2DInterpTo_Constant(SmoothedDirection, Direction, GetWorld()->GetDeltaSeconds(), Direction.Length() * 5);
	
	//First find the angle of the direction vector
	float Angle = UKismetMathLibrary::Atan2(-Direction.Y, -Direction.X);
	Angle = FMath::RadiansToDegrees(Angle);
	
	 //Yes, it's supposed to be 630.
	 //Angles can be negative, so we need to add 360 to make sure it's positive,
	 //then 270 more to add a quarter turn and orient the 'grid' correctly. 
	Angle += 630;
	
	//Remove unnecessary full rotations
	Angle = FMath::TruncToInt(Angle) % 360;
	
	//Divide to figure out how many sixths of a rotation we have achieved
	Angle /= 60.f;
	//Any angle less than 60 will be 0 sixths,
	//so add one so that the range doesn't end up zero-indexed
	Angle = FMath::TruncToInt(Angle) + 1;
	
	//Set to increments of 60 degrees
	Angle *= 60.f;

	Angle = UKismetMathLibrary::FInterpTo_Constant(DirectionIndicator->GetRenderTransformAngle(), Angle - 30.f, GetWorld()->GetDeltaSeconds(), 1000.f);
	
	DirectionIndicator->SetRenderTransformAngle(Angle);
	return Angle;
}
