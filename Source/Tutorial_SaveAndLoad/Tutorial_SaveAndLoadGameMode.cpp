// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tutorial_SaveAndLoadGameMode.h"
#include "Tutorial_SaveAndLoadCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATutorial_SaveAndLoadGameMode::ATutorial_SaveAndLoadGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
