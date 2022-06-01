// Fill out your copyright notice in the Description page of Project Settings.


#include "MyHUD.h"
#include "SPlottingWidget.h"

//Sweakwidget
#include "Widgets/SWeakWidget.h"

//for engine
#include "Engine.h"

void AMyHUD::BeginPlay()
{
	//Creating actual widget object
	MyUIWidget = SNew(SPlottingWidget).OwnerHUDArg(this);

	//passes viewport a weak pointer to widget
	GEngine->GameViewport->AddViewportWidgetContent(
		SNew(SWeakWidget)
		.PossiblyNullContent(MyUIWidget.ToSharedRef())
	);

	//Make widget properties visible
	MyUIWidget->SetVisibility(EVisibility::Visible);
}

