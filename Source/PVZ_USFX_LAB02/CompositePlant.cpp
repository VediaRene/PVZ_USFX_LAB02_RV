// Fill out your copyright notice in the Description page of Project Settings.


#include "CompositePlant.h"

ACompositePlant::ACompositePlant()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ACompositePlant::AddPlant(APlant* NewPlant)
{
	ChildPlants.Add(NewPlant);
}

void ACompositePlant::Shoot()
{
	UE_LOG(LogTemp, Warning, TEXT("Composite Plant Shooting Behavior"));

	// Lógica adicional para CompositePlant
	for (APlant* Child : ChildPlants)
	{
		Child->Shoot();
	}
}

void ACompositePlant::Display()
{
	UE_LOG(LogTemp, Warning, TEXT("Composite Plant Display Behavior"));

	// Lógica adicional para CompositePlant
	for (APlant* Child : ChildPlants)
	{
		Child->Display();
	}
}
