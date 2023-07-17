// Fill out your copyright notice in the Description page of Project Settings.


#include "Dog/DogPawn.h"

// Sets default values
ADogPawn::ADogPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADogPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADogPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADogPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

