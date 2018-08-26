// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tools/Singleton.h"
#include "Task/Task.h"

using namespace std;
/**
 * 
 */
class EAESIMULATOR_API TaskManager : public Singleton<TaskManager>
{
public:
	TaskManager();
	~TaskManager();

	void CheckTasks();

	inline TArray<Task*> GetTaskGroup() { return m_TaskGroup; }

private:

	TArray<Task*> m_TaskGroup;
};