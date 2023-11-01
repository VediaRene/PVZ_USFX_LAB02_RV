// Fill out your copyright notice in the Description page of Project Settings.


#include "PlantaAtaque.h"

#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"



#include "TimerManager.h"
#include <cmath>

APlantaAtaque::APlantaAtaque()
{
	PrimaryActorTick.bCanEverTick = true;

	
}



void APlantaAtaque::BeginPlay()
{
	Super::BeginPlay();
	
}






