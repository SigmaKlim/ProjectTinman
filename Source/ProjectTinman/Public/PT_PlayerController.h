// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PT_PlayerController.generated.h"

class APT_Protagonist;
class UInputAction;
class UInputMappingContext;
/**
 * 
 */
UCLASS()
class PROJECTTINMAN_API APT_PlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	virtual void OnPossess(APawn* InPawn) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputSettings")
	TWeakObjectPtr<UInputMappingContext> InputMappingContext;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputSettings")
	TWeakObjectPtr<UInputAction> LookAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputSettings")
	TWeakObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputSettings")
	TWeakObjectPtr<UInputAction> ShootAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputSettings")
	TWeakObjectPtr<UInputAction> AimAction;

protected:
	UPROPERTY(BlueprintReadOnly, Category = "Player")
	TWeakObjectPtr<APT_Protagonist> ControlledPlayer;
};
