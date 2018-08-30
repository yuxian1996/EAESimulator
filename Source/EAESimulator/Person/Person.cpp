// Fill out your copyright notice in the Description page of Project Settings.

#include "Person.h"


UPerson::UPerson()
{
}

UPerson::UPerson(FString & i_Name, FString & i_Description, FCapacity & i_Capacity) :
	m_Name(i_Name),
	m_Description(i_Description),
	m_Capacity(i_Capacity)
{
}

UPerson::~UPerson()
{
}
