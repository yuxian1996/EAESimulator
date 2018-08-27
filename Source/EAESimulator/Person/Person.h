// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <string>
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Person.generated.h"


using namespace std;
/**
 * 
 */
USTRUCT(Blueprintable)
struct FCapacity
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	float Product;
	UPROPERTY(BlueprintReadWrite)
	float Program;
	UPROPERTY(BlueprintReadWrite)
	float Art;
	UPROPERTY(BlueprintReadWrite)
	float TechArt;
};



UCLASS(Blueprintable)
class EAESIMULATOR_API UPerson : public UObject
{
	GENERATED_BODY()
	
public:
	UPerson();
	UPerson(FString& i_Name, FString& i_Description, FCapacity& i_Capacity);
	~UPerson();

	UFUNCTION(BlueprintPure, Category="Person")
	inline FString		GetName() const { return m_Name; }
	inline void			SetName(const FString & i_Name) { m_Name = i_Name; }

	UFUNCTION(BlueprintPure, Category = "Person")
	inline FCapacity	GetCapacity() const { return m_Capacity; }

	UFUNCTION(BlueprintPure, Category = "Person")
	inline FString		GetDescription() const { return m_Description; }
	inline void			SetDescription(const FString & i_Description) { m_Description = i_Description; }

protected:
	FString   m_Name;
	FString   m_Description;
	FCapacity m_Capacity;

private:
	
	
};
