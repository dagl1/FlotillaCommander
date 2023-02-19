// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FShipPartBaseDesc.generated.h"

/**
 * 
 */
UCLASS()
class FLOTILLACOMMANDER_API UFShipPartBaseDesc : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    float PartWeight;
		
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    float PartHealth;

};
