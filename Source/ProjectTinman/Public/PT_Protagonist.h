// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PT_Protagonist.generated.h"

UCLASS()
class PROJECTTINMAN_API APT_Protagonist : public ACharacter
{
	GENERATED_BODY()

public:
	APT_Protagonist();

protected:
	virtual void BeginPlay() override;


	bool bIsCrouching = false;
	bool bIsMoving = false;
	bool bIsAiming = false;
public:	

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Movement")
	void PTMove(float X, float Y);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Looking")
	void PTLook(float X, float Y);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Crouching")
	void PTCrouch();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Crouching")
	void PTUncrouch();

	UFUNCTION(BlueprintCallable, Category = "Crouching")
	void ToggleCrouch();
	
	virtual void Tick(float DeltaTime) override;
	

};