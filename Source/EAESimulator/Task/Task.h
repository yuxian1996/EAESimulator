// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Person/Person.h"

#include <vector>
#include <string>
using namespace std;

/**
 * 
 */
class EAESIMULATOR_API Task
{
public:
	Task();
	Task(vector<Person*> i_PersonGroup, int i_CostTime, string& i_Name, string & i_Description);
	~Task();

	inline vector<Person*> GetPersonGroup() { return m_PersonGroup; }

	inline int	GetCostTime() { return m_CostTime; }
	inline void SetCostTime(int i_CostTime) { m_CostTime = i_CostTime; }

	inline string& GetDescription() { return m_Description; }
	inline void    SetDescription(string& i_Description) { m_Description = i_Description; }

private:

	vector<Person*> m_PersonGroup;
	int				m_CostTime;
	string			m_Name;
	string			m_Description;

};
