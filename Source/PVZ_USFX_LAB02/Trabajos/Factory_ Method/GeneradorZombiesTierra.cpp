// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorZombiesTierra.h"
#include "ZombieTierraGlobo.h"
#include "ZombieTierraMinero.h"
//#include "InnerRealmHealthPotion.h"

AZonbies* AGeneradorZombiesTierra::ArmarZombies(FString ZonbiesSKU)
{    // Selecciona el tipo de zombie a crear basado en su zombieSKU
        if (ZonbiesSKU.Equals("TierraGlobo")) {
            return GetWorld()->SpawnActor<AZombieTierraGlobo>(AZombieTierraGlobo::StaticClass());
        }
        else if (ZonbiesSKU.Equals("TierraMinero")) {
            return GetWorld()->SpawnActor<AZombieTierraMinero>(AZombieTierraMinero::StaticClass());
        }
        else if (ZonbiesSKU.Equals("TierraGigante ")) {
            return nullptr;
        }
        else return nullptr; //Retorna null si el actor no e valido


}
