// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Task/Task.h"
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TaskManager.generated.h"

/**
 * 
 */
UCLASS()
class EAESIMULATOR_API UTaskManager : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UTaskManager();
	~UTaskManager();

	void CheckTasks();

	inline TArray<Task*> GetTaskGroup() { return m_TaskGroup; }

private:

	TArray<Task*> m_TaskGroup;
	
	
};
