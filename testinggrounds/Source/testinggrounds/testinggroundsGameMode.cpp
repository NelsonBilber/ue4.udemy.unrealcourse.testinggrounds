// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "testinggrounds.h"
#include "testinggroundsGameMode.h"
#include "testinggroundsHUD.h"
#include "Player/FirstPersonCharacter.h"

AtestinggroundsGameMode::AtestinggroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Player/Behaviour/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AtestinggroundsHUD::StaticClass();
}
