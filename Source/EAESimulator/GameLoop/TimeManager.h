// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TimeManager.generated.h"

/**
 * 
 */
UCLASS()
class EAESIMULATOR_API UTimeManager : public UGameInstance
{
	GENERATED_BODY()
	
	
public:
	UTimeManager();
	~UTimeManager();

	inline int  GetTotalTime() { return m_TotalTime; }
	inline void SetTotalTime(int i_TotalTime) { m_TotalTime = i_TotalTime; }

	inline int	GetYear() { return m_Year; }
	inline void SetYear(int i_Year) { m_Year = i_Year; }

	inline int	GetMonth() { return m_Month; }
	inline void SetMonth(int i_Month) { m_Month = i_Month; }

	inline int	GetDay() { return m_Day; }
	inline void	SetDay(int i_Day) { m_Day = i_Day; }

	void Update();

private:
	int m_TotalTime;

	int m_Year;
	int m_Month;
	int m_Day;

	
};
