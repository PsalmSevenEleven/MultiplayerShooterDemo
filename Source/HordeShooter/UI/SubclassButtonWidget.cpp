// Fill out your copyright notice in the Description page of Project Settings.


#include "SubclassButtonWidget.h"

void USubclassButtonWidget::ButtonPressed()
{
	ParentWidget->LoadSubclass(Index);
}

void USubclassButtonWidget::InitSubclassButton(UClassSelectWidget* Parent, int32 InIndex, FString InName)
{
	ParentWidget = Parent;
	Index = InIndex;
	Name = InName;

	Button->OnPressed.AddDynamic(this, &USubclassButtonWidget::ButtonPressed);
}
