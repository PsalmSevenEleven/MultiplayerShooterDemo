// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MSDCharacterMenuViewer.h"
#include "MSDUserWidget.h"
#include "Components/ScrollBox.h"
#include "Components/Throbber.h"
#include "HordeShooter/Background_Infrastructure/MSDSaveGame.h"
#include "HordeShooter/Character/Classes/MSD_CharacterClassDefinition.h"
#include "Kismet/GameplayStatics.h"
#include "ClassSelectWidget.generated.h"

/**
 * 
 */
UCLASS()
class HORDESHOOTER_API UClassSelectWidget : public UMSDUserWidget
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class USubclassButtonWidget> SubclassButtonClass;
	
	
	UPROPERTY(meta = (BindWidget))
	class UButton* NextButton;

	UPROPERTY(meta = (BindWidget))
	UButton* PreviousButton;

	UPROPERTY(meta = (BindWidget))
	UButton* SelectClassButton;
	

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess))
	int32 SelectedClassIndex;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess))
	int32 SelectedSubclassIndex;

	UPROPERTY()
	TArray<FPrimaryAssetId> ClassIds;
	
	UPROPERTY()
	UMSD_CharacterClassDefinition* SelectedClassDef;

	UFUNCTION()
	virtual void NextButtonClicked();
	
	UFUNCTION()
	virtual void PreviousButtonClicked();
	
	UFUNCTION()
	virtual void SelectButtonClicked();
	
	void LoadClassCallback(FPrimaryAssetId AssetId);
	void LoadSubclassCallback(FPrimaryAssetId AssetId);

	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

public:

	UFUNCTION(BlueprintCallable)
	virtual void InitMenu();
	

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UThrobber* LoadingThrobber;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UScrollBox* SubclassScrollBox;
	
	UPROPERTY(BlueprintReadWrite)
	UMSDSaveGame* SaveGame;
	
	
	UPROPERTY(BlueprintReadWrite, meta = (ExposeOnSpawn))
	AMSDCharacterMenuViewer* CharacterMenuViewer;

	
	UFUNCTION(BlueprintCallable)
	void LoadClass();
	
	UFUNCTION(BlueprintCallable)
	void LoadSubclass(int32 SubclassIndex);

	void ReconstructSubclassButtons();
};


