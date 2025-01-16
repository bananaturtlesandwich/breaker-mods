#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EBreakerHitboxOwnerStatus.h"
#include "AnimNotifyState_ArmorModifier.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_ArmorModifier : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBreakerHitboxOwnerStatus HitboxStatus;
    
    UAnimNotifyState_ArmorModifier();

};

