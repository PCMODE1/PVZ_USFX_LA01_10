// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Zonbies.h"
#include "GeneradorZombies.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API AGeneradorZombies : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGeneradorZombies();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//crea un zombies y lo devuelv. es una funcion pra asi que no necesita implementacion
	virtual AZonbies* ArmarZombies(FString ZonbiesSKU)
		PURE_VIRTUAL(AGeneradorZombies::ArmarZombies, return nullptr;);

	//Orderna arma y devuelve un zombie
	AZonbies* OrderZombies(FString Tipo);


};
