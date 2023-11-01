// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlantBehavior.h"
#include "SunflowerBehavior.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USunflowerBehavior : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PVZ_USFX_LAB02_API ISunflowerBehavior
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	/*UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "PlantBehavior")
	void PerformAction();*/
};
