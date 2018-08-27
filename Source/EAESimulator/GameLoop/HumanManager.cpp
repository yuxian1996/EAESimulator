// Fill out your copyright notice in the Description page of Project Settings.

#include "HumanManager.h"

UHumanManager::UHumanManager()
{
	UStudent* s = NewObject<UStudent>();
	m_StudentGroup.Add(s);

	UProfessor* p = NewObject<UProfessor>();
	m_ProfessorGroup.Add(p);

	UStuff* sf = NewObject<UStuff>();
	m_StuffGroup.Add(sf);
}

UHumanManager::~UHumanManager()
{
}

void UHumanManager::Update()
{
}