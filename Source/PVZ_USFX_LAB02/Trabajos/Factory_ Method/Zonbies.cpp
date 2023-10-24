// Fill out your copyright notice in the Description page of Project Settings.


#include "Zonbies.h"

// Sets default values
AZonbies::AZonbies()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Materiales  = TArray<FString>();
}

// Called when the game starts or when spawned
void AZonbies::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AZonbies::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AZonbies::Armar()
{
		//muestra el procedimiento de armando
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("ARMANDO %s"),*GetNombreZombie()));
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,TEXT("Armando."));

}

void AZonbies::Elaboracion()
{
	//Muestra el proceso de elaboracion en pantalla 
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,TEXT("Elaborando...."));
}

void AZonbies::Liberar()
{
	//muyestra el procedimiento de liberacion en pantalla
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,TEXT("Liberando a zombie"));
}

FString AZonbies::GetNombreZombie()
{
	return NombreZombie;
}



