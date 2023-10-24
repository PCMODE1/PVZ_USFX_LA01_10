// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryMethod_Main.h"
#include "GeneradorZombiesAgua.h"
#include "GeneradorZombiesTierra.h"

// Sets default values
AFactoryMethod_Main::AFactoryMethod_Main()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}


// Called when the game starts or when spawned
void AFactoryMethod_Main::BeginPlay()
{
	Super::BeginPlay();
	//Create LOS GENERADORES DE ZOMBIES 
	AGeneradorZombies* GeneradorZombiesAgua = GetWorld()->SpawnActor<AGeneradorZombiesAgua>(AGeneradorZombiesAgua::StaticClass());
	AGeneradorZombies* GeneradorZombiesTierra = GetWorld()->SpawnActor<AGeneradorZombiesTierra>(AGeneradorZombiesTierra::StaticClass());

	AZonbies* Zombie;
	Zombie = GeneradorZombiesTierra->OrderZombies("TierraGlobo");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("el zombie es %s"), *Zombie->GetNombreZombie()));

	Zombie = GeneradorZombiesTierra->OrderZombies("TierraMinero");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("el zombie es %s"), *Zombie->GetNombreZombie()));

	Zombie = GeneradorZombiesAgua->OrderZombies("TierraZombie");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("el zombie es %s"), *Zombie->GetNombreZombie()));
}
	// Called every frame
void AFactoryMethod_Main::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);

}

