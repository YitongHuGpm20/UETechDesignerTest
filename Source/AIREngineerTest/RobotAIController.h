// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "RobotAIController.generated.h"

/**
 * 
 */
UCLASS()
class AIRENGINEERTEST_API ARobotAIController : public AAIController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

private:
	UPROPERTY(EditAnywhere)
		class UBehaviorTree* Behavior;

	UPROPERTY()
		FVector StartLocation;
};
