#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EAttackTargetStatus.h"
#include "AttackTargetOwner.generated.h"

class UAttackTargetComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UAttackTargetOwner : public UInterface {
    GENERATED_BODY()
};

class IAttackTargetOwner : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttackTargetStatusChanged(UAttackTargetComponent* AttackTarget, EAttackTargetStatus Status);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAimAssistTargetStatusChanged(UAttackTargetComponent* AttackTarget, bool bIsAimAssistTarget);
    
};

