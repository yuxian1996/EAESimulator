// Fill out your copyright notice in the Description page of Project Settings.

#include "HumanManager.h"

UHumanManager::UHumanManager()
{
	Student* s = new Student();
	m_StudentGroup.Add(s);

	Professor* p = new Professor();
	m_ProfessorGroup.Add(p);

	Stuff* sf = new Stuff();
	m_StuffGroup.Add(sf);
}

UHumanManager::~UHumanManager()
{
}

void UHumanManager::Update()
{
}