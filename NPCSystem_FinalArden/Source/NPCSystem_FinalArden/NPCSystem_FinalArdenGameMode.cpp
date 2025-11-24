// Copyright Epic Games, Inc. All Rights Reserved.

#include "NPCSystem_FinalArdenGameMode.h"
#include "NPCSystem_FinalArdenCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANPCSystem_FinalArdenGameMode::ANPCSystem_FinalArdenGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
