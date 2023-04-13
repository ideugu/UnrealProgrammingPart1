// Fill out your copyright notice in the Description page of Project Settings.


#include "Student.h"

UStudent::UStudent()
{
	Order = -1;
	Name = TEXT("홍길동");
}

void UStudent::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

	Ar << Order;
	Ar << Name;
}
