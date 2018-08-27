// Fill out your copyright notice in the Description page of Project Settings.

#include "DataManager.h"

UDataManager::UDataManager()
{
	m_CoreValues.Money = 10000;
	m_CoreValues.Development = 300;
	m_CoreValues.Happiness = 400;
	m_CoreValues.Reputation = 500;
}

UDataManager::~UDataManager()
{
}

void UDataManager::Update()
{
}

