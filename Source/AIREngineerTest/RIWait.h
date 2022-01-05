// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RobotInstruction.h"
#include "RIWait.generated.h"

/**
 * 
 */
UCLASS()
class AIRENGINEERTEST_API URIWait : public URobotInstruction
{
	GENERATED_BODY()

public:
	URIWait();

	virtual void Instruction(ARobot* Robot) override;
};
