// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "NewActor0.generated.h"


UCLASS()
class CPP_PROJECT1_API ANewActor0 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANewActor0();
	UPROPERTY(EditAnywhere, Category = "Component")
		UStaticMeshComponent* MyStaticmesh;
	UPROPERTY(EditAnywhere, Category = "Component")
		UParticleSystemComponent* MyParticle;
	UPROPERTY(EditAnywhere, Category = "Component")
		UBoxComponent* MyBox;
	UPROPERTY(EditAnywhere, Category = "Component")
		USceneComponent* ScenneComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
