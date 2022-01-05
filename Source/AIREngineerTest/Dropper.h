// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Robot.h"
#include "Dropper.generated.h"

/**
 * 
 */
UCLASS()
class AIRENGINEERTEST_API ADropper : public ARobot
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaSeconds) override;
	
	UFUNCTION(BlueprintCallable)
		void DropTarget();

private:
	UPROPERTY(EditAnywhere)
		class URIDropTarget* RIDRT;
};
