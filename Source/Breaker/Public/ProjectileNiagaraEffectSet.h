#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ProjectileNiagaraEffectSet.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FProjectileNiagaraEffectSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* Muzzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* Projectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* Impact;
    
    BREAKER_API FProjectileNiagaraEffectSet();
};

