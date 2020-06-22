#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSLaunchPad.generated.h"

class UBoxComponent;
class UStaticMeshComponent;

UCLASS()
class FPSGAME_API AFPSLaunchPad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSLaunchPad();

protected:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UBoxComponent* OverlapComp;

	//Total Impulse
	UPROPERTY(EditInstanceOnly, Category = "LaunchPad")
	float LaunchStrength;

	//Angle added on top of actor rotation
	UPROPERTY(EditInstanceOnly, Category = "LaunchPad")
	float LaunchPitchAngle;

	//Particle System Effect
	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	UParticleSystem* LaunchPadEffect;

	UFUNCTION()
	void OverlapLaunchPad(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);


public:	

};
