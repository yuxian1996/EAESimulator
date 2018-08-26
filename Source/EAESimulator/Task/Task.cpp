// Fill out your copyright notice in the Description page of Project Settings.

#include "Task.h"

Task::Task()
{


}

Task::Task(TArray<Person*> i_PersonGroup, int i_CostTime, string& i_Name, string & i_Description):
	m_PersonGroup(i_PersonGroup),
	m_CostTime(i_CostTime),
	m_Name(i_Name),
	m_Description(i_Description)
{
}

Task::~Task()
{
}
