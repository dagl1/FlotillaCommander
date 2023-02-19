// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FShipActor.generated.h"

class UFShipPartBaseDesc;

UCLASS()
class FLOTILLACOMMANDER_API AFShipActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFShipActor();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ship")
	TArray<TSoftObjectPtr<UFShipPartBaseDesc>>ShipParts;

};
