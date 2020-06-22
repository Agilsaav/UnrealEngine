#include "SProjectileWeapon.h"



void ASProjectileWeapon::Fire()
{
	AActor* MyOwner = GetOwner();
	if (!MyOwner || !ProjectileClass) return;

	FVector EyeLocation;
	FRotator EyeRotation;
	MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);
	
	FVector MuzzleLocation = MeshComp->GetSocketLocation(MuzzleSocketName);
	
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	GetWorld()->SpawnActor<AActor>(ProjectileClass, MuzzleLocation, EyeRotation, SpawnParams);

}