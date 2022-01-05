// Fill out your copyright notice in the Description page of Project Settings.


#include "RobotAIController.h"
#include "BehaviorTree/BlackboardComponent.h"

void ARobotAIController::BeginPlay()
{
	Super::BeginPlay();

	// Setup behavior tree and blackboard
	if (Behavior != nullptr)
	{
		RunBehaviorTree(Behavior);
		GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), GetPawn()->GetActorLocation());
	}
}

void ARobotAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	// Update robot forward direction to blackboard
	GetBlackboardComponent()->SetValueAsVector(TEXT("Forward"), GetPawn()->GetActorForwardVector());
}