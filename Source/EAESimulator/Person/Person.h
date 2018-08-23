// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <string>

using namespace std;

/**
 * 
 */
class EAESIMULATOR_API Person
{
public:
	Person();
	~Person();

protected:

	string m_Name;
	string m_IconPath;
	
};
