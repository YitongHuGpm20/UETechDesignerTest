// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RobotInstruction.h"
#include "RIMoveForward.generated.h"

/**
 * 
 */
UCLASS()
class AIRENGINEERTEST_API URIMoveForward : public URobotInstruction
{
	GENERATED_BODY()
	
public:
	URIMoveForward();

	virtual void Instruction(ARobot* Robot) override;
};
