#include "PT_PlayerController.h"

#include "EnhancedInputSubsystems.h"
#include "PT_Protagonist.h"

void APT_PlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	ControlledPlayer = Cast<APT_Protagonist>(InPawn);
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(InputMappingContext.Get(), 0);
	}

	
}
