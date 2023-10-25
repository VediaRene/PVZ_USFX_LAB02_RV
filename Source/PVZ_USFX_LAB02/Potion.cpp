// Fill out your copyright notice in the Description page of Project Settings.


#include "Potion.h"

// Sets default values
APotion::APotion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Materiales = TArray<FString>();

}

// Called when the game starts or when spawned
void APotion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APotion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APotion::Armar()
{
	//Muestra el procedimiento de armado en pantalla
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Armando %s"), *GetNombreZombie()));

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Armando..."));
}

void APotion::Elaboracion()
{
	//Muestra el procedimiento de elaboracion en pantalla
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Elaborando..."));
}

void APotion::Liberar()
{
	//Muestra el procedimiento de liberacion en pantalla
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Liberando al zombie"));
}

FString APotion::GetNombreZombie()
{
	return NombreZombie;
}



