// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SExpBarrel.generated.h"

class USHealthComponent;
class UStaticMeshComponent;
class URadialForceComponent;
class UParticleSystem;

UCLASS()
class COOPGAME_API ASExpBarrel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASExpBarrel();

protected:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USHealthComponent* HealthComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	URadialForceComponent* RadialForceComp;

	UPROPERTY(EditDefaultsOnly, Category = "FX")
	UParticleSystem* ExplosionEffect;

	UPROPERTY(EditDefaultsOnly, Category = "FX")
	UMaterialInterface* ExplodedMaterial;

	UPROPERTY(EditDefaultsOnly, Category = "FX")
	float ExplosionImpulse;

	bool bExploded;

	UFUNCTION()
	void OnHealthChanged(USHealthComponent* OwningHealthComp, float Health, float HealthDelta, const class UDamageType* DamageType,
		class AController* InstigatedBy, AActor* DamageCauser);

public:	

};
