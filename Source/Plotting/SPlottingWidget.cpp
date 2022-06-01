// Fill out your copyright notice in the Description page of Project Settings.


#include "SPlottingWidget.h"
#include "SlateOptMacros.h"
#include "Charts/SKantanTimeSeriesPlot.h"

#include "KantanSimpleCartesianDatasource.h"



BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

// ++ This is needed in order to use the localization macro LOCTEXT
#define LOCTEXT_NAMESPACE "SPlottingWidget"

void SPlottingWidget::Construct(const FArguments& InArgs)
{

	

	//Assigning argument to local variable, name will be _OwnerHUDArg instead of w/o _
	OwnerHUD = InArgs._OwnerHUDArg;

	ChildSlot
	.VAlign(VAlign_Fill)
	.HAlign(HAlign_Fill)
	[
		SNew(SOverlay)
		+ SOverlay::Slot()
		.VAlign(VAlign_Top)
		.HAlign(HAlign_Left)
		[
			SNew(SKantanTimeSeriesPlot)
			//// Inside lies a text block with these settings
			//SNew(STextBlock)
			//.ShadowColorAndOpacity(FLinearColor::Black)
			//.ColorAndOpacity(FLinearColor::Red)
			//.ShadowOffset(FIntPoint(-1, 1))
			//.Font(FSlateFontInfo("Veranda", 16))
			//// localized text to be translated with a generic name HelloSlateText
			//.Text(LOCTEXT("HelloSlateText", "Hello, Slate!"))
		]
	];
	
}
// ++ We need to undefine this namespace after we finish creating the Slate widget
#undef LOCTEXT_NAMESPACE

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
