#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_Cooldown.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EAttackChannel.h"
#include "BTD_BlackboardCooldown.generated.h"

UCLASS(Blueprintable)
class UBTD_BlackboardCooldown : public UBTDecorator_Cooldown {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPopulateCooldownFromCombatAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackChannel AbilityAttackChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBlackboardSelectorForCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CooldownSecondsSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownAdditivePadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownMultiplicativePadding;
    
public:
    UBTD_BlackboardCooldown();

};

