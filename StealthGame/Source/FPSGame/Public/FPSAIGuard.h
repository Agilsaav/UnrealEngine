// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSAIGuard.generated.h"

class UPawnSensingComponent;

UENUM(BlueprintType)
enum class EAIState : uint8{
	Idle,
	Suspicious,
	Alerted
};

UCLASS()
class FPSGAME_API AFPSAIGuard : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSAIGuard();

protected:
	//Variables:

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UPawnSensingComponent* PawnSensingComp;

	FRotator OriginalRotation;
	FTimerHandle TimerHandle_ResetOrientation;

	UPROPERTY(ReplicatedUsing=OnRep_GuardState)
	EAIState GuardState;
	
	//Patrol variables:
	UPROPERTY(EditInstanceOnly, Category = "AI")
	bool bPatrol;

	UPROPERTY(EditInstanceOnly, Category = "AI", meta = (EditCondition = "bPatrol"))
	TArray<AActor*> PatrolPoints;

	AActor *CurrentPatrolPoint;
	uint32 IndexCurrentPoint = 0;

	//Functions:
	UFUNCTION()
	void OnPawnSeen(APawn* SeenPawn);

	UFUNCTION()
	void OnNoiseHeard(APawn*  NoiseInstigator, const FVector& Location, float Volume);

	virtual void BeginPlay() override;

	UFUNCTION()
	void ResetOrientation();

	void SetGuardState(EAIState NewState);

	UFUNCTION(BlueprintImplementableEvent, Category = "AI")
	void OnStateChange(EAIState NewState);

	UFUNCTION()
	void OnRep_GuardState();

	//Patrol:
	void MoveToNextPatrolPoint();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
