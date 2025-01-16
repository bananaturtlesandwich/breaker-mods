#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "BreakerDamage.h"
#include "BreakerCharacterListener.generated.h"

class ABreakerPawn;

UINTERFACE(Blueprintable, MinimalAPI)
class UBreakerCharacterListener : public UInterface {
    GENERATED_BODY()
};

class IBreakerCharacterListener : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRangedShotImpact(ABreakerPawn* Attacker, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPawnKill(ABreakerPawn* Attacker, ABreakerPawn* Victim, const FBreakerDamage& Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPawnInflictingDamage(ABreakerPawn* Attacker, ABreakerPawn* Victim, const FBreakerDamage& Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterDefeated(ABreakerPawn* Caller);
    
};

