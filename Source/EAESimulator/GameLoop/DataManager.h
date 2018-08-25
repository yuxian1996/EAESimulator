// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <memory>
#include "Tools/Singleton.h"
using namespace std;

/**
 * 
 */

struct CoreValues
{
	int Money;
	int Happiness;
	int Development;
	int Reputation;
};

class EAESIMULATOR_API DataManager : public Singleton<DataManager>
{
public:
	DataManager();
	~DataManager();
	//static DataManager* Inctance();

	inline CoreValues& GetCoreValues() { return m_CoreValues; }

private:

	CoreValues m_CoreValues;
	//static unique_ptr<DataManager> m_Instance;
};
