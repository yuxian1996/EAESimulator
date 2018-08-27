// Fill out your copyright notice in the Description page of Project Settings.

#include "GameLoop.h"


// Sets default values
AGameLoop::AGameLoop()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DataMgr  = NewObject<UDataManager>();
	HumanMgr = NewObject<UHumanManager>();
	TimeMgr  = NewObject<UTimeManager>();
	TaskMgr  = NewObject<UTaskManager>();

}

// Called when the game starts or when spawned
void AGameLoop::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameLoop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

