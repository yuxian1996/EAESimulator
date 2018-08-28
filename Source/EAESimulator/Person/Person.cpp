// Fill out your copyright notice in the Description page of Project Settings.

#include "Person.h"


UPerson::UPerson()
{
	m_Name = "John Doe";
	m_Description = "New Student";
	m_Capacity.Art = 100;
	m_Capacity.Product = 20;
	m_Capacity.Program = 30;
	m_Capacity.TechArt = 80;
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
