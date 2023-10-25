// Fill out your copyright notice in the Description page of Project Settings.


#include "InnerRealmPotionShop.h"
#include "InnerRealmHealthPotion.h"
#include "InnerRealmPowerPotion.h"
#include "InnerRealmSkillPotion.h"




APotion* AInnerRealmPotionShop::ArmarZombies(FString ZombiesSKU)
{
	//Selecciona el tipo de zombie a crear basado en su ZombiesSKU (string)
	if (ZombiesSKU.Equals("TierraGlobo")) {
		return GetWorld()->SpawnActor<AInnerRealmPowerPotion>(AInnerRealmPowerPotion::StaticClass());
	}
	else if (ZombiesSKU.Equals("TierraMinero")) {
		return GetWorld()->SpawnActor<AInnerRealmHealthPotion>(AInnerRealmHealthPotion::StaticClass());
	}
	else if (ZombiesSKU.Equals("TierraGigante")) {

		//Añadir otro zombie si se desea
		return 	nullptr;
	}
	else return nullptr; //Returna null si el valor no es valido
}
