// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RobotInstruction.generated.h"

/*  */
UCLASS(Blueprintable)
class AIRENGINEERTEST_API URobotInstruction : public UObject
{
	GENERATED_BODY()

public:
	URobotInstruction();	

	virtual void Instruction(ARobot* Robot);

	UFUNCTION(BlueprintCallable)
		bool ExecuteInstruction(ARobot* Robot);
};
