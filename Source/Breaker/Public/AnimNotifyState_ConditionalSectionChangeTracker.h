#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_ConditionalSectionChangeTracker.generated.h"

class UAnimNotify_ConditionalChangeNextSection;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_ConditionalSectionChangeTracker : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAnimNotify_ConditionalChangeNextSection*> FiredNotifies;
    
public:
    UAnimNotifyState_ConditionalSectionChangeTracker();

};

