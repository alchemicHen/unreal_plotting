// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlottingGameMode.h"
#include "PlottingCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "MyHUD.h"

APlottingGameMode::APlottingGameMode() : Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	HUDClass = AMyHUD::StaticClass();
}
