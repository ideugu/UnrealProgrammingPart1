﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "Student.h"

UStudent::UStudent()
{
	Name = TEXT("이학생");
}

void UStudent::DoLesson()
{
	ILessonInterface::DoLesson();
	UE_LOG(LogTemp, Log, TEXT("%s님은 공부합니다."), *Name);
}
