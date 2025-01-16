#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_Cooldown.h"
#include "BTDecorator_InitialCooldown.generated.h"

UCLASS(Blueprintable)
class BREAKER_API UBTDecorator_InitialCooldown : public UBTDecorator_Cooldown {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldApplyCooldownOnBehaviorTreeActivation;
    
public:
    UBTDecorator_InitialCooldown();

};

