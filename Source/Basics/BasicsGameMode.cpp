// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasicsGameMode.h"
#include "BasicsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABasicsGameMode::ABasicsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
