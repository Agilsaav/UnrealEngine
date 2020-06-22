#include "FPSLaunchPad.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "..\..\Public\Challenges\FPSLaunchPad.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"

// Sets default values
AFPSLaunchPad::AFPSLaunchPad()
{
	OverlapComp = CreateDefaultSubobject<UBoxComponent>(TEXT("OvelapComp"));
	OverlapComp->SetBoxExtent(FVector(75,75,50));
	RootComponent = OverlapComp;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetupAttachment(RootComponent);

	//Bind Event:
	OverlapComp->OnComponentBeginOverlap.AddDynamic(this, &AFPSLaunchPad::OverlapLaunchPad);

	LaunchStrength = 1500.0f;
	LaunchPitchAngle = 35.0f;
}


void AFPSLaunchPad::OverlapLaunchPad(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	FRotator LaunchDirection = GetActorRotation();
	LaunchDirection.Pitch += LaunchPitchAngle;
	FVector LaunchVelocity = LaunchDirection.Vector() * LaunchStrength;

	ACharacter* OtherCharacter = Cast<ACharacter>(OtherActor);

	if (OtherCharacter)
	{
		OtherCharacter->LaunchCharacter(LaunchVelocity, true, true); //Launch character

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), LaunchPadEffect, GetActorLocation());
	}
	else if (OtherComp && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulse(LaunchVelocity, NAME_None, true);

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), LaunchPadEffect, GetActorLocation());
	}

}


