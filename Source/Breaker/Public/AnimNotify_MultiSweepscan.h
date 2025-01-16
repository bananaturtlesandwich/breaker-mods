#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "MultiHitscanData.h"
#include "MultiScanHitOptions.h"
#include "AnimNotify_MultiSweepscan.generated.h"

class UBreakerConditionBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class BREAKER_API UAnimNotify_MultiSweepscan : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMultiHitscanData Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBreakerConditionBase* Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMultiScanHitOptions HitOptions;
    
    UAnimNotify_MultiSweepscan();

};

