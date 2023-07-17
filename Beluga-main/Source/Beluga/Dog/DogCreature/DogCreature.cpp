// Fill out your copyright notice in the Description page of Project Settings.


#include "Dog/DogCreature/DogCreature.h"

void UDogCreature::Init()
{
	CurrentHP = MaxHP;

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, FString::Printf(TEXT("A %s has been created"), *Name.ToString()));
}