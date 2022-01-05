// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "RIDocumentTarget.h"

void AGrabber::BeginPlay()
{
	Super::BeginPlay();

	// Add camera follows grabber
	//Arm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Arm"));
	//Arm->SetupAttachment(GetRootComponent());
	//Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	//Camera->SetupAttachment(Arm);
}

void AGrabber::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

}

void AGrabber::DocumentTarget()
{
	URIDocumentTarget* Instruction = Cast<URIDocumentTarget>(RIDCT);
	if (Instruction != nullptr)
		Instruction->ExecuteInstruction(this);
}