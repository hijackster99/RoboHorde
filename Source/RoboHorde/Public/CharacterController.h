// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GunBase.h"

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterController.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ROBOHORDE_API UCharacterController : public UInputComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCharacterController();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(EditAnywhere, Category = Attributes)
	AActor* weaponActor;
	UGunBase* weapon;
	
};
