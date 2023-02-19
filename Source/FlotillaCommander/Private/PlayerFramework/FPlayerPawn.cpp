// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerFramework/FPlayerPawn.h"

// Sets default values
AFPlayerPawn::AFPlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

const TArray<AFShipActor*>& AFPlayerPawn::GetPlayerShips() const
{
    return Ships;
}
