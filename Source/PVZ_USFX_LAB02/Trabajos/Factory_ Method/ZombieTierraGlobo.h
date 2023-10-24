// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Zonbies.h"
#include "ZombieTierraGlobo.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API AZombieTierraGlobo : public AZonbies
{
	GENERATED_BODY()
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	//elabiora el zombie
	virtual void Elaboracion() override;


	
};
