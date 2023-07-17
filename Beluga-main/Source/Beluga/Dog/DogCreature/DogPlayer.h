// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Dog/DogCreature/DogCreature.h"
#include "DogPlayer.generated.h"

/**
 * 
 */
UCLASS()
class BELUGA_API UDogPlayer : public UDogCreature
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	bool Attack(class UDogMonster* Target);

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Info")
	int32 AttackPower;

	UDogPlayer();
};
