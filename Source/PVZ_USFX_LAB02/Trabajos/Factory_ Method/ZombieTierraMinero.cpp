// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieTierraMinero.h"

void AZombieTierraMinero::BeginPlay()
{
	//define los atributos 


	NombreZombie = "zombie de tierra en Minero";
	Vida = "160 de vida";
	Armadura = "50";
	//Añade los materials opcional
	Materiales.Add("un pico, un casco");
}

void AZombieTierraMinero::Elaboracion()
{
	//mensaje de typo de elaboracion
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,TEXT("Elaborando zombie en Minero"));
}
