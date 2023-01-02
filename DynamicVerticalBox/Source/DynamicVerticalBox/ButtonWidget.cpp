// Fill out your copyright notice in the Description page of Project Settings.


#include "ButtonWidget.h"

void UButtonWidget::SetData(int value)
{
	Text->SetText(FText::FromString(FString::FromInt(value)));
}

void UButtonWidget::OnclickMyButton()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));
}