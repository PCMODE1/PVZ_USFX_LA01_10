// Fill out your copyright notice in the Description page of Project Settings.


#include "ZonbiesAguaBuso.h"

void AZonbiesAguaBuso::BeginPlay()
{
	NombreZombie = "Zombie Agua Buso";
	Vida = "200";
	Armadura = "sin armadura";
	//Añade los materials opcional
	Materiales.Add("un traje de buzo, un tanque de oxigeno");

}

void AZonbiesAguaBuso::Elaboracion()
{
	//mensaje de typo de elaboracion
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,TEXT("Elaborando zombie buzo"));
}
