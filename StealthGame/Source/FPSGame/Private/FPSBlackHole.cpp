#include "FPSBlackHole.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
AFPSBlackHole::AFPSBlackHole()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = MeshComp;

	InnerSphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("InnerSphereComp"));
	InnerSphereComp->SetSphereRadius(100);
	InnerSphereComp->SetupAttachment(MeshComp);

	//Bind to event:
	InnerSphereComp->OnComponentBeginOverlap.AddDynamic(this, &AFPSBlackHole::OverlapInnerSphere);

	OuterSphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("OuterSphereComp"));
	OuterSphereComp->SetSphereRadius(3000);
	OuterSphereComp->SetupAttachment(MeshComp);
}

void AFPSBlackHole::OverlapInnerSphere(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor) OtherActor->Destroy();
}

// Called when the game starts or when spawned
void AFPSBlackHole::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFPSBlackHole::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Find all overlapping comps tat can collide adn may be physically simulating:
	TArray<UPrimitiveComponent*> OverlappingComps;
	OuterSphereComp->GetOverlappingComponents(OverlappingComps);

	for (int32 i = 0; i < OverlappingComps.Num(); i++)
	{
		UPrimitiveComponent*  PrimComp = OverlappingComps[i];

		if (PrimComp && PrimComp->IsSimulatingPhysics())
		{
			// the component we are looking for! It needs to be simulating in order to apply forces.

			const float SphereRadius = OuterSphereComp->GetScaledSphereRadius();
			const float ForceStrength = -2000; // Negative value to make it pull towards the origin instead of pushing away

			PrimComp->AddRadialForce(GetActorLocation(), SphereRadius, ForceStrength, ERadialImpulseFalloff::RIF_Constant, true);
		}
	}

}

