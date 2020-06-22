#include "FPSAIGuard.h"
#include "Perception/PawnSensingComponent.h"
#include "DrawDebugHelpers.h"
#include "FPSGameMode.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Net/UnrealNetwork.h"

// Sets default values
AFPSAIGuard::AFPSAIGuard()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnSensingComp = CreateAbstractDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));

	PawnSensingComp->OnSeePawn.AddDynamic(this, &AFPSAIGuard::OnPawnSeen);
	PawnSensingComp->OnHearNoise.AddDynamic(this, &AFPSAIGuard::OnNoiseHeard);

	GuardState = EAIState::Idle;
}

// Called when the game starts or when spawned
void AFPSAIGuard::BeginPlay()
{
	Super::BeginPlay();
	OriginalRotation = GetActorRotation();

	if (bPatrol)
	{
		MoveToNextPatrolPoint();
	}
}

void AFPSAIGuard::OnPawnSeen(APawn* SeenPawn)
{
	if (SeenPawn == nullptr) return;

	DrawDebugSphere(GetWorld(), SeenPawn->GetActorLocation(), 32.0f, 12, FColor::Yellow, false, 10.0f);

	AFPSGameMode* GM = Cast<AFPSGameMode>(GetWorld()->GetAuthGameMode());
	if (GM) GM->CompleteMision(SeenPawn, false);

	SetGuardState(EAIState::Alerted);

	//Stop Patrolling:
	AController* Controller = GetController();
	if (Controller) Controller->StopMovement();
}

void AFPSAIGuard::OnNoiseHeard(APawn * NoiseInstigator, const FVector & Location, float Volume)
{
	if (GuardState == EAIState::Alerted) return;

	DrawDebugSphere(GetWorld(), Location, 32.0f, 12, FColor::Green, false, 10.0f);

	FVector Direction = (Location - GetActorLocation());
	Direction.Normalize();

	FRotator NewLookAt = FRotationMatrix::MakeFromX(Direction).Rotator();
	NewLookAt.Pitch = 0.0f;
	NewLookAt.Roll = 0.0f;

	SetActorRotation(NewLookAt);

	GetWorldTimerManager().ClearTimer(TimerHandle_ResetOrientation);
	GetWorldTimerManager().SetTimer(TimerHandle_ResetOrientation , this, &AFPSAIGuard::ResetOrientation, 3.0f);

	SetGuardState(EAIState::Suspicious);

	//Stop Patrolling:
	AController* Controller = GetController();
	if (Controller) Controller->StopMovement();
}

void AFPSAIGuard::ResetOrientation()
{
	if (GuardState == EAIState::Alerted) return;

	SetActorRotation(OriginalRotation);
	SetGuardState(EAIState::Idle);

	//Start Patrolling
	if (bPatrol)
	{
		IndexCurrentPoint--;
		MoveToNextPatrolPoint();
	}
}

void AFPSAIGuard::SetGuardState(EAIState NewState)
{
	if (GuardState == NewState) return;
	
	GuardState = NewState;

	OnRep_GuardState();
}

void AFPSAIGuard::OnRep_GuardState() //Default -> Not called on the server
{
	OnStateChange(GuardState);
}

void AFPSAIGuard::MoveToNextPatrolPoint()
{
	if (PatrolPoints.Num() == 0) return;

	IndexCurrentPoint = IndexCurrentPoint % PatrolPoints.Num();
	CurrentPatrolPoint = PatrolPoints[IndexCurrentPoint];

	UAIBlueprintHelperLibrary::SimpleMoveToActor(GetController(), CurrentPatrolPoint);

	IndexCurrentPoint++;
	//UE_LOG(LogTemp, Warning, TEXT("uiju, %i"), IndexCurrentPoint);
}

// Called every frame
void AFPSAIGuard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CurrentPatrolPoint)
	{
		FVector Delta = GetActorLocation() - CurrentPatrolPoint->GetActorLocation();
		float DistanceToGoal = Delta.Size();

		if (DistanceToGoal < 100)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Go next!"));
			MoveToNextPatrolPoint();
		}
	}
}

void  AFPSAIGuard::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AFPSAIGuard, GuardState);
}

