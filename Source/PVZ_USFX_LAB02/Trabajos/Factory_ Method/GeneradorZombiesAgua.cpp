// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorZombiesAgua.h"
#include "ZonbiesAguaBuso.h"

AZonbies* AGeneradorZombiesAgua::ArmarZombies(FString ZonbiesSKU)
{


    // Selecciona el tipo de zombie a crear basado en su zombieSKU
    if (ZonbiesSKU.Equals("AguaBuso")) {

        return GetWorld()->SpawnActor<AZonbiesAguaBuso>( AZonbiesAguaBuso::StaticClass());
    }
    else if (ZonbiesSKU.Equals("AguaDelfin")) {
        return nullptr;
    }
    else return nullptr; //Retorna null si el actor no e valido


}
