

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MSDMissionGameMode.generated.h"
UCLASS()
class HORDESHOOTER_API AMSDMissionGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	virtual void PostLogin(APlayerController* NewPlayer) override;
};



