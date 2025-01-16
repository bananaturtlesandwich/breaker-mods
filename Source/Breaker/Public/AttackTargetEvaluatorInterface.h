#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "AttackTargetEvaluatorData.h"
#include "AttackTargetEvaluatorInterface.generated.h"

class UAttackTargetComponent;
class UAttackTargetTriageComponent;

UINTERFACE(Blueprintable)
class UAttackTargetEvaluatorInterface : public UInterface {
    GENERATED_BODY()
};

class IAttackTargetEvaluatorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickRevaluateFocusTargets(UAttackTargetTriageComponent* TriageComp, float DeltaTime, FAttackTargetEvaluatorData& InOutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTargetRemoved(UAttackTargetTriageComponent* Triage, FAttackTargetEvaluatorData& Data, UAttackTargetComponent* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetTargetEvaluatorKey() const;
    
};

