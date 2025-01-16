#pragma once
#include "CoreMinimal.h"
#include "EAIAbilityRestriction.h"
#include "EAttackChannel.h"
#include "EChoreographerAttackType.h"
#include "AILastRestrictionPrevention.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAILastRestrictionPrevention {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EAttackChannel AttackSlotRestricted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EChoreographerAttackType AttackTypeRestricted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EAIAbilityRestriction LastFailureFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> EnemyTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AngleFailureResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float serverTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxServerSecondsDif;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFailedVerticalityCheck;
    
    BREAKER_API FAILastRestrictionPrevention();
};

