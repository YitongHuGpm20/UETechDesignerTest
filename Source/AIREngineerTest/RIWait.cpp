// Fill out your copyright notice in the Description page of Project Settings.


#include "RIWait.h"
#include "Robot.h"

URIWait::URIWait()
{

}

void URIWait::Instruction(ARobot* Robot)
{
	FTimerDelegate TimerDelegate;
	TimerDelegate.BindLambda([&]
	{
		UE_LOG(LogTemp, Warning, TEXT("Waiting"))
	});

	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, Robot->WaitAmount, false);
}