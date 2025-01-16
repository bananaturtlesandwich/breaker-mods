#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AmpSummonParams.h"
#include "BreakerAmpCompanionInterface.h"
#include "BreakerAmpActor.generated.h"

class ABreakerPawn;
class ABreakerWeaponProp;

UCLASS(Abstract, Blueprintable)
class ABreakerAmpActor : public AActor, public IBreakerAmpCompanionInterface {
    GENERATED_BODY()
public:
    ABreakerAmpActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBPInitializeAmp(ABreakerWeaponProp* AmpInstigator, FAmpSummonParams SummonParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerPawn* GetPawnInstigator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceFromPawnInstigator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABreakerWeaponProp* GetAmpInstigator() const;
    

    // Fix for true pure virtual functions not being implemented
};

