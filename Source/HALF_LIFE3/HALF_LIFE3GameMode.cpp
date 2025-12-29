// Copyright Epic Games, Inc. All Rights Reserved.

#include "HALF_LIFE3GameMode.h"
#include "HALF_LIFE3Character.h"
#include "UObject/ConstructorHelpers.h"

AHALF_LIFE3GameMode::AHALF_LIFE3GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
