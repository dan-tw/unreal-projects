// Copyright Epic Games, Inc. All Rights Reserved.

#include "DrivingCxxGameMode.h"
#include "DrivingCxxPawn.h"
#include "DrivingCxxHud.h"

ADrivingCxxGameMode::ADrivingCxxGameMode()
{
	DefaultPawnClass = ADrivingCxxPawn::StaticClass();
	HUDClass = ADrivingCxxHud::StaticClass();
}
