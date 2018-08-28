// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//#include "Task/Task.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Task/Task.h"
#include "TaskManager.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class EAESIMULATOR_API UTaskManager : public UObject
{
	GENERATED_BODY()
	
public:
	UTaskManager();
	~UTaskManager();

	void CheckTasks();

	UFUNCTION(BlueprintPure)
	TArray<UTask*>& GetTaskGroup() { return m_TaskGroup; }

private:

	TArray<UTask*> m_TaskGroup;

	
	
};
