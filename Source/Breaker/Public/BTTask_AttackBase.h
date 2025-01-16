#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "BTTask_AttackBase.generated.h"

UCLASS(Blueprintable)
class BREAKER_API UBTTask_AttackBase : public UBTTask_BlueprintBase {
    GENERATED_BODY()
public:
    UBTTask_AttackBase();

};

