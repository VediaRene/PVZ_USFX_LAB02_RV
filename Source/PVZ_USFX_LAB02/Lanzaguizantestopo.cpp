// Fill out your copyright notice in the Description page of Project Settings.


#include "Lanzaguizantestopo.h"
#include "TimerManager.h"

ALanzaguizantestopo::ALanzaguizantestopo()
{
    //PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_In.Shape_Trim_90_In'"));
	PlantMeshComponent->SetStaticMesh(PlantMesh.Object);

    
	Tags.Add(TEXT("Lanzaguisantes"));
   // MovementSpeed = 0.1f;MovementSpeed = 0.1f;
	// Inicializa las ubicaciones
	InitialLocation = GetActorLocation();
	RightDestination = InitialLocation + FVector(100.0f, 0.0f, 0.0f);
	LeftDestination = InitialLocation - FVector(100.0f, 0.0f, 0.0f);
	bIsMovingRight = true;
	bIsShooting = false;


}



void ALanzaguizantestopo::BeginPlay()
{
	Super::BeginPlay();

	// Llama a la función MoveAndShoot después de 5 segundos y repite cada 5 segundos
	GetWorldTimerManager().SetTimer(TimerHandle_MoveAndShoot, this, &ALanzaguizantestopo::MoveAndShoot, 5.0f, true, 5.0f);
}
//Funccion
void ALanzaguizantestopo::MoveAndShoot()
{
    if (bIsMovingRight)
    {
        SetActorLocation(RightDestination);
        bIsMovingRight = false;
        
    }
    else
    {
     
        SetActorLocation(LeftDestination);
        bIsMovingRight = true;
        // Después de completar el movimiento y disparo, vuelve a la posición inicial
        GetWorldTimerManager().SetTimer(TimerHandle_MoveAndShoot, this, &ALanzaguizantestopo::MoveAndShoot, 5.0f, true);
        //FVector SetActorLocation = FVector(-860.0f,1320.0f, 170.0f);
    }

  
    SetActorLocation(InitialLocation);
}

//void ALanzaguizantestopo::ResetPlant()
//{
//    if (!bIsShooting)
//    {
//        SetActorLocation(InitialLocation);
//        bIsMovingRight = true;
//
//        // Llama a la función MoveAndShoot nuevamente después de 2 segundos
//        GetWorldTimerManager().SetTimer(TimerHandle_MoveAndShoot, this, &ALanzaguizantestopo::MoveAndShoot, 5.0f, true);
//    }
//}
