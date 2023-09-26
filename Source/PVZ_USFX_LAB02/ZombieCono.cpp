// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieCono.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/CharacterMovementComponent.h"

AZombieCono::AZombieCono()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	ZombieMeshComponent->SetStaticMesh(ZombieMesh.Object);
	//Velocidad de movimineto
	MovementSpeed = 1.0f;
}


