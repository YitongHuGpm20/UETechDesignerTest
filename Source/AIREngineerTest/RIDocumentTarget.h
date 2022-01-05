// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RobotInstruction.h"
#include "RIDocumentTarget.generated.h"

/**
 * 
 */
UCLASS()
class AIRENGINEERTEST_API URIDocumentTarget : public URobotInstruction
{
	GENERATED_BODY()
	
public:
	URIDocumentTarget();

	virtual void Instruction(ARobot* Robot) override;
};
