// Fill out your copyright notice in the Description page of Project Settings.


#include "ClassSelectWidget.h"
#include "SubclassButtonWidget.h"
#include "Components/Button.h"
#include "Engine/AssetManager.h"
#include "HordeShooter/Character/Classes/MSD_SubclassDefinition.h"
#include "HordeShooter/Interfaces/PlayerInterface.h"

void UClassSelectWidget::InitMenu()
{
	if(!CharacterMenuViewer)
	{
		return;
	}
	GetOwningPlayer()->SetViewTarget(CharacterMenuViewer);
	
}

void UClassSelectWidget::LoadClass()
{
	if(CharacterMenuViewer)
	{
		CharacterMenuViewer->CharacterMesh->SetVisibility(false);
	}

	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if(!AssetManager)
	{
		return;
	}

	AssetManager->LoadPrimaryAsset(ClassIds[SelectedClassIndex], 
		TArray<FName>({FName("HubAndMission"), FName("HubOnly")}),
		FStreamableDelegate::CreateUObject(this, &UClassSelectWidget::LoadClassCallback, ClassIds[SelectedClassIndex]));

	LoadingThrobber->SetVisibility(ESlateVisibility::Visible);
}

void UClassSelectWidget::NextButtonClicked()
{
	SelectedClassIndex++;
	if(SelectedClassIndex >= ClassIds.Num())
	{
		SelectedClassIndex = 0;
	}
	LoadClass();
}

void UClassSelectWidget::PreviousButtonClicked()
{
	SelectedClassIndex--;
	if(SelectedClassIndex < 0)
	{
		SelectedClassIndex = ClassIds.Num() - 1;
	}
	LoadClass();
}

void UClassSelectWidget::SelectButtonClicked()
{
	//This is for the child classes to implement
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("SelectButtonClicked not implemented"));
}

void UClassSelectWidget::LoadClassCallback(FPrimaryAssetId AssetId)
{
	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if(!AssetManager)
	{
		return;
	}

	SelectedClassDef = AssetManager->GetPrimaryAssetObject<UMSD_CharacterClassDefinition>(AssetId);
	if(!SelectedClassDef)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Failed to load class definition"));
		return;
	}
	
	int32 SubclassIndex = SaveGame->SelectedSubclassIndices[SelectedClassIndex];
	LoadSubclass(SubclassIndex);

	ReconstructSubclassButtons();

}


void UClassSelectWidget::LoadSubclass(int32 SubclassIndex)
{
	if(CharacterMenuViewer)
	{
		CharacterMenuViewer->CharacterMesh->SetVisibility(false);
	}
	
	LoadingThrobber->SetVisibility(ESlateVisibility::Visible);

	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if(!AssetManager)
	{
		return;
	}

	SelectedSubclassIndex = SubclassIndex;
	
	AssetManager->LoadPrimaryAsset(SelectedClassDef->Subclasses[SubclassIndex].PrimaryAssetId, 
		TArray<FName>({FName("HubAndMission"), FName("HubOnly")}),
		FStreamableDelegate::CreateUObject(this, &UClassSelectWidget::LoadSubclassCallback, SelectedClassDef->Subclasses[SubclassIndex].PrimaryAssetId));
}

void UClassSelectWidget::ReconstructSubclassButtons()
{
	SubclassScrollBox->ClearChildren();
	for(int32 i = 0; i < SelectedClassDef->Subclasses.Num(); i++)
	{
		USubclassButtonWidget* NewButton = CreateWidget<USubclassButtonWidget>(this, SubclassButtonClass);
		NewButton->InitSubclassButton(this, i, SelectedClassDef->Subclasses[i].DisplayName);
		SubclassScrollBox->AddChild(NewButton);
		NewButton->SetPadding(FMargin(10,10));
	}
}


void UClassSelectWidget::LoadSubclassCallback(FPrimaryAssetId AssetId)
{
	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if(!AssetManager)
	{
		return;
	}

	UMSD_SubclassDefinition* SubclassDef = AssetManager->GetPrimaryAssetObject<UMSD_SubclassDefinition>(AssetId);

	USkeletalMesh* BodyMesh = SubclassDef->BodyMesh.LoadSynchronous();
	CharacterMenuViewer->CharacterMesh->SetSkeletalMeshAsset(BodyMesh);
	CharacterMenuViewer->CharacterMesh->SetVisibility(true);
	
	LoadingThrobber->SetVisibility(ESlateVisibility::Collapsed);
}


void UClassSelectWidget::NativeConstruct()
{
	Super::NativeConstruct();

	NextButton->OnClicked.AddDynamic(this, &UClassSelectWidget::NextButtonClicked);
	PreviousButton->OnClicked.AddDynamic(this, &UClassSelectWidget::PreviousButtonClicked);
	SelectClassButton->OnClicked.AddDynamic(this, &UClassSelectWidget::SelectButtonClicked);
	
	IPlayerInterface::Execute_SetHudVisibility(GetOwningPlayer(), ESlateVisibility::Collapsed);

	SaveGame = Cast<UMSDSaveGame>(UGameplayStatics::LoadGameFromSlot("SaveGame", 0));

	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if(!AssetManager)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("AssetManager not initialized"));
		return;
	}

	TArray<FAssetData> AssetData;
	if(!AssetManager->GetPrimaryAssetDataList(FPrimaryAssetType("CharacterClassDefinition"), AssetData))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No assets found"));
		return;
	}

	ClassIds.Reset();
	for (const FAssetData& Asset : AssetData)
	{
		FPrimaryAssetType Type = FPrimaryAssetType("CharacterClassDefinition");
		FPrimaryAssetId ID = FPrimaryAssetId(Type, Asset.AssetName);
		ClassIds.Add(ID);
	}
}

void UClassSelectWidget::NativeDestruct()
{
	if(GetOwningPlayer() && GetOwningPlayerPawn())
	{
		GetOwningPlayer()->SetViewTarget(GetOwningPlayerPawn());
		GetOwningPlayer()->SetInputMode(FInputModeGameOnly());
		GetOwningPlayer()->bShowMouseCursor = false;
	}
	
	if(CharacterMenuViewer)
	{
		CharacterMenuViewer->Destroy();
	}
	
	IPlayerInterface::Execute_SetHudVisibility(GetOwningPlayer(), ESlateVisibility::Visible);
	
	Super::NativeDestruct();
}
