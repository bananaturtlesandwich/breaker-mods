#pragma once
#include "CoreMinimal.h"
#include "AttackTargetEvaluatorData.generated.h"

class UAttackTargetComponent;

USTRUCT(BlueprintType)
struct FAttackTargetEvaluatorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAttackTargetComponent*> ActiveTargets;
    
    BREAKER_API FAttackTargetEvaluatorData();
};

