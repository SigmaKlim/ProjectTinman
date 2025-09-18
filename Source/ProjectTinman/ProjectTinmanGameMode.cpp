// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectTinmanGameMode.h"
#include "ProjectTinmanCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectTinmanGameMode::AProjectTinmanGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
