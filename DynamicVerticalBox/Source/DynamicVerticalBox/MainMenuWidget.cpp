// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/VerticalBoxSlot.h"
#include "ButtonWidget.h"
#include "MainMenuWidget.h"

void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (ButtonWidgetReference)
	{
		for(int i=0; i<5; i++)
		{
			UUserWidget* Widget = CreateWidget(this, ButtonWidgetReference);

			UVerticalBoxSlot* slot = MyVerticalBox->AddChildToVerticalBox(Widget);

			slot->SetSize(ESlateSizeRule::Type::Fill);

			UButtonWidget* ButtonWidget = Cast<UButtonWidget>(Widget);

			ButtonWidget->SetData(i);
		}
	}
	
}
