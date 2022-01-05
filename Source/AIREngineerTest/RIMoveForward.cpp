// Fill out your copyright notice in the Description page of Project Settings.


#include "RIMoveForward.h"
#include "AIController.h"
#include "Robot.h"
#include "Kismet/GameplayStatics.h"
#include "AIREngineerTestGameModeBase.h"

URIMoveForward::URIMoveForward()
{
	
}

void URIMoveForward::Instruction(ARobot* Robot)
{
	// move along forward vector
	FVector NextLocation = FVector(Robot->GetActorLocation() + Robot->GetActorForwardVector() * Robot->ForwardDistance);
	AAIController* Controller = Cast<AAIController>(Robot->GetController());
	Controller->MoveToLocation(NextLocation, Robot->AcceptanceRadius);

	// update metrics
	//AAIREngineerTestGameModeBase* Mode = Cast<AAIREngineerTestGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
}