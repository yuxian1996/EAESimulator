// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tools/Singleton.h"
#include <vector>
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

	vector<Student*>&	GetStudentGroup() { return m_StudentGroup; }
	vector<Professor*>&	GetProfessorGroup() { return m_ProfessorGroup; }
	vector<Stuff*>&		GetStuffGroup() { return m_StuffGroup; }

	void Update();

private:

	vector<Student*>	m_StudentGroup;
	vector<Professor*>	m_ProfessorGroup;
	vector<Stuff*>		m_StuffGroup;

};
