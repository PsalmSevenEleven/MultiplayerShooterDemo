// Fill out your copyright notice in the Description page of Project Settings.


#include "Menu.h"

#include "MultiplayerSessionsGISubsystem.h"
#include "OnlineSessionSettings.h"
#include "Components/Button.h"

void UMenu::MenuSetup(int32 MaxPublicConnections, FString InMatchType, FString InPathToLobbyMap)
{
	PathToLobbyMap = FString::Printf(TEXT("%s?listen"), *InPathToLobbyMap);
	NumPublicConnections = MaxPublicConnections;
	MatchType = InMatchType;
	AddToViewport();
	SetVisibility(ESlateVisibility::Visible);
	SetIsFocusable(true);

	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* PlayerController = World->GetFirstPlayerController();
		if (PlayerController)
		{
			FInputModeUIOnly InputMode;
			InputMode.SetWidgetToFocus(TakeWidget());
			InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			
			PlayerController->SetInputMode(InputMode);
			PlayerController->SetShowMouseCursor(true);
		}
	}

	UGameInstance* GameInstance = GetGameInstance();
	if (GameInstance)
	{
		MultiplayerSessionsGISubsystem = GameInstance->GetSubsystem<UMultiplayerSessionsGISubsystem>();
	}

	if(MultiplayerSessionsGISubsystem)
	{
		MultiplayerSessionsGISubsystem->MultiplayerOnCreateSessionCompleteDelegate.AddDynamic(this, &UMenu::OnCreateSession);
		MultiplayerSessionsGISubsystem->MultiplayerOnFindSessionsCompleteDelegate.AddUObject(this, &UMenu::OnFindSessions);
		MultiplayerSessionsGISubsystem->MultiplayerOnJoinSessionCompleteDelegate.AddUObject(this, &UMenu::OnJoinSession);
		MultiplayerSessionsGISubsystem->MultiplayerOnDestroySessionCompleteDelegate.AddDynamic(this, &UMenu::OnDestroySession);
		MultiplayerSessionsGISubsystem->MultiplayerOnStartSessionCompleteDelegate.AddDynamic(this, &UMenu::OnStartSession);
	}
}

bool UMenu::Initialize()
{
	if(!Super::Initialize())
	{
		return false;
	}
	
	if(HostButton)
	{
		HostButton->OnClicked.AddDynamic(this, &UMenu::HostButtonClicked);
	}
	if(JoinButton)
	{
		JoinButton->OnClicked.AddDynamic(this, &UMenu::JoinButtonClicked);
	}
	
	return true;
}

void UMenu::NativeDestruct()
{
	MenuTeardown();
	Super::NativeDestruct();
}

void UMenu::OnCreateSession(bool bWasSuccessful)
{
	if(bWasSuccessful)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("Session Created Successfully")));
		UWorld* World = GetWorld();
		if(World)
		{
			World->ServerTravel(FString(PathToLobbyMap));
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Session Creation Failed")));
	}
}

void UMenu::OnFindSessions(const TArray<FOnlineSessionSearchResult>& SearchResults, bool bWasSuccessful)
{
	if(MultiplayerSessionsGISubsystem == nullptr)
	{
		return;
	}
	
	for (auto Result: SearchResults)
	{
		FString ID = Result.GetSessionIdStr();
		FString User = Result.Session.OwningUserName;
		FString SettingsMatchType;
		Result.Session.SessionSettings.Get(FName("MatchType"), SettingsMatchType);

		if (SettingsMatchType == MatchType)
		{
			MultiplayerSessionsGISubsystem->JoinSession(Result);
			return;
		}
	}
	
}

void UMenu::OnJoinSession(EOnJoinSessionCompleteResult::Type Result)
{
	IOnlineSubsystem* OnlineSubsystem = IOnlineSubsystem::Get();
	if(OnlineSubsystem)
	{
		IOnlineSessionPtr SessionInterface = OnlineSubsystem->GetSessionInterface();
		if(SessionInterface.IsValid())
		{
			FString Address;
			SessionInterface->GetResolvedConnectString(NAME_GameSession, Address);

			APlayerController* PlayerController = GetGameInstance()->GetFirstLocalPlayerController();
			if(PlayerController)
			{
				PlayerController->ClientTravel(Address, ETravelType::TRAVEL_Absolute);
			}
		}
	}
}

void UMenu::OnDestroySession(bool bWasSuccessful)
{
}

void UMenu::OnStartSession(bool bWasSuccessful)
{
}

void UMenu::HostButtonClicked()
{
	if(MultiplayerSessionsGISubsystem)
	{
		
		MultiplayerSessionsGISubsystem->CreateSession(NumPublicConnections, MatchType);
	}
}

void UMenu::JoinButtonClicked()
{
	if(MultiplayerSessionsGISubsystem)
	{
		MultiplayerSessionsGISubsystem->FindSessions(10000);
	}
}

void UMenu::MenuTeardown()
{
	RemoveFromParent();
	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* PlayerController = World->GetFirstPlayerController();
		if (PlayerController)
		{
			FInputModeGameOnly InputMode;
			PlayerController->SetInputMode(InputMode);
			PlayerController->SetShowMouseCursor(false);
		}
	}
}
