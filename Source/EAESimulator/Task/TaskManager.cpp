// Fill out your copyright notice in the Description page of Project Settings.

#include "TaskManager.h"

UTaskManager::UTaskManager()
{
	UTask* t = NewObject<UTask>();
	t->SetCostTime(7);
	t->SetEarnMoney(5000);
	t->SetDescription(FString("Visiting the Biozzard which is the most successful video game company in the world. Students will see how the team work together and listen to the lecture from the producer of Overshoot."));
	m_TaskGroup.Add(t);

}

UTaskManager::~UTaskManager()
{
}

void UTaskManager::CheckTasks()
{
}
