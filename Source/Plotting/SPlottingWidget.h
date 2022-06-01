// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "KantanSimpleCartesianDatasource.h"


/**
 * 
 */
class PLOTTING_API SPlottingWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SPlottingWidget)
	{}

	//New Argument called OwnerHUDArg
	SLATE_ARGUMENT(TWeakObjectPtr<class AMyHUD>, OwnerHUDArg);

	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

private:
	//pointer to parent HUD
	TWeakObjectPtr<class AMyHUD> OwnerHUD;
};
