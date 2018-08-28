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

	UFUNCTION(BlueprintPure)
	inline int	GetCostTime() const { return m_CostTime; }
	UFUNCTION(BlueprintCallable)
	void SetCostTime(int i_CostTime) { m_CostTime = i_CostTime; }

	UFUNCTION(BlueprintPure)
	inline FString GetDescription() const { return m_Description; }
	UFUNCTION(BlueprintCallable)
	void    SetDescription(const FString& i_Description) { m_Description = i_Description; }

	UFUNCTION(BlueprintPure)
	inline int	GetEarnMoney() const { return m_EarnMoney; }
	UFUNCTION(BlueprintCallable)
	void SetEarnMoney(int i_EarnMoney) { m_EarnMoney = i_EarnMoney; }

private:

	TArray<UPerson*> m_PersonGroup;
	int				m_CostTime;
	FString			m_Name;                   
	FString			m_Description;
	int				m_EarnMoney;

	
};
