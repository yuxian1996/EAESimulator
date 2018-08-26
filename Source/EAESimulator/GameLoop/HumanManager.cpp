// Fill out your copyright notice in the Description page of Project Settings.

#include "HumanManager.h"

UHumanManager::UHumanManager()
{
	Student* s = NewObject<Student>();
	m_StudentGroup.Add(s);

	Professor* p = NewObject<Professor>();
	m_ProfessorGroup.Add(p);

	Stuff* sf = NewObject<Stuff>();
	m_StuffGroup.Add(sf);
}

UHumanManager::~UHumanManager()
{
}

void UHumanManager::Update()
{
}