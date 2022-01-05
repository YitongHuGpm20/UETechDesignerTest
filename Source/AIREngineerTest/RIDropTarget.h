// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RobotInstruction.h"
#include "RIDropTarget.generated.h"

/**
 * 
 */
UCLASS()
class AIRENGINEERTEST_API URIDropTarget : public URobotInstruction
{
	GENERATED_BODY()
	
public:
	URIDropTarget();

	virtual void Instruction(ARobot* Robot) override;
};
