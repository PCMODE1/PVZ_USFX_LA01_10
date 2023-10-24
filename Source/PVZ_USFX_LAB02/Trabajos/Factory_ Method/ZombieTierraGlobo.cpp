// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieTierraGlobo.h"

void AZombieTierraGlobo::BeginPlay()
{
	//define los atributos 


	NombreZombie = "zombie de tierra en globo";
	Vida = "160 de vida";
	Armadura = "vida ";
	//Añade los materials opcional
	Materiales.Add("un globo, un inflador");
}

void AZombieTierraGlobo::Elaboracion()
{

	//mensaje de typo de elaboracion
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,TEXT("Elaborando zombie en globo"));

}
