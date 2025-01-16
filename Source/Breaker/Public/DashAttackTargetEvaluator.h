#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttackTargetEvaluatorInterface.h"
#include "DashAttackTargetEvaluator.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UDashAttackTargetEvaluator : public UObject, public IAttackTargetEvaluatorInterface {
    GENERATED_BODY()
public:
    UDashAttackTargetEvaluator();


    // Fix for true pure virtual functions not being implemented
};

