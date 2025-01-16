#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_AdditiveSteering.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class BREAKER_API UAnimNotifyState_AdditiveSteering : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SteeringSpeed;
    
public:
    UAnimNotifyState_AdditiveSteering();

};

