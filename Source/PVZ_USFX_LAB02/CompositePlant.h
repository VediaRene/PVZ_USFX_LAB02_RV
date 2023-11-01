// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Plant.h"
#include "CompositePlant.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API ACompositePlant : public APlant
{
	GENERATED_BODY()
	

public:
	ACompositePlant();

	UFUNCTION(BlueprintCallable, Category = "CompositePlant")
	void AddPlant(APlant* NewPlant);

	virtual void Shoot() override;
	virtual void Display() override;

private:
	TArray<APlant*> ChildPlants;
};
