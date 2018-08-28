// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DataManager.generated.h"

/**
 * 
 */

USTRUCT()
struct FCoreValues
{
	int Money;
	int Happiness;
	int Development;
	int Reputation;
};

UCLASS(Blueprintable)
class EAESIMULATOR_API UDataManager : public UObject
{
	GENERATED_BODY()
	
public:
	UDataManager();
	~UDataManager();

	void Update();

	inline CoreValues& GetCoreValues() { return m_CoreValues; }

private:

	CoreValues m_CoreValues;	
	
};
