// Fill out your copyright notice in the Description page of Project Settings.


#include "PT_Protagonist.h"

// Sets default values
APT_Protagonist::APT_Protagonist()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APT_Protagonist::BeginPlay()
{
	Super::BeginPlay();
	
}

void APT_Protagonist::PTCrouch_Implementation()
{
	bIsCrouching = true;
}

void APT_Protagonist::PTUncrouch_Implementation()
{
	bIsCrouching = false;
}

void APT_Protagonist::PTMove_Implementation(float X, float Y)
{
}

void APT_Protagonist::PTLook_Implementation(float X, float Y)
{
}

void APT_Protagonist::ToggleCrouch()
{
	if (bIsCrouching)
	{
		PTUncrouch();
	}
	else
	{
		PTCrouch();
	}
}

// Called every frame
void APT_Protagonist::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

