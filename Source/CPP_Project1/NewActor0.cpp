// Fill out your copyright notice in the Description page of Project Settings.


#include "NewActor0.h"

// Sets default values
ANewActor0::ANewActor0()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ScenneComponent = CreateAbstractDefaultSubobject<USceneComponent>(TEXT("Scence"));
	RootComponent = ScenneComponent;
	MyStaticmesh = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MyStaticmesh->SetupAttachment(RootComponent);
	MyBox = CreateAbstractDefaultSubobject<UBoxComponent>(TEXT("Box"));
	MyBox->SetupAttachment(MyStaticmesh);
	MyParticle = CreateAbstractDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	MyParticle->SetupAttachment(MyStaticmesh);
}

// Called when the game starts or when spawned
void ANewActor0::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANewActor0::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

