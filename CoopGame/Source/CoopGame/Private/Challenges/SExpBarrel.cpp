#include "Challenges/SExpBarrel.h"
#include "Components/SHealthComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PhysicsEngine/RadialForceComponent.h"

// Sets default values
ASExpBarrel::ASExpBarrel()
{
	//Health:
	HealthComp = CreateDefaultSubobject<USHealthComponent>(TEXT("HealthComp"));
	HealthComp->OnHealthChanged.AddDynamic(this, &ASExpBarrel::OnHealthChanged);

	//Mesh:
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetSimulatePhysics(true);
	MeshComp->SetCollisionObjectType(ECC_PhysicsBody); //Let radial comp affect this channel!
	RootComponent = MeshComp;

	//Radial Force:
	RadialForceComp = CreateDefaultSubobject<URadialForceComponent>(TEXT("RadialForceComp"));
	RadialForceComp->SetupAttachment(MeshComp);
	RadialForceComp->Radius = 250;
	RadialForceComp->bImpulseVelChange = true;
	RadialForceComp->bAutoActivate = false; //Prevent component from ticking!
	RadialForceComp->bIgnoreOwningActor = true;

	ExplosionImpulse = 400;

}

void ASExpBarrel::OnHealthChanged(USHealthComponent * OwningHealthComp, float Health, float HealthDelta, const UDamageType * DamageType, AController * InstigatedBy, AActor * DamageCauser)
{
	if (bExploded) return; // Already exploded

	if (Health <= 0.0f)
	{
		bExploded = true;

		//Boost Barrel Upwards:
		FVector BoostIntensity = FVector::UpVector * ExplosionImpulse;
		MeshComp->AddImpulse(BoostIntensity, NAME_None, true);

		//Play FX:
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());

		//Changa Material:
		MeshComp->SetMaterial(0, ExplodedMaterial);

		//Blast aways physics actors
		RadialForceComp->FireImpulse();
	}
}



