#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDamageStrengthType.h"
#include "BreakerDamageCalculators.generated.h"

UCLASS(Blueprintable)
class UBreakerDamageCalculators : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBreakerDamageCalculators();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDamageStrengthType ModifyDamageStrength(EDamageStrengthType InStrength, int32 Steps);
    
};

