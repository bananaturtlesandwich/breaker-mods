#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BreakerDamage.h"
#include "BreakerDamageable.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UBreakerDamageable : public UInterface {
    GENERATED_BODY()
};

class IBreakerDamageable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void VisualizeDamage(AActor* Attacker, const FBreakerDamage& InDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ModifyIncomingDamageMessage(const FBreakerDamage& InDamage, FBreakerDamage& OutDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AuthoritativelyProcessDamage(AActor* Attacker, const FBreakerDamage& InDamage);
    
};

