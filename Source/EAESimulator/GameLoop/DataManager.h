// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tools/Singleton.h"

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DataManager.generated.h"

/**
 * 
 */

struct CoreValues
{
	int Money;
	int Happiness;
	int Development;
	int Reputation;
};

UCLASS()
class EAESIMULATOR_API UDataManager : public UObject, public Singleton<UDataManager>
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
