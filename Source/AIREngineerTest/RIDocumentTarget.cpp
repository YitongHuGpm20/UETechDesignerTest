// Fill out your copyright notice in the Description page of Project Settings.


#include "RIDocumentTarget.h"
#include "Robot.h"
#include "DrawDebugHelpers.h"
#include "Misc/FileHelper.h"
#include "IO.h"

URIDocumentTarget::URIDocumentTarget()
{

}

void URIDocumentTarget::Instruction(ARobot* Robot)
{
	// draw a debugging camera in game
	FVector POVLocation;
	FRotator POVRotation;
	Robot->GetController()->GetPlayerViewPoint(POVLocation, POVRotation);
	DrawDebugCamera(GetWorld(), POVLocation, POVRotation, 90, 2, FColor::Red, true);

	// take a screenshot
	GetWorld()->Exec(GetWorld(), TEXT("HighResShot"));

	// record all actors in screenshot
	UIO io;
	for (TObjectIterator<ARobot> i; i; ++i)
	{
		if (i->GetLastRenderTime() > 0.01)
		{
			io.SaveTxt("RobotInView.txt", i->GetName());
		}
	}

	// sphere destroy is handled by Target Blueprint
}