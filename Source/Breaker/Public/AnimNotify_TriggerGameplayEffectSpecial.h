#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EGESpecialNotifyType.h"
#include "Templates/SubclassOf.h"
#include "AnimNotify_TriggerGameplayEffectSpecial.generated.h"

class UBreakerCombatEffect;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotify_TriggerGameplayEffectSpecial : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBreakerCombatEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGESpecialNotifyType TriggerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UAnimNotify_TriggerGameplayEffectSpecial();

};

