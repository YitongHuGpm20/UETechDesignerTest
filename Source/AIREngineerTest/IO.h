// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IO.generated.h"

/**
 * 
 */
UCLASS()
class AIRENGINEERTEST_API UIO : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintPure, Category = "FPS Game CPP Nodes", meta = (Keywords = "Load Text File"))
		static bool LoadTxt(FString FileNameA, FString& SaveTextA);

	UFUNCTION(BlueprintCallable, Category = "FPS Game CPP Nodes", meta = (Keywords = "Save Text File"))
		static bool SaveTxt(FString SaveTextB, FString FileNameB);
};
