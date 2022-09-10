// Fill out your copyright notice in the Description page of Project Settings.


#include "Moving_Plataform.h"

// Sets default values
AMoving_Plataform::AMoving_Plataform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMoving_Plataform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMoving_Plataform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

