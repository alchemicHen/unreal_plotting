// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"

/**
 * 
 */
// pre-Declaring widget class
class SPlottingWidget;

UCLASS()
class PLOTTING_API AMyHUD : public AHUD
{
	GENERATED_BODY()

public:
	//References to SCompoundWidget, adds to refcount of MyUIWidget
	TSharedPtr<SPlottingWidget> MyUIWidget;

	//Called as game starts
	void BeginPlay();
};
