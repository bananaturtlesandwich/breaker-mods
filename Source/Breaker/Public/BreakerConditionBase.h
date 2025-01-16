#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EBreakerCompareFunction.h"
#include "BreakerConditionBase.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class BREAKER_API UBreakerConditionBase : public UObject {
    GENERATED_BODY()
public:
    UBreakerConditionBase();

    UFUNCTION(BlueprintCallable)
    static bool Compare(float A, float B, EBreakerCompareFunction CompareFunction);
    
};

