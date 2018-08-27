// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "GameLoop/DataManager.h"
#include "GameLoop/HumanManager.h"
#include "GameLoop/TimeManager.h"
#include "Task/TaskManager.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameLoop.generated.h"


UCLASS()
class EAESIMULATOR_API AGameLoop : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameLoop();

	UFUNCTION(BlueprintPure, Category="Mgr")
		UDataManager*  GetDataMgr() {
		return DataMgr;
	}

	UFUNCTION(BlueprintPure, Category = "Mgr")
		UHumanManager*  GetHumanMgr() {
		return HumanMgr;
	}
	UFUNCTION(BlueprintPure, Category = "Mgr")
		UTimeManager*  GetTimeMgr() {
		return TimeMgr;
	}
	UFUNCTION(BlueprintPure, Category = "Mgr")
		UTaskManager*  GetTaskMgr() {
		return TaskMgr;
	}

	UDataManager*  DataMgr;
	UHumanManager* HumanMgr;
	UTimeManager*  TimeMgr;
	UTaskManager*  TaskMgr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
