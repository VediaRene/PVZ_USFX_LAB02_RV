// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Potion.h"
#include "InnerRealmHealthPotion.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API AInnerRealmHealthPotion : public APotion
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Elabora el zombie
	virtual void Elaboracion() override;

};
