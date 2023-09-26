// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Plant.h"
#include "Lanzaguizantestopo.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API ALanzaguizantestopo : public APlant
{
	GENERATED_BODY()
public:
	
	ALanzaguizantestopo();
	// que controla la dirección de movimiento
	bool bIsMovingRight;
	bool bIsShooting;
	//posicion inicial de la planta
	FVector InitialLocation;
	//almacena la ubicacion Derecha
	FVector RightDestination;
	//almacena la ubicacion izquierda
	FVector LeftDestination;

	 //FVector InitialLocation;
    //FVector RightDestination;
	virtual void BeginPlay() override;
	//temporizador
	FTimerHandle TimerHandle_MoveAndShoot;

	void MoveAndShoot();
	//void MoveAndShoot();
	void ResetPlant();
};
