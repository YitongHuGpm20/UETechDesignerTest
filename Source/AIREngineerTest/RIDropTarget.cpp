// Fill out your copyright notice in the Description page of Project Settings.


#include "RIDropTarget.h"
#include "Robot.h"
#include "Target.h"

URIDropTarget::URIDropTarget()
{

}

void URIDropTarget::Instruction(ARobot* Robot)
{
	TSubclassOf<ATarget> TargetClass;
	Robot->Target = GetWorld()->SpawnActor<ATarget>(TargetClass);
}