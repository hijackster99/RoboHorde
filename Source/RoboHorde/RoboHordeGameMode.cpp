// Copyright Epic Games, Inc. All Rights Reserved.

#include "RoboHordeGameMode.h"
#include "RoboHordeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARoboHordeGameMode::ARoboHordeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
