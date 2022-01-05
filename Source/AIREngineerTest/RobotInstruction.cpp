// Copyright Epic Games, Inc. All Rights Reserved.

#include "RobotInstruction.h"

URobotInstruction::URobotInstruction()
{
	
}

void URobotInstruction::Instruction(ARobot* Robot)
{
	UE_LOG(LogTemp, Warning, TEXT("Robot Instruction"));
}

bool URobotInstruction::ExecuteInstruction(ARobot* Robot)
{
	Instruction(Robot);
	return true;
}