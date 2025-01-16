#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BreakerDamage.h"
#include "BreakerDamageFunctionLibrary.generated.h"

UCLASS(Blueprintable, Config=Game)
class BREAKER_API UBreakerDamageFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBreakerDamageFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static FBreakerDamage AdjustBreakerDamage(UPARAM(Ref) FBreakerDamage& Damage, const float Percent);
    
};

