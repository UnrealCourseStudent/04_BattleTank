// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerControllerReal.h"

ATank* ATankPlayerControllerReal::GetControlledTank() const;

{
	return Cast<ATank>(GetPawn());
}

