// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "FPlayerPawn.generated.h"

class AFShipActor;

UCLASS()
class FLOTILLACOMMANDER_API AFPlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AFPlayerPawn();

	const TArray<AFShipActor*>&  GetPlayerShips() const;

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<AFShipActor*>Ships;

};
