// Fill out your copyright notice in the Description page of Project Settings.

#include "testinggrounds.h"
#include "ChooseNextWaypoint.h"




EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    UE_LOG(LogTemp, Warning, TEXT("AI in C++ - yay!"));
    return EBTNodeResult::Succeeded;
}
