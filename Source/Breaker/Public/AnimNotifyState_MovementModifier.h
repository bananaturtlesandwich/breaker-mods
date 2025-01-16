#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EBreakerPawnMovementModifier.h"
#include "AnimNotifyState_MovementModifier.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_MovementModifier : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBreakerPawnMovementModifier Modifier;
    
    UAnimNotifyState_MovementModifier();

};

