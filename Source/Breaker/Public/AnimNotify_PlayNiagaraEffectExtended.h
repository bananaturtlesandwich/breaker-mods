#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_PlayNiagaraEffect.h"
#include "AnimNotify_PlayNiagaraEffectExtended.generated.h"

class UBreakerConditionBase;
class UPlayNiagaraEffectPlugin;

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_PlayNiagaraEffectExtended : public UAnimNotify_PlayNiagaraEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerConditionBase* Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPlayNiagaraEffectPlugin*> Plugins;
    
    UAnimNotify_PlayNiagaraEffectExtended();

};

