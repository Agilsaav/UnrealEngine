
#include "SHealthComponent.h"
#include "SGameMode.h"
#include "TimerManager.h"
#include "EngineUtils.h"
#include "SGameState.h"
#include "SPlayerState.h"


ASGameMode::ASGameMode()
{
	WaveCount = 0;
	TimeBetweenWaves = 2.0f;

	//Set GameState & PlayerState classes:
	GameStateClass = ASGameState::StaticClass();
	PlayerStateClass = ASPlayerState::StaticClass();

	//Set Tick every 1s
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 1.0f;
}

void ASGameMode::StartWave()
{
	WaveCount++;

	//Increase the number of bots each wave
	NrOfBotsToSpawn = 2 * WaveCount; 

	GetWorldTimerManager().SetTimer(TimerHandle_BotSpawner, this, &ASGameMode::SpawnBotTimerElapsed, 1.0f, true, 0.0f);

	SetWaveState(EWaveState::WaveInProgress);
}

void ASGameMode::EndWave()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_BotSpawner);

	SetWaveState(EWaveState::WaitingToComplete);
}

void ASGameMode::PrepareForNextWave()
{
	GetWorldTimerManager().SetTimer(TimerHandle_NextWaveStart, this, &ASGameMode::StartWave, 1.0f, false);

	SetWaveState(EWaveState::WaitingToStart);

	RestartDeadPlayers();
}

void ASGameMode::CheckWaveState()
{
	bool bIsPreparingForWave = GetWorldTimerManager().IsTimerActive(TimerHandle_NextWaveStart);

	if (NrOfBotsToSpawn > 0 || bIsPreparingForWave) return;

	bool bIsAnyBotAlive = false;

	//Check Bots alive:
	for(TActorIterator<APawn> Itr(GetWorld()); Itr; ++Itr)
	{
		APawn *TestPawn = *Itr;
		if (TestPawn == nullptr || TestPawn->IsPlayerControlled()) continue;

		USHealthComponent* HealthComp =Cast<USHealthComponent>(TestPawn->GetComponentByClass(USHealthComponent::StaticClass()));
		if (HealthComp && HealthComp->GetHealth() > 0.0f)
		{
			bIsAnyBotAlive = true;
			break;
		}
	}

	if (!bIsAnyBotAlive)
	{
		SetWaveState(EWaveState::WaveComplete);
		PrepareForNextWave();
	}
}

void ASGameMode::CheckAnyPlayerAlive()
{
	for (TActorIterator<APlayerController> CharacterItr(GetWorld()); CharacterItr; ++CharacterItr)
	{
		APlayerController* PC = *CharacterItr;
		if (PC && PC->GetPawn())
		{
			APawn *MyPawn = PC->GetPawn();
			USHealthComponent* HealthComp = Cast<USHealthComponent>(MyPawn->GetComponentByClass(USHealthComponent::StaticClass()));
			if (ensure(HealthComp) && HealthComp->GetHealth() > 0.0f)
			{
				//A player is still alive -> return
				return;
			}
		}
	}

	//No Player alive:
	GameOver();
}

void ASGameMode::GameOver()
{
	EndWave();

	//TODO: Finish up the match;
	SetWaveState(EWaveState::GameOver);

	UE_LOG(LogTemp, Log, TEXT("Game Over!"));
}

void ASGameMode::SetWaveState(EWaveState NewState)
{
	ASGameState* GS = GetGameState<ASGameState>();
	if (ensureAlways(GS))
	{
		GS->SetWaveState(NewState);
	}
}

void ASGameMode::RestartDeadPlayers()
{
	for (TActorIterator<APlayerController> CharacterItr(GetWorld()); CharacterItr; ++CharacterItr)
	{
		APlayerController* PC = *CharacterItr;
		if (PC && PC->GetPawn() == nullptr)
		{
			RestartPlayer(PC);
		}
	}
}

void ASGameMode::StartPlay()
{
	Super::StartPlay();

	PrepareForNextWave();
}

void ASGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	CheckWaveState();

	CheckAnyPlayerAlive();
}

void ASGameMode::SpawnBotTimerElapsed()
{
	SpawnNewBot();

	NrOfBotsToSpawn--;

	if (NrOfBotsToSpawn <= 0) EndWave();
}
