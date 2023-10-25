// Fill out your copyright notice in the Description page of Project Settings.


#include "OuterRealmPotionShop.h"
#include "InnerRealmSkillPotion.h"




APotion* AOuterRealmPotionShop::ArmarZombies(FString ZombiesSKU)
{
	//Selecciona el tipo de zombie a crear basado en su ZombiesSKU (string)
	if (ZombiesSKU.Equals("TierraGlobo")) {
		return GetWorld()->SpawnActor<AInnerRealmSkillPotion>(AInnerRealmSkillPotion::StaticClass());
	}
	else if (ZombiesSKU.Equals("AguaDelfin")) {
		return nullptr;
	}
	else return nullptr; //Returna null si el valor no es valido

}
