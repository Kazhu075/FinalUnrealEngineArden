// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AI_NPC.generated.h"

UCLASS()
class NPCSYSTEM_FINALARDEN_API AAI_NPC : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAI_NPC();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Variables para patrullar
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI_Patrol")
	TArray<AActor*> PatrolPoints;


	//Distancia de detección del jugador
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI_Detection")
	float DetectionRadius = 1000.0f;

};
