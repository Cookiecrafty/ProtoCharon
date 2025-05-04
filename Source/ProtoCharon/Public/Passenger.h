// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Passenger.generated.h"

UENUM(BlueprintType)
enum class ETypePassenger : uint8
{
	GoodPassenger	UMETA(DisplayName = "GoodPassenger"),
	Fraudster	UMETA(DisplayName = "Fraudster"),
	Robber	UMETA(DisplayName = "Robber")
};
UCLASS()
class PROTOCHARON_API APassenger : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APassenger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Etat")
	ETypePassenger TypePassenger;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Etat")
	bool stoleGold;

};
