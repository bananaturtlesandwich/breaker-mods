#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EAttackTargetStatus.h"
#include "AttackTargetWidget.generated.h"

class UAttackTargetComponent;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAttackTargetWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UAttackTargetWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AttackTargetStatusDidChange(const UAttackTargetComponent* Target, EAttackTargetStatus Status);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AttackTargetEvaluatorsDidChange(const UAttackTargetComponent* Target, const TArray<UObject*>& Evaluators);
    
};

