// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Person/Person.h"
#include <string>
using namespace std;
/**
 * 
 */
class EAESIMULATOR_API Stuff : public UPerson
{
public:
	Stuff();
	~Stuff();

	inline int  GetAbility() { return m_Ability; }
	inline void SetAbility(int i_Ability) { m_Ability = i_Ability; }

private:
	int m_Ability;
};
