#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_ClearBlackboardEntry.generated.h"

UCLASS(Blueprintable)
class BREAKER_API UBTTask_ClearBlackboardEntry : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlackboardKeySelector> BlackboardEntriesToClear;
    
public:
    UBTTask_ClearBlackboardEntry();

};

