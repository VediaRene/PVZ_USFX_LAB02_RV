// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PVZ_USFX_LAB02GameMode.generated.h"

class APotenciador;

UCLASS(MinimalAPI)

class APVZ_USFX_LAB02GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APVZ_USFX_LAB02GameMode();

	TArray<class AZombie*> ArrayZombies;
	TArray<class APlant*> ArrayPlants;
	TArray<class APlant*> ArrayPlant;
	TArray<class ASol*> ArraySol;
	//TMap<APotenciador*, int32> MapPotenciadores;
	TMap<FString, uint32> MapPotenciadores;
	TMap<FString, uint32> MapTarjetasPlantas;
	//TArray<AZombie*> ZombieHorde;
	//PLanta
	int32 NumberPLantLanzaGuizantes = 3;
	int32 NumberPLantGirasol = 2;
	int32 NumberPLantRepetidora = 5;
	int32 NumberPLantNuez = 2;
	int32 NumberPLantHongo = 1;
	int32 NumberPLantSpawned = 0;
	//Zombie
	int32 NumberZombiesOrda = 20;
	int32 NumberZombiesComun = 10;
	int32 NumberZombiesCono = 5;
	int32 NumberZombiesCubo = 2;
	int32 NumberZombiesSenal = 3;

	TMap<FName, int32> mOrdaZombies;
	int32 NumberZombiesSpawned = 0;
	TArray<APlant*> aPlantas;
	// Declarar un contenedor tipo TMap de objetos
	TMap<FString, APlant*> Plantas;
	FString NombrePlanta;
	//ALanzaguisantes* NuevaPlantaGuisante;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
public:

	//----------------------------------------------------------
	FTimerHandle Temporizador;

	void Spawn();

	FVector contador;


	int contador2;


	FVector localizacion;


	// Declarar un vector de objetos
	//TArray<AZombie*> Zombies;
	// Declarar un vector de objetos

	TArray<APlant*> Plantas2;

	//float TiempoTranscurrido;

	void aumentovelocidad();

	void MostrarEnergiaDePlantas();


	class AZombieComun* NuevoZombie;


	FTimerHandle Temporizador2;


	class ALanzaguisantes* NuevaPlantaGuisante;



	int FilaActual;
	int ColumnaActual;

	//----------------------------------------------------------

	/*TMap<FString, APlant*> Plantas;
	
	FString NombrePlanta;

	ALanzaguisantes* NuevaPlantaGuisante;*/
	virtual void BeginPlay() override;
	//
	class AZombieComun* SpawnZombieComun(FVector _spawnPosition);
	class AZombieCono* SpawnZombieCono(FVector _spawnPosition);
	class AZombieCubo* SpawnZombieCubo(FVector _spawnPosition);
	class AZombieSenal* SpawnZombieSenal(FVector _spawnPosition);

	class APlant* SpawnPlant(FVector _spawnPosition);

	class ALanzaguisantes* SpawnPlantLanzaguisantes(FVector _spawnPosition);
	class AGirasol* SpawnPlantGirasol(FVector _spawnPosition);
	class ARepetidora* SpawnPlantRepetidora(FVector _spawnPosition);
	class ANuez* SpawnPlantNuez(FVector _spawnPosition);
	class AHongo* SpawnPlantHongo(FVector _spawnPosition);
	//class ALanzaguizantestopo* SpawnPlantLanzaguizantestopo(FVector _spawnPosition);
	class ASol* SpawnPlantSol(FVector _spawnPosition);
	float TiempoTranscurrido = 0.0f;
	float TiempoTranscurridoSiguientePala = 0.0f;
	float TiempoTranscurridoSiguienteAbono = 0.0f;
	//PLanta LanzaGuizante
	float TiempoTrancurridoSiguienteTarjetaLanzaguisantes = 0.0f;
	float TiempoTrancurridoSiguienteTarjetaGirasol = 0.0f;
	float TiempoTrancurridoSiguienteTarjetaNuez = 0.0f;
	float TiempoTrancurridoSiguienteTarjetaLanzamaiz = 0.0f;
	float TiempoTrancurridoSiguienteTarjetaRepetidora = 0.0f;
	//Planta Girasol



	FTimerHandle TimerHandleTarjetasPlantaNuez;
	FTimerHandle TimerHandlePotenciadoresAgua;
	float IncrementarAguaCada = 20.0f;

	void TimerCallBackPotenciadoresAgua();
	void TimerCallBackTarjetasPlantaNuez();
	void VisualizarPotenciadores();
	void VisualizarTarjetasPlantas();
	//void MoveAndShoot();
	//void Disparar();
	//void GenerateZombieHorde();
	//-----------patron adapter------------------
	public:
		//The Shooter Actor that holds the Gun Adapter 
		UPROPERTY()
		class AShooter* Shooter;
	//-------------------------------------------
	//-----------patron builder------------------
	private:
		//The Builder Actor
		UPROPERTY(VisibleAnywhere, Category = "Main")
		class AHotelLodgingBuilder* HotelBuilder;
		//The Engineer Actor
		UPROPERTY(VisibleAnywhere, Category = "Main")
		class AArchitecturalEngineer* Engineer;
	//-------------------------------------------

	
};