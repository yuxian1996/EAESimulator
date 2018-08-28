// Fill out your copyright notice in the Description page of Project Settings.

#include "Task.h"



UTask::UTask()
{


}

UTask::UTask(TArray<UPerson*> i_PersonGroup, int i_CostTime, FString& i_Name, FString & i_Description) :
	m_PersonGroup(i_PersonGroup),
	m_CostTime(i_CostTime),
	m_Name(i_Name),
	m_Description(i_Description)
{
}

UTask::~UTask()
{
}

