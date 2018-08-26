// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tools/Singleton.h"
#include "Person/Student.h"
#include "Person/Professor.h"
#include "Person/Stuff.h"
using namespace std;

/**
 * 
 */
class EAESIMULATOR_API HumanManager : Singleton<HumanManager>
{
public:
	HumanManager();
	~HumanManager();

	TArray<Student*>&	GetStudentGroup() { return m_StudentGroup; }
	TArray<Professor*>&	GetProfessorGroup() { return m_ProfessorGroup; }
	TArray<Stuff*>&		GetStuffGroup() { return m_StuffGroup; }

	void Update();

private:

	TArray<Student*>	m_StudentGroup;
	TArray<Professor*>	m_ProfessorGroup;
	TArray<Stuff*>		m_StuffGroup;

};
