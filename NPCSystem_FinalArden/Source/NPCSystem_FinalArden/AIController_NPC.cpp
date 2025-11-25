
#include "AIController_NPC.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AIPerceptionComponent.h"



AAIController_NPC::AAIController_NPC()
{
	// Crear el componente de percepción 
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));

	// Configurar la percepcion 
	SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComp")));
}

void AAIController_NPC::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAIController_NPC::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    // Inicializar el Blackboard y el Behavior Tree
    if (BlackboardData && BehaviorTree)
    {
        BlackboardComp->InitializeBlackboard(*BlackboardData);
        RunBehaviorTree(BehaviorTree);  
    }
}

