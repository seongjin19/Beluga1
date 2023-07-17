// Fill out your copyright notice in the Description page of Project Settings.


#include "Dog/DogCreature/DogPlayer.h"
#include "Dog/DogCreature/DogMonster.h"

UDogPlayer::UDogPlayer()
{
	Name = FName(TEXT("Player"));
	MaxHP = 100;
	AttackPower = 50;

}
bool UDogPlayer::Attack(class UDogMonster* Target)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, FString::Printf(TEXT("Attacked %s for a value of %d "), *Name.ToString(), AttackPower));
	return Target->TakeDamage(AttackPower);
}