#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_TimedNiagaraEffect.h"
#include "AnimNotifyState_TimedNiagaraEffectExtended.generated.h"

class UBreakerConditionBase;
class UPlayNiagaraEffectPlugin;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_TimedNiagaraEffectExtended : public UAnimNotifyState_TimedNiagaraEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerConditionBase* Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPlayNiagaraEffectPlugin*> Plugins;
    
    UAnimNotifyState_TimedNiagaraEffectExtended();

};

