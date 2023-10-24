// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Zonbies.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API AZonbies : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AZonbies();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Nombre del Zombie
	FString NombreZombie;
	//Vida del zombie
	FString Vida;
	//Armadura de zombie
	FString Armadura;
	//Materiales del zombie 
	TArray<FString> Materiales;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Arm,a el zombie
	void Armar();
	//elabora el zombie
	virtual void Elaboracion();
	//libera el zombie
	void Liberar();
	//devuelve el nombre del zombie
	FString GetNombreZombie();


};
