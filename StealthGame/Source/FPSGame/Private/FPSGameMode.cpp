// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPSGameMode.h"
#include "FPSHUD.h"
#include "FPSCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "FPSGameState.h"


AFPSGameMode::AFPSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/BP_Player"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSHUD::StaticClass();

	GameStateClass = AFPSGameState::StaticClass();
}

void AFPSGameMode::CompleteMision(APawn* InstigatorPawn, bool bMissionSuccess)
{
	//Too nested -> Maybe create some functions to aviod it!
	if (InstigatorPawn)
	{
		if (SpectatingViewpointsClass == nullptr) return;

		TArray<AActor*> ReturnedActors;
		UGameplayStatics::GetAllActorsOfClass(this, SpectatingViewpointsClass, ReturnedActors);


		if (ReturnedActors.Num() > 0)
		{
			AActor* NewViewTarget = ReturnedActors[0];

			for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; It++)
			{
				APlayerController* PC = It->Get();
				if(PC) PC->SetViewTargetWithBlend(NewViewTarget, 0.5f, EViewTargetBlendFunction::VTBlend_Cubic);
			}
		}
	}

	AFPSGameState* GS = GetGameState<AFPSGameState>();
	if(GS) GS->MulticastOnMissionComplete(InstigatorPawn, bMissionSuccess);

	OnMissionCompleted(InstigatorPawn, bMissionSuccess);
}
