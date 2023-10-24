// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Zonbies.h"
#include "ZombieTierraMinero.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API AZombieTierraMinero : public AZonbies
{
	GENERATED_BODY()
	
protected: 
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	//elabiora el zombie
	virtual void Elaboracion() override;


};
