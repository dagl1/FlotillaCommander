// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ShipBuilderMainWidget.generated.h"

class AFShipActor;

/**
 * 
 */
UCLASS()
class FLOTILLACOMMANDER_API UShipBuilderMainWidget : public UUserWidget
{
	GENERATED_BODY()
	
        UFUNCTION(BlueprintPure, Category = "Player | ShipHelpers")
        APawn* GetPlayer();
        
        UFUNCTION(BlueprintPure, Category = "Player | ShipHelpers")
        AFShipActor* GetPlayersCurrentShip();
	
};
