// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Person/Person.h"
#include "Student.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class EAESIMULATOR_API UStudent : public UPerson
{
	GENERATED_BODY()
	
public:
	UStudent();
	~UStudent();
	
	
};
