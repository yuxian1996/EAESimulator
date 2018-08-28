// Fill out your copyright notice in the Description page of Project Settings.

#include "TaskManager.h"

UTaskManager::UTaskManager()
{
	UTask* t = NewObject<UTask>();
	t->SetCostTime(7);
	t->SetDescription(FString("Kill Mi Chen"));
	m_TaskGroup.Add(t);

}

UTaskManager::~UTaskManager()
{
}

void UTaskManager::CheckTasks()
{
}
