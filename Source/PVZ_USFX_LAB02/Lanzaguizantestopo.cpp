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
	/*InitialLocation = GetActorLocation();
	RightDestination = InitialLocation + FVector(100.0f, 0.0f, 0.0f);
	LeftDestination = InitialLocation - FVector(100.0f, 0.0f, 0.0f);
	bIsMovingRight = true;
	bIsShooting = false;*/
	PrimaryActorTick.bCanEverTick = true;
	MovementSpeed = 100.0f; // Ajusta la velocidad de movimiento seg�n tus necesidades.
	ShootInterval = 5.0f;  // Intervalo de tiempo para disparar.
	CurrentTime = 0.0f;
	bMovingRight = true;

}



void ALanzaguizantestopo::BeginPlay()
{
	Super::BeginPlay();
	
	InitialLocation = GetActorLocation();
	// Llama a la funci�n MoveAndShoot despu�s de 5 segundos y repite cada 5 segundos
	//GetWorldTimerManager().SetTimer(TimerHandle_MoveAndShoot, this, &ALanzaguizantestopo::MoveAndShoot, 5.0f, true, 5.0f);
}
void ALanzaguizantestopo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    CurrentTime += DeltaTime;

    if (bMovingRight)
    {
        FVector NewLocation = GetActorLocation() + FVector(MovementSpeed * DeltaTime, 0, 0);
        SetActorLocation(NewLocation);

        // Si ha pasado el tiempo de desplazamiento a la derecha
        if (CurrentTime >= ShootInterval)
        {
            // Aqu� implementa la l�gica de disparo de derecha a izquierda.
            // Puedes instanciar un proyectil y moverlo de derecha a izquierda.

            // Reinicia el temporizador y cambia la direcci�n.
            CurrentTime = 0.0f;
            bMovingRight = false;
        }
    }
    else
    {
        // Si ha pasado el tiempo de desplazamiento a la izquierda
        if (CurrentTime >= ShootInterval)
        {
            // Regresa a la posici�n inicial
            SetActorLocation(InitialLocation);

            // Reinicia el temporizador y cambia la direcci�n.
            CurrentTime = 0.0f;
            bMovingRight = true;
        }
    }

}
//Funccion
//void ALanzaguizantestopo::MoveAndShoot()
//{
//    if (bIsMovingRight)
//    {
//        SetActorLocation(RightDestination);
//        bIsMovingRight = false;
//        
//    }
//    else
//    {
//     
//        SetActorLocation(LeftDestination);
//        bIsMovingRight = true;
//        // Despu�s de completar el movimiento y disparo, vuelve a la posici�n inicial
//        GetWorldTimerManager().SetTimer(TimerHandle_MoveAndShoot, this, &ALanzaguizantestopo::MoveAndShoot, 5.0f, true);
//        //FVector SetActorLocation = FVector(-860.0f,1320.0f, 170.0f);
//    }
//
//  
//    SetActorLocation(InitialLocation);
//}


