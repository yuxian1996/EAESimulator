// Fill out your copyright notice in the Description page of Project Settings.

#include "Person.h"

Person::Person()
{
}

Person::Person(string & i_Name, string & i_Description, Capacity & i_Capacity):
	m_Description(i_Description),
	m_Name(i_Description),
	m_Capacity(i_Capacity)
{
}

Person::~Person()
{
}
