// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Robot.h"
#include "Grabber.generated.h"

/**
 * 
 */
UCLASS()
class AIRENGINEERTEST_API AGrabber : public ARobot
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION(BlueprintCallable)
		void DocumentTarget();

private:
	// Components
	//UPROPERTY(VisibleAnywhere)
		//class USpringArmComponent* Arm;

	//UPROPERTY(VisibleAnywhere)
		//class UCameraComponent* Camera;

	// Instructions
	UPROPERTY(EditAnywhere)
		class URIDocumentTarget* RIDCT;
};
