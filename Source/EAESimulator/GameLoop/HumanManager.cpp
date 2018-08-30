// Fill out your copyright notice in the Description page of Project Settings.

#include "HumanManager.h"

FString UHumanManager::names[8] = { "Nash", "David", "Liang", "Sally", "Natalia", "Ashley", "Bob", "Ryan "};
FString UHumanManager::descriptions[8] = { "Nash is a nerd which is interested in art.\nHis favorite game is Call of Unity III. \nHis dream job is art director in Biozzard.", 
"David has math background and wants \nto become a technical artist. \nHis favorite game is Overshoot.", 
"Liang believes the best game should be \ngood looking. His favorite game is Living \nCell. He has very strong art background.",
"Sally wants to be a game producer so \nthat she can make a very cool game \nwhich the player can control a \nhuge dinosaur to create disaster.", 
"Natalia is favorite game is  Hiscraft. \nShe wants to be a game engineer.", 
"Ashley has strong background in game \nuser research. \nShe can improve students' \nproduction skill very well.", 
"Bob is a good at engineering. He worked \nfor Biozzard more than 10 years. He have \na lot of social link with game industry.", 
"Ryan is a humorous technical artist. \nHe has more than 10 years experiences \nwork with big team."};
FString UHumanManager::AvatarPath = "/Game/Arts/UI/Person/Avatar/";

UHumanManager::UHumanManager()
{	
	for (int i = 0; i < 5; ++i)
	{
		UStudent* s = NewObject<UStudent>();
		s->SetName(names[i]);
		s->SetDescription(descriptions[i]);
		FCapacity f;
		f.Art = 30;
		f.Product = 30;
		f.Program = 30;
		f.TechArt = 30;
		s->SetCapacity(f);
		FString texName = FString::FromInt(i + 1);
		FString name = AvatarPath + texName;

		s->LoadAvatar(name);
		m_StudentGroup.Add(s);
	}

	for (int i = 0; i < 3; ++i)
	{
		UProfessor* s = NewObject<UProfessor>();
		s->SetName(names[i + 5]);
		s->SetDescription(descriptions[i + 5]);
		FCapacity f;
		f.Art = 150;
		f.Product = 150;
		f.Program = 150;
		f.TechArt = 150;
		s->SetCapacity(f);
		FString texName = "p_" + FString::FromInt(i + 1);
		FString name = AvatarPath + texName;
		s->LoadAvatar(name);
		m_ProfessorGroup.Add(s);
	}

	UStuff* sf = NewObject<UStuff>();
	m_StuffGroup.Add(sf);
}

UHumanManager::~UHumanManager()
{
}

void UHumanManager::Update()
{
}


