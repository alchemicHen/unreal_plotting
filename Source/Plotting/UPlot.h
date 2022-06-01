// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "SPlottingWidget.h"
#include "Components/Widget.h"
#include "UPlot.generated.h"

/**
 * 
 */
UCLASS()
class PLOTTING_API UPlot : public UWidget
{
	GENERATED_BODY() 
public:
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;

#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override;
#endif

protected:
	virtual TSharedRef<SWidget> RebuildWidget() override;
	TSharedPtr<SPlottingWidget> MyPlot;
};
