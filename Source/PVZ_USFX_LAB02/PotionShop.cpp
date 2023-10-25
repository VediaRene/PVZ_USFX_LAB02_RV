// Fill out your copyright notice in the Description page of Project Settings.


#include "PotionShop.h"

// Sets default values
APotionShop::APotionShop()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	

}

// Called when the game starts or when spawned
void APotionShop::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APotionShop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

APotion* APotionShop :: OrdenarZombies(FString Tipo)
{
	//Crea el zombie y muestra su nombre en pantalla
	APotion* Zombie = ArmarZombies(Tipo);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Elaborando %s"), *Zombie->GetNombreZombie()));
	//Inicia el proceso de elaboracion
	Zombie->Armar();
	Zombie->Elaboracion();
	Zombie->Liberar();

	//Returns the created potion
	return Zombie;
}


