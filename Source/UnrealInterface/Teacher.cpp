// Fill out your copyright notice in the Description page of Project Settings.


#include "Teacher.h"

UTeacher::UTeacher()
{
	Name = TEXT("이선생");
}

void UTeacher::DoLesson()
{
	ILessonInterface::DoLesson();
	UE_LOG(LogTemp, Log, TEXT("%s님은 가르칩니다."), *Name);
}
