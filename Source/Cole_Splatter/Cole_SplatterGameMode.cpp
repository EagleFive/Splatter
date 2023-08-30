// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Cole_SplatterGameMode.h"
#include "Cole_SplatterHUD.h"
#include "Cole_SplatterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACole_SplatterGameMode::ACole_SplatterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACole_SplatterHUD::StaticClass();
}
