#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_SetFocusTarget.generated.h"

UCLASS(Blueprintable)
class BREAKER_API UBTTask_SetFocusTarget : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveFocusBeforeTaskExecution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearFocusTargetOrLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearAllFocusTargetsAndLocationsForPriorityAndBelow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FocusPriorityValueOverride;
    
public:
    UBTTask_SetFocusTarget();

};

