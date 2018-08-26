// Fill out your copyright notice in the Description page of Project Settings.

#include "Person.h"

Person::Person()
{
	m_Name = "Yuxian Deng";
	m_Description = "SB";
	m_Capacity.Art = -30;
	m_Capacity.Product = -40;
	m_Capacity.Program = -50;
	m_Capacity.TechArt = -60;
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
