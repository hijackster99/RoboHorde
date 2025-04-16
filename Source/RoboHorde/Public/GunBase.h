// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GunBase.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ROBOHORDE_API UGunBase : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGunBase();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(EditAnywhere, Category = Attributes)
	float firerate;

	UPROPERTY(EditAnywhere, Category = Attributes)
	bool automatic;

	UPROPERTY(EditAnywhere, Category = Attributes)
	int magSize;

	UPROPERTY(EditAnywhere, Category = Attributes)
	float reloadSpeed;

};
