// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Dog/DogCreature/DogCreature.h"
#include "DogMonster.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, Abstract)
class BELUGA_API UDogMonster : public UDogCreature
{
	GENERATED_BODY()

	

public:
	UFUNCTION(BlueprintCallable)
	bool TakeDamage(int32 Damage);

	UDogMonster();
public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Info")
	bool IsDead;
};
