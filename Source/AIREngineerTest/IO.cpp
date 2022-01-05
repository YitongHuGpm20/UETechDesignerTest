// Fill out your copyright notice in the Description page of Project Settings.


#include "IO.h"

#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

bool UIO::LoadTxt(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));
}

bool UIO::SaveTxt(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectDir() + FileNameB));
}