// Fill out your copyright notice in the Description page of Project Settings.


#include "InnerRealmHealthPotion.h"

void AInnerRealmHealthPotion::BeginPlay()
{
		Super::BeginPlay();

		//Cambias los atributos seg�n lo que quieras

	//Define sus atributos
		NombreZombie = "Zombie de Tierra Minero";
		Vida = 100;
		Armadura = "50";
		//A�ade los materiales (opcional)
		Materiales.Add("Un pico, un casco de minero");
}

void AInnerRealmHealthPotion::Elaboracion()
{
	//Mensaje del tipo de elaboracion
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Elaborando zombie minero"));

	//A�ade codigo que quieras que haga el zombie
}


