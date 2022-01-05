// Fill out your copyright notice in the Description page of Project Settings.


#include "Dropper.h"
#include "Target.h"
#include "RIDropTarget.h"

void ADropper::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADropper::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

}

void ADropper::DropTarget()
{
	URIDropTarget* Instruction = Cast<URIDropTarget>(RIDRT);
	if (Instruction != nullptr)
		Instruction->ExecuteInstruction(this);
}
