// Fill out your copyright notice in the Description page of Project Settings.


#include "AHUDPlantas.h"
#include "Widgets/SWeakWidget.h"
#include "GameFramework/PlayerController.h"
#include "SSeleccionPlantas.h"
#include "Girasol.h"

#include "Engine.h"
void AAHUDPlantas::BeginPlay()
{
	Super::BeginPlay();

	//if (GEngine && GEngine->GameViewport)
	//{

	//	WidgetSeleccion = SNew(SSeleccionPlantas).OwningHUD(this);

	//	GEngine->GameViewport->AddViewportWidgetContent(SAssignNew(WidgetActivo, SWeakWidget).PossiblyNullContent(WidgetSeleccion.ToSharedRef()));

	//}
}

void AAHUDPlantas::QuitarHud()
{
	//if (GEngine && GEngine->GameViewport && WidgetActivo.IsValid())
	//{

	//	GEngine->GameViewport->RemoveViewportWidgetContent(WidgetActivo.ToSharedRef());

	//	if (PlayerOwner) {
	//		//PlayerOwner->bShowMouseCursor = false;
	//		PlayerOwner->SetInputMode(FInputModeGameOnly());
	//	}
	//}
}

void AAHUDPlantas::SpawnPlanta()
{
	float localizacionX = FMath::RandRange(-800, -200);
	float localizacionY = FMath::RandRange(-520, 400);

	AGirasol* Girasol = GetWorld()->SpawnActor<AGirasol>(AGirasol::StaticClass(), FVector(localizacionX, localizacionY, 20), FRotator::ZeroRotator);
}

void AAHUDPlantas::CambioPlanta1()
{
}

void AAHUDPlantas::CambioPlanta2()
{
}
