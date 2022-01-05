// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RobotInstruction.h"
#include "RIRotate.generated.h"

/**
 * 
 */
UCLASS()
class AIRENGINEERTEST_API URIRotate : public URobotInstruction
{
	GENERATED_BODY()
	
	URIRotate();

	virtual void Instruction(ARobot* Robot) override;
};
