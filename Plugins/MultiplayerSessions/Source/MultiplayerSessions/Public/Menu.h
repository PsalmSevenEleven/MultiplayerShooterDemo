// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "Menu.generated.h"


/**
 * 
 */
UCLASS()
class MULTIPLAYERSESSIONS_API UMenu : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void MenuSetup(int32 MaxPublicConnections = 4, FString InMatchType = "Campaign", FString InPathToLobbyMap = TEXT("/Game/ThirdPerson/Maps/LobbyDefaultMap"));

protected:
	virtual bool Initialize() override;

	virtual void NativeDestruct() override;

	//callbacks for custom delegates on multiplayer sessions subsystem

	UFUNCTION()
	void OnCreateSession(bool bWasSuccessful);
	
	void OnFindSessions(const TArray<FOnlineSessionSearchResult>& SearchResults, bool bWasSuccessful);
	
	void OnJoinSession(EOnJoinSessionCompleteResult::Type Result);
	
	UFUNCTION()
	void OnDestroySession(bool bWasSuccessful);
	
	UFUNCTION()
	void OnStartSession(bool bWasSuccessful);

private:
	UPROPERTY(meta = (BindWidget))
	class UButton* HostButton;

	UPROPERTY(meta = (BindWidget))
	UButton* JoinButton;

	UFUNCTION()
	void HostButtonClicked();

	UFUNCTION()
	void JoinButtonClicked();

	void MenuTeardown();

	//subsystem for online functionality
	UPROPERTY()
	class UMultiplayerSessionsGISubsystem* MultiplayerSessionsGISubsystem;

	int32 NumPublicConnections = 4;
	FString MatchType = "Campaign";
	FString PathToLobbyMap{TEXT("")};
};
