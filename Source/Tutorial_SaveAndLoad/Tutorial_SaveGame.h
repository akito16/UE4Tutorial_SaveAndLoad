// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Tutorial_SaveGame.generated.h"

/**
 * 
 */
UCLASS()
class TUTORIAL_SAVEANDLOAD_API UTutorial_SaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	UTutorial_SaveGame();

	UPROPERTY(EditAnywhere)
		FVector PlayerLocation;

	UPROPERTY(EditAnywhere)
		float PlayerHealth;
};
