// Copyright Epic Games, Inc. All Rights Reserved.

#include "Interaction2GameMode.h"
#include "Interaction2Character.h"
#include "UObject/ConstructorHelpers.h"

AInteraction2GameMode::AInteraction2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
