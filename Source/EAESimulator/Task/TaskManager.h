// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Tools/Singleton.h"
#include "Task/Task.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TaskManager.generated.h"

/**
 * 
 */
UCLASS()
class EAESIMULATOR_API UTaskManager : public UObject, public Singleton<UTaskManager>
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
