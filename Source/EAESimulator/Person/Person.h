// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <string>
#include <vector>

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
	Person(string& i_Name, string& i_Description, Capacity& i_Capacity);
	~Person();

	inline string&		GetName() { return m_Name; }
	inline void			SetName(const string & i_Name) { m_Name = i_Name; }

	inline Capacity&	GetCapacity() { return m_Capacity; }

	inline string&		GetDescription() { return m_Description; }
	inline void			SetDescription(const string & i_Description) { m_Description = i_Description; }

protected:
	string   m_Name;
	string   m_Description;
	Capacity m_Capacity;	

private:


	
};
