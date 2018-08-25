// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <string>

using namespace std;

/**
 * 
 */
struct Capacity
{
	int Product;
	int Program;
	int Art;
	int TechArt;
};

class EAESIMULATOR_API Person
{
public:
	Person();
	~Person();

	inline string		GetName() { return m_Name; }
	inline void			SetName(const string & i_Name) { m_Name = i_Name; }

	inline Capacity&	GetCapacity() { return m_Capacity; }

protected:
	string   m_Name;
	Capacity m_Capacity;

private:


	
};
