// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorZombies.h"

// Sets default values
AGeneradorZombies::AGeneradorZombies()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGeneradorZombies::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGeneradorZombies::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AZonbies* AGeneradorZombies::OrderZombies(FString Tipo)
{




	//crea el Zombie y muestra su nombre
	 	AZonbies* Zombie = ArmarZombies(Tipo);
	 	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
	 		FString::Printf(TEXT("Armando %s"),
	 			*Zombie->GetNombreZombie()));
	 	//inicia el proceso de elaboracion
	 	Zombie->Armar();
	 	Zombie->Elaboracion();
	 	Zombie->Liberar();
	 	//Returns the created potion
	 	return Zombie;
	 
	 }
