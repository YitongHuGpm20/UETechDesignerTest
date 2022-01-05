// Fill out your copyright notice in the Description page of Project Settings.


#include "RIRotate.h"
#include "Robot.h"

URIRotate::URIRotate()
{

}

void URIRotate::Instruction(ARobot* Robot)
{
	Robot->SetActorRotation(Robot->RotationAmount);
}