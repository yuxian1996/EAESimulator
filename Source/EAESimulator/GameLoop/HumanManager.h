// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Tools/Singleton.h"
#include "Person/Student.h"
#include "Person/Professor.h"
#include "Person/Stuff.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HumanManager.generated.h"



/**
 * 
 */
UCLASS()
class EAESIMULATOR_API UHumanManager : public UObject, public Singleton<UHumanManager>
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
