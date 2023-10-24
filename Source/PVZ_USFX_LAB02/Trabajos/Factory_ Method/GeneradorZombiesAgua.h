// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneradorZombies.h"
#include "GeneradorZombiesAgua.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API AGeneradorZombiesAgua : public AGeneradorZombies
{
	GENERATED_BODY()
	
public:

	virtual AZonbies* ArmarZombies(FString ZonbiesSKU) override;
};
