// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Person/Person.h"
#include "Stuff.generated.h"

/**
 * 
 */
UCLASS()
class EAESIMULATOR_API UStuff : public UPerson
{
	GENERATED_BODY()
	
	
public:
	UStuff();
	~UStuff();

	inline int  GetAbility() { return m_Ability; }
	inline void SetAbility(int i_Ability) { m_Ability = i_Ability; }

private:
	int m_Ability;
	
};
