#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GameplayTagContainer.h"
#include "AnimNotifyState_CadenceControlWindow.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class BREAKER_API UAnimNotifyState_CadenceControlWindow : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FlowControlAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumeCadence;
    
    UAnimNotifyState_CadenceControlWindow();

};

