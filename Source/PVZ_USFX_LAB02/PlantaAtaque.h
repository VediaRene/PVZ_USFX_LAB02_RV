// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Observer.h"
#include "Plant.h"
#include "PlantaAtaque.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API APlantaAtaque : public APlant
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	APlantaAtaque();

	

public:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
