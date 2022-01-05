// Fill out your copyright notice in the Description page of Project Settings.


#include "Robot.h"
#include "Target.h"

#include "GameFramework/FloatingPawnMovement.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"

#include "RobotInstruction.h"
#include "RIMoveForward.h"
#include "RIRotate.h"
#include "RIWait.h"

// Sets default values
ARobot::ARobot()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Setup component structure
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	Box->SetupAttachment(Root);
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	Arrow->SetupAttachment(Root);
	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));
}

// Called when the game starts or when spawned
void ARobot::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARobot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARobot::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ARobot::MoveForward()
{
	URIMoveForward* Instruction = Cast<URIMoveForward>(RIMF);
	if(Instruction != nullptr)
		Instruction->ExecuteInstruction(this);
}

void ARobot::Rotate()
{
	URIRotate* Instruction = Cast<URIRotate>(RIR);
	if (Instruction != nullptr)
		Instruction->ExecuteInstruction(this);
}

void ARobot::Wait()
{
	URIMoveForward* Instruction = Cast<URIMoveForward>(RIMF);
	if (Instruction != nullptr)
		Instruction->ExecuteInstruction(this);
}