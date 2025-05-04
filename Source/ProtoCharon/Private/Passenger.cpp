// Fill out your copyright notice in the Description page of Project Settings.


#include "Passenger.h"

// Sets default values
APassenger::APassenger()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APassenger::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APassenger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APassenger::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

