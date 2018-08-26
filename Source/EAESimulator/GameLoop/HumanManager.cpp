// Fill out your copyright notice in the Description page of Project Settings.

#include "HumanManager.h"

HumanManager::HumanManager()
{
	Student* s = new Student();
	m_StudentGroup.push_back(s);

	Professor* p = new Professor();
	m_ProfessorGroup.push_back(p);

	Stuff* sf = new Stuff();
	m_StuffGroup.push_back(sf);
}

HumanManager::~HumanManager()
{
}

void HumanManager::Update()
{
}
