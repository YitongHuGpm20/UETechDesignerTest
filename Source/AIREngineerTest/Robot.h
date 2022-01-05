// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Robot.generated.h"

UCLASS()
class AIRENGINEERTEST_API ARobot : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ARobot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
		virtual void MoveForward();

	UFUNCTION(BlueprintCallable)
		virtual void Rotate();

	UFUNCTION(BlueprintCallable)
		virtual void Wait();

	UPROPERTY(EditAnywhere)
		float ForwardDistance = 100;

	UPROPERTY(EditAnywhere)
		float AcceptanceRadius = 20;

	UPROPERTY(EditAnywhere)
		FRotator RotationAmount = FRotator(0, 30, 0);

	UPROPERTY(EditAnywhere)
		float WaitAmount = 3;

	UPROPERTY(EditAnywhere)
		class ATarget* Target;

private:
	// Components
	UPROPERTY(VisibleAnywhere)
		USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
		USkeletalMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere)
		class UBoxComponent* Box;

	UPROPERTY(VisibleAnywhere)
		class UArrowComponent* Arrow;

	UPROPERTY(VisibleAnywhere)
		class UFloatingPawnMovement* Movement;

	// Robot instructions
	//UPROPERTY(EditAnywhere)
		//class URobotInstruction* RI;

	UPROPERTY(EditAnywhere)
		class URIMoveForward* RIMF;

	UPROPERTY(EditAnywhere)
		class URIRotate* RIR;

	UPROPERTY(EditAnywhere)
		class URIWait* RIW;
};
