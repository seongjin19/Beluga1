// Fill out your copyright notice in the Description page of Project Settings.


#include "Dog/DogCreature/DogMonster.h"

UDogMonster::UDogMonster()
{
	IsDead = false;
}

bool UDogMonster::TakeDamage(int32 Damage)
{
	bool Dead = false;

	CurrentHP = FMath::Max(CurrentHP - Damage, 0);
	if (CurrentHP == 0)
	{
		Dead = true;
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("%s Dead"), *Name.ToString()));
	}
	IsDead = Dead;

	return IsDead;
}