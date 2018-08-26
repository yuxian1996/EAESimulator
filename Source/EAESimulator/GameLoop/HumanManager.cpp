// Fill out your copyright notice in the Description page of Project Settings.

#include "HumanManager.h"

HumanManager::HumanManager()
{
	Student* s = new Student();
	m_StudentGroup.Add(s);

	Professor* p = new Professor();
	m_ProfessorGroup.Add(p);

	Stuff* sf = new Stuff();
	m_StuffGroup.Add(sf);
}

HumanManager::~HumanManager()
{
}

void HumanManager::Update()
{
}
