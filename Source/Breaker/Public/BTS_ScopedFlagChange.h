#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "AIScopedStateChangeData.h"
#include "BTS_ScopedFlagChange.generated.h"

UCLASS(Blueprintable)
class BREAKER_API UBTS_ScopedFlagChange : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ScopedFlagSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlagValueWhileRelevant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldResetCachedLocationDataOnMemoryInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldResetCachedTimeDataOnMemoryInitialized;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIScopedStateChangeData AssociatedStateChanges[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpdateBlackboardStateOnRelevancyChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestorePreviousStateValues;
    
public:
    UBTS_ScopedFlagChange();

};

