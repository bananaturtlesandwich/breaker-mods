#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EDamageDetail.h"
#include "ConditionalCombatEffectDesc.generated.h"

class UBreakerCombatEffect;

USTRUCT(BlueprintType)
struct FConditionalCombatEffectDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBreakerCombatEffect> CombatEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EffectContextTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEffectLevelScaledBySpecialCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideEffectLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDamageDetail> RequiredDamageDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDamageDetail> IgnoredDamageDetails;
    
    BREAKER_API FConditionalCombatEffectDesc();
};

