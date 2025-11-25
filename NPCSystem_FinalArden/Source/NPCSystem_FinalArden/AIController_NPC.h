
#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIController_NPC.generated.h"

/**
 * 
 */
UCLASS()
class NPCSYSTEM_FINALARDEN_API AAIController_NPC : public AAIController
{
	GENERATED_BODY()

public:
	AAIController_NPC();


protected:
	
	virtual void BeginPlay() override;

	virtual void OnPossess(APawn* InPawn) override;


public:
	//refencias al Blackboard y al Behavior Tree

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	class UBehaviorTree* BehaviorTree;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	class UBlackboardComponent* BlackboardComp;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	class UBlackboardData* BlackboardData;
	
	
};
