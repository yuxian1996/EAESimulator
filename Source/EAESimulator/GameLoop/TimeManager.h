// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TimeManager.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class EAESIMULATOR_API UTimeManager : public UObject
{
	GENERATED_BODY()
	
public:
	UTimeManager();
	~UTimeManager();

	UFUNCTION(BlueprintPure)
	FORCEINLINE int  GetTotalTime() { return m_TotalTime; }
	UFUNCTION(BlueprintCallable)
	void SetTotalTime(int i_TotalTime) { m_TotalTime = i_TotalTime; }

	UFUNCTION(BlueprintPure)
	FORCEINLINE int	GetYear() { return m_Year; }
	UFUNCTION(BlueprintCallable)
	void SetYear(int i_Year) { m_Year = i_Year; }

	UFUNCTION(BlueprintPure)
	FORCEINLINE int	GetMonth() { return m_Month; }
	UFUNCTION(BlueprintCallable)
	 void SetMonth(int i_Month) { m_Month = i_Month; }

	UFUNCTION(BlueprintPure)
	FORCEINLINE int	GetDay() { return m_Day; }
	UFUNCTION(BlueprintCallable)
	 void	SetDay(int i_Day) { m_Day = i_Day; }

	void Update();

private:
	int m_TotalTime;

	int m_Year;
	int m_Month;
	int m_Day;
	
	
};
