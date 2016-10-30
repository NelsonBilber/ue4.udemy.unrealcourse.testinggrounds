// Fill out your copyright notice in the Description page of Project Settings.

#include "../testinggrounds.h"
#include "PatrolRoute.h"

TArray<AActor*> UPatrolRoute::GetPatrolPoints() const
{
	return PatrolPoints;
}
