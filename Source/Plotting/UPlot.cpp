// Fill out your copyright notice in the Description page of Project Settings.


#include "UPlot.h"
#define LOCTEXT_NAMESPACE "UMG"

void UPlot::ReleaseSlateResources(bool bReleaseChildren)
{
	MyPlot.Reset();
}

#if WITH_EDITOR
const FText UPlot::GetPaletteCategory()
{
	return LOCTEXT("CustomPaletteCategory", "Plotting Custom Category");
}
#endif

TSharedRef<SWidget> UPlot::RebuildWidget()
{
	MyPlot = SNew(SPlottingWidget);
	return MyPlot.ToSharedRef();
}