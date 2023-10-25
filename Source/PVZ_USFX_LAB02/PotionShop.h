// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Potion.h"
#include "PotionShop.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API APotionShop : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APotionShop();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Crea un zombie y lo devuelve. es una funciona virtual pura así que no necesita implementacion
	virtual APotion* ArmarZombies(FString ZombiesSKU)
	PURE_VIRTUAL(AGeneradorZombies::ArmarZombies, return nullptr;);

	//Ordena, arma y devuelve un zombie
	APotion* OrdenarZombies(FString Tipo);

};
