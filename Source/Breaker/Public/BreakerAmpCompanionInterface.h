#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AmpSummonParams.h"
#include "BreakerAmpCompanionInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UBreakerAmpCompanionInterface : public UInterface {
    GENERATED_BODY()
};

class IBreakerAmpCompanionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveAmpSummonParams(AActor* OwningWeapon, const FAmpSummonParams& SummonParams);
    
};

