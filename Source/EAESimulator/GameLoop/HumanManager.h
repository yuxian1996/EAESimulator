// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Person/Student.h"
#include "Person/Professor.h"
#include "Person/Stuff.h"
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "HumanManager.generated.h"

/**
 * 
 */
UCLASS()
class EAESIMULATOR_API UHumanManager : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UHumanManager();
	~UHumanManager();

	TArray<UStudent*>&	GetStudentGroup() { return m_StudentGroup; }
	TArray<UProfessor*>&	GetProfessorGroup() { return m_ProfessorGroup; }
	TArray<UStuff*>&		GetStuffGroup() { return m_StuffGroup; }

	void Update();

private:

	TArray<UStudent*>	m_StudentGroup;
	TArray<UProfessor*>	m_ProfessorGroup;
	TArray<UStuff*>		m_StuffGroup;
	
	
};
