// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DataManager.generated.h"

/**
 * 
 */
USTRUCT(Blueprintable)
struct FCoreValues
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	int Money;
	UPROPERTY(BlueprintReadWrite)
	int Happiness;
	UPROPERTY(BlueprintReadWrite)
	int Development;
	UPROPERTY(BlueprintReadWrite)
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

	UFUNCTION(BlueprintPure)
	FCoreValues GetCoreValues() { return m_CoreValues; }

private:

	FCoreValues m_CoreValues;	
	
};
