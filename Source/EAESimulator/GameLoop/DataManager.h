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
	float Money;
	UPROPERTY(BlueprintReadWrite)
	float Happiness;
	UPROPERTY(BlueprintReadWrite)
	float Development;
	UPROPERTY(BlueprintReadWrite)
	float Reputation;
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

	UFUNCTION(BlueprintCallable)
	void SetCoreValues(const FCoreValues& i_CoreValues) { m_CoreValues = i_CoreValues; }

private:

	FCoreValues m_CoreValues;	
	
};
