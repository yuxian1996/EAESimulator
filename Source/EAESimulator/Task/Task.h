// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Person/Person.h"
#include "Task.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class EAESIMULATOR_API UTask : public UObject
{
	GENERATED_BODY()
	
	
public:
	UTask();
	UTask(TArray<UPerson*> i_PersonGroup, int i_CostTime, FString& i_Name, FString & i_Description);
	~UTask();

	inline TArray<UPerson*> GetPersonGroup() { return m_PersonGroup; }

	inline int	GetCostTime() { return m_CostTime; }
	inline void SetCostTime(int i_CostTime) { m_CostTime = i_CostTime; }

	inline FString& GetDescription() { return m_Description; }
	inline void    SetDescription(FString const i_Description) { m_Description = i_Description; }

private:

	TArray<UPerson*> m_PersonGroup;
	int				m_CostTime;
	FString			m_Name;
	FString			m_Description;
	
};
