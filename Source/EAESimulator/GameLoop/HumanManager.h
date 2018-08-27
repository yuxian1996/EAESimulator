// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Person/Student.h"
#include "Person/Professor.h"
#include "Person/Stuff.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HumanManager.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class EAESIMULATOR_API UHumanManager : public UObject
{
	GENERATED_BODY()
	
public:
	UHumanManager();
	~UHumanManager();

	UFUNCTION(BlueprintPure, Category = "Human")
	TArray<UStudent*>&	GetStudentGroup() { return m_StudentGroup; }
	TArray<UProfessor*>&	GetProfessorGroup() { return m_ProfessorGroup; }
	TArray<UStuff*>&		GetStuffGroup() { return m_StuffGroup; }

	void Update();

private:

	TArray<UStudent*>	m_StudentGroup;
	TArray<UProfessor*>	m_ProfessorGroup;
	TArray<UStuff*>		m_StuffGroup;
	
	
};
