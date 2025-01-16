#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TriggerEventDelegate.h"
#include "SimpleReplicationTrigger.generated.h"

class ABreakerPlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREAKER_API USimpleReplicationTrigger : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTriggerEvent TriggerEvent;
    
    USimpleReplicationTrigger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Trigger();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Trigger(ABreakerPlayerController* BreakerPlayerController);
    
};

