// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DogCreature.generated.h"

/**
 * 
 */

UCLASS(Blueprintable, BlueprintType, Abstract)
class BELUGA_API UDogCreature : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void Init();

public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Info")
	FName Name;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Info")
	int32 MaxHP;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Info")
	int32 CurrentHP;
};
