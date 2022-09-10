// Fill out your copyright notice in the Description page of Project Settings.
// UwU      FUCK UwU!!!
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Moving_Plataform.generated.h"

UCLASS()
class PLATAFORM_API AMoving_Plataform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoving_Plataform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
